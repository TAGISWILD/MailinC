#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "C:\Users\Atharva Chauhan\Desktop\Mail.h"
int main()
{
	Init(); //Remove or comment this line after first successful run
	fillDat(); //Remove or comment this line after Second successful run
	//AFter Second run clear everything from main method and use SendMail(0);
	SendMail(0);
}
