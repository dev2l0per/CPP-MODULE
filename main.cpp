#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string str;
    int istr = sizeof(str);
    cout << "Empty string is " << istr << " bytes long" << endl;
    string str2(1, 'a');
    istr = sizeof(str2);
    cout << "1 character string is " << istr << " bytes long" << endl;
    string str3("the quick brown fox");
    istr = sizeof(str3);
    cout << "the quick brown fox string is " << istr << " bytes long" << endl;
    istr = sizeof(str3[1]);
    cout << "sizeof str3[1] is " << istr << " bytes long" << endl;
 
    cout << "Hello world!" << endl;
    return 0;
}