#include <iostream>
#include <array>
using namespace std;

int main()
{
string egyseg;
double a,ln=0,lk=0,db=0,sum=0;
 vector <double> v;
 cout << "szam es mertekegyseg:"<< endl;
  while (cin >> a >> egyseg)

  {if (ln==0){ln=a;}
   if (lk==0){lk=a;}
        if (egyseg=='cm'){a=a/100; lk=min(lk,a); ln=max(ln,a); sum+=a; db++;};
   else if (egyseg == 'in') {a=(a/100)*2.54; lk=min(lk,a); ln=max(ln,a); sum +=a; db++;}
   else if (egyseg== 'ft') {a=(a/100)*2.54*12; lk=min(lk,a); ln=max(ln,a); sum +=a; db++;}
   else if (egyseg== 'm')  {lk=min(lk,a); ln=max(ln,a); sum+=a;  db++;}
      else {cout<<"nem jo egyseg"<< endl;}
      v.push_back(a);
  }
  cout << "legnagyobb:" << ln<< endl;
  cout << "legkisebb:" << lk<< endl;
  cout << "osszeg" << sum<< endl;
  cout << "elemek szama" << db <<endl;

  sort(v.begin(),v.end());
 for (int i = 0;i<v.size();i++){
   cout<<v[i]<<" ";
    return 0;
}
