#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong format filename to open | s1 | s2" << std::endl;
		return (1);
	}
	else
	{
		std::ifstream 	fd;
		std::string	file;
		std::ofstream	replace;
		std::string	tmp;
		int		pos = 0;

		fd.open(argv[1]);
		if (!fd.is_open())
		{
			std::cout << "argv[1] does not exist" << std::endl;
			return (1);
		}
		file += (std::string)argv[1] + ".replace";
		if (strlen(argv[2]) == 0 || strlen(argv[3]) == 0)
		{
			std::cout << "argv[2] or argv[3] are empty" << std::endl;
			return (1);
		}
		if ( fd.is_open() )
		{
			replace.open(file);
			while (getline(fd, tmp))
			{
				while ((pos = tmp.find(argv[2])) != std::string::npos )
				{
					replace << tmp.substr(0, pos) << argv[3];
					tmp = tmp.substr(pos + strlen(argv[2]));
				}
				if (replace.eof())
					break;
				replace << tmp;
				replace << std::endl;
			}
		}
		fd.close();
		replace.close();
	}
	return (0);
}
