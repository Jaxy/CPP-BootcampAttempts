#include <iostream>
// #include <sstream>
#include <fstream>
#include <cerrno>
#include <sys/stat.h>

bool is_dir(const std::string &path)
{
    struct stat buf;
    stat(path.c_str(), &buf);
    return (S_ISDIR(buf.st_mode));
}

int main(int argc, char **argv) {
    std::string input;
    std::string     fo = argv[0];
	std::string		filed = "";


	if (argc == 1) // cat with no files listed refers to the std input
	{
        while (std::getline(std::cin, input)) {
                std::cout << input << std::endl;
        }
	} else if (argc > 1) { // cat each file specified starting from index 1
        int i = 1;
        std::string filename;
        while (i < argc) {
            filename = argv[i];
            // if (filename.compare("-") == 0) { // "-" cats std input and files after that are cat (linear)
            //     while (std::getline(std::cin, filename)) {
            //         std::cout << filename << std::endl;
            //     }
            //     std::cin.clear();
            if (is_dir(filename)) { // check if directory
                std::cout << "cat: " << filename << ": Is a directory" << std::endl;
            } else { // cat from a file instead of std input
                std::ifstream	file(filename.c_str());
                if (file.is_open())
                {
                    bool first = true;
                    while (!file.eof())
                    {
                        getline(file, filename, ' ');
                        if (first) {
                            first = false;
                            filed = filed + filename;
                        } else {
                            filed = filed + " " + filename;
                        }
                    }
                    std::cout << filed;
                    filed = "";
                    filename = "";
                }
                else
                {
                    std::cout << "cat: '" << filename << "': " << strerror(errno) << std::endl;
                }
                file.close();
            }
            i++;
        }
    }
    return 0;
}