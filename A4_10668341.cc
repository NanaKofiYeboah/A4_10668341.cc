#include <iostream>

using namespace std;

int HCF(int x, int y)
{ if(y!=0)

 return HCF(y,x%y);

 else

 return x;
}


int main(){


int x,y;

cout<<"Please enter first positive interger:x"<<endl;
cin>>x;
cout<<"Please enter second positive interger:y"<<endl;
cin>>y;
cout<<"HCF of"<<x<<"and"<<y<<"is"<<HCF(x ,y)<<endl;

return 0;


}













