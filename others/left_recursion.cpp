#include<iostream>
#include <string>
using namespace std;

int main(){
	int n, count=0;
	string str[100], leftString;
	
	cout << "Number of String n = ";
	cin >> n;

	cin >> leftString;
	for(int i=0;i<n; i++){
		cin >> str[i];
	}
	
	cout << leftString << " -> ";
	for(int i=0;i<n;i++){
		cout << str[i] ;
		if(count == n-1)
			break;
			cout << " | ";
		count++;
	}
				
	cout << endl;
	for(int i=0;i<n; i++){	
		cout << "Production " << i+1 << ": ";
		if(str[i][0] == leftString[0]){
			cout << "LR" << endl;
		}
		else{
			cout << "NLR" << endl;
		}
	}	
}
