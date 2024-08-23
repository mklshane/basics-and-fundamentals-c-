#include <iostream>
using namespace std;

//Function to sort array in descending order
void bSort(int array[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n - 1; i++) 
        for (j = 0; j < n - i - 1; j++) 
            if (array[j] < array[j + 1]) {
                int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp; }
} 
  
// Function to print an array 
void printArray(int array[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << array[i] << " "; 
    cout << endl; 
} 

int main()
{
	const int sizeOfArray = 20;
    int array1[10], array2[10], array3[sizeOfArray];
    
    cout<<"Array 1: \n";
    
    //for-loop to insert values in the first array
    for(int i=0; i<10; i++){
        cout<<"Enter value " << i+1<<": ";
        cin>>array1[i];
    }
    
    cout<<"\nArray 2: \n";
    //for-loop to insert values in the second array
    for(int i=0; i<10; i++){
        cout<<"Enter value " << i+1<<": ";
        cin>>array2[i];
    }
    
    //for-loop to to merge values from first array
    for(int i=0; i<10; i++){
        array3[i] = array1[i];
    }
    //for-loop to to merge values from second array
    for(int i=0; i<10; i++){
        array3[i + 10] = array2[i];
    }
    
    bSort(array3, sizeOfArray); 
    cout <<"\nSorted array: \n"; 
    printArray(array3, sizeOfArray); 
    return 0;
   
}