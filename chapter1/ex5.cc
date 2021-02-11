#include <iostream>
#include "1/Sales_item.h"

// int main() {
//     Sales_item item1, item2;
//     std::cin >> item1 >> item2;
//     if (item1.isbn() == item2.isbn()) { // the == operator compares stirng
//         std::cout << item1 + item2 << std::endl;
//     } else {
//         std::cerr << "Different ISBN!" << std::endl;
//     }

    
//     return 0;
    
// }

// 1.23 and 1.24

using std::cout;
using std::cin;
using std::endl;
using std::cerr;
int main() {
    Sales_item item;
    if (cin >> item) {
        Sales_item new_item;
        while (cin >> new_item) {
            if (new_item.isbn() == item.isbn()) {
                item += new_item;
            } else {
                cout << item << endl;
                item = new_item;
            }
        }

    } else {
        cerr << "No data!" << endl;
    }
    
}