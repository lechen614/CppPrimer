#include <iostream>

int main()
{
    // 1.3
    // std::cout << "Hello World!" << std::endl;

    // 1.4
    int v1 = 0, v2 = 0;
    std::cout << "Input two numbers" << std::endl;
    std::cin >> v1 >> v2;

    // std::cout << "The product of " << v1 << " and " << v2 << " is "<< v1 * v2 << std::endl;

    // 1.5
    std::cout<< "The product of ";
    std::cout<< v1;
    std::cout<< " and ";
    std::cout<< v2;
    std::cout<< " is ";
    std::cout<< v1 * v2;
    std::cout<< std::endl;

    // 1.6
    // not legal, semicolon marks the second of first statement. there is no std::cout for second statement in line two and three.

    // 1.7
    // /*
    // test nest /* */
    // */

    // 1.8
    std::cout << "/*"; //legal
    std::cout << "*/"; //legal

    // std::cout << /* "*/" */; // illegal
    std::cout << /* "*/" /* "/*"  */; // legal
}