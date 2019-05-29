#include <iostream>
#include <cctype>

int main(int argc, char** argv) {
    int i = 0;
    if (argc > 1) {
        while (++i < argc) {
            int j = 0;
            while (argv[i][j]) {
                if (islower(argv[i][j])) {
                    std::cout << (char)toupper(argv[i][j++]);
                }
                else {
                    std::cout << (char)(argv[i][j++]);
                }
            }
        }
        std::cout << "\n";
    }
    else {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    }
    return 0;
}