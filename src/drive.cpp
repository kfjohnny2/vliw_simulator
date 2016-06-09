#include <iostream>
#include <string>
#include <vector>
#include <fstream>

typedef std::string string;

int main(int argc, char const *argv[]){
    std::vector<std::string> r1;
    std::vector<std::string> op1;
    std::vector<std::string> op2;
    string read;
    string operation1;
    string operation2;
    if (argc > 1) {
        string input_file = argv[1];
        std::ifstream file(input_file);

        if (!file.is_open()) {
            std::cerr << "The file specified doens't exists" << std::endl;
            return EXIT_FAILURE;
        }
        while (!file.eof()){
            file >> read >> operation1 >> operation2;
            r1.push_back(read);
            op1.push_back(operation1);
            op2.push_back(operation2);
        }
    } else {
        std::cerr << "No input file specified" << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}