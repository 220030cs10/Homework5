#include <iostream>
using namespace std;

int main() {
int arr[7];
int size = sizeof(arr)/sizeof(arr[0]);
for(int i = 0; i < size; i++){
    cin>>arr[i];
}
int num = 0;
for(int i = 0; i < size; i++){
    num + arr[i];

}
cout<<num<<endl;

    return 0;
}
