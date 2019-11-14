#include <iostream>
#include <vector>
using namespace std;


template<typename T>
 struct S {
//private: T val;
      public:
      T& get();
        T& get() const;
      T& set();
         void set(const T& ertek);
     T& operator=(const T& ertek);
      T val;
    S(T val){this->val = val;}
    void read_val(T& v);



 };



template<typename T> T& S<T> :: get()
{
    return val;
}


template <typename T> T& S<T> ::operator=(const T& ertek)
{
      val=ertek;
      return val;
}

template <typename T> T& S<T> ::get() const{return val;}

template<typename T>void S<T>::set(const T& ertek)
 {
val = ertek;
return val;
 }

template<typename T>void read_val(T& v)
{
    //cin>>v; //?
}












int main()
{
 S<int> integer(69420);
    S<char> character('c');
    S<double> floating(69.420);
    S<string> web("hello");
    vector <int> v;
    for (int i=0;i<10;i++) v.push_back(i);
    S< vector<int> > vec(v);

//for (int i=0;i<10;i++) cout<<vec.val[i]<<" ";
//cout<<integer.val;
//cout<<character.val; stb ilyen modon lehet kiirni az osszes tobbi s tipusu valtozot

  //for (int i=0;i<10;i++) cout<<vec.get()[i]<<" ";
  //cout<<integer.get(); //stb


   read_val(integer);
    read_val(character);
    read_val(floating);
    read_val(web);
    read_val(vec);

//kiiras ugyanugy get()-el
    return 0;
}
