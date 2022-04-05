# Powerful tool for stress testing of test cases in competitive programming and software development 

This tool has been developed to do the stress testing of test cases and compare the differences of outputs produced by two ```.cpp``` files on the website
https://text-compare.com/, using just one command.


## Where we can use it ?

1. Suppose you have written a code using brute force approach which is correct and you have also written a optimal solution which may or may not be 100% correct so what we want is to compare it with different random test cases and quickly observe the differences if any. Hence this tool aids you easily and help you to do faster debugging.
2. If you are into competitive programming of course we need to debug our solution while we are up solving the problems that we failed to solve during contest, hence one can copy some correct code of some user from the contest website let's say it is a optimal code and our incorrect code that was giving us WA as brute code. Now again we have two ```.cpp``` codes whose output we want to compare which can be done via this tool.
3. One can also use this tool during software testing and development.


_Imagine if you don't have this tool then manually you need to run two ```.cpp``` codes everytime and then supply inputs on the terminal by typing it. So just think when you are done doing this all you need to observe both o/p files carefully to notice any differences. Clearly this is really hectic and obviously there are chances that we may miss some differences and ultimately ending up getting tierd._


## How to use it ?

It's very simple to use however little bit complicated to structure the files but if you follow line by line you won't miss it.

Somewhere put the testing folder with it all files inside it and copy the path of testing folder and make two changes as shown 
```h1.h``` (can be found inside testing folder) for ```#define _2 and #define _1``` set path to your path. 
```chk.py``` (can be found inside root directory) here open it and make the change at ```line 4``` by replacing the path 

Now move ```chk.py``` to the default location from where you can type ```python``` commands using a cmd, In my case it was same as to that of cmd default location you can open cmd terminal and see it and check it as shown:

![image](https://user-images.githubusercontent.com/63403330/161602480-9f493b0a-1074-437d-b993-80260d56486e.png)

In my case I have moved ```chk.py``` to  ```C:\Users\1kusp```

### **You are done !! now the structuring of file has been set and tool is ready to be used.**

I will demonstrate it for a codechef problem:

https://www.codechef.com/COOK140B/problems/DIGSMPAR

Suppose your solution: https://www.codechef.com/viewsolution/61889412 (let's say you want to test your code aganist someone's code who has written it correct; you know your code is not correct and you just want to know for which test cases it fails since you have manually tried too much for debugging and now you want some automation)

Suppose someone's solution: https://www.codechef.com/viewsolution/61887842 (you know this is optimal and 100% correct)

Now we need to modify three files as shown for above problem inside the testing directory

##### brute_test.cpp : https://github.com/kuspia/Stress-testing/blob/main/example_brute.cpp
##### optimal_test.cpp : https://github.com/kuspia/Stress-testing/blob/main/example_optimal.cpp
##### test_case_generator.cpp : https://github.com/kuspia/Stress-testing/blob/main/example_test_case_generator.cpp

### **You are done !! now you are one click away**

> Run ```test_case_generator.cpp``` to generate o/p file named as ```in.txt``` or you may manually put test cases if you wish or you may copy the tcs given somewhere
> 
> Open cmd and type the magical commmand 

# ```python chk.py```

##### _Just wait and see you will see a automated chrome window will open that will open a website and will display the differences after few seconds._

