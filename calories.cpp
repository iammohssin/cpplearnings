#include <iostream>
#include <iomanip>
using namespace std;

int main() {

       const int oneCookieCalories = 10 ;
       const int cookiesPerBag = 30 ;
       float cookiesBags;
       float eat_Cookies;
       float caloriesYouBurned;

       cout << "Enter how much cookies you ate:";
       cin >>eat_Cookies;
       cookiesBags = eat_Cookies / cookiesPerBag;
       caloriesYouBurned = eat_Cookies * oneCookieCalories;
       cout <<"you burned "<<caloriesYouBurned<<" Calories"<< endl;
       cout <<setprecision(2)<<"You ate "<<cookiesBags<<" Cookies bags" <<endl;

    return 0;

}
