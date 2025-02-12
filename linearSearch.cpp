#include<iostream>
using namespace std;
int main(){
    int arr[100],n,ele,index=-1;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search: ";
    cin>>ele;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            cout<<"element found at index: "<<i<<endl;
            index++;
            break;
        }
    }
    if(index==-1){
        cout<<"Element not found in the list"<<endl;
    }
}