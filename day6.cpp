//day 6 out of 100
#include <iostream>
#include <string>
using namespace std;

struct person{
    string name;
    float age;
    int salary;
};

void display(person a){
    cout<<"displaying the iformation of the person "<<endl;
    cout<<"name of the person is : "<<a.name<<endl;
    cout<<"age of the person is : "<<a.age<<endl;
    cout<<"salary of the person is : "<<a.salary<<endl;

}
int main(){
  person a;
  cout<<"enter the name of the person : "<<endl;;
  cin>>a.name;
    cout<<"enter the age  of the person : "<<endl;
    cin>>a.age;
     cout<<"enter the salary of the person : "<<endl;
     cin>>a.salary;
    display (a);
}
