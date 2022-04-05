// NOTE this file show you how one can replicate one code into my templaate 

#include "h1.h" //manadatory don't remove it !!

int summ(int n)
    {
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }


_s //manadatory don't remove it !!

    int n1;
  cin>>n1;
  int s=summ(n1);
  if(s%2==0)
  {
    if(summ(n1+1)%2==0)
      cout<<n1+2 lc; //notice we have added lc which is defined as <<"\n" in ```h1.h``` we need to do because user has putted ```endl``` after callling solve function 
    else
      cout<<n1+1 lc; //notice we have added lc which is defined as <<"\n" in ```h1.h``` we need to do because user has putted ```endl``` after callling solve function 
  } 
  else
  {
    if(summ(n1+1)%2==0)
      cout<<n1+1 lc;  //notice we have added lc which is defined as <<"\n" in ```h1.h``` we need to do because user has putted ```endl``` after callling solve function 
    else
      cout<<n1+2 lc;  //notice we have added lc which is defined as <<"\n" in ```h1.h``` we need to do because user has putted ```endl``` after callling solve function 
  }

_2 //manadatory don't remove it !! 
    
  //notice we have used _2 instead of _1 since we have one or more test cases to be tested 
