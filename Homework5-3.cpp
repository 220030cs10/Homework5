#include <iostream>
using namespace std;

bool Tan(float a, float b, float c){
    if(a+b>=c || b+c >=a || c+a >= b){
        return true;
    }else{
        return false;
    }
}

int main() {
int a, b, c;
cout<<"enter numbers:";
cin>>a>>b>>c;
if(Tan(a, b, c)) {
    cout<<"Triangle can't be formed with these sides";

}
    return 0;
}
