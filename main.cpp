#define FMT_HEADER_ONLY
#include <fmt/format.h>
#include <iostream>
#include <string>

struct getInput {
    std::string cin() const {
        std::string input;
        std::getline(std::cin, input);
        return input;
    }
};
int main() {
    getInput getInput;
    std::cout << "Compilation was successful! Please enter a value: ";
    fmt::print("Your input: '{}'\n", getInput.cin());
    return 0;
}