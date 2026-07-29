//
// Created by Anik on 05-08-2022.
//
#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n, result;

    cin >> n;
    result = fibonacci(n);
    cout << result;

    return 0;
}