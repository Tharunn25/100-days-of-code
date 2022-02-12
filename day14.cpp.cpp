#include <iostream>
#include <string>

using namespace std;

class FullName{
    public:
    string firstname;
    string lastname;
    
    string whole(){
        cout<<"your full name is : "<<firstname<<" "<<lastname;
        return string();
    }
};

int main(){
    FullName f1;
    cout<<"enter your first name : "<<endl;
    cin>>f1.firstname;
    cout<<"enter your last name : "<<endl;
    cin>>f1.lastname;
    
    cout<<f1.whole()<<endl;
   
    return 0;
}







