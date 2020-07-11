#include <iostream>
#include <iomanip>

using namespace std;
int main() {

    float classA, classB, classC;
    int soldClassA, soldClassB, soldClassC;
    classA=15, classB=12, classC=9;
    cout << "How many Class A tickets sold?"<<endl;
    cin >>soldClassA;
    cout << "How many Class B tickets sold?"<<endl;
    cin >>soldClassB;
    cout << "How many Class C tickets sold?"<<endl;
    cin >>soldClassC;
    int classAIncome, classBIncome, classCIncome;
    classAIncome = classA * soldClassA;
    classBIncome = classB * soldClassB;
    classCIncome = classC * soldClassC;
    float totalIncome = classAIncome+classBIncome+classCIncome;
    cout <<setprecision(6)<<showpoint<<"Total income form all sold tickets is "<<totalIncome<<"$"<<endl;




    return 0;
}
