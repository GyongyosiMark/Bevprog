#include <iostream>
#include <cmath>

using namespace std;

int main()

{double a , b, c, n, p;
a=1;
b=1;

while (a != 0)
{cin >> c;
if (c==0)
      break;

a=c;
cin >> c;
b=c;
cout << a << " " << b; } cout << b;
 if (a < b )
      {cout << "the smaller number is " << a << endl;
       cout << "the bigger number is " << b << endl;
      }
 else {cout << "the smaller number is " << b << endl;
       cout << "the bigger number is " << a << endl;
      }
if (a == b) {cout << "equal" << endl;}
n=abs(a)- abs(b);
p=1/100;
if (n < p)
{cout << "almost equal" << endl;

}
}
