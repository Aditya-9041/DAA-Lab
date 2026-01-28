#include<iostream>
using namespace std;

int BinarySreach(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid = (s+e)/2;
    while(s<=e){
        if(arr[mid] == key){
            return key;
        }
        else if(key>arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid-1;
        }
        mid = (s+e)/2;
    }
    return -1;
    
}


int main(){
    int arr[10] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = 10;
    int key;
    cout<<"Enter the key to be searched "<<endl;
    cin>>key;
    int ans = BinarySreach(arr,n,key);
    if(ans == -1){
        cout<<"Key not found "<<endl;
    }
    else{
        cout<<"Key found "<<ans<<endl;
    }

}
