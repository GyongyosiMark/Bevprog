#include <iostream>

using namespace std;

int main()
{
string firstname;
string friendname;
int age;
char friend_sex;
friend_sex='0';
cout << "Enter the name of the person you want to write to";
getline(cin,firstname);
cout << "Dear  " << firstname << "," <<endl;
cout << "How are you? I am fine. I miss you."<< endl;
 cout<< "Barat neve:";
 getline(cin,friendname);
 cout << "Irjon 'm'-et ha a ferfi es 'f'-et ha no" << endl;
  cin >> friend_sex;
        if (friend_sex='m')
        {cout << "If you see "<< friendname << " please ask her to call me."<< endl;}
        else {
        cout <<  "If you see " << friendname << " please ask her to call me." <<endl;
            }
cout << "Barat eletkora" << endl;
cin >> age;
if (age>0 | age<110)
 else {cout << "I hear you just had a birthday and you are " << age << " years old.";}
if (age<12)
    {cout<<  "Next year you will be " << age++ << endl;}
if (age=17)
  {cout << "Next year you will be able to vote."<< endl;
  }
if (age=70)
{cout << "I hope you are enjoying retirement."<<endl;
}
return 0;
}
