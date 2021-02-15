#include <iostream>
using namespace std;
int main()
{
     cout << "Enter two numbers:" << endl;
     int v1, v2;
     cin >> v1 >> v2;
     int lower, upper;
     if(v1 <= v2)
     {
     	lower = v1;
     	upper = v2;
     }
     else
     {
     	lower = v2;
     	upper = v1;
     }
     int sum = 0;
     for(int val = lower; val <= upper; ++val)
         sum += val;
     cout << "Sum of " << lower << " to " << upper << " inclusive is " << sum << endl;
     return 0;
}