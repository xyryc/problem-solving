//
// Created by Anik on 05-08-2022.
//
#include<iostream>
using namespace std;

int fibonacci(int n){
    if((n==0)||(n==1)){
        return(n);
    }
    else{
        return(fibonacci(n-1) + fibonacci(n-2));
    }
}

int main(){
    int n, i=0;

    cin >> n;
    while(i<n){
        cout << fibonacci(i) << " ";
        i++;
    }

    return 0;
}