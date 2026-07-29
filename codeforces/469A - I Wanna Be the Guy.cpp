//469A - I Wanna Be the Guy.cpp
#include<iostream>
using namespace std;

int main(){
	int maxLevel, nx, x[1000], ny, y[1000];
	bool a = false;
	
	
	cin >> maxLevel;

	cin >> nx;
	for(int i=0; i<nx; i++){
		cin >> x[i];
	}
	
	cin >> ny;
	for(int i=0; i<ny; i++){
		cin >> y[i];
	}
	
	
	for(int i=0; i<nx; i++){
		if(x[i] == maxLevel){
			a = true;
			break;
		}
	}
	
	for(int i=0; i<ny; i++){
		if(y[i] == maxLevel){
			a = true;
			break;
		}
	}
	
	if(a == true){
		cout << "I become the guy." << endl;
	}
	else{
		cout << "Oh, my keyboard!" << endl;
	}
	
}
