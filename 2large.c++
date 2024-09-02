#include<iostream>
using namespace std;

int main(){
    int arr[]={2,5,4,3,6,8,7};
    int tmp=0;
    int size=7;
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]>arr[j]){
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    cout<<endl;
    
    cout<<"print the array "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    // cout<<"second largest number is : ";
    // for(int i=1;i<size;i++){
    //     if(arr[i]!=arr[0]){
    //         cout<<arr[i]<<endl;
    //         return arr[i];
    //     }
       
    // }
        
     cout<<"third largest number is :  ";
    for(int i=2;i<size;i++){
        if(arr[i]!=arr[1]){
            cout<<arr[i]<<" ";
            return arr[i];
        }
        
    }
    return 0;
}