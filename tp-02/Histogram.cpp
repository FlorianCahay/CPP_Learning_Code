#include "Histogram.h"

Histogram::Histogram()
    : _count { new unsigned[26] {} }
{}

Histogram::Histogram(const Histogram& other)
    : Histogram()
{
    for (auto i = 0; i < 26; i++) {
        _count[i] = other._count[i];
    }
}

Histogram::~Histogram() {
    delete[] _count;
}

Histogram& Histogram::operator=(const Histogram& other) {
    if (this != &other) {
        _count = other._count;
    }

    return *this;
}

void Histogram::analyze(const std::string& str) {
    for (auto c : str) {
        if (std::isalpha(c)) {
            if (std::islower(c)) {
                _count[c - 97] += 1;
            } else {
                _count[c - 65] += 1;
            }
        }
    }
}

void Histogram::print() const {
    std::cout << "[";
    for (auto i = 0; i < 26; i++) {
        std::cout << " " << _count[i];
    }
    std::cout << "]" << std::endl;
}