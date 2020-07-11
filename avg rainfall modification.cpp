#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main() {


    string month1, month2, month3;

    int rainAmount1, rainAmount2, rainAmount3;

    float avgRain;




    cout << "Enter 1st month name:"<<endl;
    cin >> month1;

    cout << "Enter rain amount in inches for " << month1 << endl;
    cin >> rainAmount1;

    cout << "Enter 2nd month name:"<<endl;
    cin >> month2;

    cout << "Enter rain amount in inches for " << month2 << endl;
    cin >> rainAmount2;

    cout << "Enter 3rd month name:" << endl;
    cin >> month3;

    cout << "Enter rain amount in inches for " << month3 << endl;
    cin >> rainAmount3;

    fstream outputFile;
    outputFile.open("rainavg.txt");

    outputFile <<"Month1:"<<month1<<endl;
    outputFile <<"Rain Amount1:"<<rainAmount1<<endl;
    outputFile <<"Month2:"<<month2<<endl;
    outputFile <<"Rain Amount2:"<<rainAmount2<<endl;
    outputFile <<"Month3:"<<month3<<endl;
    outputFile <<"Rain AMount3:"<<rainAmount3<<endl;
    outputFile <<"Avg Rain"<<avgRain<<endl;


   cout << "Saved to file"<<endl;

    ifstream inFile;
    inFile.open("rainavg.txt");

    inFile >> month1;
    inFile >> rainAmount1;
    inFile >> month2;
    inFile >> rainAmount2;
    inFile >> month3;
    inFile >> rainAmount3;

    avgRain = (rainAmount1 + rainAmount2 + rainAmount3) / 3;

    cout <<showpoint << "The average rainfall for " << month1 << " "<< month2 << " and " << month3 << " is " << avgRain << " inches.";
    return 0;
}