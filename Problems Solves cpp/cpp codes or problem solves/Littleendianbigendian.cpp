#include<bits/stdc++.h>
using namespace std;

void swp(char &a,char &b){
a=a^b;
b=a^b;
a=a^b;

}
int main(){
int n,reverse;
while(cin>>n){

reverse =n;
char* bits =(char*) &reverse;


swp(bits[0],bits[3]);
swp(bits[1],bits[2]);


cout<<n<<" converts to "<<reverse<<endl;
}

return 0;
}
