# Powerful tool for stress testing of test cases in competitive programming and software development 

This tool has been developed to do the stress testing of test cases and compare the differences of outputs produced by two ```.cpp``` files on the website
https://text-compare.com/, using just one command.


## Where we can use it ?

1. Suppose you have written a code using brute force approach which is correct and you have also written a optimal solution which may or may not be 100% correct so what we want is to compare it with different random test cases and quickly observe the differences if any. Hence this tool aids you easily and help you to do faster debugging.
2. If you are into competitive programming of course we need to debug our solution while we are up solving the problems that we failed to solve during contest, hence one copy some correct code of some user from the contest website let's say it is optimal and our incorrect code that was giving us WA as brute. Now again we have two ```.cpp``` codes whose output we want to compare which can be done via this tool.
3. One can also use this tool during software testing and development.


_Imagine if you don't have this tool then manually you need to run two ```.cpp``` codes everytime and then supply inputs on the terminal by typing it. So just think when you are done doing this all you need to observe both o/p files carefully to notice any differences. Clearly this is really hectic and obviously there are chances that we may miss some differences and ultimately ending up getting tierd._


## How to use it ?

It's very simple to use however little bit complicated to structure the files but if you follow line by line you won't miss it.

Somewhere put the testing folder with it all files inside it and copy the path of testing folder and make two changes as shown 
```h1.h``` (can be found inside testing folder) for ```#define _2 and #define _1``` set path to your path. 
```chk.py``` (can be found inside root directory) here open it and make the change at ```line 4``` by replacing the path 

Now move ```chk.py``` to the default location of your cmd path, you can open cmd terminal and see it as shown below
![image](https://user-images.githubusercontent.com/63403330/161601893-6db3cc77-3c77-448e-8fad-4addfa92a74c.png) 


