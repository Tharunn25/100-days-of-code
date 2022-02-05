//day 8 out of 100
#include <iostream>
using namespace std;

class square{
    public:
    int length;
    int breadth;
    int width;
    
    void area(int length,int breadth){
        cout<<"the area of the square is : "<<length*breadth<<endl;
    }
    void volume(int length,int breadth, int width){
        cout<<"the volume of the square is : "<<length*breadth*width;
    }
};

int main(){
    
    square s1;
    s1.area(10,20);
    s1.volume(30,70,50);
    
    return 0;
    
}
