#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    for(int p = 0;p<n-1;p++){
        int minindex = p;
        for(int q = p+1;q<n;q++){
            if(arr[q]<arr[minindex]){
                minindex = q;
            }
        }
        swap(arr[minindex],arr[p]);
    }
for(int r = 0;r<n;r++){
    cout<<arr[r];
}
return 0;
}
