/*
 Shi Tao Luo
 
 Merge sort with two array
 Two Implementation: vector and array
 
 */

#include <iostream>
#include <vector>

using namespace std;

void mergeSort (vector<int>& arr1, vector<int>& arr2, int n, int m, vector <int>& merge) {
    
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            merge.push_back(arr1[i]);
            i++;
        }
        else {
            merge.push_back(arr2[j]);
            j++;
        }
    }
    
    while (i < n) {
        merge.push_back(arr1[i]);
        i++;
    }
    while (j < m) {
        merge.push_back(arr2[j]);
        j++;
    }
    
}

void mergeSort2 (int arr1[], int arr2[], int merge[], int n, int m) {
    int i = 0;
    int j = 0;
    int k = 0;
    
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            merge[k++] = arr1[i++];
        }
        else {
            merge[k++] = arr2[j++];
        }
    }
    
    while (i < n) {
        merge[k++] = arr1[i++];
    }
    while (j < m) {
        merge[k++] = arr2[j++];
    }
    
}



int main() {
    
    cout << "Vector Implementation" << endl;
    
    vector<int> arr1 = {1,2,3};
    vector<int> arr2 = {10,11,51,100};
    int n = 3, m = 4;
    
    vector<int> merge;
    
    mergeSort(arr1, arr2, n, m, merge);
    
    for (int i = 0; i < merge.size();i++) {
        cout << merge[i] << " ";
    }
    cout << endl << endl;
    
    cout << "<----------------->" << endl << endl;
    
    cout << "Array Implementation" << endl;
    
    int arry1[3] = {5,9,10};
    int arry2[4] = {10,11,51,100};
    int merge2[n+m];
    
    mergeSort2(arry1, arry2, merge2, n, m);
    
    for (int i = 0; i < 7; i++) {
        cout << merge2[i] <<  " ";
    }
    cout << endl;
    

    return 0;
}
