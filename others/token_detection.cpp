
#include <iostream>
#include<string.h>
using namespace std;
int main() {
	int n;
	string sentence[100];
	cin>>n;
	
	getline(cin, sentence[0]);
	for(int i=0; i<n; i++) {
		getline(cin, sentence[i]);
	}
	
	for(int i=0; i<n; i++) {
		int k=0;
		cout<<"\n\nString "<<i+1<<": ";
		cout<<"\nToken "<<++k<<": ";
		
		for(int j=0; j<sentence[i].length(); j++) {
			
			if(sentence[i][j] == ' ')
				cout<<"\nToken "<<++k<<" : ";
				
			else
				cout<<sentence[i][j];
		}
	}
	
	return 0;
}
