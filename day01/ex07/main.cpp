#include <iostream>
#include <fstream>
// #include <string>

int findWord(std::string search, std::string replace) {
    // std::string str = "This foo    isafoostringfoo.";
    int indx = 0;
    int found = 0;// = str.find("foo");
    std::string dub = search.substr(found, search.length());
    // std::cout << "Now: " << found << "Prev : " << prev << std::endl;
    while (indx < (int)search.length()) {
        indx += found;
        found = dub.find(replace);
        dub = search.substr(indx);
        std::string toComp = dub.substr(0, replace.length());
        if (found && !toComp.compare(replace)) {
            std::cout << "String: " << dub << "\tFound" << found  << "\tNow: " << indx << std::endl;
        }
    }
    return 0;
}

int main(int argc, char **argv) {
    if (argc == 4) {
        int s1Len = strlen(argv[2]);
        if (s1Len && strlen(argv[3])) {
            std::ifstream file(argv[1]);
            // if (file.is_open()) {
            //     std::string word;
            //     // int totChar = 0;
            //     bool first = true;
            //     while (!file.eof()) {
            //         getline(file, word, ' ');
            //         // Search for matching string
                    
            //         // End search for matching string
            //         if (first) {
            //             first = false;
            //             std::cout << word << std::flush;
            //         } else {
            //             std::cout << " " << word << std::flush;
            //         }
            //     }
            //     file.close();
            // } else {
            //     std::cout << "File does not exist" << std::endl;
            // }
            findWord("This foo    isafoostringfoo.", "is");
        } else {
            std::cout << "s1 and s2 cannot be EMPTY" << std::endl;
        }
    } else {
        std::cout << "filename, s1 and s2 required" << std::endl;
    }
    return 0;
}

