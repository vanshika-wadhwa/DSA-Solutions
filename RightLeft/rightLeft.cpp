
#include<iostream>
using namespace std;
void rightLeft(int arr[10]){
    int even[5], odd[5], evenIndex=0, oddIndex=0;
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            even[evenIndex++]=arr[i];
        }
        else{
            odd[oddIndex++]=arr[i];
        }
    }
    
    cout<<"even:";
    for(int i=0;i<evenIndex;i++){
        cout<<even[i]<<' ';
    }
    cout<<"\n";
    cout<<"odd:";
    
    for(int i=0;i<oddIndex;i++){
        cout<<odd[i]<<' ';
    }
    int index=0;
    for(int i=0;i<evenIndex;i++){
           arr[index++]=even[i];
    }
    for(int k=0;k<oddIndex;k++){
    arr[index++]=odd[k];
    }
    
   
    cout<<"final array with even on left side and odd on right side:\n";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<' ';
    }
    
}


int main(){
    int arr[]={1,12,3,4,5,6,7,8,9,10};
    rightLeft(arr);
    return 0;
}