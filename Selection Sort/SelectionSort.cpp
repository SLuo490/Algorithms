/*
 Shi Tao Luo
 Selection Sort Algorithm Implementation
 c++
 */


#include <iostream>
using namespace std;

void selectionSort(int arr[] ,int n) {
    int lowest;
    
    for (int i = 0; i < n; i++) {
        //set lowest to the first value of array
        lowest = i;
        for (int j = i+1; j < n; j++) {
            //loop through the array following i, if there is a value lower than i, set j to lowest
            if (arr[j] < arr[lowest]) {
                lowest = j;
            }
        }
        //sway the lowest value with the i
        swap(arr[i], arr[lowest]);
    }
}

int main() {
    //test case:
    int arr[] = {11,2,400,4,10,9,11};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, 7);
    
    
    //print the sorted array
    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
