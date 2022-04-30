// this algorithm is bit tricky, dry run the algrorhtim for better understandings

#include <iostream>

using namespace std;

int main()
{
      /*n-given number
       rem- remainder
       reverse - the reverse of the number*/
    int n,num,rem,reverse=0;
    
    n=555;
    
    // we are making equal the given number and output number after the loop
    
    n=num;
    
    // when n is not equal to zero at last step n will become zero
    
    while(n!=0){
        
        // to find the remainder of the given number we using modulo operator
        //and getting the remainder for ex: 121 % 10= 1 
        
        rem = n%10;
        
        //previously we have declared the reverse as o short
        // reverse= 0*10+1
        // for the second traversal the reverse will become 1
        
        reverse = reverse*10+rem;
        
        // atlast we are dividing the n by 10 
        // 121 / 10 = 12,
        
        n=n/10;
    }
    if(n==reverse)
    cout<<"the given number is palindrom";
    else
    cout<<"the given number is not a palindrom";
    return 0;
}

/* clear dry run

ex:245

 step 1
 
(n!=0)                   245 != 0

rem=n%10                 rem=245%10 = 5

reverse=reverse*10+rem   reverse=0(predeclared)*10+rem = 0+5=5(reverse value updated)

n=n/10                   245/10 = 24 (new n value)

step 2

ex:24
 
(n!=0)                   24 != 0

rem=n%10                 rem=24%10 = 4

reverse=reverse*10+rem   reverse=5(reverse value from previous step)*10+4 = 54

n=n/10                   24/10 = 2 (new n value)

step 3

ex:2
 
(n!=0)                   2 != 0

rem=n%10                 rem=2%10 = 2

reverse=reverse*10+rem   reverse=54(reverse value from previous step)*10+2= 542

n=n/10                   2/10 = 0.2 (loop will be terminated here)

so the reverse of the given number is 245 -- 542
*/

