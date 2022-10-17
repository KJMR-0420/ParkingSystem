#include <stdio.h>
#include <conio.h>

#define p printf
#define s scanf

int menu();
void body();
void record();
void lot1();
void lot2();
void lot3();

char customername[20];
char customerlicensenumber[20];
char colon,timedes;
char dytc;
int ch;
int timein=0;
int timeout=0;
int lot,count=0;
int nolot1,nolot2,nolot3;
int timespent=0;
int payment=0;
int main(){
	/**Welcoming the Customer**/
p("\t \t  ================================================= \n");
p("\t          =     \tWelcome to Parking System \t =\n");
p("\t \t  ================================================= \n");
while(1)
switch(menu())
{
	case 1:
		body();
		break;
	case 2:
		record();
		break;
	default:
		p("invalid input");
}
getch();
return 0;
}
int menu()
{
	p("1.enter customer\n");
	p("2. show record\n");
	p("enter choice\n");
	s("%d",&ch);
return (ch);
}
void body (){
do{
/**Welcoming the Customer**/
p("\t \t  ================================================= \n");
p("\t          =     \tWelcome to Parking System \t =\n");
p("\t \t  ================================================= \n");


	p("Enter Customer Name:");
 	s("%s",&customername);
 	
	p("Enter Customer License Number:");
 	s("%s",&customerlicensenumber);

	p("Enter Time In:");
 	s("%d %s%s",&timein,&colon,&timedes);
  	
 	p("Enter Time Out:");
 	s("%d %s%s",&timeout,&colon,&timedes);
 	
 	timespent=(timeout-timein);
	p("%d hour \n",timespent);

	payment=(timespent*25);
	p("the amount of bill is: %d \n",payment);

	p("1. enter lot 1\n");
	p("2. enter lot 2 \n");
	p("3. enter lot 3\n");
	p("Ener yout lot\n");
	s("%d",&lot);
	switch(lot){

	case 1:
		lot1();
		break;
	case 2:
		lot2();
		break;
	case 3:
		lot3();
		break;
	default:
		p("invalid input");
		
}
p("Do you want to continue:");
 	p("Do you want to Continue Y/N:\n \n");
	s("%s",&dytc);
return 0 ;
}
while(dytc!='N');

}

void lot1(){
	p("successfully entered\n");
	nolot1++;
	count++;
	return 0;
}

void lot2(){
	p("successfully entered\n");
	nolot2++;
	count++;
	return 0;
}

void lot3(){
	p("successfully entered\n");
	nolot3++;
	count++;
	return 0;
}
void record(){
	int i;
	p("\n");
p(" \n \n \t \t \t \t \t \t *** Record *** \n");
p("Number of car entered in 1 %d\n",nolot1);
p("Number of car entered in 2 %d\n",nolot2);
p("Number of car entered in 3 %d\n",nolot3);
p("Total number of entered vehicle\n %d",nolot1+nolot2+nolot3);
p("Total income:%d\n",payment+payment+payment+payment+payment);
return 0;
}

