#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24};
    int *p = arr;

    cout << *p << endl;
    cout << *(p + 4);
    cout << 'Something new every day!';
    
    return 0;
}
