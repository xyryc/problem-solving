//
// Created by Anik on 05-08-2022.
//
#include<iostream>
using namespace std;

int main(){
    int temp, n, n1=0, n2=1;

    cin >> n;

    for(int i=1;i<n;i++){
        cout << n1 << " ";
        temp = n1+n2;
        n1 = n2;
        n2 = temp;
    }

    return 0;
}