#include <iostream>
using namespace std;

void sum(int x, int y) {
    std::cout << 'the sum is ' << x + y << '.' << std::endl;
}

void quotient(int x, int y) {
    std::cout << 'the quotient is ' << x / y << '.' << std::endl;
}

int main() {
    sum(11, 250);
    quotient(121, 11);
    sum(19, 37);
    return 0;
}
