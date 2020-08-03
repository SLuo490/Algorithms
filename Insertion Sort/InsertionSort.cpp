/*
Shi Tao Luo
Insertion Sort Algorithm
*/


#include <iostream>
using namespace std;

int main() {
    //Example of array to be sorted
    int myArray[6] = {9,45, 23, 71, 80, 55};
    
    //Display the unsorted array
    cout << "Unsorted Array: " << endl;
    for (int i = 0; i < 6; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;
    
    //sorting array using insertion sort
    int i;
    int j;
    //loops through each index of array starting with index 1
    for (i = 1; i < 6; i++)
    {
        //set current value to the first index of array
        int currentVal = myArray[i];
        
        //loops through the array starting with the index zero
        //and compares myArray[j] to current value of i, if myArray[j] is greater than current value...
        for (j = i - 1; j >= 0 && myArray[j] > currentVal; j--) {
            //change the second index of array[j] to array[j]
            myArray[j+1] = myArray[j];
        }
        //array[j] is less than current value, so change array[j+1] with the current value
        myArray[j+1] = currentVal;
    }
    
    
    //Display the sorted array
    cout << "Sorted Array: " << endl;
    for (int i = 0; i < 6; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;
    
    return 0;
}
