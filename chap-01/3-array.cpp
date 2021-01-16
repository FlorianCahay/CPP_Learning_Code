#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
    if (argc <= 1) {
        std::cerr << "Error: we need one argument" << std::endl;
        return -1;
    }
    int length = std::stoi(argv[1]);
    if (length <= 0) {
        std::cerr << "Error: we need positive value for array size" << std::endl;
        return -1;
    }

    /* int* values = new int[length] {};

    for (auto i = 0; i < length; i++) {
        values[i] = i+1;
    }

    for (auto i = 0; i < length; i++) {
        std::cout << values[i] << std::endl;
    }

    delete[] values; */

    std::vector<int> values;

    for (auto i = 0; i < length; i++) {
        values.emplace_back(i+1);
    }

    for (auto value : values) {
        std::cout << value << std::endl;
    }

    return 0;
}
