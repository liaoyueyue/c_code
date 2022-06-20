#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <stdio.h>
using namespace std;

int P[4] = { 1,0,1,1 };

void XOR(int a[4], int b[4]) {
    for (int i = 0; i < 4; i++) {
        if (a[i] == 1) {
            if (b[i] == 1) {
                a[i] = 0;
            }
            else {
                a[i] = 1;
            }
        }
        else {
            if (b[i] == 0) {
                a[i] = 0;
            }
            else {
                a[i] = 1;
            }
        }
    }
}

void print_result(int a[4]) {
    printf("result:\n");
    for (int i = 3; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void crc(int X[9], int FCS[3]) {
    int result[4];
    int t = 4;
    for (int i = 0; i < 4; i++) {
        result[i] = X[9 - (4 - i)];
    }
    XOR(result, P);
    print_result(result);
    while (1) {
        printf("t=%d,shift\n", t);
        for (int i = 4 - 1; i >= 1; i--) {
            result[i] = result[i - 1];
        }
        result[0] = X[t--];
        if (result[3] == 1) {
            XOR(result, P);
        }
        else {
            ;//和0000异或，即恒等运算
        }
        //print result
        print_result(result);
        if (t < 0) {
            for (int i = 0; i < 3; i++) {
                FCS[i] = result[i];
            }
            break;
        }
    }
}

int main()
{
    int X[9] = { 0,0,0,1,0,0,1,0,1 };                   //结果应为001
    int Y[9] = { 0,0,0,0,1,1,0,1,1 };                   //结果应为111
    int FCS[3];
    crc(Y, FCS);
    //
    cout << "final result=";
    cout << FCS[2] << " " << FCS[1] << " " << FCS[0] << endl;
    return 0;
}