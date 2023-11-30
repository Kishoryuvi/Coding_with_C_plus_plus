#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int sum = 0;
    int temp = n;
    while(n>0){
        int a = n%10;
        sum += a*a*a;
        n=n/10;
        
    }
    
    if(sum==temp){
        cout<<"true";
    }else{
        cout<<"false";
    }
}
