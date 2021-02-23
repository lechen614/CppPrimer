#include<iostream>

int main() {
    // 2.33 - 34
    // abc are legal, while deg are illegal

    // 2.35
    const int i = 42; // i is const int
    auto j = i; const auto &k = i; auto *p = &i; // j is just an int, k is a const reference to i top-level, p is a const point top-level
    const auto j2 = i, &k2 = i; // j2 is a const int, k2 is const int reference

    // 2.36 - 38 decltype part skipped for now
}