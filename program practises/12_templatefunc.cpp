#include<iostream>
using namespace std;
template <class T>
class Arithmatic{
    private:
    T a;
    T b:
    public:
   T Arithmatic(T a,T b);
   T add();
   T sub();

};
template<class T>
Arithmatic<T>::Arithmatic(T a,T b){
    this->a=a;
    this->b=b;
}
template<class T>
T Arithmatic<T>::add(){
 T c;
 c=a+b;
 return c;
}
template<class T>
T Arithmatic<T>::sub(){
    T c;
    c=a-b;
    return c;
}
int main(){
Arithmatic<int>ar(10,5);
cout<<ar.add();
Arithmatic<float>ar1(1.5,1.2);
cout<<ar1.add();
return 0;
}