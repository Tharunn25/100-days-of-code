//day 12 out of 100
#include <iostream>

using namespace std;

class Time{
    private:
    int hours;
    int minutes;
    
    public:
    Time(int h,int m){
        hours=h;
        minutes=m;
    }
    void operator ++(){
        hours ++;
    }
    void operator++(int){
        hours ++;
    }
    void displaytime(){
        cout<<hours<<":"<<minutes;
    }
};

int main()
{
    Time t1(6,30);
    ++t1;
    t1++;
    ++t1;
    t1.displaytime();

    return 0;
}
