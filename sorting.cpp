#include <iostream>
#include <stdlib.h>
using namespace std;

void display(int a[], int n = 6)
{
	for(int i = 0; i < n; i++)
		cout << a[i] << "\t";
		
	cout << endl;
}

// Selection Sort
void selectionSort(int a[], int n = 6)
{
	int i, j,temp;
	
	cout << "Selection Sorting . . . " << endl;
	for( i = 0; i < n; i++)
		for(j = i+1; j < n; j++)
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			
}


// Insertion sorting
void insertionSort(int arr[], int n = 6) 
{ 
    int i, j; 
    
    
    cout << "Insertion sorting .... " << endl;
    for (i = 1; i < n; i++) { 
        j = i - 1; 
  
        while (j >= 0 && arr[j] > arr[i]) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = arr[i]; 
    } 
}



// Merge Sorting
void merge(int *left, int *right, int *a, int nR, int nL) {
	
	int i =0, j = 0, k =0;
	
	while(i < nR && j < nL){
		if(left[j] < right[i]){
			a[k] = left[j];
			k++;
			j++;
		}
		
		else {
			a[k] = right[i];
			k++;
			i++;
		}
		
	}
	
	while( i< nR){
		a[k] = right[i];
		k++;
		i++;
	}
	
	while(j < nL) {
		a[k] = left[j];
		j++;
		k++;
	}
	
	cout << "After merging . . ." << endl;
	display(a, k);
}

void mergeSort(int arr[] , int n = 6){
	
	cout << "Before spliting . . ." << endl;
	display(arr, n);
	int	i,
		nR = n/2,
		nL = n - nR;
		
	if (n < 2) return;
		
	int *right = (int*) malloc(nR * sizeof(int));
	int *left = (int*) malloc(nL * sizeof(int));
	
	for(i =0;i < nR; i++ )
		right[i] = arr[i];
		
	for(i = 0; i< nL; i++)
		left[i] = arr[i + nR];
		
		
	
	mergeSort(right, nR);
	mergeSort(left, nL);
	
	merge(left, right, arr, nR, nL);
	free(left);
	free(right);	
	
}




main()
{
	int arr[] = {5, 2, 6, 9, 19,2};
	
	cout<< "Before sorting . . ." << endl; display(arr);
	
//	cout << "Merge Sorting . . ." << endl;mergeSort(arr);
	selectionSort(arr);
//	insertionSort(arr);
	cout << "Result :" << endl;
	display(arr);
	
	
}
