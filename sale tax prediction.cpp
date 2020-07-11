#include <iostream>

using namespace std;

int main() {
  float totalsalepersentage , totlesalethisyear;
  cout << "Enter the sale Persentage";
  cin >> totalsalepersentage;
  cout << "Enter Sale of this year";
  cin >> totlesalethisyear;
  float ans = totalsalepersentage/100 * (totlesalethisyear);
  cout << "This Year total  " << ans;
  return 0;
}