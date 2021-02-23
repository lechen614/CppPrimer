#include<iostream>

int main() {
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

    // 2.27
    // (a) int i = -1, &r = 0;          // illegal, r must be a reference to an object, not a literal
    // (b) int *const p2 = &i2;         // legal, p2 is a const int pointer to the address of i2
    // const int &r = 0;
    // (c) const int i = -1, &r = 0;    // ! it is legal
    // (d) const int *const p3 = &i2;   // legal, p3 is a const pointer 
    // (e) const int *p1 = &i2;         // legal, p1 cannot change the content at the address of i2
    // (f) const int &const r2;         // illegal, reference can not be const
    // (g) const int i2 = i, &r = i;    // legal;
    
    // 2.28
    // (a) int i, *const cp;            // illegal, cp must be initialized
    // (b) int *p1, *const p2;          // illegal, p2 must be initialized
    // (c) const int ic, &r = ic;       // illegal, ic must be initialized
    // (d) const int *const p3;         // illegal, p3 must be initialized
    // (e) const int *p;                // legal. it can be initialized or re-assigned later

    // 2.29
    // (a) i = ic;      // legal
    // (b) p1 = p3;     // illegal, p3 is a const pointer, p1 is not
    // (c) p1 = &ic;    // illegal, p1 must be a low-level const pointer to point to a const int
    // (d) p3 = &ic;    // illegal
    // (e) p2 = p1;     // illegal
    // (f) ic = *p3;    // illegal

    // 2.30
    // (a) top-level
    // (b) None p1 and r1 don't point to const, 
    // (c) p2 low-level; p3 are both top-level and low-level; r2 low-level

    // 2.31
    // r1 = v2; legal, top level in v2 is ignored in "int v1 = v2;"
    // p1 = p2; illegal, must be a low-level pointer to point to a const int
    // p2 = p1; legal, low-level, can be re-assigned
    // p1 = p3; illegal, p3 is LOW-level, p1 is not.
    // p2 = p3; illegal, p3 and p2 are both LOW-level
    
    // 2.32
    // int null = 0, *p = null;
    constexpr int *null = 0, *p = null;

    bool test = null == NULL;
    std::cout << test << std::endl; // true
}