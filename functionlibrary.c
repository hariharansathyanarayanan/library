#include "functionlibrary.h"
#include <stdio.h>

void insertionsort(int A[],int length) {
	int j,i,key;
	for(j=1;j<length;j++) {
		i = j-1;
		key = A[j];
		while(i >= 0 && A[i] > key) {
			A[i+1] = A[i];
			i = i-1;
		}
		A[i+1] = key;
	}
	//sorting finished
}

void print(int A[],int size) {
	int i = 0;
	fprintf(stdout,"A elements:\n");
	while (i < size) {
		printf("A[%d] - %d\n",i,A[i]);
		i++;
	}
	//printing finished
}

void recursive_sort(int A[],int j,int r) {
	if(j < 0) {
		printf("\nj less than zero\n");
		return;
	}
	if(r) {
		printf("\ncompell recursion time for %d\n",j);
		recursive_sort(A,j-1,r);
		
	}
	if(A[j] > A[j+1]) {
		printf("\nA[%d] > A[%d] i.e %d > %d\n",j,j+1,A[j],A[j+1]);
	// swap A[j] with A[j+1]
		int temp = A[j];
		A[j] = A[j+1];
		A[j+1] = temp;
		printf("\nSwap finished recursion for %d\n",j);
		print(A,8);
		recursive_sort(A,j-1,0);
	}
}

//binary search
int binarysearch(int A[],int p,int q,int v) {
	int mid;
	if(p == q) 
		return -1;

	else if(A[p] == v) 
		return p;

	else if(A[q] == v)
		return q;

	else { 
		mid = (p + q) / 2;
		
		if(A[mid] == v) 
			return mid;
		else if(A[mid] > v) 
			q = mid - 1;
		else 
			p = mid + 1;
	    
	    binarysearch(A,p,q,v);
	}
}
