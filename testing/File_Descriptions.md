## This file gives you description of every file present inside testing folder 

### brute_test.cpp

This file contains a incorrect (your code that you want to test against someone's code) or brute force based code. Please note this thing carefully file format should be 
exactly like this as shown below:

```
#include "h1.h"
_s

_1 // You can use _1 if you have no test cases I mean you have to run your code just for one sample case otherwise _2 that means you have one or more test cases to be tested which is defined at first line of ip.txt file.
```

While writing your code don't include ```main``` or any header files as this all has been done inside ```h1.h``` header file, also note it carefully that on expanding 
this code it will look like:

```
#include "h1.h"
void solve()
{

}
int main()
{
solve();
// some code snippet (leave it it is just used for)
}
```

So when you are writing any piece of code between ```_s``` and ```_1``` basically you are writting it inside the ```solve()``` function as per definitions of ```#define```
