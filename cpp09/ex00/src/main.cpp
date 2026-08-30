#include <iostream>
#include <cstdlib>
#include <fstream>
#include <map>

/*	input validation 
	open file
	get each line
	split each line at the '|' 
	validate the date
	validate the number
	if correct, add to map
*/
bool	validateLineFormat(std::string line) {
	if (line == "date | value")
		return false;
	if ((line.c_str()[4] != '-') || (line.c_str()[7] != '-')) {
		std::cerr << "Error: bad input => " << line << std::endl;
		return false;
	}
	return true;
}

bool	validateLine(std::string line) {
	size_t	p = line.find('|');
	if (p == std::string::npos) {
		std::cerr << "Error: No separator" << std::endl;
		return false;
	}
	if (!validateLineFormat(line))
		return false;
	std::string	left = line.substr(0, p);
	std::string	right = line.substr(p + 1);
	double amount = std::atof(right.c_str());
	if (amount < 0) {
		std::cerr << "Error: Not a positive number" << std::endl;
		return false;
	}
	if (amount > 1000) {
		std::cerr << "Error: Too large a number" << std::endl;
		return false;
	}
	if (std::atoi(line.substr(5,2).c_str()) > 12) {
		std::cerr << "Error: invalid month" << std::endl;
		return false;
	}
	if (std::atoi(line.substr(8,2).c_str()) > 31) {
		std::cerr << "Error: invalid day" << std::endl;
		return false;
	}
	return true;
}

void	ingestLine(std::string line, std::map<std::string, double>& map, char separator) {
	size_t	p = line.find(separator);
	if (p == std::string::npos) //no separator
		return;

	std::string	left = line.substr(0, p);
	std::string	right = line.substr(p + 1);
	map.insert(std::make_pair(left, std::atof(right.c_str())));
}

std::map<std::string, double> ingestInput(char *filename){
	std::map<std::string, double>	out;
	std::ifstream					file;
	std::string						line;

	file.open(filename);
	if (!file.is_open()) {
		std::cerr << "Error: could not open file" << std::endl;
	}
	while (getline(file, line) ) {
		if (validateLine(line))
			ingestLine(line, out, '|');
	}

	file.close();
	return (out);
}

std::map<std::string, double> ingestData(void){
	std::map<std::string, double>	out;
	std::ifstream					file;
	std::string						line;
	int								lineIt = 0;

	file.open("data.csv");
	if (!file.is_open()) {
		std::cerr << "Error: could not open data.csv" << std::endl;
	}
	while (getline(file, line) ) {
		if (lineIt)
			ingestLine(line, out, ',');
		++lineIt;
	}
	file.close();
	return (out);
}

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Error: could not open file" << std::endl;
		return (0);
	}
	/* input validation */
	std::map<std::string, double>			inputMap = ingestInput(argv[1]);
	std::map<std::string, double>			dataMap = ingestData();
	std::map<std::string, double>::const_iterator	inputIt;
	std::map<std::string, double>::const_iterator	dataIt;

	std::cout << "printing input" << std::endl;
	for (inputIt = inputMap.begin(); inputIt != inputMap.end(); ++inputIt) {
		dataIt = dataMap.begin();
		while(dataIt != dataMap.end() && dataIt->first.compare(inputIt->first) <= 0) {
		++dataIt;
		}
		if (dataIt != dataMap.begin()) {
			--dataIt;
		std::cout << "data date: " << dataIt->first
			<< " input date : " << inputIt->first
			<< inputIt->second * dataIt->second << std::endl;
		}
	}
	return (0);
}
