
#include <iostream>
#include <fstream>

void checkReplace(std::string &line, std::string s1, std::string s2)
{
	while (line.find(s1) != line.npos)
	{
		unsigned long found = line.find(s1);
		if (found != line.npos)
		{
			line.erase(found, s1.length());
			line.insert(found, s2);
		}
	}
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::ifstream OGfile(argv[1]);
		std::string outName = argv[1];
		outName.append(".replace");
		if(OGfile.is_open() == 0)
		{
			std::cout << "Error opening the file!\n";
			return(-1);
		}
		std::ofstream outFile(outName.c_str());
		std::string line;
		while (getline(OGfile, line))
		{
			checkReplace(line, argv[2], argv[3]);
			outFile << line << std::endl;
		}
	}
	else
		std::cout << "Wrong number of arguments, '<filename> <s1> <s2>'\n";
	return(0);
}

