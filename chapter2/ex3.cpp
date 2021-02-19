#include <iostream>

int main() {
    // 2.15
    int ival = 1.01; // valid but will truncate
    int &rval2 = 1.01; // invalid, cannot assign to literal initializer must be an object
    int &rval2 = ival; // valid
    int &rval3; //invalid, reference must be initialized

    // 2.16
    int i =0, &r1 = i; double d = 0, &r2 = d;
    r2 = 3.14159; // valid
    r2 = r1; // valid, convert
    i = r2; // valid truncate
    r1 = d;// valid, truncate

    //2.17 two 10, because there're two aliases

    int i1 = 2, i11 =3;
    int &i2 = i1;
    &i2 = &i11;// not valid since &12  is a reference, and can not be re-assigned, so it is not a modifiable lvalue
    std::cout << &i2 << std::endl;
    
    // 2.18
    int num = 1;
    int *p = 0;
    p = &num;
    *p = 2;
    std::cout << num << std::endl;

    // 2.19
    /*
    Both pointers and references give indirect access to other objects. 
    Difference: reference is not an object, no way to make reference refer to a different object. 

    a reference is an alias of an existing object, while a pointer is an object in its own right
    pointer need not be initialized at the time it is defined.
    */

    // 2.20 change i from 42 to 42 * 42

    // 2.21
    /*
    (a) illegal, double pointer can not point to type int 
    (b) illegal, pointer should point to the address, not the int value
    (c) legal
    */

    // 2.22
    // if (p), check whether it is not nullptr
    // if (*p), check whether the int value is non-zero

    // 2.23
    // No, we don't, as long as the address is valid, we don't know the exact thing there
    // 2.24
    // void * can point to any object while *lp can only point to long type
    int i = 1024, *p = &i, &r = i;
    if (p == &r) {
        std::cout << "equal" << std::endl; // it's equal
    } else {
        std::cout << "Nah" << std::endl;
    }

    // 2.25
    /*
    (a) ip is a pointer point to int, r is a reference to ip, so it is a pointer, and it's a alias of ip
    (b) i is a integer that hasn't been initialized, ip is a null pointer
    (c) ip is a pointer, ip2 is a integer
    */

    // 2.26
    /*
    (a) illegal, const must be initialized during declaration
    (b) legal
    (c) legal
    (d) illegal, sz cannot be changed.
    */ 

    // reference to const
    int i = 42;
    const int &r1 = i * 2; // legal
    int &r2 = i * 2; // illegal!

    // reference to const may refer to an changeable object
        // reference itself can not be re-assigned, so add an additional const don't make any change.
    int i = 42;
    int &r1 = i;
    const int &r2 = i;
    r1 = 0;
    std::cout << r2 << "," << i << std::endl;
    std::cout << &r2 << "," << &i << std::endl;
}