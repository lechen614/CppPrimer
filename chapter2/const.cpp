#include <iostream>

int main() {
    // constant number
    const double cdval = 3.14; // it can no longer be changed
    double *ptr = &cdval; // and it cannot be pointed by normal pointer

    // pointer that point to constant object
    // a constant object can only be pointed by this pointer
    // HOWEVER, we don't know the pointed object is constant or not.
    // and we can't modify the object through this kind of pointer
    // and the pointer can be re-assigned
    double dval = 3.14;
    const double *cptr = &dval; // cptr can be used to point above cdval, but it can also point to dval, which is not a constant double
    dval = 5.2;
    std::cout << "*cptr is " << *cptr << std::endl; // the printed value is 5.2
    *cptr = 10.3; // error, dval cannot be changed through cptr
    // !! so that cptr can be understand as a read-only "interface" to the address of dval, while the content in the address can be changed
    // it just cannot be changed through cptr

    double dval2 = 1.1;
    *cptr = dval2; // error,the same with *cptr = 10.3 case, cannot modifed the content
    cptr = &dval2; // ok:it can be re-assigned

    // const pointer
    double pi = 3.14159;
    const double *const pip = &pi; // pip is a const pointer to a const object
    int errNumb = 0;
    int *const currErr = &errNumb; // currErr will always point to errNumb, but errNumb can be changed.
    // 
}