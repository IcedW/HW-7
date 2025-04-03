#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    //1
    /*srand(time(0));
    int number[10];
    for (int i = 0; i < 10; ++i) {
        number[i] = (rand() % 41) - 20;
        cout << number[i] << " ";
    }*/

    //2
    /*int number[100];
    int a;
    cin >> a;
    int count = 0;
    for (int i = 0; i < 100; ++i) {
        number[i] = rand() % 100;
    }
    for (int i = 0; i < 100; ++i) {
        if (number[i] == a) {
            count++;
        }
    }
    cout << count;*/

    //3
    /*srand(time(0));
    int number[100];
    number[0] = rand() % 100;
    int max1 = number[0];
    int min1 = number[0];
    for (int i = 0; i < 100; ++i) {
        number[i] = rand() % 100;
        if (number[i] > max1) {
            max1 = number[i];
        }
        if (number[i] < min1) {
            min1 = number[i];
        }
    }
    cout << max1 << "\n";
    cout << min1 << "\n";*/

    //4
    /*srand(time(0));
    int singled = 0;
    int doubled = 0;
    int tripled = 0;
    int number[300];
    for (int i = 0; i < 300; ++i) {
        number[i] = rand() % 300;
        if (number[i] <= 10) {
            singled++;
        }
        if (number[i] >= 10 && number[i] <= 100) {
            doubled++;
        }
        if (100 <= number[i]) {
            tripled++;
        }
    }
    cout << singled << "\n";
    cout << doubled << "\n";
    cout << tripled << "\n";*/

    //5
    /*srand(time(0));
    const int a = 10;
    const int b = 15;
    int a1[a];
    int b1[b];
    int c1[a + b];
    int c = 0;
    int num1;
    int num2;
    int num3;
    for (int i = 0; i < a; i++) {
        a1[i] = rand() % 20 + 1;
    }
    for (int i = 0; i < b; i++) {
        b1[i] = rand() % 20 + 1;
    }
    for (int i = 0; i < a; i++) {
        num1 = 0;
        for (int p = 0; p < b; p++) {
            if (a1[i] == b1[p]) {
                num1 = 1;
            }
        }
        if (num1 == 1) {
            num2 = 0;
            for (int k = 0; k < c; k++) {
                if (c1[k] == a1[i]) {
                    num2 = 1;
                }
            }
            if (num2 == 0) {
                c1[c] = a1[i];
                c++;
            }
        }
    }
    for (int i = 0; i < c; i++) {
        cout << c1[i] << " ";
    }*/

    //6
    /*srand(time(0));
    int numb[5];
    int a;
    bool win = false;
    for (int i = 0; i < 5; i++) {
        numb[i] = rand() % 99;
    }
    for (int i = 0; i < 5; i++) {
        cin >> a;
        for (int j = 0; j < 5; j++) {
            if (a == numb[j]) {
                win = true;
            }
        }
    }
    if (win) {
        cout << "win" << endl;
    }
    else {
        cout << "lose" << endl;
    }*/
}