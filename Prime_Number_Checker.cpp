#include <iostream>
using namespace std;

int prime(int num);

int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    int c = prime(x);
    
    if(c == 1){
        cout << x << ", is not prime.\n";
    }
    else if(c == 0){
        cout << x << ", is prime.\n";
    }
return 0;
}

int prime(int num){
    int checker = 0; //0 = prime || 1 = not prime
    if(num <= 1){
        checker = 1;
    }
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            checker = 1;
        }
    }
    return checker;
}
