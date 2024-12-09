#include <typeinfo>

#include <iostream>
#include <string>
#include <vector>
using namespace std;

double gdp(const Countries& p, char c, double d);

int main()
{
    int n;
    cin >> n;
    Countries p(n);
    for (int i = 0; i < n; ++i) {
        int np;
        cin >> p[i].name >> p[i].capital >> np;
        p[i].provs = vector<Province>(np);
        for (int j = 0; j < np; ++j) {
            cin >> p[i].provs[j].name >> p[i].provs[j].capital >> p[i].provs[j].population >> p[i].provs[j].area >> p[i].provs[j].gdp;
        }
    }
    cout << gdp(p, 'A', 10) << endl;
    cout << gdp(p, 'A', 20) << endl;
    cout << gdp(p, 'A', 30) << endl;
    cout << gdp(p, 'A', 40) << endl;
    cout << gdp(p, 'E', 10) << endl;
    cout << gdp(p, 'E', 20) << endl;
    cout << gdp(p, 'E', 30) << endl;
    cout << gdp(p, 'E', 40) << endl;
    cout << gdp(p, 'C', 40) << endl;

    return 0;
}
