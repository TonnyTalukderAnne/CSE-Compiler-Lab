#ifndef NEW_H
#define NEW_H

#include<bits/stdc++.h>
using namespace std;

// 1. sum -> Jogkoro
int Jogkoro(int a, int b) {
    return a + b;
}

// 2. sub -> komao
int komao(int a, int b) {
    return a - b;
}

// 3. mul -> Gunkoro
int Gunkoro(int a, int b) {
    return a * b;
}

// 4. div -> vagkoro
int vagkoro(int a, int b) {
    if (b != 0) return a / b;
    else {
        cout << "0 diye vag kora jabena!" << endl;
        return 0;
    }
}

// 5. print -> dekhao
void dekhao(string msg) {
    cout << msg << endl;
}

// 6. input -> nau
int nau() {
    int x;
    cin >> x;
    return x;
}

// 15. function -> kajkoro
int kajkoro(int x) {
    return x * x;
}

// 16. return -> ferotkoro
int ferotkoro(int x) {
    return x;
}

// 19, 20, 21: try-catch-throw
void cheshtakoro_dhoro_example() {
    try {
        throw runtime_error("Chure dao error paoa gese!");
    }
    catch (exception &e) {
        cout << "Dhoro: " << e.what() << endl;
    }
}

// 18. class -> dhoron
class dhoronManush {
public:
    string nam;
    int boyosh;
    void infoDekhao() {
        cout << "Nam: " << nam << ", Boyosh: " << boyosh << endl;
    }
};

#endif
