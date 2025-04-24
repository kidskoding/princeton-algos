#include <iostream>
#include <sstream>
#include <string>

#include "./ch_0/hello_goodbye.hpp"
#include "./main_helpers.hpp"
#include "./ch_1/quick_find_uf.hpp"

int main(int argc, char** argv) {
    /* std::string first = argv[0];
    std::string second = argv[1];
    
    printHello(first, second);
    printGoodbye(first, second); */

    run_uf();
    return 0;
}

void run_uf() {
    std::string input;
    std::getline(std::cin, input);

    int n = std::stoi(input);

    input = "";
    while(std::getline(std::cin, input)) {
        if(input.empty()) { 
            return; 
        }

        std::istringstream iss(input);
        int first, second = 0;
        iss >> first >> second;

        std::cout << "first: " << first << ", second: " << second << '\n';
    }
}
