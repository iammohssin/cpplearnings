#include <iostream>

using namespace std;

int main() {
    int purchasedBooks;
    cout<< "How many books you purchased?"<<endl;
    cin >> purchasedBooks;

    if (purchasedBooks < 0){
        cout<<"Invalid input restart program and try again!"<<endl;
    }
    else if(purchasedBooks == 0){
        cout <<" You did'nt purchased any book."<<endl;
    }
    else if(purchasedBooks == 1){
        cout <<"On purchase of "<<purchasedBooks<<" you earned 5 Points."<<endl;
    }
    else if(purchasedBooks == 2){
        cout <<"On purchase of "<<purchasedBooks<<" you earned 15 Points."<<endl;
    }
    else if(purchasedBooks == 3){
        cout <<"On purchase of "<<purchasedBooks<<" you earned 30 Points."<<endl;
    }
    else if(purchasedBooks >= 4){
        cout <<"On purchase of "<<purchasedBooks<<" you earned 60 Points."<<endl;
    }

    return 0;
    }