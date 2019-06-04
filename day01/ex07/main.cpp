#include <iostream>
#include <fstream>
#include <cstring>

int main(int argc, char **argv) {
    if (argc == 4) {
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        int s1Len = s1.length();
        if (s1Len && s2.length()) {
            if (s1.compare(s2) != 0) {
                std::ifstream file(argv[1]);
                if (file.is_open()) {
                    std::string newName = (std::string)argv[1] + ".replace";
                    std::ofstream newFile(newName.c_str());
                    std::string word;
                    bool first = true;
                    while (!file.eof()) {
                        getline(file, word, ' ');
                        // Search for matching string
                        std::size_t findword = word.find(s1);
                        while (findword != std::string::npos)
                        {
                            word.replace(findword, s1Len, s2);
                            findword = word.find(s1);
                        }
                        // End search for matching string
                        if (first) {
                            first = false;
                            newFile << word << std::flush;
                        } else {
                            newFile << " " << word << std::flush;
                        }
                    }
                    file.close();
                    newFile.close();
                } else {
                    std::cout << "File does not exist" << std::endl;
                }
            } else {
                std::cout << "s1 and s2 are the same. It's pointless replacing s1 with s2." << std::endl;
            }
        } else {
            std::cout << "s1 and s2 cannot be EMPTY" << std::endl;
        }
    } else {
        std::cout << "filename, s1 and s2 required" << std::endl;
    }
    return 0;
}

