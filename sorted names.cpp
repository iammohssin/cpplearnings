#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int size = 30;
    char name1[size], name2[size], name3[size];

    cout<< "-------Sorted Names-------\n";
    cout<<"Enter 1st name:";
    cin >>name1;
    cout <<"Enter 2nd name:";
    cin >>name2;
    cout <<"Enter 3rd name:";
    cin>> name3;

    if ((strcmp(name1 , name2) <0) && (strcmp( name2 , name3) < 0))
        cout <<name1 <<"\n" <<name2 <<"\n" <<name3<<endl;

    else if ((strcmp(name2 ,name3)<0)&& (strcmp(name3 , name1)<0))
        cout << name2<< "\n"<< name3 <<"\n"<<name1<<endl;

    else if ((strcmp(name3, name1)<0)&&(strcmp(name1, name2)<0))
        cout << name3 <<"\n"<< name1<<"\n"<<name2<<endl;



    return 0;
}