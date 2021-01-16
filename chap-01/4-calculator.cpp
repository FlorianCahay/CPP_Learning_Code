#include <iostream>
#include <string>
#include <vector>

int add(const std::vector<int> values) {
    auto result = 0;
    for (auto v : values)
    {
        result += v;
    }
    return result;
}

int mul(const std::vector<int> values) {
    auto result = 1;
    for (auto v : values)
    {
        result *= v;
    }
    return result;
}

int sub(const std::vector<int> values) {
    auto result = values[0];
    for (auto i = 1u; i < values.size(); ++i)
    {
        result -= values[i];
    }
    return result;
}

bool parse_params(char& op, std::vector<int>& values, int argc, char** argv) {
    if (argc < 2)
    {
        std::cerr << "Expected operator as first argument." << std::endl;
        return false;
    }

    std::string op_str = argv[1];
    std::cout << op_str << std::endl;

    if (op_str != "+" && op_str != "*" && op_str != "-")
    {
        std::cerr << "Expected operator to be '+', '*' or '-'." << std::endl;
        return false;
    }

    op = op_str[0];

    for (auto arg_i = 2; arg_i < argc; ++arg_i)
    {
        auto value = std::stoi(argv[arg_i]);
        values.emplace_back(value); 
    }

    if (op == '-' && values.empty()) {
        std::cerr << "Error: operator '-' expects at least one operand to substract from." << std::endl;
        return -1;
    }

    return true;
}

int compute_result(const char op, const std::vector<int> values) {
    switch (op) {
        case '+':
            return add(values);
        case '*':
            return mul(values);
        case '-':
            return sub(values);
        default:
            return 0;
    }
}

void display_result(int result) {
    std::cout << "Result is " << result << std::endl;
}

int main(int argc, char** argv)
{
    // Parsing program parameters.
    char op = '?';
    std::vector<int> values;
    if (!parse_params(op, values, argc, argv)) {
        return -1;
    }

    // Process operation, depending on the operator.
    auto result = compute_result(op, values);

    // Output result.
    display_result(result);

    return 0;
}
