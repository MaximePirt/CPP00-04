#include <iostream>
#include <fstream>
#include <string>


int main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "This program take three parameters : a filename and 2 strings" << std::endl;
		return (1);
	}
	std::ifstream inputFile(argv[1]);
	if (!inputFile)
	{
		std::cerr << "Error: [" << argv[1] << "] can't be open." << std::endl;
		return (1);
	}
	std::string	tmp = argv[1];
	tmp += ".replace";
	std::ofstream outputFile(tmp);
	if (!outputFile)
	{
		std::cerr << "Error: [" << tmp << "] can't be open" << std::endl;
		return (1);
	}
	std::string line;
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	while(std::getline(inputFile, line))
	{
		size_t find = line.find(s1, 0);
		if (find < line.length())
		{
			while (find < line.length())
			{
				std::string tmp = s2;
				line.insert(find, s2);
				line.erase(find + s2.length(), s1.length());
				find = line.find(s1, find + s2.length());
			}
		}
			outputFile << line << std::endl;
		}
	inputFile.close();
	return (0);
}
