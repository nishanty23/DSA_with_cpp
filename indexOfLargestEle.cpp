#include <iostream>
#include <climits>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr1[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>arr1[i];
    }

    int index;
    int largest = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr1[i] > largest){
            largest = arr1[i];
            index = i;
        }
    }
    cout<<"The largest element is: "<<largest<<endl;
    cout<<"The index of the largest element of the array is: "<<index<<endl;
    
    return 0;
}
