#include <iostream>
using namespace std;

int main() {
int main(){
    int arr[5];
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++){
        cin>>arr[i];

    }
    for(int i = 0; i< size; i++){
        cout<<arr[i]*arr[i]<<" ";

    }
}
    return 0;
}
