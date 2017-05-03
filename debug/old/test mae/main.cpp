#include <iterator>
#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>
#include <stdlib.h>
//#include "../MURPHY__MASTER_PI/Period.h"

#include "test.h"

// mettre ../../../../../usr/lib/libwiringPi.so;
using namespace std;

int main()
{
    test mae;
    mae.create();
    mae.stratEnleve();
    mae.evitement();
    mae.trans_etat();


    //mae.
    //mae.create test_State.Evitement_State;




    /*
    Period period(90000);

    while(!period.is_over())
    {
        cout << period.time_elapsed() << endl;
        delay(1000);
    }
    /*
    cout << "Hello world!" << endl;

    string s;
    s = "# START IN";


    cout<<s<<endl;

    if(s.find("START IN") != string::npos)
    {
        cout<<"founded"<<endl;
    }

    string s;
    s = "# COORD -10 -41 08";
    string ordre;
    string name;
    string x;
    string y;
    string cap;
    istringstream stream;


    stream.str(s);

    stream>> ordre >> name >> x >> y >> cap;
    //stream >> x >> y >> cap;
    //atoi(x.c_str())


    cout<<"x = " << atoi(x.c_str()) <<endl;
    cout<<"y = " << atoi(y.c_str()) <<endl;
    cout<<"cap = " << atoi(cap.c_str()) <<endl;
    //stream>>s;
*/


    return 0;
}
