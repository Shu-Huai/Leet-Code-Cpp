#include <iostream>
#include "t389/Test.cpp"
#include "t1768/Test.cpp"
#include "t28/Test.cpp"
#include "t242/Test.cpp"
#include "t459/Test.cpp"
#include "t283/Test.cpp"

using namespace std;

int main() {
    int input = 0;
    cin >> input;
    getchar();
    if (input == 389) {
        T389::test();
    } else if (input == 1768) {
        T1768::test();
    } else if (input == 28) {
        T28::test();
    } else if (input == 242) {
        T242::test();
    } else if (input == 459) {
        T459::test();
    } else if (input == 283) {
        T283::test();
    }
}