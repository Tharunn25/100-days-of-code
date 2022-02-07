//day 10 out of 100
#include <iostream>
using namespace std;
class value{
   private:
   int num;
   public:
   value(int number){
       num=number;
   }
   void operator ++(){
       ++num;
   }
   void display(){
       cout<<num<<endl;
   }
    
};
int main(){
    value v1(10);
    ++v1;
    v1.display();
    
    return 0;
}
