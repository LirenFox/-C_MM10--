#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double C, F;
    cin >> C;
    cout << fixed << setprecision(1) << C*9/5+32 << endl;
    return 0;
}
