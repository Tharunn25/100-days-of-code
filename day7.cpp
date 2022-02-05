
//day 7 out of 100
#include <iostream>

using namespace std;

class Room{
    public:
    double length;
    double breadth;
    double volume;
    
   double calculatearea(){
       return length*breadth;
   }
   double calculatevolume(){
       return length*breadth*volume;
   }
};

int main(){
    Room room1;
    room1.length=12;
    room1.breadth=23;
    room1.volume=45;
    
    cout<<room1.calculatevolume()<<endl;
    cout<<room1.calculatearea()<<endl;
    return 0;
}







