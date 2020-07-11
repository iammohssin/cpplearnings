#include <iostream>

using namespace std;

int main() {
    const int ONE_ACRE_OF_LAND = 43560;
    int num_of_acre = 389767,
            totalAcre = num_of_acre / ONE_ACRE_OF_LAND;
    
    cout << "There are approximately " << totalAcre << " acres ";
    return 0;
}
