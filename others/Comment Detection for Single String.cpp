#include<iostream>
using namespace std;

int main() {
	string line;

	cout << "Enter String to check: ";
	cin >> line;

	if (line[0] == '/' && line[1] == '/' && line[2] != '/') {

		cout << "It is a single-line comment";
	}

	else if (line[line.size() - 2] == '*' && line[line.size() - 1] == '/' && line[0] == '/' && line[1] == '*') {
		cout << "It is a multi-line comment";
	}

	else {
		cout << "It is not a comment";
	}



	return 0;
}

