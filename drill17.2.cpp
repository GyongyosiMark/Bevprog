#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void print_vector(ostream& os, vector<int> v) {
    for (int i = 0; i<v.size(); ++i)
        os << v[i] << '\n';
}

int main()
{
int* p1= new int{7};

int x=*p1;
cout<<p1<<'\n';
cout<<x<<'\n';

int* p2=new int[7]{1,2,4,8,16,32,64};
cout<<p2<<'\n';
for(int i=0; i<7; i++)
      cout<<p2[i]<<" ";
      cout<<'\n';

int* p3=p2;
p1=p2;
p3=p2;
cout<<p1<<'\n';
int b1=*p1;
cout<<b1<<'\n';

cout<<p2<<'\n';
int b2=*p2;
cout<<b2<<'\n';

delete[]p1;
delete[]p2;
delete[]p3;

int* p11=new int[10]{1,2,4,8,16,32,64,128,256,512};
int* p22=new int[10];

for(int i=0; i<10; i++)
      p22[i]=p11[i];

vector<int>v1;
for(int i=0; i<v1.size(); i++)
    {v1.push_back(pow(2,i));
    cout<< v1[i];}

vector <int> v2;

for (int i=0; i<v1.size(); i++)
      v2[i]=v1[i];
print_vector(cout,v1);
print_vector(cout,v2);




}
