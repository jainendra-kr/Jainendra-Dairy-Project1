#include<dos.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<process.h>
#include<conio.h>
#include<graphics.h>
#include<iostream.h>

////STRUCTURE DEFINITION***********************
struct party
{
char pid[10],pname[25],paddr[25],pgen[25],email[25],mob[25],pcity[30],pstate[25],pdob[25];
float esal;
};
struct distributor
{
char did[10],dname[25],dadd[25],dcity[25],ddistt[25],dpin[25],dmob[25],gen[25],email[30];

};

void textflash1()
{
int c,i=0;
do
{
i++;
window(1,1,40,55);
clrscr(); textmode(C40);

for(c=2;c<40;c++)
{
textcolor(random(15)+BLINK);
gotoxy(c,1);
putch('*');delay(100);
}
for(c=1;c<25;c++)
{
textcolor(random(15)+BLINK);
gotoxy(40,c);
putch('*');delay(100);
}
for(c=40;c>1;c--)
{
textcolor(random(15)+BLINK);
gotoxy(c,24);
putch('*');delay(100);
}
for(c=24;c>1;c--)
{
textcolor(random(15)+BLINK);
delay(100);
gotoxy(1,c);
putch('*');
}

textbackground(random(7));
textcolor(random(15)+BLINK);
gotoxy(random(4),12);
cputs(" BCA DEPARTMENT * ");
textcolor(random(15)+BLINK);
gotoxy(random(30),26);
cputs(" * NALANDA COLLEGE ");
sleep(4);

}while(i!=1);
textmode(3);
}
/**********************************************************************/
//2ND FLASS SCREEN:-GRAPHICS MODE
/**********************************************************************/
void graphflash1()
{

int x=1,y=1,gd,gm;
gd=DETECT;
initgraph(&gd,&gm,"..//BGI");
int c=240;
do
{
setcolor(random(x));
//circle(getmaxx()/2,c++,x);
circle(x,x,x);delay(10);
circle(640-x,x,x);delay(10);
circle(x,480-x,x);delay(10);
circle(640-x,480-x,x);delay(10);
//circle(getmaxx()/2,getmaxy()/2,y);
settextstyle(7,0,4);
setcolor(random(y));
outtextxy(getmaxx()/2-85,getmaxy()/2-50,"PROJECT OF");
outtextxy(getmaxx()/2-30,getmaxy()/2-20,"DAIRY");
outtextxy(getmaxx()/2-60,getmaxy()/2+10,"BILLING");
settextstyle(10,0,1);
outtextxy(getmaxx()/4+8,getmaxy()/2+200,"Name:- JAINENDRA KUMAR");
delay(60);
x++;y++;
if(x==97)
{
x=1;c=240;cleardevice();
}
if(y==130)y=1;
}while(!kbhit());

}





void login();
void date()
{
struct dosdate_t d;
_dos_getdate(&d);
gotoxy(50,1);
printf("%d-%d-%d",d.day,d.month,d.year);
//cout<<d.day<<"-"<<d.month<<"-"<<d.year;
}
void time()
{
struct dostime_t t;
_dos_gettime(&t);
gotoxy(68,1);
printf("%d:%d:%d",t.hour,t.minute,t.second);
}
void menu();
void main1()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"..//bgi");
setbkcolor(RED);
setcolor(YELLOW);
date();
time();
settextstyle(1,HORIZ_DIR,5);

outtextxy(100,20,"DAIRY BILLING SYSTEM");
settextstyle(1,HORIZ_DIR,1);
outtextxy(160,80,"DEVELOPED BY JAINENDRA KUMAR");
outtextxy(230,110,"STUDENT OF B.C.A.");
outtextxy(260,140,"N.C. M.U.");
//outtextxy(170,400,"PRESS ANY KEY TO CONTINUE ...");
sleep(8);
getch();

login();
//menu1();


closegraph();
}
void login()
{
int gd=DETECT,gm,i,c=0;
char pass[20],ch,uname[20];

login:
i=0;
clrscr();
initgraph(&gd,&gm,"..//bgi");
date();
time();
setbkcolor(RED);
setcolor(YELLOW);
settextstyle(1,HORIZ_DIR,2);

if(c>2)
{
gotoxy(25,20);
cout<<"YOU HAVE LOST A CHANCE";
sleep(5);
exit(0);
}

outtextxy(50,30,"WELOCME TO LOGIN IN DAIRY BILLING SYSTEM");
gotoxy(30,7);
cout<<"press ESC to skip password and any key to continue..";
if(getch()==27) goto skip;
gotoxy(30,11);
cout<<"ENTER USER NAME :";
cin.getline(uname,30);
gotoxy(30,13);
cout<<"ENTER PASSWORD :";
gotoxy(48,13);
c++;
do{
	   ch=getch();
		 if(ch==27)
		 {
		      exit(0);
		 }
		 else
		 {
		if(ch==13)
			{
			pass[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(48+i,13);
					cout<<" \b";
					}
				}
			else
				{
				gotoxy(48+i,13);

				pass[i]=ch;
				cout<<"*";
				i++;
				if(i>10)
				{
				gotoxy(25,20);
				cout<<"PASSWORD NOT GREATER THAN 10 CHARARACTERS LONG";
				getch();
				goto login;
				}
				}
			}
			}
		}while(1);

if(i<5)
{
gotoxy(25,20);
cout<<"PASSWORD LENGTH MINIMUM 5 CHARACTERS LONG";
getch();
goto login;
}
if(strcmp(uname,"bihar")==0)
{
if(strcmp(pass,"nalanda")==0)
{
gotoxy(25,20);
cout<<"VALID PASSWORD";
getch();
//menu();
}
else
{
gotoxy(25,20);
cout<<"INVALID PASSWORD";
getch();
goto login;
//getch();
//exit(0);
}
}
else
{
gotoxy(25,20);
cout<<"INVALID USER NAME";
getch();
goto login;
}
skip:
}

struct sale
{
       char ino[10],pid[25],pname[25];
	int qn;
       float tp;
       };
struct product
{
  char pid[5],pname[5];
float p;
};
struct passbook{
char pid[9],pname[10],p[10],acno[10];
};

struct retailer
{
char rno[10],rname[25],radd[25],rcity[25],mob[10];
int bno;
};
void pw()
	{
	cnt:
	clrscr();
	textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	gotoxy(20,2);

	cout<<"        PASSWORD VARIFICATION";
	gotoxy(18,3);
	cout<<"==========================================="  ;

	char olb[20]={"                   "};
	char passw1[20],passw2[20],ch;
	int i=0;

	textcolor(WHITE);
	textbackground(GREEN);
	gotoxy(15,6);cprintf("%s",olb);
	gotoxy(45,6); cprintf("%s",olb);


	gotoxy(15,8);cprintf("%s",olb);
	gotoxy(45,8); cprintf("%s",olb);

	gotoxy(15,10);cprintf("%s",olb);
	gotoxy(45,10); cprintf("%s",olb);
	gotoxy(15,6);cprintf(" ENTER   PASSWORD  : ");
	gotoxy(15,8);cprintf(" CONFIRM PASSWORD  : ");
	gotoxy(15,10);cprintf(" PASSWORD STATUS   : ");
	i=0;
	gotoxy(45,6);
	do{
	   ch=getch();
		 if(ch==27)
		 {
		      exit(0);
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(45+i,6);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(45+i,6);

				passw1[i]=ch;
				cprintf("*");
				i++;
				}
			}
			}
	   }while(1);
	   ///
	   i=0;
	gotoxy(45,8);
	do{
	   ch=getch();
		    if(ch==27)
		 {
		      exit(0);
		 }
		 else
		 {

		if(ch==13 || i==19)
			{
			passw2[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(45+i,8);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(45+i,8);

				passw2[i]=ch;
				cprintf("*");
				i++;
				}
			}
			}
	   }while(1);

	  gotoxy(45,10);
	  if(strcmp(passw1,passw2)==0)
		{
		if(strcmp(passw1,"god")==0)
			{
			cprintf(" RIGHT PASSWORD ");
			}
		else
			{
			cprintf(" WRONG PASSWORD ");
			getch();
			exit(0);
			}
		}
	  else
		{
		 cprintf(" WRONG CONFIRM ");
		 getch();
		 goto cnt;
		 }


	   getch();
	}



void printlb()
	{
	char olb[20]={"                   "};
	textcolor(WHITE);
	textbackground(GREEN);
	gotoxy(15,6);cprintf("%s",olb);
	gotoxy(45,6); cprintf("%s",olb);


	gotoxy(15,8);cprintf("%s",olb);
	gotoxy(45,8); cprintf("%s",olb);

	gotoxy(15,10);cprintf("%s",olb);
	gotoxy(45,10); cprintf("%s",olb);

	gotoxy(15,12);cprintf("%s",olb);
	gotoxy(45,12); cprintf("%s",olb);

	 gotoxy(15,14);cprintf("%s",olb);
	gotoxy(45,14); cprintf("%s",olb);

	gotoxy(15,6);cprintf(" INVOICE NO     : ");
	gotoxy(15,8);cprintf(" PRODUCT ID      : ");
	gotoxy(15,10);cprintf(" PRODUCT NAME  : ");
	gotoxy(15,12);cprintf(" QUANTITY  : ");
	gotoxy(15,14);cprintf(" TOTAL PRICE      : ");
	gotoxy(45,8);



	}


void csearch()
{
	cse:
	clrscr();
	sale r1;
	char s1[20],ch,ch1;
	int i=0,f=0;
	textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	gotoxy(20,2);
	cout<<"       WELCOME IN SEARCH ENTRY";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb();
	gotoxy(45,6);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			FILE *fp;
			fp=fopen("sale.dat","rb");
			if(fp==NULL)
			{
			 gotoxy(31,18);
			 cprintf("Data not available");
			 getch();
			  return;
			}
			else
			{
			while(!feof(fp))
			{
			fread(&r1,sizeof(r1),1,fp);
			if(strcmpi(s1,r1.ino)==0)
				{
					f=1;
					gotoxy(45,6); cprintf("%s",r1.ino);
					gotoxy(45,8); cprintf("%s",r1.pid);
					gotoxy(45,10); cprintf("%s",r1.pname);
					gotoxy(45,12); cprintf("%d",r1.qn);
					gotoxy(45,14); cprintf("%.2f",r1.tp);
				}
			}
			}
	       fclose(fp);
	    ///////current working area????????????????????????/
	     if(f==0)
	     {
	     gotoxy(17,18);
	     cprintf("Record not found, Pls enter valid course code");
	     getch();
	     goto cse;
	     }
	     else
	     {
	     gotoxy(20,18);
	     cprintf("Do u want to search another record Y/N: ");
	     ch1=getch();
	     if(ch1=='Y'||ch1=='y')
	     {
	     goto cse;
	     }
	     else
	     {
	     return;
	     }
	     }

	    }
	    else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(45+i,6);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(45+i,6);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);





}
///////////////////////////////////////DELETION OF RECORD
//////////////////////////////////////DELETION OF RECORD
///////////////////////////////////// DELETION OF RECORD

void cdel()
{
	cde:
	clrscr();
	sale r1;
	char s1[20],ch,ch1;
	int i=0,f=0;
	textcolor(YELLOW);
	textbackground(BLACK);
	char ts1[10],ts2[10];
	int tn;
	clrscr();
	gotoxy(20,2);
	cout<<"       WELCOME IN DELETE OPERATION          ";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb();
	gotoxy(45,6);

	do{
	   ch=getch();
		 if(ch==27)
		       return;

		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			FILE *fp,*tp;
			fp=fopen("sale.dat","rb");

			if(fp==NULL)
			{
			 gotoxy(31,18);
			 cprintf("Data not available");
			 getch();
			  return;
			}
			else
			{
			tp=fopen("mytemp.dat","ab");

			while(!feof(fp))
			{
			fread(&r1,sizeof(r1),1,fp);
			if(!feof(fp))
			{
			if(strcmpi(s1,r1.ino)!=0)
				{
					fwrite(&r1,sizeof(r1),1,tp);
				}
			else
				{
				 f=1;

				 }
			}
			}


	fclose(fp);
	fclose(tp);




	      // fclose(fp);
	    ///////current working area????????????????????????/
	     if(f==0)
	     {
	     gotoxy(17,18);
	     cprintf("Record not found, Pls enter valid course code");
	     remove("mytemp.dat");
	     getch();
	     goto cde;
	     }
	     else
	     {


	     remove("party.dat");
	     rename("mytemp.dat","party.dat");

	     gotoxy(20,18);
	     cprintf("Do u want to Delete another record Y/N: ");
	     ch1=getch();
	     if(ch1=='Y'||ch1=='y')
	     {
	     goto cde;
	     }
	     else
	     {
	     return;
	     }
	     }
	     }
	     }

	    else
	    {
	    if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(45+i,6);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(45+i,6);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);









}





///////////////////////////////////// DELETION OF RECORD
///////////////////////////////////   DELETION OF RECORD
///////////////////////////////////   DELETION OF RECORD










void cupdate()
{
	cue:
	clrscr();
	sale r1;
	char s1[20],ch,ch1;
	int i=0,f=0,count;
	textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	gotoxy(20,2);
	cout<<"       WELCOME IN UPDATE ENTRY";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb();
	gotoxy(45,6);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			count=0;
			FILE *fp;
			fp=fopen("sale.dat","rb");
			if(fp==NULL)
			{
			 gotoxy(31,18);
			 cprintf("Data not available");
			 getch();
			  return;
			}
			else
			{
			while(!feof(fp))
			{
			count++;
			fread(&r1,sizeof(r1),1,fp);
			if(strcmpi(s1,r1.ino)==0)
				{

					//strcpy(r1.ccode,s1);

					f=1;
					i=0;
					fclose(fp);
				      gotoxy(45,8);
				      // cprintf("%s",r1.cname);
				      do{
					  ch=getch();
						 if(ch==27)
						 {
						   return;
						 }
						 else
						 {
						if(ch==13 || i==19)
						{
						s1[i]='\0';
						break;
						}
						else
						{
						if(ch=='\b')
						{
						if(i!=0)
						{
						i--;
						gotoxy(45+i,8);
						cprintf(" \b");
						}
						}
						else
						{
						gotoxy(45+i,8);

						s1[i]=ch;
						cprintf("%c",ch);
						i++;
						}
						}
						}
						   }while(1);

						 strcpy(r1.pid,s1);
							    i=0;
	gotoxy(45,10);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(45+i,10);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(45+i,10);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  strcpy(r1.pname,s1);
	  //gotoxy(45,12);
		    i=0;
	gotoxy(45,12);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(45+i,12);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(45+i,12);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  r1.qn=atof(s1);

		    i=0;
	gotoxy(45,14);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(45+i,14);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(45+i,14);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  r1.tp=atoi(s1);

	fp=fopen("sale.dat","rb+");
       //	 fseek(fp,0,SEEK_END);
       count--;
	fseek(fp,sizeof(r1)*count,SEEK_SET);
	 fwrite(&r1,sizeof(r1),1,fp);

			 }
			}
			}
	       fclose(fp);
	    ///////current working area????????????????????????/
	     if(f==0)
	     {
	     gotoxy(17,18);
	     cprintf("Record not found, Pls enter valid course code");
	     getch();
	     goto cue;
	     }
	     else
	     {
	     gotoxy(20,18);
	     cprintf("Do u want to update another record Y/N: ");
	     ch1=getch();
	     if(ch1=='Y'||ch1=='y')
	     {
	     goto cue;
	     }
	     else
	     {
	     return;
	     }
	     }

	    }
	    else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(45+i,6);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(45+i,6);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);





}

void centry()
	{
	cel:
	clrscr();
	sale r1;
	int cc=0,i,f;


	textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	gotoxy(20,2);

	cout<<"       WELCOME IN CUSTOMER ENTRY";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb();
	char s1[20]={"C00"},ts[20],passw1[30],ch,cnt;
	FILE *fp;
	fp=fopen("sale.dat","rb");
	if(fp==NULL)
		{
		cc=1;
		}
	else
		{
		    f=0;
			while(!feof(fp))
			{
			  fread(&r1,sizeof(r1),1,fp);
			  f++;
			}
			fclose(fp);
			fp=fopen("sale.dat","rb");
		       f--;
		       fseek(fp,sizeof(r1)*f,SEEK_SET);
			fread(&r1,sizeof(r1),1,fp);
			i=0;
			while(r1.ino[i+3]!='\0')
			{
			 ts[i]= r1.ino[i+3];
			 i++;
			}
			ts[i]='\0';
			cc= atoi(ts);
			cc++;
		}
	    ///////current working area????????????????????????/
	     fclose(fp);
	    textcolor(YELLOW);
	    itoa(cc,ts,10);
	    strcat(s1,ts);
	    strcpy(r1.ino,s1);
	    gotoxy(45,6);
	    cprintf("%s",r1.ino);
	    ////////////////////????//

	    i=0;
	gotoxy(45,8);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(45+i,8);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(45+i,8);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  strcpy(r1.pid,passw1);

	  //////////////
		    i=0;
	gotoxy(45,10);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(45+i,10);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(45+i,10);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  strcpy(r1.pname,passw1);
	  //gotoxy(45,12);
		    i=0;
	gotoxy(45,12);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(45+i,12);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(45+i,12);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  r1.qn=atof(s1);

		    i=0;
	gotoxy(45,14);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(45+i,14);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(45+i,14);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  r1.tp=atof(s1);


	 fp=fopen("sale.dat","ab");
	 fseek(fp,0,SEEK_END);
	 fwrite(&r1,sizeof(r1),1,fp);

	 fclose(fp);
	 gotoxy(12,18);cprintf("ONE RECORD SAVED, DO U WANT TO ENTER ANOTHER RECORD Y/N: ");
	 cnt=getch();
	 if(cnt=='y'||cnt=='Y')goto cel;





	  //gotoxy(45,14);








	}




	void cdisp()
	{
	clrscr();
	char sv1;
	FILE * fp;
	sale r1;
	fp=fopen("sale.dat","rb");

	textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	gotoxy(20,2);

	cout<<"      DISPLAY COURSE INFORMATION";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb();
	/* struct course
		{
		char ccode[10],cname[30],ctd[20],pmode[20];
		float cfee;
		};      */
	while(!feof(fp))
		{
		fread(&r1,sizeof(r1),1,fp);
		if(!feof(fp))
			{
			gotoxy(45,6);
			cprintf("%s",r1.ino);
			gotoxy(45,8);
			cprintf("%s",r1.pid);
			gotoxy(45,10);
			cprintf("%s",r1.pname);
			gotoxy(45,12);
			cprintf("%d",r1.qn);
			gotoxy(45,14);
			cprintf("%.2f",r1.tp);

			sv1=getch();
			if(sv1==27)
				{
				fclose(fp);
				break;
				}
			printlb();

			}
		}

		fclose(fp);



	}







///END OF STRUCTURE******************************
void printlb1();
void hentry();
void hdisp();
void hsearch();
void hupdate();
void hdel();
void printlb2();
void eentry();
void edisp();
void esearch();
void eupdate();
void edel();
void printlb3();
void lentry();
void ldisp();
void lsearch();
void printlb4();
void gentry();
void gdisp();
void gdel();
void gsearch();
void pentry();
void pdisp();
void pdel();
void psearch();
void pupdate();

void main()
	{
	textflash1();
	graphflash1();

      main1();
     // pw();

      char  menu[5][19]={" PARTY","DISTRIBUTOR ","SALE","PURCHASE ","PRODUCT"};
      char csm[5][15]={"Entry     ","Display   ","Search    ","Update    ","Delete    "};
      char tsm[5][15]={"Entry     ","Display   ","Search    ","Update    ","Delete    "};
      char lsm[5][15]={"Entry  ","Display   ","Search    ","Update    ","Delete    "};
      char ssm[6][15]={"Entry  ","Display   ","Search    ","Update    ","Delete    "};
      char psm[5][15]={"Entry  ","Display   ","Search    ","Update    ","Delete    "};
      char clb[80]={"                                                                               "};
      int x,y,i,ch1,ch2;
      static int f=-1;
      LB:
      textbackground(BLACK);
      clrscr();
      textcolor(RED);
      textbackground(YELLOW);

      gotoxy(1,1);
      cprintf("%s",clb);
      gotoxy(1,2);
      cprintf("%s",clb);
      gotoxy(1,3);
      cprintf("%s",clb);
      x=1;
      textcolor(7);
      textbackground(BLACK);
      gotoxy(1,24);
      textbackground(GREEN);
      textcolor(4);
      cprintf("       F1 ->CUSTOMER., F2->GODOWN., F3->EMPLOYEE., F4->HAWKER., F5->PASSBOOK.     ");
      for(i=0;i<5;i++)
	{
	if(i==0)
		{
		gotoxy(1,2);
		textbackground(YELLOW);
		cprintf("  ");
		textbackground(BLACK);
		x=3;
		}
	gotoxy(x,2);

	cprintf("%s",menu[i]);
	x=x+14;
	cprintf("  ");

	}
      textcolor(RED);
     textbackground(YELLOW);
      for(x=1;x<80;x++)
	{
	gotoxy(x,1);
	cprintf("*");
	gotoxy(x,25);
	cprintf("*");

       }
for(y=1;y<25;y++)
	{
	gotoxy(1,y);
	cprintf("||");
	gotoxy(79,y);
	cprintf("||");

	}
   gotoxy(79,1);cprintf("* ");
   gotoxy(1,1);cprintf(" *");
   char ch;

    /*  do
      {
      ch=getch();
      if(ch==0)
	{
	ch=getch();
	gotoxy(12,15);
	cprintf("%d EXT",ch);
	}
      else
	{
	cprintf("%d ASCII",ch);
	}
      }while(ch!=27);


     */
      do{
	ch=getch();
	if(ch==0)
		{

		ch=getch();
		if(ch==59||ch==60||ch==61||ch==62||ch==63)
			{
			textcolor(RED);
		textbackground(YELLOW);
		gotoxy(1,3);
		cprintf("%s",clb);
			}
		if(ch==59)
			{
			//???COURSE LOGIC******
			int v1,v2;
			textbackground(BLACK);
			for(v1=3;v1<78;v1++)
				{
				for(v2=4;v2<23;v2++)
					{
					gotoxy(v1,v2);
					cprintf(" ");
					}
				}
		      textcolor(BLUE);
		      textbackground(RED);
		      for(i=0;i<5;i++)
			{
			 gotoxy(3,i+3);
			 cprintf("%s",csm[i]);
			 }
		      ///ARROW MOVEMENT IN COURSE MENU

		      do
		      {
		      textcolor(BLUE);
		      textbackground(RED);
		      ch1=getch();
		      if(ch1==13)
			{
				if(f==0)
				    {   f=-1;
					centry();
					goto LB;
				    }
				else if(f==1)
				    {
					f=-1;
					cdisp();
					goto LB;
				    }
				else if(f==2)
				{
				      f=-1;
				      csearch();
				      goto LB;
				}
				else if(f==3)
				{
					f=-1;
					cupdate();
					goto LB;
				}

				else if(f==4)
					{
					f=-1;
					cdel();
					goto LB;
					}


			}
		      if(ch1==0)
			{

			ch1=getch();
			if(ch1==80)
				{
				f++;
				}
					else if(ch1==72)
				{
				if(f==-1)f=4;
				else   f--;
				}
		      for(i=0;i<5;i++)
			{
			 if(f==i)
				{


			 textcolor(GREEN);
			 textbackground(BLUE);

			 gotoxy(3,i+3);
			 cprintf("%s",csm[i]);
			 textcolor(BLUE);
		      textbackground(RED);

			}
		       else
		       {
			gotoxy(3,i+3);
			 cprintf("%s",csm[i]);
			}
			 if(f==5)f=-1;
			 }
			}
		       /*	ch2=getch();
			if(ch2==13)centry();   */
			if(ch1==27){f=-1; goto LB;}

			}while(1);







		      }
	    ///////////godown logic  ///

	    if(ch==61)
			{
			//???godown LOGIC******
			int v1,v2;
			textbackground(BLACK);
			for(v1=3;v1<78;v1++)
				{
				for(v2=4;v2<23;v2++)
					{
					gotoxy(v1,v2);
					cprintf(" ");
					}
				}
		      textcolor(BLUE);
		      textbackground(RED);
		      for(i=0;i<5;i++)
			{
			 gotoxy(31,i+3);
			 cprintf("%s",csm[i]);
			 }
		   ///godown MENU ARROW --> MOVEMENT LOGIC***
		   do
		      {
		      textcolor(BLUE);
		      textbackground(RED);
		      ch1=getch();
		       if(ch1==13)
			{
				if(f==0)
				    {   f=-1;
				       gentry();
					goto LB;
				    }
			       else if(f==1)
				    {
					f=-1;
					gdisp();
					goto LB;
				    }
				else if(f==2)
				{
				      f=-1;
				     gsearch();
				      goto LB;
				}
				else if(f==3)
				{
					f=-1;
				       //	aupdate();
					goto LB;
				}

				else if(f==4)
					{
					f=-1;
					gdel();
					goto LB;
					}


			}

		      if(ch1==0)
			{

			ch1=getch();
			if(ch1==80)
				{
				f++;
				}
					else if(ch1==72)
				{
				if(f==-1)f=4;
				else   f--;
				}
		      for(i=0;i<5;i++)
			{
			 if(f==i)
				{


			 textcolor(GREEN);
			 textbackground(BLUE);

			 gotoxy(31,i+3);
			 cprintf("%s",csm[i]);
			 textcolor(BLUE);
		      textbackground(RED);

			}
		       else
		       {
			gotoxy(31,i+3);
			 cprintf("%s",csm[i]);
			}
			 if(f==5)f=-1;
			 }
			}
			if(ch1==27){f=-1;goto LB;}
			}while(1);















		      }

	    ///////employee logic//////
	    if(ch==60)
			{
			//???employee LOGIC******
			int v1,v2;
			textbackground(BLACK);
			for(v1=3;v1<78;v1++)
				{
				for(v2=4;v2<23;v2++)
					{
					gotoxy(v1,v2);
					cprintf(" ");
					}
				}
		      textcolor(BLUE);
		      textbackground(RED);
		      for(i=0;i<5;i++)
			{
			 gotoxy(17,i+3);
			 cprintf("%s",tsm[i]);
			 }

			do
		      {
		      textcolor(BLUE);
		      textbackground(RED);
		      ch1=getch();
		       if(ch1==13)
			{
				if(f==0)
				    {   f=-1;
					eentry();
					goto LB;
				    }
				else if(f==1)
				    {
					f=-1;
				       edisp();
					goto LB;
				    }
				else if(f==2)
				{
				      f=-1;
				      esearch();
				      goto LB;
				}
			       else if(f==3)
				{
					f=-1;
					eupdate();
					goto LB;
				}

				else if(f==4)
					{
					f=-1;
					edel();
					goto LB;
					}


			}

		      if(ch1==0)
			{

			ch1=getch();
			if(ch1==80)
				{
				f++;
				}
					else if(ch1==72)
				{
				if(f==-1)f=4;
				else   f--;
				}
		      for(i=0;i<5;i++)
			{
			 if(f==i)
				{


			 textcolor(GREEN);
			 textbackground(BLUE);

			 gotoxy(17,i+3);
			 cprintf("%s",tsm[i]);
			 textcolor(BLUE);
		      textbackground(RED);

			}
		       else
		       {
			gotoxy(17,i+3);
			 cprintf("%s",tsm[i]);
			}
			 if(f==5)f=-1;
			 }
			}
			if(ch1==27){f=-1;goto LB;}
			}while(1);

			}
	  /////////////////Library logic
	    if(ch==62)
			{
			//???COURSE LOGIC******
			int v1,v2;
			textbackground(BLACK);
			for(v1=3;v1<78;v1++)
				{
				for(v2=4;v2<23;v2++)
					{
					gotoxy(v1,v2);
					cprintf(" ");
					}
				}
		      textcolor(BLUE);
		      textbackground(RED);
		      for(i=0;i<8;i++)
			{
			 gotoxy(45,i+3);
			 cprintf("%s",lsm[i]);
			 }


			 do
		      {
		      textcolor(BLUE);
		      textbackground(RED);
		      ch1=getch();
		       if(ch1==13)
			{
				if(f==0)
				    {   f=-1;
					hentry();
					goto LB;
				    }
			       else if(f==1)
				    {
					f=-1;
				       hdisp();
					goto LB;
				    }
				else if(f==2)
				{
				      f=-1;
				      hsearch();
				      goto LB;
				}
			       else if(f==3)
				{
					f=-1;
					hupdate();
					goto LB;
				}

			       else if(f==4)
					{
					f=-1;
					hdel();
					goto LB;
					}


			}

		      if(ch1==0)
			{

			ch1=getch();
			if(ch1==80)
				{
				f++;
				}
			      else if(ch1==72)
				{
				if(f==-1)f=7;
				else   f--;
				}
		      for(i=0;i<8;i++)
			{
			 if(f==i)
				{


			 textcolor(GREEN);
			 textbackground(BLUE);

			 gotoxy(45,i+3);
			 cprintf("%s",lsm[i]);
			 textcolor(BLUE);
		      textbackground(RED);

			}
		       else
		       {
			gotoxy(45,i+3);
			 cprintf("%s",lsm[i]);
			}
			 if(f==8)f=-1;
			 }
			}
			if(ch1==27){f=-1;goto LB;}
			}while(1);






		      }
	    ////////////sport logic
			if(ch==63)
			{
			//???COURSE LOGIC******
			int v1,v2;
			textbackground(BLACK);
			for(v1=3;v1<78;v1++)
				{
				for(v2=4;v2<23;v2++)
					{
					gotoxy(v1,v2);
					cprintf(" ");
					}
				}
		      textcolor(BLUE);
		      textbackground(RED);
		      for(i=0;i<5;i++)
			{
			 gotoxy(59,i+3);
			 cprintf("%s",psm[i]);
			 }
		      ///ARROW MOVEMENT IN COURSE MENU

		      do
		      {
		      textcolor(BLUE);
		      textbackground(RED);
		      ch1=getch();
		      if(ch1==13)
			{
				if(f==0)
				    {   f=-1;
					pentry();
					goto LB;
				    }
				else if(f==1)
				    {
					f=-1;
					pdisp();
					goto LB;
				    }
				else if(f==2)
				{
				      f=-1;
				      psearch();
				      goto LB;
				}
				else if(f==3)
				{
					f=-1;
					pupdate();
					goto LB;
				}

				else if(f==4)
					{
					f=-1;
					pdel();
					goto LB;
					}


			}
		      if(ch1==0)
			{

			ch1=getch();
			if(ch1==80)
				{
				f++;
				}
					else if(ch1==72)
				{
				if(f==-1)f=4;
				else   f--;
				}
		      for(i=0;i<5;i++)
			{
			 if(f==i)
				{


			 textcolor(GREEN);
			 textbackground(BLUE);

			 gotoxy(59,i+3);
			 cprintf("%s",psm[i]);
			 textcolor(BLUE);
		      textbackground(RED);

			}
		       else
		       {
			gotoxy(59,i+3);
			 cprintf("%s",psm[i]);
			}
			 if(f==5)f=-1;
			 }
			}
		       /*	ch2=getch();
			if(ch2==13)centry();   */
			if(ch1==27){f=-1; goto LB;}

			}while(1);

	 }	}
	 }while(ch!=27);

	 }
void printlb2()
	{
	char dlb[20]={"                   "};
	char ilb[20]={"              "};
	textcolor(WHITE);
	textbackground(GREEN);
	gotoxy(3,6);cprintf("%s",ilb);
	gotoxy(20,6); cprintf("%s",dlb);


	gotoxy(3,8);cprintf("%s",ilb);
	gotoxy(20,8); cprintf("%s",dlb);

	gotoxy(3,10);cprintf("%s",ilb);
	gotoxy(20,10); cprintf("%s",dlb);

	gotoxy(3,12);cprintf("%s",ilb);
	gotoxy(20,12); cprintf("%s",dlb);

	gotoxy(3,14);cprintf("%s",ilb);
	gotoxy(20,14); cprintf("%s",dlb);

	gotoxy(42,6);cprintf("%s",ilb);
	gotoxy(59,6); cprintf("%s",dlb);

	gotoxy(42,8);cprintf("%s",ilb);
	gotoxy(59,8); cprintf("%s",dlb);

	gotoxy(42,10);cprintf("%s",ilb);
	gotoxy(59,10); cprintf("%s",dlb);

	 gotoxy(42,12);cprintf("%s",ilb);
	gotoxy(59,12); cprintf("%s",dlb);

	gotoxy(3,6);cprintf(" PARTY ID    :");
	gotoxy(3,8);cprintf(" PARTY NAME  :");
	gotoxy(3,10);cprintf(" PARTY ADDRESS :");
	gotoxy(3,12);cprintf(" CITY     :");
	gotoxy(3,14);cprintf(" STATE     :");
	gotoxy(42,6);cprintf(" EMAIL      :");
	gotoxy(42,8);cprintf(" MOB NO     :");
	gotoxy(42,10);cprintf(" D.O.B.       :");
	gotoxy(42,12);cprintf(" GENDER      :");

	gotoxy(20,8);


	}



void eentry()
	{
	tel:
	clrscr();
	party r1;
	int cc=0,i,f;


	textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	gotoxy(20,2);

	cout<<"      WELCOME IN party DETAIL ENTRY";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb2();
	char s1[20]={"T00"},ts[20],passw1[30],ch,cnt;
	FILE *fp;
	fp=fopen("party.dat","rb");
	if(fp==NULL)
		{
		cc=1;
		}
	else
		{
			 f=0;
			while(!feof(fp))
			{
			  fread(&r1,sizeof(r1),1,fp);
			  f++;
			}
			fclose(fp);
			fp=fopen("party.dat","rb");
			f--;
		       fseek(fp,sizeof(r1)*f,SEEK_SET);
			fread(&r1,sizeof(r1),1,fp);
			i=0;
			while(r1.pid[i+3]!='\0')
			{
			 ts[i]= r1.pid[i+3];
			 i++;
			}
			ts[i]='\0';
			cc= atoi(ts);
			cc++;
		}
	    ///////current working area????????????????????????/
	    fclose(fp);
	    textcolor(YELLOW);
	    itoa(cc,ts,10);
	    strcat(s1,ts);
		fclose(fp);

	    strcpy(r1.pid,s1);
	    gotoxy(20,6);
	    cprintf("%s",r1.pid);
	    ////////////////////????//

	    i=0;
	gotoxy(20,8);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,8);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,8);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  strcpy(r1.pname,passw1);

	  //////////////
		    i=0;
	gotoxy(20,10);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,10);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,10);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  strcpy(r1.paddr,passw1);
	  //gotoxy(45,12);
		    i=0;
	gotoxy(20,12);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,12);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,12);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);
	   strcpy(r1.pcity,passw1);
	 // r1.cfee=atof(passw1);

		    i=0;
	gotoxy(20,14);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,14);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,14);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  strcpy(r1.pstate,passw1);

		    i=0;
	gotoxy(59,6);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(59+i,6);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(59+i,6);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);
	   strcpy(r1.email,passw1);
	 // r1.cfee=atof(passw1);


		    i=0;
	gotoxy(59,8);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
				break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(59+i,8);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(59+i,8);
				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
		}
	   }while(1);

	   strcpy(r1.mob,passw1);



		    i=0;
	gotoxy(59,10);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(59+i,10);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(59+i,10);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);
	   strcpy(r1.pdob,passw1);
	 // r1.cfee=atof(passw1);
		    i=0;
	gotoxy(59,12);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(59+i,12);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(59+i,12);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);
	  strcpy(r1.pgen,passw1);
	  //r1.esal=atof(passw1);

		    //i=0;



	 fp=fopen("party.dat","ab");
	 fseek(fp,0,SEEK_END);
	 fwrite(&r1,sizeof(r1),1,fp);

	 fclose(fp);
	 gotoxy(12,22);cprintf("ONE RECORD SAVED, DO U WANT TO ENTER ANOTHER RECORD Y/N: ");
	 cnt=getch();
	 if(cnt=='y'||cnt=='Y')goto tel;

	 }

	void edisp()
	{
	clrscr();
	char sv1;
	FILE * fp;
	party r1;
	 fp=fopen("party.dat","rb");

	textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	gotoxy(20,2);

	cout<<"        DISPLAY PARTY INFORMATION";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb2();

	while(!feof(fp))
		{
		fread(&r1,sizeof(r1),1,fp);
		if(!feof(fp))
			{
			gotoxy(20,6);
			cprintf("%s",r1.pid);
			gotoxy(20,8);
			cprintf("%s",r1.pname);
			gotoxy(20,10);
			cprintf("%s",r1.paddr);
			gotoxy(20,12);
			cprintf("%s",r1.pcity);
			gotoxy(20,14);
			cprintf("%s",r1.pstate);
			gotoxy(59,6);
			cprintf("%s",r1.email);
			gotoxy(59,8);
			cprintf("%s",r1.mob);
			gotoxy(59,10);
			cprintf("%s",r1.pdob);
			gotoxy(59,12);
			cprintf("%s",r1.pgen);
			sv1=getch();
			if(sv1==27)
				{
				fclose(fp);
				break;
				}
			printlb2();

			}
		}

		fclose(fp);



	}


void esearch()
{
	tse:
	clrscr();
	party r1;
	char s1[20],ch,ch1;
	int i=0,f=0;
	textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	gotoxy(20,2);
	cout<<"        WELCOME IN SEARCH ENTRY";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb2();
	gotoxy(20,6);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			FILE *fp;
			fp=fopen("party.dat","rb");
			if(fp==NULL)
			{
			 gotoxy(31,18);
			 cprintf("Data not available");
			 getch();
			  return;
			}
			else
			{
			while(!feof(fp))
			{
			fread(&r1,sizeof(r1),1,fp);
			if(strcmpi(s1,r1.pid)==0)
				{
					f=1;
					gotoxy(20,6); cprintf("%s",r1.pid);
					gotoxy(20,8); cprintf("%s",r1.pname);
					gotoxy(20,10); cprintf("%s",r1.paddr);
					gotoxy(20,12); cprintf("%s",r1.pcity);
					gotoxy(20,14); cprintf("%s",r1.pstate);
					gotoxy(59,6); cprintf("%s",r1.email);
					gotoxy(59,8); cprintf("%s",r1.mob);
					gotoxy(59,10); cprintf("%s",r1.pdob);
					gotoxy(59,12); cprintf("%.2f",r1.pgen);
				}
			}
			}
	       fclose(fp);
	    ///////current working area????????????????????????/
	     if(f==0)
	     {
	     gotoxy(20,18);
	     cprintf("Record not found, Pls enter valid Reg. No.");
	     getch();
	     goto tse;
	     }
	     else
	     {
	     gotoxy(20,18);
	     cprintf("Do u want to search another record Y/N: ");
	     ch1=getch();
	     if(ch1=='Y'||ch1=='y')
	     {
	     goto tse;
	     }
	     else
	     {
	     return;
	     }
	     }

	    }
	    else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,6);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,6);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);





}

void eupdate()
{
	tue:
	clrscr();
	party r1;
       //	course r2;
	char s1[20],ch,ch1;
       //	FILE *fp1;
	int i=0,f=0,count;
	textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	gotoxy(20,2);
	cout<<"       WELCOME IN UPDATE ENTRY";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb2();
	gotoxy(20,6);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			count=0;
			FILE *fp;
			fp=fopen("party.dat","rb");
			if(fp==NULL)
			{
			 gotoxy(31,18);
			 cprintf("Data not available");
			 getch();
			  return;
			}
			else
			{
			while(!feof(fp))
			{
			count++;
			fread(&r1,sizeof(r1),1,fp);
			if(strcmpi(s1,r1.pid)==0)
				{


					f=1;
					i=0;
					fclose(fp);
				      gotoxy(20,8);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,8);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,8);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  strcpy(r1.pname,s1);

	  //////////////
		    i=0;
	gotoxy(20,10);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,10);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,10);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  strcpy(r1.paddr,s1);
		    i=0;
	gotoxy(20,12);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,12);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,12);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);
	   strcpy(r1.pcity,s1);
		    i=0;
	gotoxy(20,14);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,14);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,14);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  strcpy(r1.pstate,s1);

		    i=0;
	gotoxy(59,6);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(59+i,6);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(59+i,6);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);
	   strcpy(r1.email,s1);

		    i=0;
	gotoxy(59,8);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
				break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(59+i,8);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(59+i,8);
				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
		}
	   }while(1);
	    strcpy(r1.mob,s1);



		    i=0;
	gotoxy(59,10);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(59+i,10);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(59+i,10);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);
	   strcpy(r1.pdob,s1);

	   i=0;
	gotoxy(59,12);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(59+i,12);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(59+i,12);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);
	   r1.esal=atof(s1);
	strcpy(r1.pgen,s1);
	fp=fopen("party.dat","rb+");
       count--;
	fseek(fp,sizeof(r1)*count,SEEK_SET);
	 fwrite(&r1,sizeof(r1),1,fp);



				 }
			}
			}
	       fclose(fp);
	    ///////current working area????????????????????????/
	     if(f==0)
	     {
	     gotoxy(20,18);
	     cprintf("Record not found, Pls enter valid Teach. No.");
	     getch();
	     goto tue;
	     }
	     else
	     {
	     gotoxy(20,18);
	     cprintf("Do u want to update another record Y/N: ");
	     ch1=getch();
	     if(ch1=='Y'||ch1=='y')
	     {
	     goto tue;
	     }
	     else
	     {
	     return;
	     }
	     }

	    }
	    else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,6);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,6);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);





}




void edel()
{
	tde:
	clrscr();
	party r1;
	char s1[20],ch,ch1;
	int i=0,f=0,count;
	textcolor(YELLOW);
	textbackground(BLACK);
	int tn;
	clrscr();
	gotoxy(20,2);
	cout<<"       WELCOME IN DELETE OPERATION          ";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb2();
	gotoxy(20,6);

	do{
	   ch=getch();
		 if(ch==27)
		       return;

		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			count=0;
			FILE *fp,*tp;
			fp=fopen("party.dat","rb");

			if(fp==NULL)
			{
			 gotoxy(31,18);
			 cprintf("Data not available");
			 getch();
			  return;
			}
			else
			{
			tp=fopen("mytemp.dat","ab");

			while(!feof(fp))
			{
			count++;
			fread(&r1,sizeof(r1),1,fp);
			if(!feof(fp))
			{
			if(strcmpi(s1,r1.pid)!=0)
				{

					fwrite(&r1,sizeof(r1),1,tp);

				}
			else
				{
				 f=1;

				 }
			}
			}


	fclose(fp);
	fclose(tp);




	      // fclose(fp);
	    ///////current working area????????????????????????/
	     if(f==0)
	     {
	     gotoxy(20,18);
	     cprintf("Record not found, Pls enter valid Teach. No.");
	     remove("mytemp.dat");
	     getch();
	     goto tde;
	     }
	     else
	     {
	     remove("party.dat");
	     rename("mytemp.dat","party.dat");

	     gotoxy(20,18);
	     cprintf("Do u want to Delete another record Y/N: ");
	     ch1=getch();
	     if(ch1=='Y'||ch1=='y')
	     {
	     goto tde;
	     }
	     else
	     {
	     return;
	     }
	     }
	     }
	     }

	    else
	    {
	    if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,6);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,6);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);


}
void printlb4()
	{
	char dlb[20]={"                   "};
	char ilb[20]={"              "};
	textcolor(WHITE);
	textbackground(GREEN);
	gotoxy(3,6);cprintf("%s",ilb);
	gotoxy(20,6); cprintf("%s",dlb);


	gotoxy(3,8);cprintf("%s",ilb);
	gotoxy(20,8); cprintf("%s",dlb);

	gotoxy(3,10);cprintf("%s",ilb);
	gotoxy(20,10); cprintf("%s",dlb);

	gotoxy(42,6);cprintf("%s",ilb);
	gotoxy(59,6); cprintf("%s",dlb);

	gotoxy(42,8);cprintf("%s",ilb);
	gotoxy(59,8); cprintf("%s",dlb);

	gotoxy(42,10);cprintf("%s",ilb);
	gotoxy(59,10); cprintf("%s",dlb);



	gotoxy(3,6);cprintf(" RETAILER ID.      :");
	gotoxy(3,8);cprintf(" RETAILER NAME     :");
	gotoxy(3,10);cprintf("RETAILER ADDRESS  :");
	gotoxy(42,6);cprintf("REATILER CITY     :");
	gotoxy(42,8);cprintf(" MOB NO.      :");
	gotoxy(42,10);cprintf(" BOOTH NO  :");

	gotoxy(20,8);


	}




void gentry()
	{
	sel:
	clrscr();
	retailer r1;
	int cc=0,i,f;


	textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	gotoxy(20,2);

	cout<<"        WELCOME IN STOCK ENTRY";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb4();
	char s1[20]={"S00"},ts[20],passw1[30],ch,cnt;
	FILE *fp;
	fp=fopen("retailer.dat","rb");
	if(fp==NULL)
		{
		cc=1;
		}
	else
		{
		    f=0;
			while(!feof(fp))
			{
			  fread(&r1,sizeof(r1),1,fp);
			  f++;
			}
			fclose(fp);
			fp=fopen("retailer.dat","rb");
		       f--;
		       fseek(fp,sizeof(r1)*f,SEEK_SET);
			fread(&r1,sizeof(r1),1,fp);
			i=0;
			while(r1.rno[i+3]!='\0')
			{
			 ts[i]= r1.rno[i+3];
			 i++;
			}
			ts[i]='\0';
			cc= atoi(ts);
			cc++;
		}
	    ///////current working area????????????????????????/
	     fclose(fp);
	    textcolor(YELLOW);
	    itoa(cc,ts,10);
	    strcat(s1,ts);
	    strcpy(r1.rno,s1);
	    gotoxy(20,6);
	    cprintf("%s",r1.rno);
	    ////////////////////????//

	    i=0;
	gotoxy(20,8);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,8);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,8);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  strcpy(r1.rname,passw1);

	  //////////////
		    i=0;
	gotoxy(20,10);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,10);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,10);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  strcpy(r1.radd,passw1);
	  //gotoxy(45,12);
		    i=0;
	gotoxy(59,6);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(59+i,6);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(59+i,6);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	 strcpy(r1.rcity,passw1);

		    i=0;
	gotoxy(59,8);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(59+i,8);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(59+i,8);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	 strcpy(r1.mob,passw1);

		    i=0;
	gotoxy(59,10);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(59+i,10);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(59+i,10);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);
	  r1.bno=atoi(passw1);



	 fp=fopen("retailer.dat","ab");
	 fseek(fp,0,SEEK_END);
	 fwrite(&r1,sizeof(r1),1,fp);

	 fclose(fp);
	 gotoxy(12,18);cprintf("ONE RECORD SAVED, DO U WANT TO ENTER ANOTHER RECORD Y/N: ");
	 cnt=getch();
	 if(cnt=='y'||cnt=='Y')goto sel;

	}




	void gdisp()
	{
	clrscr();
	char sv1;
	int i=1;
	FILE * fp;
	retailer r1;
	fp=fopen("retailer.dat","rb");

	textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	gotoxy(20,2);


	cout<<"       DISPLAY GODOWN INFORMATION";
	gotoxy(18,3);
	cout<<"==========================================="  ;

	gotoxy(2,5);cprintf("RETAILER NO ");
	gotoxy(9,5);cprintf("REATILER NAME    ");
	gotoxy(26,5);cprintf("RETAILER ADDRESS ");
	gotoxy(44,5);cprintf("RETAILER CITY    ");
	gotoxy(62,5);cprintf("MOBILE NO  ");
	gotoxy(73,5);cprintf("BOOTH NO ");
	gotoxy(1,6);
	while(i<=80)
	{
	cprintf("-");
	i++;
	}
	i=7;
	textcolor(GREEN);



	while(!feof(fp))
		{
		fread(&r1,sizeof(r1),1,fp);
		if(!feof(fp))
			{
			gotoxy(2,i);
			cprintf("%s",r1.rno);
			gotoxy(9,i);
			cprintf("%s",r1.rname);
			gotoxy(26,i);
			cprintf("%s",r1.radd);
			gotoxy(44,i);
			cprintf("%s",r1.rcity);
			gotoxy(62,i);
			cprintf("%s",r1.mob);
			gotoxy(77,i);
			cprintf("%d",r1.bno);
			i++;
			}
		}
		getch();
		fclose(fp);
	}


void gsearch()
{
/*	lse:
	clrscr();
	retailer r1;
	char s1[20],ch,ch1;
	int i=0,f=0;
	textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	gotoxy(20,2);
	cout<<"        WELCOME IN SEARCH ENTRY";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb4();
	gotoxy(20,6);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			FILE *fp;
			fp=fopen("retailer.dat","rb");
			if(fp==NULL)
			{
			 gotoxy(31,18);
			 cprintf("Data not available");
			 getch();
			  return;
			}
			else
			{
			while(!feof(fp))
			{
			fread(&r1,sizeof(r1),1,fp);
			if(strcmpi(s1,r1.bno)==0)
				{
					f=1;
					gotoxy(20,6);cprintf("%s",r1.rno);
					gotoxy(20,8); cprintf("%s",r1.rname);
					gotoxy(20,10); cprintf("%s",r1.radd);
					gotoxy(59,6); cprintf("%s",r1.rcity);
					gotoxy(59,8); cprintf("%s",r1.mob);
					gotoxy(59,10); cprintf("%s",r1.bno);
				}
			}
			}
	       fclose(fp);
	    ///////current working area????????????????????????/
	     if(f==0)
	     {
	     gotoxy(20,18);
	     cprintf("Record not found, Pls enter valid lib. ID");
	     getch();
	     goto lse;
	     }
	     else
	     {
	     gotoxy(20,18);
	     cprintf("Do u want to search another record Y/N: ");
	     ch1=getch();
	     if(ch1=='Y'||ch1=='y')
	     {
	     goto lse;
	     }
	     else
	     {
	     return;
	     }
	     }

	    }
	    else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,6);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,6);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);  */
}
void gdel()
{   /*
	tde:
	clrscr();
	retailer r1;
	char s1[20],ch,ch1;
	int i=0,f=0,count;
	textcolor(YELLOW);
	textbackground(BLACK);
	int tn;
	clrscr();
	gotoxy(20,2);
	cout<<"       WELCOME IN DELETE OPERATION          ";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb4();
	gotoxy(20,6);

	do{
	   ch=getch();
		 if(ch==27)
		       return;

		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			count=0;
			FILE *fp,*tp;
			fp=fopen("retailer.dat","rb");

			if(fp==NULL)
			{
			 gotoxy(31,18);
			 cprintf("Data not available");
			 getch();
			  return;
			}
			else
			{
			tp=fopen("mytemp.dat","ab");

			while(!feof(fp))
			{
			count++;
			fread(&r1,sizeof(r1),1,fp);
			if(!feof(fp))
			{
			if(strcmpi(s1,r1.bno)!=0)
				{

					fwrite(&r1,sizeof(r1),1,tp);

				}
			else
				{
				 f=1;

				 }
			}
			}


	fclose(fp);
	fclose(tp);




	      // fclose(fp);
	    ///////current working area????????????????????????/
	     if(f==0)
	     {
	     gotoxy(20,18);
	     cprintf("Record not found, Pls enter valid Teach. No.");
	     remove("mytemp.dat");
	     getch();
	     goto tde;
	     }
	     else
	     {
	     remove("retailer.dat");
	     rename("mytemp.dat","retailer.dat");

	     gotoxy(20,18);
	     cprintf("Do u want to Delete another record Y/N: ");
	     ch1=getch();
	     if(ch1=='Y'||ch1=='y')
	     {
	     goto tde;
	     }
	     else
	     {
	     return;
	     }
	     }
	     }
	     }
	      else

	    {
	    if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,6);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,6);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);
      */

}





void printlb5()
	{
	char dlb[20]={"                   "};
	char ilb[20]={"              "};
	textcolor(WHITE);
	textbackground(GREEN);
	gotoxy(3,6);cprintf("%s",ilb);
	gotoxy(20,6); cprintf("%s",dlb);


	gotoxy(3,8);cprintf("%s",ilb);
	gotoxy(20,8); cprintf("%s",dlb);

	gotoxy(3,10);cprintf("%s",ilb);
	gotoxy(20,10); cprintf("%s",dlb);

	gotoxy(3,12);cprintf("%s",ilb);
	gotoxy(20,12); cprintf("%s",dlb);

	gotoxy(3,14);cprintf("%s",ilb);
	gotoxy(20,14); cprintf("%s",dlb);

	gotoxy(42,6);cprintf("%s",ilb);
	gotoxy(59,6); cprintf("%s",dlb);

	gotoxy(42,8);cprintf("%s",ilb);
	gotoxy(59,8); cprintf("%s",dlb);

	gotoxy(42,10);cprintf("%s",ilb);
	gotoxy(59,10); cprintf("%s",dlb);

	 gotoxy(42,12);cprintf("%s",ilb);
	gotoxy(59,12); cprintf("%s",dlb);

	gotoxy(3,6);cprintf(" DISTRIBUTOR ID      :");
	gotoxy(3,8);cprintf(" DISTRIBUTOR NAME    :");
	gotoxy(3,10);cprintf("DISTRIBUTOR ADD  :");
	gotoxy(3,12);cprintf(" CITY NAME     :");
	gotoxy(3,14);cprintf(" DISTRICT      :");
	gotoxy(42,6);cprintf(" PIN NO.       :");
	gotoxy(42,8);cprintf(" MOB. NO.      :");
	gotoxy(42,10);cprintf(" GENDER        :");
	gotoxy(42,12);cprintf(" EMAIL :");

	gotoxy(20,8);


	}



void hentry()
	{
	tel:
	clrscr();
	distributor r1;
	int cc=0,i,f;


	textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	gotoxy(20,2);

	cout<<"      WELCOME IN HAWKER DETAIL ENTRY";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb5();
	char s1[20]={"T00"},ts[20],passw1[30],ch,cnt;
	FILE *fp;
	fp=fopen("distributor.dat","rb");
	if(fp==NULL)
		{
		cc=1;
		}
	else
		{
			 f=0;
			while(!feof(fp))
			{
			  fread(&r1,sizeof(r1),1,fp);
			  f++;
			}
			fclose(fp);
			fp=fopen("distributor.dat","rb");
			f--;
		       fseek(fp,sizeof(r1)*f,SEEK_SET);
			fread(&r1,sizeof(r1),1,fp);
			i=0;
			while(r1.did[i+3]!='\0')
			{
			 ts[i]= r1.did[i+3];
			 i++;
			}
			ts[i]='\0';
			cc= atoi(ts);
			cc++;
		}
	    ///////current working area????????????????????????/
	    fclose(fp);
	    textcolor(YELLOW);
	    itoa(cc,ts,10);
	    strcat(s1,ts);
		fclose(fp);

	    strcpy(r1.did,s1);
	    gotoxy(20,6);
	    cprintf("%s",r1.did);
	    ////////////////////????//

	    i=0;
	gotoxy(20,8);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,8);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,8);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  strcpy(r1.dname,passw1);

	  //////////////
		    i=0;
	gotoxy(20,10);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,10);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,10);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  strcpy(r1.dadd,passw1);
	  //gotoxy(45,12);
		    i=0;
	gotoxy(20,12);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,12);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,12);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);
	   strcpy(r1.dcity,passw1);
	 // r1.cfee=atof(passw1);

		    i=0;
	gotoxy(20,14);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,14);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,14);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  strcpy(r1.ddistt,passw1);

		    i=0;
	gotoxy(59,6);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(59+i,6);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(59+i,6);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);
	   strcpy(r1.dpin,passw1);
	 // r1.cfee=atof(passw1);


		    i=0;
	gotoxy(59,8);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
				break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(59+i,8);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(59+i,8);
				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
		}
	   }while(1);

	   strcpy(r1.dmob,passw1);



		    i=0;
	gotoxy(59,10);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(59+i,10);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(59+i,10);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);
	   strcpy(r1.dmob,passw1);
	 // r1.cfee=atof(passw1);
		    i=0;
	gotoxy(59,12);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(59+i,12);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(59+i,12);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);
	  // strcpy(r1.gen,passw1);
	 // r1.hdm=atof(passw1);

		    //i=0;



	 fp=fopen("distributor","ab");
	 fseek(fp,0,SEEK_END);
	 fwrite(&r1,sizeof(r1),1,fp);

	 fclose(fp);
	 gotoxy(12,22);cprintf("ONE RECORD SAVED, DO U WANT TO ENTER ANOTHER RECORD Y/N: ");
	 cnt=getch();
	 if(cnt=='y'||cnt=='Y')goto tel;

	 }

	void hdisp()
	{
	clrscr();
	char sv1;
	FILE * fp;
	distributor r1;
	 fp=fopen("distributor.dat","rb");

	textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	gotoxy(20,2);

	cout<<"        DISPLAY DISTRIBUTOR INFORMATION";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb5();

	while(!feof(fp))
		{
		fread(&r1,sizeof(r1),1,fp);
		if(!feof(fp))
			{
			gotoxy(20,6);
			cprintf("%s",r1.did);
			gotoxy(20,8);
			cprintf("%s",r1.dname);
			gotoxy(20,10);
			cprintf("%s",r1.dadd);
			gotoxy(20,12);
			cprintf("%s",r1.dcity);
			gotoxy(20,14);
			cprintf("%s",r1.ddistt);
			gotoxy(59,6);
			cprintf("%s",r1.dpin);
			gotoxy(59,8);
			cprintf("%s",r1.dmob);
			gotoxy(59,10);
			cprintf("%s",r1.gen);
			gotoxy(59,12);
			cprintf("%.2f",r1.email);
			sv1=getch();
			if(sv1==27)
				{
				fclose(fp);
				break;
				}
			printlb2();

			}
		}

		fclose(fp);



	}


void hsearch()
{
	tse:
	clrscr();
	distributor r1;
	char s1[20],ch,ch1;
	int i=0,f=0;
	textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	gotoxy(20,2);
	cout<<"        WELCOME IN SEARCH ENTRY";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb5();
	gotoxy(20,6);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			FILE *fp;
			fp=fopen("distributor.dat","rb");
			if(fp==NULL)
			{
			 gotoxy(31,18);
			 cprintf("Data not available");
			 getch();
			  return;
			}
			else
			{
			while(!feof(fp))
			{
			fread(&r1,sizeof(r1),1,fp);
			if(strcmpi(s1,r1.did)==0)
				{
					f=1;
					gotoxy(20,6); cprintf("%s",r1.did);
					gotoxy(20,8); cprintf("%s",r1.dname);
					gotoxy(20,10); cprintf("%s",r1.dadd);
					gotoxy(20,12); cprintf("%s",r1.dcity);
					gotoxy(20,14); cprintf("%s",r1.ddistt);
					gotoxy(59,6); cprintf("%s",r1.dpin);
					gotoxy(59,8); cprintf("%s",r1.dmob);
					gotoxy(59,10); cprintf("%s",r1.gen);
					gotoxy(59,12); cprintf("%.2f",r1.email);
				}
			}
			}
	       fclose(fp);
	    ///////current working area????????????????????????/
	     if(f==0)
	     {
	     gotoxy(20,18);
	     cprintf("Record not found, Pls enter valid Reg. No.");
	     getch();
	     goto tse;
	     }
	     else
	     {
	     gotoxy(20,18);
	     cprintf("Do u want to search another record Y/N: ");
	     ch1=getch();
	     if(ch1=='Y'||ch1=='y')
	     {
	     goto tse;
	     }
	     else
	     {
	     return;
	     }
	     }

	    }
	    else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,6);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,6);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);





}

void hupdate()
{
	tue:
	clrscr();
	distributor r1;
       //	course r2;
	char s1[20],ch,ch1;
       //	FILE *fp1;
	int i=0,f=0,count;
	textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	gotoxy(20,2);
	cout<<"       WELCOME IN UPDATE ENTRY";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb5();
	gotoxy(20,6);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			count=0;
			FILE *fp;
			fp=fopen("distributor.dat","rb");
			if(fp==NULL)
			{
			 gotoxy(31,18);
			 cprintf("Data not available");
			 getch();
			  return;
			}
			else
			{
			while(!feof(fp))
			{
			count++;
			fread(&r1,sizeof(r1),1,fp);
			if(strcmpi(s1,r1.did)==0)
				{


					f=1;
					i=0;
					fclose(fp);
				      gotoxy(20,8);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,8);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,8);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  strcpy(r1.dname,s1);

	  //////////////
		    i=0;
	gotoxy(20,10);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,10);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,10);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  strcpy(r1.dadd,s1);
		    i=0;
	gotoxy(20,12);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,12);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,12);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);
	   strcpy(r1.dcity,s1);
		    i=0;
	gotoxy(20,14);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,14);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,14);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  strcpy(r1.ddistt,s1);

		    i=0;
	gotoxy(59,6);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(59+i,6);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(59+i,6);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);
	   strcpy(r1.dpin,s1);

		    i=0;
	gotoxy(59,8);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
				break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(59+i,8);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(59+i,8);
				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
		}
	   }while(1);
	    strcpy(r1.dmob,s1);



		    i=0;
	gotoxy(59,10);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(59+i,10);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(59+i,10);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);
	   strcpy(r1.gen,s1);

	   i=0;
	gotoxy(59,12);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(59+i,12);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(59+i,12);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);
	   strcpy(r1.email,s1);

	fp=fopen("distributor.dat","rb+");
       count--;
	fseek(fp,sizeof(r1)*count,SEEK_SET);
	 fwrite(&r1,sizeof(r1),1,fp);



				 }
			}
			}
	       fclose(fp);
	    ///////current working area????????????????????????/
	     if(f==0)
	     {
	     gotoxy(20,18);
	     cprintf("Record not found, Pls enter valid Teach. No.");
	     getch();
	     goto tue;
	     }
	     else
	     {
	     gotoxy(20,18);
	     cprintf("Do u want to update another record Y/N: ");
	     ch1=getch();
	     if(ch1=='Y'||ch1=='y')
	     {
	     goto tue;
	     }
	     else
	     {
	     return;
	     }
	     }

	    }
	    else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,6);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,6);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);





}




void hdel()
{
	tde:
	clrscr();
	distributor r1;
	char s1[20],ch,ch1;
	int i=0,f=0,count;
	textcolor(YELLOW);
	textbackground(BLACK);
	int tn;
	clrscr();
	gotoxy(20,2);
	cout<<"       WELCOME IN DELETE OPERATION          ";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb5();
	gotoxy(20,6);

	do{
	   ch=getch();
		 if(ch==27)
		       return;

		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			count=0;
			FILE *fp,*tp;
			fp=fopen("distributor.dat","rb");

			if(fp==NULL)
			{
			 gotoxy(31,18);
			 cprintf("Data not available");
			 getch();
			  return;
			}
			else
			{
			tp=fopen("mytemp.dat","ab");

			while(!feof(fp))
			{
			count++;
			fread(&r1,sizeof(r1),1,fp);
			if(!feof(fp))
			{
			if(strcmpi(s1,r1.did)!=0)
				{

					fwrite(&r1,sizeof(r1),1,tp);

				}
			else
				{
				 f=1;

				 }
			}
			}


	fclose(fp);
	fclose(tp);




	      // fclose(fp);
	    ///////current working area????????????????????????/
	     if(f==0)
	     {
	     gotoxy(20,18);
	     cprintf("Record not found, Pls enter valid Teach. No.");
	     remove("mytemp.dat");
	     getch();
	     goto tde;
	     }
	     else
	     {
	     remove("distributor.dat");
	     rename("mytemp.dat","distributor.dat");

	     gotoxy(20,18);
	     cprintf("Do u want to Delete another record Y/N: ");
	     ch1=getch();
	     if(ch1=='Y'||ch1=='y')
	     {
	     goto tde;
	     }
	     else
	     {
	     return;
	     }
	     }
	     }
	     }

	    else
	    {
	    if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,6);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,6);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);


}

void printlb6()
	{
	char dlb[20]={"                   "};
	char ilb[20]={"              "};
	textcolor(WHITE);
	textbackground(GREEN);
	gotoxy(3,6);cprintf("%s",ilb);
	gotoxy(20,6); cprintf("%s",dlb);


	gotoxy(3,8);cprintf("%s",ilb);
	gotoxy(20,8); cprintf("%s",dlb);

	gotoxy(3,10);cprintf("%s",ilb);
	gotoxy(20,10); cprintf("%s",dlb);

	gotoxy(3,6);cprintf(" PRODUCT ID      :");
	gotoxy(3,8);cprintf(" PRODUCT NAME   :");
	gotoxy(3,10);cprintf("PRICE  :");


	gotoxy(20,8);


	}



void pentry()
	{
	tel:
	clrscr();
	product r1;
	int cc=0,i,f;


	textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	gotoxy(20,2);

	cout<<"      WELCOME IN product DETAIL ENTRY";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb6();
	char s1[20]={"P00"},ts[20],passw1[30],ch,cnt;
	FILE *fp;
	fp=fopen("product.dat","rb");
	if(fp==NULL)
		{
		cc=1;
		}
	else
		{
			 f=0;
			while(!feof(fp))
			{
			  fread(&r1,sizeof(r1),1,fp);
			  f++;
			}
			fclose(fp);
			fp=fopen("product.dat","rb");
			f--;
		       fseek(fp,sizeof(r1)*f,SEEK_SET);
			fread(&r1,sizeof(r1),1,fp);
			i=0;
			while(r1.pid[i+3]!='\0')
			{
			 ts[i]= r1.pid[i+3];
			 i++;
			}
			ts[i]='\0';
			cc= atoi(ts);
			cc++;
		}
	    ///////current working area????????????????????????/
	    fclose(fp);
	    textcolor(YELLOW);
	    itoa(cc,ts,10);
	    strcat(s1,ts);
		fclose(fp);

	    strcpy(r1.pid,s1);
	    gotoxy(20,6);
	    cprintf("%s",r1.pid);
	    ////////////////////????//

	    i=0;
	gotoxy(20,8);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,8);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,8);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  strcpy(r1.pname,passw1);

	  //////////////
		    i=0;
	gotoxy(20,10);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			passw1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,10);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,10);

				passw1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  r1.p=atof(passw1);
	  //gotoxy(45,12);
		    i=0;
	gotoxy(20,12);

	 fp=fopen("product.dat","ab");
	 fseek(fp,0,SEEK_END);
	 fwrite(&r1,sizeof(r1),1,fp);

	 fclose(fp);
	 gotoxy(12,22);cprintf("ONE RECORD SAVED, DO U WANT TO ENTER ANOTHER RECORD Y/N: ");
	 cnt=getch();
	 if(cnt=='y'||cnt=='Y')goto tel;

	 }

	void pdisp()
	{
	clrscr();
	char sv1;
	FILE * fp;
	passbook r1;
	 fp=fopen("product.dat","rb");

	textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	gotoxy(20,2);

	cout<<"        DISPLAY Product INFORMATION";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb6();

	while(!feof(fp))
		{
		fread(&r1,sizeof(r1),1,fp);
		if(!feof(fp))
			{
			gotoxy(20,6);
			cprintf("%s",r1.pid);
			gotoxy(20,8);
			cprintf("%s",r1.pname);
			gotoxy(20,10);
			cprintf("%f",r1.p);

			sv1=getch();
			if(sv1==27)
				{
				fclose(fp);
				break;
				}
			printlb2();

			}
		}

		fclose(fp);



	}


void psearch()
{
	tse:
	clrscr();
	product r1;
	char s1[20],ch,ch1;
	int i=0,f=0;
	textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	gotoxy(20,2);
	cout<<"        WELCOME IN SEARCH ENTRY";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb6();
	gotoxy(20,6);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			FILE *fp;
			fp=fopen("product.dat","rb");
			if(fp==NULL)
			{
			 gotoxy(31,18);
			 cprintf("Data not available");
			 getch();
			  return;
			}
			else
			{
			while(!feof(fp))
			{
			fread(&r1,sizeof(r1),1,fp);
			if(strcmpi(s1,r1.pid)==0)
				{
					f=1;
					gotoxy(20,6); cprintf("%s",r1.pid);
					gotoxy(20,8); cprintf("%s",r1.pname);
					gotoxy(20,10); cprintf("%f",r1.p);

				}
			}
			}
	       fclose(fp);
	    ///////current working area????????????????????????/
	     if(f==0)
	     {
	     gotoxy(20,18);
	     cprintf("Record not found, Pls enter valid passbook No.");
	     getch();
	     goto tse;
	     }
	     else
	     {
	     gotoxy(20,18);
	     cprintf("Do u want to search another record Y/N: ");
	     ch1=getch();
	     if(ch1=='Y'||ch1=='y')
	     {
	     goto tse;
	     }
	     else
	     {
	     return;
	     }
	     }

	    }
	    else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,6);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,6);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);





}

void pupdate()
{
	tue:
	clrscr();
	passbook r1;
       //	course r2;
	char s1[20],ch,ch1;
       //	FILE *fp1;
	int i=0,f=0,count;
	textcolor(YELLOW);
	textbackground(BLACK);
	clrscr();
	gotoxy(20,2);
	cout<<"       WELCOME IN UPDATE ENTRY";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb6();
	gotoxy(20,6);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			count=0;
			FILE *fp;
			fp=fopen("product.dat","rb");
			if(fp==NULL)
			{
			 gotoxy(31,18);
			 cprintf("Data not available");
			 getch();
			  return;
			}
			else
			{
			while(!feof(fp))
			{
			count++;
			fread(&r1,sizeof(r1),1,fp);
			if(strcmpi(s1,r1.pid)==0)
				{


					f=1;
					i=0;
					fclose(fp);
				      gotoxy(20,8);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,8);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,8);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  strcpy(r1.pname,s1);

	  //////////////
		    i=0;
	gotoxy(20,10);

	do{
	   ch=getch();
		 if(ch==27)
		 {
		      return;
		 }
		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			break;
			}
		else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,10);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,10);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);

	  strcpy(r1.acno,s1);

	fp=fopen("product.dat","rb+");
       count--;
	fseek(fp,sizeof(r1)*count,SEEK_SET);
	 fwrite(&r1,sizeof(r1),1,fp);



				 }
			}
			}
	       fclose(fp);
	    ///////current working area????????????????????????/
	     if(f==0)
	     {
	     gotoxy(20,18);
	     cprintf("Record not found, Pls enter valid product ID.");
	     getch();
	     goto tue;
	     }
	     else
	     {
	     gotoxy(20,18);
	     cprintf("Do u want to update another record Y/N: ");
	     ch1=getch();
	     if(ch1=='Y'||ch1=='y')
	     {
	     goto tue;
	     }
	     else
	     {
	     return;
	     }
	     }

	    }
	    else
			{
			if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,6);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,6);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);





}




void pdel()
{
	tde:
	clrscr();
	product r1;
	char s1[20],ch,ch1;
	int i=0,f=0,count;
	textcolor(YELLOW);
	textbackground(BLACK);
	int tn;
	clrscr();
	gotoxy(20,2);
	cout<<"       WELCOME IN DELETE OPERATION          ";
	gotoxy(18,3);
	cout<<"==========================================="  ;
	printlb6();
	gotoxy(20,6);

	do{
	   ch=getch();
		 if(ch==27)
		       return;

		 else
		 {
		if(ch==13 || i==19)
			{
			s1[i]='\0';
			count=0;
			FILE *fp,*tp;
			fp=fopen("product.dat","rb");

			if(fp==NULL)
			{
			 gotoxy(31,18);
			 cprintf("Data not available");
			 getch();
			  return;
			}
			else
			{
			tp=fopen("mytemp.dat","ab");

			while(!feof(fp))
			{
			count++;
			fread(&r1,sizeof(r1),1,fp);
			if(!feof(fp))
			{
			if(strcmpi(s1,r1.pid)!=0)
				{

					fwrite(&r1,sizeof(r1),1,tp);

				}
			else
				{
				 f=1;

				 }
			}
			}


	fclose(fp);
	fclose(tp);




	      // fclose(fp);
	    ///////current working area????????????????????????/
	     if(f==0)
	     {
	     gotoxy(20,18);
	     cprintf("Record not found, Pls enter valid passbook No.");
	     remove("mytemp.dat");
	     getch();
	     goto tde;
	     }
	     else
	     {
	     remove("product.dat");
	     rename("mytemp.dat","product.dat");

	     gotoxy(20,18);
	     cprintf("Do u want to Delete another record Y/N: ");
	     ch1=getch();
	     if(ch1=='Y'||ch1=='y')
	     {
	     goto tde;
	     }
	     else
	     {
	     return;
	     }
	     }
	     }
	     }

	    else
	    {
	    if(ch=='\b')
				{
				if(i!=0)
					{
					i--;
					gotoxy(20+i,6);
					cprintf(" \b");
					}
				}
			else
				{
				gotoxy(20+i,6);

				s1[i]=ch;
				cprintf("%c",ch);
				i++;
				}
			}
			}
	   }while(1);


}


































