#include <iostream>
#include <cmath>

using namespace std;

int main()

{double a ,sm,bg;
a=1;
sm=99999;
bg=1;


while (cin>>a)
{
cout << a;
if (a<sm)
{sm=a;
cout<< "smallest so far"<< endl;}

if (a>bg)
{bg=a;
 cout<< "biggest so far"<< endl;}
}
return 0;


}
