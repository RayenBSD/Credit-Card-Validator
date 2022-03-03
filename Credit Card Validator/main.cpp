#include <iostream>
using namespace std;

bool checkCard(int *);
int main () {
    int *x = new int[16];
    for (int i = 0; i <= 15; i++) {
        cout<< "enter number "<< i<< ": "; cin>> x[i];
    }

    if (!checkCard(x)) cout<< "card is valid";
    else cout<< "card is not valid";
}

bool checkCard(int *x) {
    int oddSum = 0, evenSum = 0, time2, sum;

    for (int i = 0; i <= 15; i++) {

        if (i%2 == 0) {
            time2 = x[i]*2;
            if (time2 >= 10) time2 -= 9;
            evenSum += time2;
        }
        else {
            oddSum += x[i];
        }
    }

    sum = evenSum + oddSum;

    if (sum%10 == 0)
        return 0;
    else 
        return 1;
}