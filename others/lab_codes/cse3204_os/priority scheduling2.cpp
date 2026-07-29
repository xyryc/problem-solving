#include<bits\stdc++.h>
#include<stdio.h>
#include<conio.h>
#define max 30
using namespace std;

int main(){
	int n, i, j, k=1, t, b=0, min, temp[max], bt[max], wt[max], at[max], pr[max], tat[max];
	float awt=0, atat=0;

	cout << "Enter the number of process: ";
	cin >> n;

	cout << "Enter the burst time, arrival time & priority of the process:";
	for(int i=0; i<n; i++){
		cin >> bt[i] >> at[i] >> pr[i];
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(at[i]<at[j]){
				t=at[j];
				at[j]=at[i];
				at[i]=t;

				t=bt[j];
				bt[j]=bt[i];
				bt[i]=t;
			}
		}
	}

	for(int j=0; i<n; j++){
		b = b+bt[j];
		min = bt[k];
		for(int i=k; i<n; i++){
			min=pr[k];
			if(b>=at[i]){
				if(pr[i]<min){
					t=at[k];
					at[k]=at[i];
					at[i]=t;

					t=bt[k];
					bt[k]=bt[i];
					bt[i]=t;

					t=pr[k];
					pr[k]=pr[i];
					pr[i]=t;
				}
			}
		}
		k++;
	}
	temp[0]=0;
	cout << "Process\t Burst Time\t Arrival Time\t Priority\t Waiting Time\t Turn Around Time\n" << endl;
	for(int i=0; i<n; i++){
		wt[0]=0;
		tat[i]=0;
		temp[i+1]=temp[i]+bt[i];
		wt[i]=temp[i]-at[i];
		tat[i]=wt[i]+bt[i];
		awt=awt+wt[i];
		atat=atat+tat[i];

		cout << i+1 << "\t"<< bt[i] << "\t" << at[i] << "\t" << pr[i] << "\t" << wt[i] << "\t" << tat[i] << endl;
 	}
	awt=awt/n;
	atat=atat/n;
	cout << "Average waiting time: " << awt << endl;
	cout << "Average turn around time: " << atat << endl;
	getch();
}
