#include<bits/stdc++.h>
using namespace std;
int rightLeft(vector<int> arr){
    vector<int>even, odd;
    for(int i=0;i<arr.size();i++){
        if(arr[i]%2==0){
            even.push_back(arr[i]);
        }
        else{
            odd.push_back(arr[i]);
        }
    }
    cout<<"even:";
    for(int i=0;i<even.size();i++){
        cout<<even[i]<<' ';
    }
    cout<<"\n";
    cout<<"odd:";
    for(int i=0;i<odd.size();i++){
        cout<<odd[i]<<' ';
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    cout<<"\nsorted even:";
    for(int i=0;i<even.size();i++){
        cout<<even[i]<<' ';
    }
    cout<<"\n";
    cout<<"sorted odd:";
    for(int i=0;i<odd.size();i++){
        cout<<odd[i]<<' ';
    }
    arr.clear();
    arr.insert(arr.end(), even.begin(), even.end());
    arr.insert(arr.end(), odd.begin(), odd.end());
    cout<<"\n";
    cout<<"final array with even on left side and odd on right side:";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<' ';
    }
    return 1;
}
int main(){
    vector<int> arr={1,12,3,4,5,6};
    rightLeft(arr);
    return 0;
}