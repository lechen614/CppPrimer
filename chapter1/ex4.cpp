#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// int main(){
//     int sum = 0, val = 0;
//     while (std::cin >> val)
//         sum += val;
//     std::cout << "Sum is: " << sum << std::endl;
//     return 0;
// }

// int main() {
//     int currVal = 0, val = 0;
//     if (cin >> currVal) {
//         int cnt = 1;
//         while (cin >> val) {
//             if (val == currVal)
//                 ++cnt;
//             else {
//                 cout << currVal << " occurs " << cnt << " times " << endl;
//                 currVal = val;
//                 cnt = 1;
//             }
//         }
//         cout << currVal << " occurs " << cnt << " times " << endl;
//     }
//     return 0;
// }


int main() {
    int v1 = 0, v2 = 0;
    cout << "Input two numbers" << endl;
    cin >> v1 >> v2;
    if (v1 > v2) {
        int temp = v1;
        v1 = v2;
        v2 = temp;
    }
    for(;v1 <= v2; ++v1) {
        cout << v1 << endl;
    }
}