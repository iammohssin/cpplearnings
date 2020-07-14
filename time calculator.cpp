#include <iostream>

using namespace std;

int main()
{
    int seconds;
    float num_mins;

    cout <<"Enter a number of seconds: ";
    cin >> seconds;

    if (seconds <= 59)
    {
        cout << seconds;
        cout << " is less that 60 seconds." << endl;
    }
    else if (seconds >= 60 && seconds < 3600)
    {
        num_mins = seconds / 60.0;
        cout << num_mins << " minutes in ";
        cout << seconds << " seconds" << endl;
    }
    else if (seconds >= 3600 && seconds < 86400)
    {
        num_mins = seconds / 3600.0;
        cout << num_mins << " hours in ";
        cout << seconds << " seconds" << endl;
    }
    else if (seconds >= 86400)
    {
        num_mins = seconds / 86400.0;
        cout << num_mins << " days in ";
        cout << seconds << " seconds" << endl;
    }

    return 0;
}