#include <iostream>
#include "line.h"


int main() {
    float begin = 1.0f;
    float end = 3.5f;

    line_t line(begin, end);

    float length = line.GetLength();

    std::cout << "length: " << length << std::endl;

    return 0;
};