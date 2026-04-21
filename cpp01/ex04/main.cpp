#include <string>
#include <iostream>
#include <fstream>

/*
	reads file content into 'content'
	returns:
		true: Succesful read
		false: read failed
*/
bool	readFile(const std::string &filename, std::string &content)	{
	std::ifstream	infile(filename.c_str());
	if (!infile.is_open())
		return (false);
	content.assign((std::istreambuf_iterator<char>(infile)),
					std::istreambuf_iterator<char>());
	infile.close();
	return (true);
}

/*
	AWFUL MESS
	returns:
		true: Succesful write
		false: write failed
*/
bool	writeFile(const std::string &filename,const std::string &content)	{
	std::ofstream	outfile(filename.c_str());
	if (!outfile.is_open())
		return (false);
	outfile << content;
	outfile.close();
	return (true);
}

std::string	replaceWord(const std::string& s1, const std::string& s2,
						const std::string& content)
{
	std::string	result;
	size_t		last_position = 0;
	size_t		find_position = 0;
	while ((find_position = content.find(s1, last_position)) != std::string::npos) {
		result += content.substr(last_position, find_position - last_position);
		result += s2;
		last_position = find_position + s1.length();
	}
	result += content.substr(last_position);
	return (result);
}

void	printUsage(void){
	std::cout << "Usage: ./Sedim <filename> <s1> <s2>\n";
}

int	main(int argc, char **argv)
{
	if (argc != 4) {
		printUsage();
		return (2);
	}
	std::string	filename(argv[1]);
	std::string	s1(argv[2]);
	std::string	s2(argv[3]);
	std::string	fileContent;

	if (!readFile(filename, fileContent))
		return (1);
	std::string	replaced = replaceWord(s1, s2, fileContent);
	std::string	outputFilename = filename + ".replace";
	if (!writeFile(outputFilename, replaced))
		return (1);
	return (0);
}
