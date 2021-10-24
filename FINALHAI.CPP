#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream.h>
#include<string.h>
#include<ctype.h>

 randomise();
 int amt,i,flag=0,z=0,v=0,j=0,r1=0,o=0,r4=0,nfst1[1000],nfst2[1000],k=0;
 char chol,b,g,chc,st2[100][100];
 float tamt;
 int x=1,arr[100],r3=0,r6=0,r9=0,q1=0,q2=0,q3=0,q4=0,q5=0;

 void thankyou();
 void intro();
 void instructions();
 void admin();
 void mmain();
 void values();
 void user();
 void reserve();
 void trainno(char*,char*);
 void can();
 void cancell();
 char* conccategory(int);

 class login
 {
   public:
   char *id;
   char *password;
   void getid()
   {
     cout<<"\nEnter your Login id:";
     gets(id);
     if(strcmp(id,"chimchim")==0)
     password=getpass("\nEnter the password:");

   }
 }l;

 void main()
 {
   clrscr();
   cout<<"\n";
   intro();
   getch();
   clrscr();
   cout<<"\n\n\n\n\n\n\n";
   cout<<"         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
   cout<<"                   .......WELCOME TO INDIAN RAILWAYS.......\n\n";
   cout<<"         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
   getch();
   instructions();
   getch();
   values();
   mmain();
   getch();
 }
 class detail
  {
   public:

   int tno,hlong,distance,c1,c2,c1fare,c2fare,sn;
   char tname[20],bp[20],dp[20],days[40][40],dt[10],at[10];
   long int pnr;



   detail()
   {
     tno=0; hlong=0;sn=0;
     distance=0;
     c1=0;c2=0;c1fare=0;c2fare=0;
     strcpy(tname,"NULL");
     strcpy(bp,"NULL");
     strcpy(dp,"NULL");
     strcpy(days[40],"NULL");
     strcpy(dt,"NULL");
     strcpy(at,"NULL");
   }
   void getdetail()
   {
     clrscr();
     cout<<"\n  :: ENTER THE TRAIN DATABASE AS FOLLOWS ::\n";
     cout<<"\n Train no:";cin>>tno;
     cout<<"\n Train name:";gets(tname);
     cout<<"\n Boarding point:";gets(bp);
     cout<<"\n Destination point:";gets(dp);
     cout<<"\n Distance in Km :";cin>>distance;
     cout<<"\n Total No. of seats in first class: ";
     cin>>c1;
     nfst1[k]=c1;
     cout<<"\n Enter fare per ticket for first class: ";
     cin>>c1fare;
     cout<<"\n Total No. of seats in second class: ";
     cin>>c2;
     nfst2[k]=c2;
     cout<<"\n Enter fare per ticket for second class: ";
     cin>>c2fare;
     clrscr();
     cout<<"\n Enter days on which train is available: ";
     cout<<"\n\n WRITE 'ok' AT THE END \n\n";
     for(i=0;i<=7;i++)
     {
       cout<<" ";
       gets(days[i]);
       if(strcmpi(days[i],"ok")==0)
       break;
     }
     cout<<"\n How much time is expected to take to reach the destination :: (IN HOURS)  ";cin>>hlong;
     cout<<"\n Enter the expected departure time:(_ _:_ _):: ";
     gets(dt);
     cout<<"\n Enter the expected arrival time:(_ _:_ _):: ";
     gets(at);

   }

   void displaydetail()
   {
     clrscr();
     cout<<endl;
     for(int j=0;j<20;j++)
	tname[j]=toupper(tname[j]);
     for(j=0;j<20;j++)
	bp[j]=toupper(bp[j]);
     for(j=0;j<20;j++)
       dp[j]=toupper(dp[j]);

     cout<<"\n|  TRAIN S.| TRAIN NUMBER |  TRAIN NAME     |   BOARDING   |   DESTINATION   |";
     cout<<"\n|  NUMBER  |              |                 |    POINT     |      POINT      |";
     cout<<"\n|          |              |                 |              |                 |";
     cout<<"\n    "<<sn<<"             "<<tno<<"        "<<tname<<"        "<<bp<<"          "<<dp;
     cout<<"\n--------------------------------------------------------------------------------";
     cout<<"  TOTAL DISTANCE    |   NUMBER OF SEATS IN    |      FARE PER TICKET(in Rs)     ";
     cout<<"    TO TRAVEL       |                         |";
     cout<<"\n                    |    FIRST  |  SECOND     |     FIRST      |     SECOND";
     cout<<"\n                    |    CLASS  |  CLASS      |     CLASS      |     CLASS ";
     cout<<"\n                    |           |             |                |"<<endl;
     cout<<"    "<<distance<<"kms               "<<c1<<"         "<<c2<<"               "<<c1fare<<"             "<<c2fare;
     cout<<"\n-------------------------------------------------------------------------------";
     cout<<"\n  DAYS ON WHICH THE TRAINS ARE AVAILABLE ARE ==>\n";
     for(int m=0;m<i;m++)
       for(int n=0;n<40;n++)
	 days[m][n]=toupper(days[m][n]);
     cout<<"   ";
     for(j=0;j<i;j++)
     {
       cout<<days[j]<<",";
     }
     cout<<"\n--------------------------------------------------------------------------------";
     cout<<"\n  TRAVEL TIME    |    DEPARTURE TIME   |    ARRIVAL TIME ";
     cout<<"\n   "<<hlong<<"hrs                  "<<dt<<"               "<<at;
     cout<<"\n--------------------------------------------------------------------------------";
   }
 };

 class reser
 {
   public:
   int tno,age[10],con[20],tnouser,nost,pnr,d,m,y,sn;
   char bp[30],dp[30],pname[20][40],c_choice,tname[30],st[100][100];
   float amc;

   reser()
   {
     tno=0;pnr=0;d=0;m=0;y=0;sn=0;
     tnouser=0;nost=0;amc=0;
     strcpy(bp,"NULL");
     strcpy(dp,"NULL");
     strcpy(pname[20],"NULL");
     strcpy(tname,"NULL");
     for(i=0;i<100;i++)
     { strcpy(st[i],"NULL"); }
     c_choice=0;
   }

   void getresdet()
   {
     clrscr();
     cout<<"\n  ## ENTER THE DETAILS AS FOLLOWS ## \n";

     cout<<"\n Boarding point:";gets(bp);
     cout<<"\n Destination point:";gets(dp);
     cout<<"\n According to your given details the following trains are available,\nnow  you make your choice :\n";
     trainno(bp,dp);
     cout<<"\n\n\n Now choose your train serial number ::\n";
     cin>>tnouser;
     int kr=0;
     for(i=0;i<100;i++)
     {
       if(arr[i]==tnouser)
       {
	 kr=1;
	 break;
       }
     }
     if(kr==0)
     {
       clrscr();
       cout<<"\n\n\n\n\n\n\n\n\t\t\tSORRY YOU ENTERED WRONG CHOICE";
       getch();
       clrscr();
       res();
     }
     k=tnouser-1;
     clrscr();
     if((nfst1[k]==-5)&&(nfst2[k]==-5))
     {
       cout<<"\n\n\n\n\n\n\n\n\t\tSORRY NO MORE WAITING SEAT AVAILABLE ";
       getch();
       res();
     }
     c_choice=classc();
     if(c_choice=='f'||c_choice=='F')
     {
       if((nfst1[k]==-5))
       {
	 clrscr();
	 cout<<"\n\n\n\n\n\n\n\n\t\tSORRY NO SEAT AVAILABLE FOR RESERVATION";
	 getch();
	 res();
       }
       cout<<"\n No. of seats required in first class :";
       cin>>nost;
       q1=1;
     }
     else if(c_choice=='s'||c_choice=='S')
     {
       if(nfst2[k]==-5)
       {
	 clrscr();
	 cout<<"\n\n\n\n\n\n\n\n\t\tSORRY NO SEAT AVAILABLE FOR RESERVATION";
	 getch();
	 res();
       }
       cout<<"\n No. of seats required in second class : ";
       cin>>nost;
       q2=1;
     }
     q3=0;q4=0;q5=0;
     for(i=0;i<nost;i++)
     {
       if(q1==1)
       {
	 if(nfst1[k]-1>=-5)
	 {
	   nfst1[k]=nfst1[k]-1;
	   q3++;
	   cout<<"\n INFORMATION OF THE PASSENGER NUMBER "<<i+1<<" ==> ";
	   cout<<"\n Passenger name:";gets(pname[i]);
	   cout<<" Passenger age:";cin>>age[i];
	   aq1:
	   cout<<" Enter the concession category \n";
	   cout<<"\n  1.Military\n  2.Senior citizen (above 65 years) \n";
	   cout<<"  3.Children below 5 yrs\n  4.None\n ";
	   cin>>con[i];
	   if((con[i]!=1&&con[i]!=2)&&(con[i]!=3&&con[i]!=4))
	   {
	     cout<<"\n\n WRONG CHOICE!! PLEASE CHOOSE AGAIN";
	     goto aq1;
	   }
	   else
	   {
	     cout<<"\n\n Concession added !!!! \n\n";
	   }
	   if(nfst1[k]<0)
	   {
	     strcpy(st[i],"WAITING");
	   }
	   else
	   {
	     strcpy(st[i],"BOOKED");
	   }
	 }
	 else
	 {
	   cout<<"\nRESERVATION FOR PASSENGER "<<i+1<<" IS NOT POSSIBLE AS";
	   cout<<"NO MORE SEATS ARE AVAILABLE FOR RESERVATION";
	   q5++;
	   getch();
	 }
       }
       else if(q2==1)
       {
	 if(nfst2[k]-1>=-5)
	 {
	   nfst2[k]=nfst2[k]-1;
	   q4++;
	   cout<<"\n INFORMATION OF THE PASSENGER NUMBER "<<i+1<<" ==> ";
	   cout<<"\n Passenger name:";gets(pname[i]);
	   cout<<" Passenger age:";cin>>age[i];
	   aq2:
	   cout<<" Enter the concession category \n";
	   cout<<"\n  1.Military\n  2.Senior citizen (above 65 years) \n";
	   cout<<"  3.Children below 5 yrs\n  4.None\n ";
	   cin>>con[i];
	   if((con[i]!=1&&con[i]!=2)&&(con[i]!=3&&con[i]!=4))
	   {
	     cout<<"\n\n WRONG CHOICE!! PLEASE CHOOSE AGAIN";
	     goto aq2;
	   }
	   else
	   {
	     cout<<"\n\n Concession added !!!! \n\n";
	   }
	   if(nfst2[k]<0)
	   {
	     strcpy(st[i],"WAITING");
	   }
	   else
	   {
	     strcpy(st[i],"BOOKED");
	   }
	 }
	 else
	 {
	   cout<<"\nRESERVATION FOR PASSENGER "<<i+1<<" IS NOT POSSIBLE AS";
	   cout<<"NO MORE SEATS ARE AVAILABLE FOR RESERVATION";
	   q5++;
	   getch();
	 }
       }
     }
     q1=0;q2=0;
     cout<<"\n DO YOU WANT TO CONTINUE?";
     cout<<"\n Y FOR YES :: N FOR NO";
     cin>>chc;
     if(chc=='y'||chc=='Y')
     {
       nost=nost-q5;
       clrscr();
       cout<<"\n Enter the date of journey ::";
       cout<<"\n Enter date in 3 steps:(1)Date (2)Month (3)Year";
       cout<<"\n Enter Date  ==> ";cin>>d;
       cout<<"\n Enter Month ==> ";cin>>m;
       cout<<"\n Enter Year  ==> ";cin>>y;
       cout<<"\n............END OF GETTING DETAILS............\n \n";
     }
     else
     {
       nfst1[k]+=q3;
       nfst2[k]+=q4;
       mmain();
     }
  }

   void displayresdet()
   {
     clrscr();
     cout<<"\n...............................................\n";
     cout<<"      ::::: DISPLAYING THE PASSENGER DETAILS :::::\n";
     cout<<"\n PNR NUMBER ==>  "<<pnr;
     cout<<"\n TRAIN SERIAL NUMBER ==> "<<sn;
     cout<<"\n TRAIN NUMBER ==> "<<tno;
     cout<<"\n TRAIN NAME ==> "<<tname;
     cout<<"\n DATE OF JOURNEY ==> "<<d<<"/"<<m<<"/"<<y;
     cout<<"\n BOARDING POINT ==> "<<bp;
     cout<<"\n DESTINATION POINT ==> "<<dp;
     cout<<"\n NO. OF SEATS RESERVED IN YOUR CLASS AND THEIR DETAILS ==> "<<nost;
     if(c_choice=='f'||c_choice=='F')
     {
       cout<<"\n FIRST CLASS DETAILS==> ";
     }
     else
     {
       cout<<"\n SECOND CLASS DETAILS==> ";
     }
     for(i=0;i<nost;i++)
     {
       cout<<"\n INFORMATION OF PASSENGERS "<<i+1<<" :::: ";
       cout<<"\n PASSENGER NAME ==> ";puts(pname[i]);
       cout<<"\n PASSENGER AGE ==> "<<age[i];
       cout<<"\n CONCESSION CATEGORY ==> "<<conccategory(con[i]);
       cout<<"\n CURRENT STATUS ==> "<<st[i];
       cout<<"\n PRESS ANY KEY";
       getch();
     }
     cout<<"\n YOU MUST PAY ==> Rs"<<amc<<endl;
   }
 };
 reser t;

 class canc
 {
   public:
   int pnr,tno,age[10],nost,con[20],d,m,y,dc,mc,yc,sn;
   char tname[100],bp[20],dp[20],pname[10][100],c_choice,st[20];
   float amr;

   canc()
   {
     pnr=0;tno=0;nost=0;c_choice=0;
     d=0;m=0;y=0;dc=0;mc=0;yc=0,sn=0;
     strcpy(tname,"NULL");
     strcpy(bp,"NULL");
     strcpy(dp,"NULL");
     strcpy(pname[10],"NULL");
     strcpy(st,"NULL");
   }

   void getcancdet()
   {
     clrscr();
     cout<<"Enter the details as follows\n";
     cout<<"\n PNR NO. ==> ";cin>>pnr;
     cout<<"\n DATE OF CANCELLATION ==> ";
     cout<<"\n ENTER DATE IN 3 STEPS : (1)DATE (2)MONTH (3)YEAR";
     cout<<"\n ENTER DATE  ==> ";cin>>dc;
     cout<<"\n ENTER MONTH ==> ";cin>>mc;
     cout<<"\n ENTER YEAR  ==> ";cin>>yc;
     cout<<"\n\n ...........END OF GETTING DETAILS...........\n";
   }

   void displaycancdet()
   {
     clrscr();
     cout<<"\n...............................................\n";
     cout<<"      ::::: DISPLAYING THE GIVEN DETAILS :::::\n";
     cout<<"\n PNR NUMBER ==>  "<<pnr;
     cout<<"\n TRAIN NUMBER ==> "<<tno;
     cout<<"\n TRAIN SERIAL NUMBER ==> "<<sn;
     cout<<"\n TRAIN NAME ==> "<<tname;
     cout<<"\n DATE OF JOURNEY ==> "<<d<<"/"<<m<<"/"<<y;
     cout<<"\n BOARDING POINT ==> "<<bp;
     cout<<"\n DESTINATION POINT ==> "<<dp;
     cout<<"\n NO. OF SEATS RESERVED IN YOUR CLASS AND THEIR DETAILS ==> "<<nost;
     if(c_choice=='f'||c_choice=='F')
     {
       cout<<"\n FIRST CLASS DETAILS==> ";
       for(i=0;i<nost;i++)
       {
	 cout<<"\n INFORMATION OF PASSENGERS "<<i+1<<" :::: ";
	 cout<<"\n PASSENGER NAME ==> ";puts(pname[i]);
	 cout<<"\n PASSENGER AGE ==> "<<age[i];
	 cout<<"\n CONCESSION CATEGORY ==> "<<conccategory(con[i]);
       }
     }
     else
     {
	 cout<<"\n SECOND CLASS DETAILS==> ";
	 for(int i=0;i<nost;i++)
	 {
	   cout<<"\n INFORMATION OF PASSENGER "<<i+1<<" :::: ";
	   cout<<"\n PASSENGER NAME ==> ";puts(pname[i]);
	   cout<<"\n PASSENGER AGE ==> "<<age[i];
	   cout<<"\n CONCESSION CATEGORY ==> "<<conccategory(con[i]);
	 }
     }
     cout<<"\n YOU CAN COLLECT ==> Rs"<<amr;
     cout<<"\n DATE OF CANCELLATION ==> "<<dc<<"/"<<mc<<"/"<<yc<<endl;
   }
 };

 void intro()
 {
   cout<<"\n\n\n\n\n\t       WELCOME TO THE RAILWAY TICKET RESERVATION SYSTEM ";
   cout<<"\n\n\n\t\t          USING C++ PROGRAMMING LANGUAGE ";
   cout<<"\n\n\n\t\t\t          PREPARED BY \n";
   cout<<"\n\n\t\t     NIRANJANA SOWPARI  AND  KUSHAL RAJVANSHI";
   cout<<"\n\n\n\t\t\t         OF CLASS XII-A ";
 }

 void thankyou()
 {
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n";
   textcolor(LIGHTGREEN+BLINK);
   cprintf("                               *               *");
   cout<<"\n         *****  *   *      *      *    *  *  *    *   *  ******  *    *";
   cout<<"\n           *    *   *     * *     **   *  * *      * *   *    *  *    *";
   cout<<"\n           *    *****    *****    * *  *  **        *    *    *  *    *";
   cout<<"\n           *    *   *   *     *   *  * *  * *      *     *    *  *    *";
   cout<<"\n           *    *   *  *       *  *   **  *  *    *      ******  ******";
   cout<<"\n\n";
   textcolor(LIGHTRED+BLINK);
   cprintf("                               *               *\n\n");
}
void instructions()
{
clrscr();
cout<<"\n\n\n\t\t  PLEASE READ THE FOLLOWING NOTES  \n";
cout<<"\t\t  -------------------------------";
cout<<"\n\n  1): ONLY ADMINISTRATOR HAVE TO LOGIN AND USER IS FREE TO COME.";
cout<<"\n\n  2): OUR HAVE ONLY ONE FIRST CLASS COACH AND ONE SECOND CLASS COACH.";
cout<<"\n\n  3): RESERVATION AND CANCELLATION DONE IN THE SAME YEAR ONLY.";
cout<<"\n\n  4): IF THE NO. OF SEATS IN THE TRAINS(IN EITHER CLASS) IS 1 OR MORE";
cout<<"\n\n      THAN 1 THEN RESERVATION AS WELL AS CONFIRMATION WILL BE DONE BUT";
cout<<"\n\n      IF THE NO. OF SEATS IS IN BETWEEN -1 TO -5 THEN THIS RANGE INCLUDES";
cout<<"\n\n      THE WAITING LIST UPTO -5 WAITING PASSENGERS ARE ALLOWED AND NOT MORE";
cout<<"\n\n      THAN THAT.";
}

 char* conccategory(int e)
 {
   if(e==1)
     return("MILITARY CONCESSION");
   else if(e==2)
     return("SENIOR CITIZEN");
   else if(e==3)
     return("CHILD BELOW 5 Yrs");
   else if(e==4)
     return("NO CONCESSION");
 }

 void values()
 {
   fstream f1,f2,f3;
   detail a;
   reser b;
   canc c;
   f1.open("t.dat",ios::out|ios::binary);
   f1.write((char*)&a,sizeof(a));
   f1.close();
   f2.open("p.dat",ios::out|ios::binary);
   f2.write((char*)&b,sizeof(b));
   f2.close();
   f3.open("cn.dat",ios::out|ios::binary);
   f3.write((char*)&c,sizeof(c));
   f3.close();
 }

 void mmain()
 {
   int ch;
   char yn;
   do
   {
     w:
     clrscr();
     cout<<"\n\n";
     cout<<"              ^^^^^^^^^^^^^^^^^^^^^^MAIN MENU^^^^^^^^^^^^^^^^^^^^\n\n";
     cout<<"        1.ADMIN MODE \n\t2.USER MODE \n\t3.EXIT\n";
     cout<<"   \nENTER YOUR CHOICE \n\n";
     cin>>ch;
     cout<<endl;

     switch(ch)
     {
       case 1: admin();
	       break;
       case 2: user();
	       break;
       case 3: thankyou();
	       getch();
	       exit(0);
	       break;
       default : cout<<"\n WRONG CHOICE!!!";
		 goto w;
     }

   }while(ch<=3);
 }

 void admin()                             /* FOR ADMINISTRATOR MODE */
 {
   detail a;
   reser b;
   canc d,q;
   fstream f,f2,f1;
   int ch;char ch2,ch5;

   char *id;
   char idi[30]="chimchim";
   char *password;
   char pass[20]="12345678";

   l.getid();

   if((strcmp(pass,l.password)!=0)||(strcmp(idi,l.id)!=0))
   {
     cout<<"\n  Enter the password/id correctly \n";
     cout<<"\n  You are not permitted to login this mode \n  PLEASE START FROM THE MAIN MENU:\n";
     getch();
     o++;
     if(o==4)
     {
       cout<<"\n YOU HAVE ENTERED THE WRONG PASSWORD/ID  4 TIMES\n";
       cout<<"\n HENCE NOT ALLOWED TO PERFORM OPERATIONS ON RESERVATION SYSTEM";
       getch();
       exit(0);
     }
     mmain();
   }

   else
   {
     char c;
     do
     {
       clrscr();
       cout<<"\n        ...........ADMINISTRATOR MENU...........\n\n";

       cout<<"1.Create train data base\n2.Add train\n";
       cout<<"3.Display train \n4.Display passenger details \n";
       cout<<"5.Display cancelled passenger details \n6.Return to main menu\n";

       cout<<"\n ENTER YOUR CHOICE :";
       cin>>ch;
       cout<<endl;

       switch(ch)
       {
	 case 1: clrscr();
		 f.open("t.dat",ios::binary|ios::out);
		 ny:
		 a.getdetail();
		 r9=1;
		 cout<<"\n Do You Want To Edit Your Given Details?";
		 cout<<"\n Y for YES     :::     N for NO ==> \n\n";
		 cin>>ch2;
		 if(ch2=='y'||ch2=='Y')
		 goto ny;
		 a.sn=x;
		 x++;k++;
		 f.write((char*)&a,sizeof(a));
		 f.close();
		 break;

	 case 2: clrscr();
		 f.open("t.dat",ios::binary|ios::app);
		 u:
		 a.getdetail();
		 r9=1;
		 cout<<"\n Do You Want To Edit Your Given Details?";
		 cout<<"\n Y for YES     :::     N for NO ==> ";
		 cin>>ch5;
		 if(ch5=='y'||ch5=='Y')
		 goto u;
		 a.sn=x;
		 x++;k++;
		 f.write((char*)&a,sizeof(a));
		 cout<<"\n Do you want add one more record :\n";
		 cout<<" \n  Y for yes     :::     N for no \n";
		 char z;
		 cin>>z;
		 if((z=='y')||(z=='Y'))
		 goto u;
		 f.close();
		 break;

	 case 3: clrscr();
		 cout<<"\n\n\t\t\t    DISPLAYING TRAIN DETAILS  \n\n\n";
		 f.open("t.dat",ios::in|ios::binary);
		 while(!f.eof())
		 {
		   if(r9==0)
		   {
		     cout<<"\n\n\n\n\n\n\n\n\t\t       SORRY NO TRAINS AVAILABLE RIGHT NOW";
		     getch();
		     break;
		   }
		   f.read((char*)&a,sizeof(a));
		   cout<<"\n PRESS ANY KEY \n";
		   getch();
		   a.displaydetail();
		   cout<<"\n\n";
		 }
		 f.close();
		 break;


	 case 4: clrscr();
		 f2.open("p.dat",ios::in|ios::binary);
		 while(!f2.eof())
		 {
		   if(r6!=0)
		   {
		     f2.read((char*)&b,sizeof(b));
		     z=1;
		     if(b.pnr!=0)
		     {
		       cout<<"\n PRESS ANY KEY \n";
		       getch();
		       b.displayresdet();
		       cout<<"\n\n";
		     }
		   }
		   else
		   {
		     cout<<"\n\n\n\n\n\n\n\n\t\t\tSORRY NO PASSENGER RIGHT NOW";
		     getch();
		     break;
		   }
		 }
		 f2.close();
		 break;

	 case 5: clrscr();
		 f1.open("cn.dat",ios::binary|ios::in);
		 while(!f1.eof())
		 {
		   if(r3==0)
		   {
		     cout<<"\n\n\n\n\n\n\n\n\t\tSORRY NO CANCELLATION DETAILS AVAILABLE RIGHT NOW";
		     getch();
		     break;
		   }
		   f1.read((char*)&d,sizeof(d));
		   if(d.pnr!=0)
		   {
		     cout<<"\n PRESS ANY KEY \n";
		     getch();
		     r1=1;
		     d.displaycancdet();
		     cout<<"\n\n";
		   }
		 }
		 f1.close();
		 break;
	 case 6: clrscr();
		 mmain();
		 break;
	 default: cout<<"\n\n\n\n\n\n\n\n\t\t\tWRONG CHOICE!!!";
		  break;
       }

     }while(ch<=5);
   }
 }


 void res()
 {
   int ch;
   do
   {
     clrscr();
     cout<<"\n\n\n\n1.Reserve\n2.Return to the main menu\n";
     cout<<"\nENTER YOUR CHOICE :\n";
     cin>>ch;
     cout<<endl;
     switch(ch)
     {
       case 1: reserve();
	       break;
       case 2: mmain();
	       break;
     }
   }while(ch<=2);
 }

 int r5=0;
 void reserve()                           /* RESERVING TICKETS */
 {
   int ccm=0,ccs=0,ccc=0,ccnt=0,amc1=0,amc2=0,amc3=0,amc4=0;
   int y=0;
   char ch3;
   detail a;
   reser b;
   fstream f1,f2;
   f1.open("t.dat",ios::binary|ios::in|ios::out);
   f2.open("p.dat",ios::binary|ios::app);
   if(r9==0)
   {
     clrscr();
     cout<<"\n\n\n\n\n\n\n\n\t\tSORRY NO TRAINS AVAILABLE RIGHT NOW";
     getch();
     mmain();
   }
   nf:
   f1.read((char*)&a,sizeof(a));

   b.getresdet();
   cout<<"\n Do You Want To Edit Your Given Details?\n";
   cout<<"\n Y for YES     :::     N for NO\n";
   cin>>ch3;
   if(ch3=='y'||ch3=='Y')
   goto nf;
   while(!f1.eof())
   {
     int ch,m;
     t=b;
     if(a.sn==b.tnouser)
     {
       y=1;
       if(b.c_choice=='f')
       {
	 int pos1=f1.tellg()-sizeof(a);
	 amt=a.c1fare;
	 for(i=0;i<b.nost;i++)
	 {
	   if(a.c1-1>=-5)
	   {
	     a.c1=a.c1-1;
	   }
	   else
	   {
	     break;
	   }
	 }
	 k=a.sn-1;
	 nfst1[k]=a.c1;
	 f1.seekp(pos1,ios::beg);
	 f1.write((char*)&a,sizeof(a));
       }
       else
       {
	 int pos2=f1.tellg()-sizeof(a);
	 amt=a.c2fare;
	 for(i=0;i<b.nost;i++)
	 {
	   if(a.c2-1>=-5)
	   {
	     a.c2=a.c2-1;
	   }
	   else
	   {
	     break;
	   }
	 }
	 k=a.sn-1;
	 nfst2[k]=a.c2;
	 f1.seekp(pos2,ios::beg);
	 f1.write((char*)&a,sizeof(a));
       }
       b.sn=a.sn;
       b.tno=a.tno;
       strcpy(b.tname,a.tname);
       for(int i=0;i<b.nost;i++)
       {
       if(b.con[i]==1)
       ccm++;
       else if(b.con[i]==2)
       ccs++;
       else if(b.con[i]==3)
       ccc++;
       else if(b.con[i]==4)
       ccnt++;
       }
	 if(ccm>0)
	 amc1=(ccm*amt)*0.5;

	 if(ccs>0)
	 amc2=(ccm*amt)*0.6;

	 if(ccc>0)
	 amc3=0.0;

	 if(ccnt>0)
	 amc4=ccnt*amt;
       b.amc=amc1+amc2+amc3+amc4;

       b.pnr=rand();

      // strcpy(b.st,"BOOKED");
       f2.write((char*)&b,sizeof(b));	 // NOW b GOT WRITTEN INTO THE FILE					      the file */
       r6=1;
       char r7;
       cout<<"\n\n PRESS ANY KEY \n";
       getch();
       b.displayresdet();
       cout<<"\n PRESS ANY KEY \n\n";
       getch();
       clrscr();
       cout<<"\n\n\n\n\n\n\n";
       cout<<"\t\t ***********************************************\n";
       cout<<"\t\t       ........END OF RESERVATION.........\n";
       cout<<"\t\t ***********************************************\n\n";
       cout<<"\t     ------------------------------------------------------\n\n";
       cout<<"\t     ------****------YOUR TICKET IS RESERVED-----****------\n\n";
       cout<<"\t     ------****------END OF RESERVATION MENU-----****------\n";
       getch();
       break;
     }
     f1.read((char*)&a,sizeof(a));
     if(y==1)
      r5=1;
   }

   if(y==0)
   {
     clrscr();
     cout<<"\n\n\n\n\n\n\n\n\t\tSORRY NO SUCH TRAINS AVAILABLE RIGHT NOW";
     getch();
     mmain();
   }


   f1.close();
   f2.close();
 }

 void enquiry()
 {
   clrscr();
   fstream f;
   f.open("t.dat",ios::in|ios::out|ios::binary);
   detail a;
   if(r9==0)
   {
     clrscr();
     cout<<"\n\n\n\n\n\n\n\n\t\t\tSORRY NO TRAIN AVAILABLE RIGHT NOW";
     getch();
     user();
   }
   while(f.read((char*)&a,sizeof(a)))
   {
     cout<<"\n\n PRESS ANY KEY \n";
     getch();
     a.displaydetail();
     getch();
   }
 }

 void user()
 {
   clrscr();
   int ch;
   cout<<"\n   *****************************************************\n";
   cout<<"\n   **************WELCOME TO THE USER MENU***************\n";
   cout<<"\n   *****************************************************\n";


   do
   {
     cout<<"\n\n  1.Reserve\n  2.Cancel\n  3.Enquiry\n  4.Return to the main menu\n";
     cout<<"\nEnter your choice:\n";
     cin>>ch;
     cout<<endl;
     switch(ch)
     {
       case 1: res();
	       break;

       case 2: can();
	       break;

       case 3: enquiry();
	       break;

       case 4: mmain();
	       break;
     }
   }while(ch<=4);
 }


 void trainno(char *bip,char *dip)       // TO SHOW THE DESIRED TRAINS TO USER
 {
   detail a;
   reser b;
   fstream f("t.dat",ios::in|ios::binary);
   for(i=0;i<100;i++)
   {
     arr[i]=0;
   }
   i=0;
   while(!f.eof())
   {
     f.read((char*)&a,sizeof(a));
     if((strcmp(a.bp,bip)==0)&&(strcmp(a.dp,dip)==0))
     {
       v=1;
       cout<<"\n PRESS ANY KEY \n";
       getch();
       a.displaydetail();
       arr[i]=a.sn;
       getch();
     }
     i++;
   }
   if(v==0)
   {
     cout<<"\n\n     SORRY NO SUCH TRAINS SATISFYING YOUR DEMAND PLEASE GO BACK TO MAIN MENU ";
     getch();
     mmain();
   }
 }

 char classc()
 {
   cout<<"\n Enter the train class \n";
   cout<<"\n f->first class :: s->second class ==> ";
   cin>>chol;
   return(chol);
 }




 void cancell()
 {
   u:
   detail a;
   reser b;
   canc c;char ch4;
   if(t.tnouser==0)
   {
     cout<<"\n\n\n\n\n\n\n\n\t\tSORRY NO PASSENGERS AVAILABLE RIGHT NOW";
     getch();
   }
   else
   {
     fstream f1,f2,f3;
     f1.open("t.dat",ios::binary|ios::in|ios::out);
     f2.open("p.dat",ios::binary|ios::in|ios::out);
     f3.open("cn.dat",ios::binary|ios::app);
     clrscr();
     cout<<"\n\n\n          **********CANCELLATION MENU*********\n";
     nu:
     c.getcancdet();
     cout<<"\n Do You Want To Edit Your Given Details?\n";
     cout<<"\n Y for YES     :::     N for NO\n";
     cin>>ch4;
     if(ch4=='y'||ch4=='Y')
     goto nu;
     while(!f2.eof())
     {
       f2.read((char*)&b,sizeof(b));
       if(b.pnr==c.pnr)
       {
	 tamt=b.amc;
	 if(((b.d==c.dc)&&(b.m==c.mc))&&(b.y==c.yc))
	 {
	   cout<<"\n You are cancelling at the date of departure\n";
	   getch();
	   c.amr=tamt-(tamt*0.8);
	 }
	 else if(c.yc<b.y)
	 {
	   cout<<"\nCancelling before the departure of train";
	   getch();
	   c.amr=tamt-(tamt*0.5);
	 }
	 else
	 {
	   if(c.yc>b.y)
	   {
	     cout<<"Cancelling after the departure of train \n";
	     cout<<"Your request cannot be completed\n GOING TO THE MAIN MENU \n";
	     getch();
	     mmain();
	   }
	   else if(((c.dc>b.d)&&(c.mc==b.m))&&(c.yc==b.y))
	   {
	     cout<<"Cancelling after the departure in the same month \n";
	     cout<<"Your request cannot be completed\n GOING TO THE MAIN MENU \n";
	     getch();
	     mmain();
	   }
	   else if(((c.dc<b.d)&&(c.mc==b.m))&&(c.yc==b.y))
	   {
	     cout<<"\nCancelling before departure in the same month";
	     getch();
	     c.amr=tamt-(tamt*0.6);
	   }
	   else if((c.mc<b.m)&&(c.yc==b.y))
	   {
	     cout<<"\nCancelling before the departure in another month";
	     getch();
	     c.amr=tamt-(tamt*0.5);
	   }
	   else if((c.mc>b.m)&&(c.yc==b.y))
	   {
	     cout<<"\nCancelling after the departure in another month \n";
	     cout<<"\nYour request cannot be completed\n GOING TO THE MAIN MENU \n";
	     getch();
	     mmain();
	   }
	 }
	 for(i=0;i<b.nost;i++)
	 {
	   if(strcmp(b.st[i],"BOOKED")==0)
	   {
	     strcpy(b.st[i],"CANCELLED");
	   }
	 }
	 int pos3=f2.tellg()-sizeof(b);
	 int pos4=f2.tellg();
	 f2.seekp(pos3,ios::beg);
	 f2.write((char*)&b,sizeof(b));
	 f2.seekg(pos4,ios::beg);
	 r4=1;
	 flag=1;
	 c.sn=b.sn;
	 c.tno=b.tno;
	 strcpy(c.tname,b.tname);
	 strcpy(c.bp,b.bp);
	 strcpy(c.dp,b.dp);
	 c.c_choice=b.c_choice;
	 c.nost=b.nost;
	 for(int j=0;j<c.nost;j++)
	 {
	   strcpy(c.pname[j],b.pname[j]);
	   c.age[j]=b.age[j];
	 }
	 c.d=b.d;
	 c.m=b.m;
	 c.y=b.y;
	 for(int i=0;i<c.nost;i++)
	 c.con[i]=b.con[i];

	 while(f1.read((char*)&a,sizeof(a)))
	 {
	   if(a.tno==c.tno)
	   {
	     int pos=f1.tellg()-sizeof(a);
	     if(c.c_choice=='f'||c.c_choice=='F')
	     {
	       a.c1=a.c1+c.nost;
	       k=a.sn-1;
	       nfst1[k]=a.c1;
	       f1.seekp(pos,ios::beg);
	       f1.write((char*)&a,sizeof(a));
	     }
	     else
	     {
	       a.c2=a.c2+c.nost;
	       k=a.sn-1;
	       nfst2[k]=a.c2;
	       f1.seekp(pos,ios::beg);
	       f1.write((char*)&a,sizeof(a));
	     }
	   }
	 }

	 r1=1;
	 r3=1;
	 f3.write((char*)&c,sizeof(c));
	 int pos5=f3.tellp();
	 f3.seekp(pos5,ios::beg);
	 c.displaycancdet();
	 cout<<"\n\n   PRESS ANY KEY \n\n\n";
	 getch();
	 clrscr();
	 cout<<"\n\n\n\n\n\n\n\n";
	 cout<<"\t\t      *****************************************\n";
	 cout<<"\t\t      .........END OF CANCELLATION.............\n";
	 cout<<"\t\t      *****************************************\n";
	 getch();
	 mmain();
       }
     }
     if(flag==0)
     {
       clrscr();
       cout<<"\n\n\n\n\n\n\n\n\t\tNO TRAINS AVAILABLE FOR THIS PNR NUMBER\n";
       getch();
     }
     f1.close();
     f2.close();
     f3.close();
     mmain();
   }
 }

 void can()
 {
   int ch;
   do
   {
     clrscr();
     cout<<"\n\n   .................CANCELLATION MENU.........\n";
     cout<<"\n\n\n\n\n1.Cancel\n2.Return to the main menu\n";
     cout<<"\n ENTER YOUR CHOICE : ";
     cin>>ch;
     cout<<endl;
     switch(ch)
     {
       case 1: cancell();
	       break;
       case 2: mmain();
	       break;
     }
   }while(ch<=2);
 }
