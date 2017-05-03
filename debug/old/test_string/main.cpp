#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = " ginal 0.03";
    const char * c = s.c_str();
    cout << "string :  " << s << endl;
    cout << "char* :  " << c << endl;

    return 0;
}
