#include <iostream>
#include <fstream>

std::string	readFile(std::ifstream& file)
{
	std::string entireFile;
	std::string	line;
	while (std::getline(file, line))
	{
		entireFile += line;
		entireFile += "\n";
	}
	return entireFile;
}

void	replace(const std::string& s1, const std::string& s2, const std::string& entireFile, std::ofstream& outfile)
{
	for (size_t i = 0; i < entireFile.length(); i++)
	{
		if (entireFile.compare(i, s1.length(), s1) == 0)
		{
			outfile << s2;
			i += s1.length() - 1;
		}
		else
		{
			outfile << entireFile[i];
		}
	}
}

int main(int argc, char const *argv[])
{
	if (argc != 4) //check args number
	{
		std::cerr << "usage: <file> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string file = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream infile(file.c_str()); //open infile
	if (!infile)
	{
		std::cerr << "error opening infile" << std::endl;
		return 1;
	}

	std::ofstream outfile((file + ".replace").c_str()); //open outfile
	if (!outfile)
	{
		std::cerr << "error opening infile" << std::endl;
		infile.close();
		return 1;
	}
	std::string entireFile = readFile(infile);
	infile.close();
	replace(s1, s2, entireFile, outfile);
	outfile.close();
	return 0;
}
