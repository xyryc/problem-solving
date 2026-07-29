#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	
	cout << "Enter String to check: ";
	cin >> str;
	
	if((str[0]>='a' && str[0]<='z') || str[0]>='A' && str[0]<='Z' || str[0] == '_'){
		for (int i = 1; i < str.length(); i++) {
        	if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') || str[i] == '_'){
            	cout << "Valid Identifier" << endl;
            	break;
			}	     
		}
	}
	
    else{
    	cout << "Invalid Identifier" << endl;
	}
	

}
