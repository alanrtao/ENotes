#include <iostream>

int add(int, int);

int readNumber()
{
    int input;
    std::cin >> input;
    return input;
}

void writeAnswer(int answer)
{
    std::cout << "The answer is: " << answer << std::endl;
}

int main()
{
    // int a, b;
    // a = readNumber();
    // b = readNumber();

    // corr: a better answer would be:
    int a { readNumber() };
    int b { readNumber() };

    writeAnswer(a + b);
    return 0;
}