#include <iostream>
using namespace std; 
void changeArr(int arr[], int size){
    for(int i=0; i<size; i++){
        arr[i] = arr[i] * 2;
    }
}   
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "Original array: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    changeArr(arr, size);

    cout << "Modified array: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}