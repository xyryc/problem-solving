
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<fstream>
#define size 100
using namespace std;

void arrayProduct(int (*arr1)[size], int (*arr2)[size], int row, int col);
void arraySum(int (*arr1)[size], int (*arr2)[size], int row, int col);
void arrayTranspose(int (*arr1)[size], int (*arr2)[size], int row, int col);


int main(){
	char option;
	int row=0, col=0, upper = 50, lower = 0;
	int arr1[size][size], arr2[size][size];
	
	
	do{
		cout << "1. P/p: Multiple two 2D arrays" << endl;
		cout << "2. S/s: Add two 2D arrays" << endl;
		cout << "3. T/t: Transpose two 2D arrays" << endl;
		cout << "4. E/e: Exit program" << endl;
		
		cin >> option;
		
		if(option == 'P' || option == 'p'){
			cin >> row >> col;
				
			srand(time(0));	
			for(int i=0; i<row; i++){
				for(int j=0; j<col; j++){					
					arr1[i][j] = (rand() % (upper - lower + 1)) + lower;
					arr2[i][j] = (rand() % (upper - lower + 1)) + lower;
										
				}
			}
			
			cout << "Array 1: " << endl;
			for(int i=0; i<row; i++){
				for(int j=0; j<col; j++){				
					cout << arr1[i][j] << " ";
					if(j == col - 1)
                		cout << endl;
				}
			}	
			cout << endl;
			
			cout << "Array 2: " << endl;
			for(int i=0; i<row; i++){
				for(int j=0; j<col; j++){
					cout << arr2[i][j] << " ";
					if(j == col - 1)
                		cout << endl;
				}
			}
			cout << endl;
							
			arrayProduct(arr1, arr2, row, col);
		}
		
		
		
		else if(option == 'S' || option == 's'){
			cin >> row >> col;
			
			srand(time(0));	
			for(int i=0; i<row; i++){
				for(int j=0; j<col; j++){					
					arr1[i][j] = (rand() % (upper - lower + 1)) + lower;
					arr2[i][j] = (rand() % (upper - lower + 1)) + lower;
										
				}
			}
			
			cout << "Array 1: " << endl;
			for(int i=0; i<row; i++){
				for(int j=0; j<col; j++){				
					cout << arr1[i][j] << " ";
					if(j == col - 1)
                		cout << endl;
				}
			}	
			cout << endl;
			
			cout << "Array 2: " << endl;
			for(int i=0; i<row; i++){
				for(int j=0; j<col; j++){
					cout << arr2[i][j] << " ";
					if(j == col - 1)
                		cout << endl;
				}
			}
			cout << endl;
			
			arraySum(arr1, arr2, row, col);
		}
		else if(option == 'T' || option == 't'){
			cin >> row >> col;
			
			srand(time(0));	
			for(int i=0; i<row; i++){
				for(int j=0; j<col; j++){					
					arr1[i][j] = (rand() % (upper - lower + 1)) + lower;
					arr2[i][j] = (rand() % (upper - lower + 1)) + lower;
										
				}
			}
			
			cout << "Array 1: " << endl;
			for(int i=0; i<row; i++){
				for(int j=0; j<col; j++){				
					cout << arr1[i][j] << " ";
					if(j == col - 1)
                		cout << endl;
				}
			}	
			cout << endl;
			
			cout << "Array 2: " << endl;
			for(int i=0; i<row; i++){
				for(int j=0; j<col; j++){
					cout << arr2[i][j] << " ";
					if(j == col - 1)
                		cout << endl;
				}
			}
			cout << endl;
			
			arrayTranspose(arr1, arr2, row, col);
		}
			
	}while(option != 'E' && option != 'e');
	
	system("PAUSE");
	
}

void arrayProduct(int (*arr1)[size], int (*arr2)[size], int row, int col){
	int prod[100][100];
	
	for(int i=0; i<row; i++){
		for(int j=0; j<col;j++){
			prod[i][j] = arr1[i][j] * arr2[i][j];
		}
	}	
	
	cout << "Product of Array 1 and Array 2: " << endl;
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
        {
            cout << prod[i][j] << "  ";
            
            if(j == col - 1)
                cout << endl;
        }
        
 	cout << endl;  
	 
	ofstream fout("outputFile.txt");
	
	if(fout.is_open()){
		fout << "Product of Array 1 and Array 2: " << endl;
		for(int i = 0; i < row; i++){
	        for(int j = 0; j < col; j++){
	            fout << prod[i][j] << "  ";            
	            if(j == col - 1)
	                fout << endl;
	        }
        
 		fout << endl; 		
		} 
		cout << "Successfully saved!\n" << endl; 
	}

	else{
		cout << "File could not be opened." << endl;
	}
	     
}

void arraySum(int (*arr1)[size], int (*arr2)[size], int row, int col){
	int sum[100][100];
	
	for(int i=0; i<row; i++){
		for(int j=0; j<col;j++){
			sum[i][j] = sum[i][j] + arr1[i][j] + arr2[i][j];
		}
	}	
	
	cout << "Sum of Array 1 and Array 2: " << endl;
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
        {
            cout << sum[i][j] << "  ";
            
            if(j == col - 1)
                cout << endl;
        }
        
 	cout << endl;   
	 
	ofstream fout("outputFile.txt");
	
	if(fout.is_open()){
		fout << "Sum of Array 1 and Array 2: " << endl;
		for(int i = 0; i < row; i++){
	        for(int j = 0; j < col; j++){
	            fout << sum[i][j] << "  ";            
	            if(j == col - 1)
	                fout << endl;
	        }
        
 		fout << endl; 		
		} 
		cout << "Successfully saved!\n" << endl; 
	}

	else{
		cout << "File could not be opened." << endl;
	}   
}

void arrayTranspose(int (*arr1)[size], int (*arr2)[size], int row, int col){	
	int transpose1[100][100], transpose2[100][100];
	
	
	for (int i = 0; i < row; ++i)
      for (int j = 0; j < col; ++j) {
         transpose1[j][i] = arr1[i][j];
      }
      
      for (int i = 0; i < col; ++i){
      	for (int j = 0; j < row; ++j) {
         transpose2[j][i] = arr2[i][j];
      }
  	}
      
    cout << "Transpose of Array 1: " << endl;
    for(int i = 0; i < row; i++){	
        for(int j = 0; j < col; j++){
            cout << transpose1[i][j] << "  ";          
            if(j == col - 1)
                cout << endl;
        }
    }
    cout << endl;
    
    cout << "Transpose of Array 2: " << endl;
    for(int i = 0; i < row; i++){	
        for(int j = 0; j < col; j++){
            cout << transpose2[i][j] << "  ";          
            if(j == col - 1)
                cout << endl;
        }
    }
        
 	cout << endl;  
	 
	ofstream fout("outputFile.txt");
	
	if(fout.is_open()){
		fout << "Transpose of Array 1: " << endl;
	    for(int i = 0; i < row; i++){	
	        for(int j = 0; j < col; j++){
	            fout << transpose1[i][j] << "  ";          
	            if(j == col - 1)
	                fout << endl;
	        }
	    }
	        
		fout << endl;
		
		
		fout << "Transpose of Array 2: " << endl;
	    for(int i = 0; i < row; i++){	
	        for(int j = 0; j < col; j++){
	            fout << transpose2[i][j] << "  ";          
	            if(j == col - 1)
	                fout << endl;
	        }
	    }
    	fout << endl;
    
		cout << "Successfully saved!\n" << endl; 
	}

	else{
		cout << "File could not be opened." << endl;
	}
	 	   
}

