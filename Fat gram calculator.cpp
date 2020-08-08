#include <iostream>
using namespace std;

int main(){
    int calories, fatInGrams, caloriesFromFat, cloriesPersentage;
    int oneGramFat = 9;
    cout<<"Enter Calories:";
    cin>> calories;
    cout<<"Enter Fat in Grams:";
    cin >>fatInGrams;
    if(calories <=0 && fatInGrams <=0 || calories > fatInGrams) {
        cout << "Error! Invalid input" << endl;
    }
    else {
        caloriesFromFat = fatInGrams * oneGramFat;
        cloriesPersentage = caloriesFromFat / calories;
        cout << cloriesPersentage << "% calories come from your food." << endl;
    }
    if(cloriesPersentage <=30){
        cout <<"Your food is low in fat."<<endl;
    }

    return 0;
}