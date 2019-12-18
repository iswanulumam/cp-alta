#include <bits/stdc++.h>
using namespace std;
	  
typedef unsigned long long LLU;
typedef long long LL;

int main(){	
	int n;
	scanf("%d %d", &n, &n);

	int A[n][n], B[n][n], temp[n][n];

	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)		
			scanf("%d", &A[i][j]);

	scanf("%d %d", &n, &n);
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)		
			scanf("%d", &B[i][j]);

	//cek kalau bisa 0 derajat
	bool succ=true;
	for (int i=0; i<n; i++) {
		if (!succ) break;
		for (int j=0; j<n; j++) {
			if (A[i][j]!=B[i][j]) {
				succ = false;
				break;
			}
		}
	}

	if (succ) { printf("0\n"); return 0; }
	
	succ = true;
	//test untuk 90*		
	for (int i=0; i<n; i++) //y
		for (int j=0; j<n; j++) //x	
			temp[j][n-i-1] = A[i][j];	
	
	for (int i=0; i<n; i++)	
		for (int j=0; j<n; j++)			
			A[i][j] = temp[i][j];

	for (int i=0; i<n; i++) {
		if (!succ) break;
		for (int j=0; j<n; j++) {
			if (A[i][j]!=B[i][j]) {
				succ = false;
				break;
			}
		}
	}	

	if (succ) { printf("90\n"); return 0; }

	succ = true;
	//test untuk 180*		
	for (int i=0; i<n; i++) //y
		for (int j=0; j<n; j++) //x	
			temp[j][n-i-1] = A[i][j];	
	
	for (int i=0; i<n; i++)	
		for (int j=0; j<n; j++)			
			A[i][j] = temp[i][j];		

	for (int i=0; i<n; i++) {
		if (!succ) break;
		for (int j=0; j<n; j++) {
			if (A[i][j]!=B[i][j]) {
				succ = false;
				break;
			}
		}
	}

	if (succ) { printf("180\n"); return 0; }
	succ = true;
	//test untuk 270*	
	for (int i=0; i<n; i++) //y
		for (int j=0; j<n; j++) //x	
			temp[j][n-i-1] = A[i][j];	
	
	for (int i=0; i<n; i++)	
		for (int j=0; j<n; j++)			
			A[i][j] = temp[i][j];		

	for (int i=0; i<n; i++) {
		if (!succ) break;
		for (int j=0; j<n; j++) {
			if (A[i][j]!=B[i][j]) {
				succ = false;
				break;
			}
		}
	}

	if (succ) { printf("270\n"); return 0; }

	printf("tidak sama\n");
}