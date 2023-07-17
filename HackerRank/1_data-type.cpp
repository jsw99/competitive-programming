#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int x;
    double y;
    string z;

    cin >> x >> y;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin >> ws, z);

    cout << x+i << endl;
    cout << fixed << setprecision(1) << y+4.0 << endl;
    cout << s << z << endl;
    //cout << s << endl;


    return 0;
}