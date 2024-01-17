#include <iostream>
#include<string>
using namespace std;
class car{
   public:
       string name;
       int *no;
       float price;
   public:
      car(string name,int *no,float price){
         this->name = name;
         this->no = no;
         this->price = price;
      }
      void print(){
        cout<<name<<no<<price<<endl;
      }
};
// directly point to the address so changes might affect the org
class shalllow_copy{
   public:
       int *a;
       shalllow_copy(int a){
           this->a = new int(a);
       }
       shalllow_copy(shalllow_copy &s){
           cout<<"rr"<<s.a<<endl;
           this->a = s.a;
       }
};
// it creates a new memory and store the value
class deep_copy{
  public:
      int *a;
      deep_copy(int a){
        this->a = new int(a);
      }
      deep_copy(deep_copy &s){
        cout<<"tt"<<s.a<<endl;
        this->a = new int(*s.a);
      }
};

int main()
{
    shalllow_copy s1(10);
    shalllow_copy s2 = s1;
    *s2.a = 20;
    cout<<*s1.a <<*s2.a<<endl;
    deep_copy d1(20);
    deep_copy d2 = d1;
    *d2.a = 30;
    cout<<*d1.a<<*d2.a<<endl;

    return 0;
}
