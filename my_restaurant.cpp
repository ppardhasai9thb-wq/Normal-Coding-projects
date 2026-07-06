
#include<iostream>
using namespace std;
int additem()
{
cout<<"WANT TO ADD THIS ITEM?"<<endl;
int ad;
cout<<"1-->YES"<<endl;
cout<<"0-->NO"<<endl;
cin>>ad;
if(ad==0)
{
return 0;
}
else if(ad==1)
{
return 1;
}
else
{
cout<<"TRY AGAIN"<<endl;
return 1;
}
}
int addmore()
{
int flag2,adm;
cout<<"WANT TO ADD MORE ITEMS?"<<endl;
cout<<"1-->YES"<<endl;
cout<<"0-->NO"<<endl;
cin>>adm;
if(adm==0)
{
flag2=0;
return flag2;
}
else if(adm==1)
{
flag2=1;
return flag2;
}
else
{
flag2=1;
cout<<"TRY AGAIN"<<endl;
return flag2;
}
}
int main()
{
int choice,flag3=1,flag4=1,bill=0;
int ar[6];
while(flag3==1 && flag4==1)
{
cout<<string(30,'=')<<endl;
cout<<"WELCOME TO MY RESTAURANT MENU"<<endl;
cout<<string(30,'=')<<endl;
cout<<"\n";
cout<<"1.CHICKEN CURRY\n2.PANNER CURRY\n3.ROTI\n4.RICE\n5.DAL\n6.RASAM\n";
cout<<"enter the choice number for knowing the price"<<endl;
cin>>choice;
switch(choice)
{
case 1:
ar[0]=330;
cout<<"THE PRICE OF CHICKEN CURRY IS:- "<<ar[0]<<"RS"<<endl;
flag3=additem();
if(flag3==1)
{
bill=bill+ar[0];
}

flag4=addmore();
break;
case 2:
ar[1]=200;
cout<<"THE PRICE OF PANNER CURRY IS:- "<<ar[1]<<"RS"<<endl;
flag3=additem();
if(flag3==1)
{
bill=bill+ar[1];
}
flag4=addmore();
break;
case 3:
ar[2]=50;
cout<<"THE PRICE OF ROTI IS:- "<<ar[2]<<"RS"<<endl;
flag3=additem();
if(flag3==1)
{
bill=bill+ar[2];
}

flag4=addmore();
break;
case 4:
ar[3]=100;
cout<<"THE PRICE OF RICE IS:- "<<ar[3]<<"RS"<<endl;
flag3=additem();
if(flag3==1)
{
bill=bill+ar[3];
}
flag4=addmore();
break;
case 5:
ar[4]=150;
cout<<"THE PRICE OF DAL IS:- "<<ar[4]<<"RS"<<endl;
flag3=additem();
if(flag3==1)
{
bill=bill+ar[4];
}
flag4=addmore();
break;
case 6:
ar[5]=120;
cout<<"THE PRICE OF RASAM IS:- "<<ar[5]<<"RS"<<endl;
flag3=additem();
if(flag3==1)
{
bill=bill+ar[5];
}

flag4=addmore();
break;
default:
cout<<"INVALID INPUT!!!, TRY AGAIN"<<endl;
cout<<"WANT TO EXIT?"<<endl;
cout<<"1-->YES"<<endl;
cout<<"0-->NO"<<endl;
int cho;
cin>>cho;
if(cho==0){
flag3=1;
flag4=1;
}
else
{
flag3=0;
flag4=0;
}
}
}
cout<<"YOUR TOTAL BILL IS:- "<<bill<<"RS"<<endl;
return 0;
}//main
