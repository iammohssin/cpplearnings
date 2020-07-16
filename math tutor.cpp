#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int a = rand()% 1000;
    int b = rand()% 2000;
    int c;
    int ans;
    cout <<a<<" + "<<b<< " = \n";
    cout <<"Enter answer:\n";
    cin >> ans;
    c = a+b;
    if(ans == c)
        cout <<"Congratulation ans is correct.";
    else
        cout <<"Wrong ans restart program and try again!";

    return 0;
}