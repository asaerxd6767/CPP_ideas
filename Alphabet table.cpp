#include <iostream>
using namespace std;
int main(){
    char ch = 'A';
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j <= 5; j++){

            if(i == 6 && j > 1){
                cout << "#\t";
            }
            else{
            cout << ch << '\t';
            ch++;
            }
        }
        cout << endl;
    }
return 0;
}
/*
Example output:

A       B       C       D       E
F       G       H       I       J
K       L       M       N       O
P       Q       R       S       T
U       V       W       X       Y
Z       #       #       #       #
*/
