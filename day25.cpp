//day 25 out of 100

#include <iostream>
#include <string>

using namespace std;

int main()
{
    char line[100];
    
    int constant,vowel,digits,space;
    
    constant=vowel=digits=space=0;
    
    cout<<"Enter a line : ";
    cin.getline(line,100);
    
    for(int i =0;line[i]!= '\0';++i){
        if(line[i]=='a' || line[i]=='e'|| line[i]=='i'||
           line[i]=='o'|| line[i]=='u'|| line[i]=='A'||
           line[i]=='E'|| line[i]=='I'|| line[i]=='O'|| line[i]=='U')
           {
               ++vowel;
         }
         
         else if(line[i]>='0' && line[i]<='9')
         {
             ++digits;
         }
         else if(line[i]=' ')
         {
             ++space;
         }
         else if((line[i]>='a'&& line[i]<='z')||(line[i]>='A'&&line[i]<='Z'))
         {
             ++constant;
         }
        
    }
    
    cout<<"vowels:"<<vowel<<endl;
    cout<<"digits:"<<digits<<endl;
    cout<<"constant:"<<constant<<endl;
    cout<<"space:"<<space<<endl;

    return 0;
}
