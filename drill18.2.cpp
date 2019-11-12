#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
vector <int> gv{1,2,4,8,16,32,64,128,256,512};
void f(vector<int>asd)
 {vector<int>lv;
 lv=asd;
 for(int i=0; i<lv.size(); i++)
      cout<<lv[i]<<'\n';

      vector<int>lv2(asd.begin(), asd.end());
for(int i=0; i<lv2.size(); i++)
      cout<<lv2[i]<<'\n';


 }

int main()
{
//f(gv);
vector <int> vv(10);
vv[0]=1;
for(int i=1; i<10; i++)
   {vv[i]=vv[i-1]*(i+1);

   }
  for(int i=0; i<10; i++)
      cout<<vv[i]<<' ';
  cout<<'\n';
   f(vv);

return 0;
}
