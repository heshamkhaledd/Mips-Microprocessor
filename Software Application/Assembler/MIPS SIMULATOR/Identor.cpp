#include <string>
#include <iostream>

using namespace std;

int main()
{
    freopen("bin.txt", "r", stdin);
    freopen("bin_out.txt", "w", stdout);
    string str;
    // getline(cin, str);

    while (getline(cin, str))
    {
        cout << "\"";
        cout << str;
        cout << "\",\n";
    }
}