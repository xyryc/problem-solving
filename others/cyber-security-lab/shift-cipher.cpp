#include<iostream>
#include<string.h>
using namespace std;

int main() {
	char msg[100];
	int i, j, length,choice,key;

	cout << "######### Shift Cipher #########" << endl;

	cout<<"Enter the message:\n";
	cin.getline(msg,100); //take the message as input

	key = 3; // key = 3 for shift cipher

	length = strlen(msg);

	cout<<"Enter your choice \n1. Encryption \n2. Decryption \n";
	cin>>choice;


	if (choice==1) { //for encryption
		char ch;
		for(int i = 0; msg[i] != '\0'; ++i) {
			ch = msg[i];
			//encrypt for lowercase letter
			if(ch >= 'a' && ch <= 'z') {
				ch = ch + key;
				if (ch > 'z') {
					ch = ch - 'z' + 'a' - 1;
				}
				msg[i] = ch;
			}
			//encrypt for uppercase letter
			else if (ch >= 'A' && ch <= 'Z') {
				ch = ch + key;
				if (ch > 'Z') {
					ch = ch - 'Z' + 'A' - 1;
				}
				msg[i] = ch;
			}
		}
		printf("Encrypted message: %s", msg);
	} else if (choice == 2) { //for decryption
		char ch;
		for(int i = 0; msg[i] != '\0'; ++i) {
			ch = msg[i];
			//decrypt for lowercase letter
			if(ch >= 'a' && ch <= 'z') {
				ch = ch - key;
				if(ch < 'a') {
					ch = ch + 'z' - 'a' + 1;
				}
				msg[i] = ch;
			}
			//decrypt for uppercase letter
			else if(ch >= 'A' && ch <= 'Z') {
				ch = ch - key;
				if(ch < 'A') {
					ch = ch + 'Z' - 'A' + 1;
				}
				msg[i] = ch;
			}
		}
		cout << "Decrypted message: " << msg;
	}
}
