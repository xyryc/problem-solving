#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include <ctime>
using namespace std;

int main(){
	int size = 10, arr[size];
	
	
	srand(time(0));	//current time as seed for random generator
	for(int i=0; i<size; i++){
		arr[i]=rand()%10;	
	}
	
	cout << "Elements before sort: ";
    for(int i=0; i<size; i++){
    	cout << arr[i] << " ";
	}
	
	sort(arr, arr + size);
    
    cout << "\nElements after sort: ";
    for(int i=0; i<size; i++){
    	cout << arr[i] << " ";
	}
	
	cout << "\nFirst Element: " << arr[0] << endl;
	cout << "Last Element: " << arr[size-1] << endl;
	
	return 0;
}
