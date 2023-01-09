# Welcome To MailInC
Here you can see how to send mails form C language code
## Step 1
Clone or Download the repo
## Step 2 
If you have downloaded the zip, then extract it
and if you have cloned then open the folder
## Step 3
Now you will find a file named `Mail.h` Copy it and paste it into
Your GCC compiler's include folder
Ex. If you are using Dev-Cpp Then goto `"C:\Program Files(x86)\Dev-Cpp\MinGW64\x86_64-w64-mingw32\include"` and paste it.
## Step 4
Now just open the file `Example.cpp`
And Run it.
## Step 5
enable 2 step authentication in gmail form which you will be sending email
## Step 6
below 2 step authentication you will se app password go there 
i. Select app.
ii.Select custom and enter "SMTP" (you can enter whatever you want).
## Step 7
press generate
now you will see a password enter that password in PassUR.txt
you are good to go now.

---
## Remember: When You Are Including This  Library, Before It You Must Also Include stdio.h, stdlib.h and conio.h then Mail.h.
The First Few Lines Of Your Code Must Be

`#include <stdio.h>`

`#include <stdlib.h>`

`#include <Mail.h>`

---
This library has 3 Methods
1) Init();
2) fillDat();
3) SendMail();
___
### First of all make sure that you have turned on less secure app access on your account, [click here](https://myaccount.google.com/lesssecureapps) to turn it on.
### We must run *Init()* while starting the code, means at the time when you start to write down the code.
### We must always run the *fillDat()* after running *Init()* to avoid many errors.
### We must run *SendMail()* Whenever we want to send mail while executing.
### We need python so download it from [here](https://www.python.org/ftp/python/3.8.6/python-3.8.6-amd64.exe)
___
Queries? Watch our [video tutorial](https://www.youtube.com/c/aysoat)
> Remember, we make use of python in background to make process easier
