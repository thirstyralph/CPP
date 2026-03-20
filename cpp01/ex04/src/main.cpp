/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 11:05:11 by ranavarr          #+#    #+#             */
/*   Updated: 2026/03/20 14:12:12 by ranavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "loser.hpp"

/*
 * this program must take three parameters
 * 1 filename
 * 2 strings
 * it must open the filename and copy its content into a new file called
 * filename.replace, replacing every occurrence of s1 with s2
 */
int	main(int argc, char **argv) {
	if (argc != 4)
		return (2);

	std::string filename = argv[1];
	std::string needle = argv[2];
	std::string replacement = argv[3];

	return (0);
}
