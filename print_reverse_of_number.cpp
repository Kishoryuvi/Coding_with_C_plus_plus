#include <iostream>
using namespace std;

int reverse_number(int n){
    int reverse = 0;
    while(n>0){
        int a = n%10;
        reverse = reverse*10+a;
        n = n/10;
    }
    return reverse;
}

int main() {
    
    int n;
    cin>>n;
    cout<<reverse_number(n);
    
}
