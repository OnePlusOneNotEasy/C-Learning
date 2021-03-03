#include<bitset>
#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::string;
using std::bitset;
using std::endl;

int main()
{
	// string s("hello world");
	// string *sp = &s;
 //    cout << sp << endl;

    // int ival = 1024;
 //    int *pi = 0;
 //    int *pi2 = & ival;
 //    pi = pi2;
 //    cout << pi << ' ' << pi2 << endl;
 //    pi2 = 0;

 //    double obj = 3.14;
 //    double *pd = &obj;
 //    void *pv = &obj;
 //    pv = pd;

 //    cout << *sp << endl;

    // int ival2 = 2048;//reference and pointer
    // int *pi = &ival, *pi2 = &ival2;
    // cout << pi << ' ' << pi2 << endl;
    // pi = pi2;
    // cout << pi << ' ' << pi2 << endl;

    // int &ri = ival, &ri2 = ival2;
    // cout << ri << ' ' << ri2 << endl;
    // ri = ri2;
    // cout << ri << ' ' << ri2 << endl;
    // cout << ival << ' ' << ival2 << endl;

    int ia[] = {0, 2, 4, 6, 8};
    int *ip = ia;
    cout << *(ia + 2) << ' ' << ia[2] << endl;

    return 0;



}