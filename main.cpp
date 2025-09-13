#include "iostream"
#include "string"
#include "ans/ans.h"
// #include "my_pow/pow.h"
using namespace std;



int main(){
    string input;
    cout << "Input number: ";
    cin >> input;
    
    cout << "Your number: " << input << endl;
    cout << "Your number in 10 system: " << ans(input) << endl;
    return 0;
}