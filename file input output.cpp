#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main() {

    ofstream outputFile;
    outputFile.open("test.txt");

    double a;

    cout <<"Enter numbers to save in File";
    cin >> a;

    outputFile << a;


    cout<< "Changes Done!"<<endl;

    ifstream inFile;
    inFile.open("test.txt");



    inFile >> a;
    cout << a;

    
    return 0;
}