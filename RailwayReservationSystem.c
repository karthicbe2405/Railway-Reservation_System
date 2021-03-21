#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
int i,j;
struct seat{
int ac,sleep,tseat,tnum[100],c[100];
char name[100][20],mob[100][10];
}srt01,kms01;
void key()
{
printf("\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_");
printf("\n\t\tPRESS Any Key To Go For Main Menu..");
getch(); 
}
void book()
{
int num;
printf("\n\t\t\tBOOKING\nEnter the train number : ");
scanf("%d",&num);
switch(num)
{
case 18020:
	if(srt01.tseat != 0)
		{
		int coach;
		printf("\nSelect the coach : \n\t\t1).AC\n\t\t2).Sleeper\nEnter your choice : ");
		scanf("%d",&coach);
		switch(coach)
		{
			case 1:
				{
					if(srt01.ac > 0)
					{
						i++;
						srt01.c[i]=1;
						srt01.ac--;
						printf("\nEnter the name : ");
						//scanf("\n");
						gets(srt01.name[i]);
						printf("Enter the mobile number : ");
						gets(srt01.mob[i]);
						srt01.tnum[i]=i+18200;
						printf("\n\tYOU'RE SEAT HAS BEEN SUCCESSFULLY RESERVED ...");
						printf("\n\tRECIEPT : \n\t\tName : %s\n\t\tMob : %s\n\t\tCoach : A/C\n\t\tTicket Number : %d",srt01.name[i],srt01.mob[i],srt01.tnum[i]);
					}
					else
					{
						printf("\n\tSeats are filled in this coach");
					}
					break;
				}
			case 2:
				{
					if(srt01.sleep > 0)
					{
						i++;
						srt01.sleep--;
						srt01.c[i]=2;
						printf("\nEnter the name : ");
						scanf("\n");
						gets(srt01.name[i]);
						printf("Enter the mobile number : ");
						gets(srt01.mob[i]);
						srt01.tnum[i]=i+18200;
						printf("\n\tYOU'RE SEAT HAS BEEN SUCCESSFULLY RESERVED ...");
						printf("\n\tRECIEPT : \n\t\tName : %s\n\t\tMob : %s\n\t\tCoach : Sleeeper\n\t\tTicket Number : %d",srt01.name[i],srt01.mob[i],srt01.tnum[i]);
					}
					else
					{
						printf("\n\tSeats are filled in this coach");
					}
					break;
				}
			default:
				printf("\n\tInvalid choice");
				break;

		}
		}
	else
		{
		printf("\n\tSorry..!Seats are filled in this train...");
		}
	break;
case 19040:
	if(kms01.tseat != 0)
		{
		int coach;
		printf("\nSelect the coach : \n\t\t1).AC\n\t\t2).Sleeper\nEnter your choice : ");
		scanf("%d",&coach);
		switch(coach)
		{
			case 1:
				{
					if(kms01.ac > 0)
					{
						j++;
						kms01.ac--;
						kms01.c[j]=1;
						printf("\nEnter the name : ");
						scanf("\n");
						gets(kms01.name[j]);
						printf("Enter the mobile number : ");
						gets(kms01.mob[j]);
						kms01.tnum[j]=j+19400;
						printf("\n\tYOU'RE SEAT HAS BEEN SUCCESSFULLY RESERVED ...");
						printf("\n\tRECIEPT : \n\t\tName : %s\n\t\tMob : %s\n\t\tCoach : A/C\n\t\tTicket Number : %d",kms01.name[j],kms01.mob[j],kms01.tnum[j]);
					}
					else
					{
						printf("\n\tSeats are filled in this coach");
					}
					break;
				}
			case 2:
				{
					if(kms01.sleep > 0)
					{
						j++;
						kms01.sleep--;
						kms01.c[j]=2;
						printf("\nEnter the name : ");
						scanf("\n");
						gets(kms01.name[j]);
						printf("Enter the mobile number : ");
						gets(kms01.mob[j]);
						kms01.tnum[j]=j+19400;
						printf("\n\tYOU'RE SEAT HAS BEEN SUCCESSFULLY RESERVED ...");
						printf("\n\tRECIEPT : \n\t\tName : %s\n\t\tMob : %s\n\t\tCoach : Sleeper\n\t\tTicket Number : %d",kms01.name[j],kms01.mob[j],kms01.tnum[j]);
					}
					else
					{
						printf("\n\tSeats are filled in this coach");
					}
					break;
				}
			default:
				printf("\n\tInvalid choice");
				break;
		}
		}
	else
		{
		printf("\n\tSorry..!Seats are filled in this train...");
		}
	break;
default:
printf("\n\tInvalid train number ....");
}
key();
}
void check()
{
int tno;
printf("\n\t\tSEATS AVAILABILITY");
printf("\nEnter the train number : ");
scanf("%d",&tno);
if(tno == 18020)
{
printf("\n\tTrain Numer : %d\n\tTotal Seat : %d\n\tAC Coach : %d\n\tSleeper : %d",tno,srt01.tseat,srt01.ac,srt01.sleep);
}
if(tno == 19040)
{
printf("\n\tTrain Numer : %d\n\tTotal Seat : %d\n\tAC Coach : %d\n\tSleeper : %d",tno,kms01.tseat,kms01.ac,kms01.sleep);
}
if(tno != 18020 && tno != 19040)
{
printf("\n\tInvalid train number...");
}
key();
}
void cancel()
{
int tno,k;
char ch;
printf("\n\t\t\tTICKET CANCELLATION");
printf("\nEnter the ticket number : ");
scanf("%d",&tno);
if(tno>18200 && tno< 19000)
  {
k= tno - 18200;
if(srt01.c[k] == 1 || srt01.c[k] == 2)
	{
	printf("\n\tName : %s\n\tMob No : %s\n\tTicket No : %d",srt01.name[k],srt01.mob[k],srt01.tnum[k]);
	printf("\nAre you sure you want to cancel the ticket (Y/N) : ");
	scanf("\n%c",&ch);
	if(ch=='Y' || ch=='y')
		{
			if(srt01.c[k] == 1)
			{
			srt01.c[k]=0;srt01.tseat++;srt01.ac++;
			srt01.name[k][0]='\0';srt01.mob[k][0]='\0';srt01.tnum[k]=0;
			printf("\n\tYour Ticket has been successfully cancelled...");
			}
			if(srt01.c[k] == 2)
			{
			srt01.c[k]=0;srt01.tseat++;srt01.sleep++;
			srt01.name[k][0]='\0';srt01.mob[k][0]='\0';srt01.tnum[k]=0;
			printf("\n\tYour Ticket has been successfully cancelled...");
			}
		}
	if(ch=='N' || ch=='n')
		{
		printf("\n\tYour ticket cancellation was unsuccessfull...");
		}
	}
 }
else if(tno>19400 && tno< 20000)
  {
k= tno - 19400;
if(kms01.c[k] == 1 || kms01.c[k] == 2)
	{
	printf("\n\tName : %s\n\tMob No : %s\n\tTicket No : %d",kms01.name[k],kms01.mob[k],kms01.tnum[k]);
	printf("\nAre you sure you want to cancel the ticket (Y/N) : ");
	scanf("\n%c",&ch);
	if(ch=='Y' || ch=='y')
		{
			if(kms01.c[k] == 1)
			{
			kms01.c[k]=0;kms01.tseat++;kms01.ac++;
			kms01.name[k][0]='\0';kms01.mob[k][0]='\0';kms01.tnum[k]=0;
			printf("\nYour Ticket has been successfully cancelled...");
			}
			if(kms01.c[k] == 2)
			{
			kms01.c[k]=0;kms01.tseat++;kms01.sleep++;
			kms01.name[k][0]='\0';kms01.mob[k][0]='\0';kms01.tnum[k]=0;
			printf("\nYour Ticket has been successfully cancelled...");
			}
		}
	if(ch=='N' || ch == 'n')
		{
		printf("\n\tYour ticket cancellation was unsuccessfull...");
		}
	}
else
	{
	printf("\n\tInvalid Ticket Number...");
	}
  }
else
{
printf("\n\tInvalid TIcket number..");
}
key();
}
void schedule()
{
printf("\n\t\t\t\tSCHEDULE\n\nTRAIN NO  NAME \t  ARRIVAL STATION\t   ROUTE   \tDEPARTS   TRAVEL TIME\n\n 18020   SRT01\tTiruppur New Station   Karumathampatty\t 07:00\t    35 Min \n\n 19040   KMS01\tTiruppur Old Station    Karanampettai\t 07:20\t    36 Min\n\n");
key();
}
void chart()
{
int l=0,k;
printf("\n\t\t\t\tCHART\n");
printf("\n\tSNO\tTRAIN NO\t NAME   \tMOBILE NO   \tCOACH");
for(k=1;k<100;k++)
{
if(srt01.c[k]==1)
{
printf("\n\n\t %d    \t %d\t\t%s\t\t%s\t  A/c",++l,srt01.tnum[k],srt01.name[k],srt01.mob[k],srt01.tnum[k]);
}
if(srt01.c[k]==2)
{
printf("\n\n\t %d    \t %d\t\t%s\t\t%s     Sleeper",++l,srt01.tnum[k],srt01.name[k],srt01.mob[k],srt01.tnum[k]);
}
if(kms01.c[k]==1)
{
printf("\n\n\t %d    \t %d\t\t%s\t\t%s\t  A/c",++l,kms01.tnum[k],kms01.name[k],kms01.mob[k],kms01.tnum[k]);
}
if(kms01.c[k]==2)
{
printf("\n\n\t %d    \t %d\t\t%s\t\t%s     Sleeper",++l,kms01.tnum[k],kms01.name[k],kms01.mob[k],kms01.tnum[k]);
}
}
key();
}
void main()
{
int n;
printf("\n\tWELCOME TO CBE ONLINE  RAILWAY SERVICE....!");
srt01.ac=50;
srt01.sleep=50;
kms01.ac=50;
kms01.sleep=50;
do
{
srt01.tseat = srt01.ac + srt01.sleep;
kms01.tseat = kms01.ac + kms01.sleep;
printf("\n\t\t\tMAIN MENU\n\t\t1).Schedule\n\t\t2).Booking \n\t\t3).Availability Checking\n\t\t4).Cancellation\n\t\t5).Chart\n\t\t6).Exit\n\tENTER YOUR CHOICE  : ");
scanf("%d",&n);
if(n==1)
schedule();
else if(n==2)
book();
else if(n==3)
check();
else if(n==4)
cancel();
else if(n==5)
chart();
else if(n==6)
printf("\nYou have choosen to exit...thanks for using our online service");
else
{
printf("\n\tInvalid choice ..please try again");
key();
}
}while(n!=6);
}
