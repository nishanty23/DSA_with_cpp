#include<iostream>
using namespace std;

int sum(int arr[],int size){
    int totalSum=0;
    for(int i=0;i<size;i++){
        totalSum += arr[i];
    }
    return totalSum;
}

int product(int arr[],int size){
    int totalProduct=1;
    for(int i=0;i<size;i++){
        totalProduct *= arr[i];
    }
    return totalProduct;
}

int main(){
    int size;
    cout<<"Enter size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sumResult = sum(arr,size);
    int productResult = product(arr,size);
    cout<<"The sum of elements of the array is: "<<sumResult<<endl;
    cout<<"The product of elements of the array is: "<<productResult<<endl;

    return 0;
}
