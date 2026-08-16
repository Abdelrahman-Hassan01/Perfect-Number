
#include <iostream>
using namespace std;

bool perfctNumber(int& Num) {
    int perfect = 0;
    cin >> Num;
    for (int i = 1;i < Num;i++) {
        if (Num % i == 0) {
            perfect += i;
        }
    }
    return Num == perfect;
}
void printPerfectNumber(int& num) {

    if (perfctNumber(num))
        cout << num << " Is Perfect Number";
    else
        cout << num << " Is not Perfect Number";
}
int main()
{
    int num;
    printPerfectNumber(num);
    return 0;
}

