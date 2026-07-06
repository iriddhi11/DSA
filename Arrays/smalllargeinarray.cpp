#include <iostream>
using namespace std;

int main() {
    int nums[5] = {99, 100, 54, 36, 88};
    int size = 5;

    int smallest = INT_MAX;
    for (int i=0; i<size; i++){
        if( nums[i]< smallest){
            smallest = nums[i];}
    }
    cout<< "Smallest = " <<smallest <<endl;
    int largest= INT_MIN;
    for(int i=0; i<size ; i++){
        if(nums[i]>largest){
            largest = nums[i];
        }
    }
    cout<< "Largest = " <<largest <<endl;
    return 0;

}