#include <iostream>
using namespace std;

int main(){
    int num;
    int total = 0;

    cout <<"Enter a number to get sum:";
    cin >>num;

    for (int i = 0; i <=num ; i++) {
        total += i;
        cout <<total<<endl;
    }
    return 0;
}