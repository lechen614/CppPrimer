#include <iostream>
#include <vector>
std::string global_str;
int global_int;
std::vector<int> global_v;
int main() {
    int input_value;
    // std::cin >> input_value; // int input_value is a statement, not a variable or expression
    // int i = {3.14}; // error, because of narrowing from double to in
    double wage;
    double salary = wage = 9999.99; // wage has not declared
    int i2 = 3.14; // truncate to 3
    std::string local_str;
    int local_int;
    std::vector<int> local_v;
    std::cout << global_int << "\n" << global_str << std::endl;
    std::cout << local_int << "\n" << local_str << std::endl;
    std::cout << global_v.size() << "\n" << local_v.size() << std::endl;

    /*

    Uninitialized objects of built-in type defined inside a function 
    body have a undefined value. Objects of class type that we do not explicitly 
    inititalize have a value that is defined by class.
    */

    // 2.11
    extern int ix = 1024; // definition, It is an error to provide an initializer on an extern inside a function
    int iy; // definition
    extern int iz; // declaration



    // 2.12
    /*
    (a) not valid, double is a reserved keyword
    (b) valid
    (c) not valid, - is an operator and catch is a keyword.
    (d) not valid, can not start with digit
    (e) valid
    */

    // 2.13
    // j = 100
    // 100 45,  inner i from 0 to 9, outside i is 100
}
extern int ix = 1024; // definition, It is an error to provide an initializer on an extern inside a function