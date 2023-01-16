#include <iostream>
#include<fstream>
#include<windows.h>
using namespace std;
struct student
{
char name[80];
char matric_no[80];
int unq_no, age, level;
char course[90];
char department[80];
char sex,grade;
char phoneno[90], maritalstatus[90], nationality[90], dob[90], so_orgin[90],lga[90],genotype[90],b_group[90],sponsorname[90];

char cus1[20],cus2[20],cus3[20],cus4[20],cus5[20];
float prog_m,arch_m,writing_sk,alg_m,alg_l,sum,average;
void calculate(){
	if(prog_m || arch_m && writing_sk && alg_l && alg_m >=80)
	cout << "A";
	else if(prog_m && arch_m && writing_sk && alg_l && alg_m >=60)
		cout << "B";
	else if(prog_m && arch_m && writing_sk && alg_l && alg_m >=50)
		cout << "C"; 
	else if(prog_m && arch_m && writing_sk && alg_l && alg_m >=40)
		cout <<"D";
	else if(prog_m && arch_m && writing_sk && alg_l && alg_m >=30)
		cout << "E";
	else
		cout <<"F";
	}
			
};

void intro();
void adminlogin();
void studmenu();
void mainmenu();
void acceptdata();
void view_Specific(int);
void viewall();
void result(int);
void deleterecord(int);
void modify(int);

void accept_rpt();
void viewall_rpt();
void result(int);
void delete_rpt(int);
void modify_rpt(int);

int main()
{
    system("color a");
    char c;
    system("cls");
    intro();

    do{
   system("cls");
   system("color e");
   cout<<"\n\n";
   cout<<"\t====================STUDENT REPORT CARD MANEGEMENT SYSTEM===================="<<endl;
   cout<<endl;
   cout << "\t\t\t\tAre you an/a.....\n\n";
   cout<<"\t\t\t\t1. ADMIN\n\n";
   cout<<"\t\t\t\t2. STUDENT\n\n";
   cout<<"\t\t\t\t3. EXIT\n\n";
   cout<<"ENTER YOUR CHOICE (1-3) :";
   cin>>c;
   system("cls");
   switch(c)
   {
   case '1':
    {
        adminlogin();
        break;
    }
   case '2':
    {
        studmenu();
        break;
    }
   
   }
    }while(c!='3');
    return 0;
}

void intro()
{

    cout << "\n\n\n";
    Sleep(300);
    cout << "\t\t\t\t * * *  **** *      ****  ***   ***   ****   " << endl;
    Sleep(300);
    cout << "\t\t\t\t * * * *     *     *     *   * * * * *        "<< endl;
    Sleep(300);
    cout << "\t\t\t\t * * * ***** *     *     *   * * * * *****    " << endl;
    Sleep(300);
    cout << "\t\t\t\t * * * *     *     *     *   * * * * *         " << endl;
    Sleep(300);
    cout << "\t\t\t\t  ***   **** *****  ****  ***  * * *  ****     " << endl;
    Sleep(300);
    cout<<endl;
    cout<<"\t\t\t\t============================================="<<endl;
    Sleep(500);
    cout<<"\t\t\t\tTHIS IS STUDENT REPORT CARD MANEGEMENT SYSTEM"<<endl;
    Sleep(500);
    cout<<"\t\t\t\t============================================="<<endl;
    Sleep(500);
    cout<<"press any key to continue...";
    cin.ignore();
    cin.get();
}

void adminlogin()
{
	 system("color b");
	system("cls");
	cout<<"\t\t\t\t=================ADMIN LOGIN================\n\n"<<endl;
	string username;
	string password;
	
	cout<<"\t\t\t\t Enter username : ";
	cin>>username;
	cout<<"\t\t\t\t Enter password : ";
	cin>>password;

	if(username=="admin" && password=="admin@2") 
	  {
    	system("cls");
		mainmenu();	
    	
   	}   
	else
	 {
	 	system("color c");
		cout<<"\t\t\t\t\n Error ! Invalid Credintials..";	

		Sleep(1000);
		system("cls");
		main();
	 }

}

void studmenu()
{
char ccc;
 system("color 1");		
   cout<<"\t\t\t\t=================STUDENT MENU================\n\n"<<endl;
	 Sleep(300);
   	cout<<"\t\t\t\t1. ADD YOUR DETAILS \n\n"<<endl;
   	Sleep(300);
     cout<<"\t\t\t\t2. MODIFY YOUR RECORD \n\n"<<endl;
    Sleep(300);
     cout<<"\t\t\t\t3. VIEW YOUR RECORD \n\n"<<endl;
    Sleep(300);
     cout<<"\t\t\t\t4. VIEW RESULT \n\n"<<endl;
    Sleep(300);
     cout<<"\t\t\t\t5. EXIT \n\n"<<endl;
    Sleep(300);
    cout<<"\t\t\t\tENTER YOUR CHOICE... <1-5> :";
     Sleep(300);
    cin>> ccc;
    cout<<endl;
    
    switch(ccc){
    	case '1':
    	{
    		acceptdata();
    		system("cls");
            studmenu();
    	//	break;
        }
    	case '2':
    	{	
        	int n;
            cout<<"ENTER YOUR UNIQUE NUMBER :";
            cin>>n;
            modify(n);
            system("cls");
            studmenu();
            //break;
        }	

    	case '3':
    	{
          int n;
          cout<<"ENTER YOUR UNIQUE NUMBER :";
          cin>>n;
          view_Specific(n);
          system("cls");
          studmenu();
          //break;
        }
			
        
    	case '4':
    	{	
    	   int n;
            cout<<"ENTER YOUR UNIQUE NUMBER :";
            cin>>n;
            cout<<endl;
            result(n);
            system("cls");
            studmenu();
           // break;
        }	
	}
}

void mainmenu()
{
    system("color c");
    char cc;
    cout<<"\t\t\t\t=================MAIN MENU================\n\n"<<endl;
    Sleep(300);
    
    cout<<"\t\t\t\t\t STUDENT DETAILS \n\n"<<endl;
    Sleep(300);
    cout<<"\t\t\t\t0. ADD STUDENT DETAILS\n\n"<<endl;
   	Sleep(300);
    cout<<"\t\t\t\t1. VIEW ALL STUDENTS DETAILS\n\n"<<endl;
    Sleep(300);
    cout<<"\t\t\t\t2. VIEW A SINGLE STUDENT RECORD\n\n"<<endl;
    Sleep(300);
    cout<<"\t\t\t\t3. MODIFY STUDENT RECORD \n\n"<<endl;
    Sleep(300);
    cout<<"\t\t\t\t4. DELETE STUDENT RECORD \n\n"<<endl;
     Sleep(300);
    
    cout<<"\t\t\t\t\t STUDENT PERFORMANCE REPORT \n\n"<<endl;
    Sleep(300);
	cout<<"\t\t\t\t5. CREATE STUDENT REPORT\n\n"<<endl;
    Sleep(300);
    cout<<"\t\t\t\t6. VIEW ALL STUDENTS REPORT\n\n"<<endl;
     Sleep(300);
    cout<<"\t\t\t\t7. VIEW A SINGLE STUDENT REPORT\n\n"<<endl;
     Sleep(300);
    cout<<"\t\t\t\t8. MODIFY REPORT\n\n"<<endl;
     Sleep(300);
     cout<<"\t\t\t\t9. DELETE REPORT\n\n"<<endl;
     Sleep(300);
    cout<<"\t\t\t\t============================== "<<endl;
     Sleep(300);
    cout<<"\t\t\t\tENTER YOUR CHOICE... ^_~ :-) <1-10> :";
     Sleep(300);
    cin>>cc;
    cout<<endl;
    switch(cc)
    {
	    case '0':
	        {
	            acceptdata();
	            system("cls");
	            mainmenu();
	            //break;
	        }
	    case '1':
	        {
	            viewall();
	        }
	    case '2':
	        {
	              int n;
	              cout<<"ENTER YOUR UNIQUE NUMBER :";
	              cin>>n;
	              view_Specific(n);
	              system("cls");
	              mainmenu();
	             // break;
	          }
	    case '3':
	        {
	            int n;
	            cout<<"ENTER YOUR UNIQUE NUMBER :";
	            cin>>n;
	            modify(n);
	            system("cls");
	            mainmenu();
	            //break;
	        }
	    case '4':
	        {
	            int n;
	            cout<<"ENTER YOUR UNIQUE NUMBER :";
	            cin>>n;
	            cout<<endl;
	            deleterecord(n);
	            break;
	        }
	    case '5':
	        {
	            accept_rpt();
	            system("cls");
	            mainmenu();
	            //break;
	        }
	    case '6':
	        {
	            viewall_rpt();
	            system("cls");
                 mainmenu();
	            //break;
	        }
	    case '7':
	          {
	            int n;
	            cout<<"ENTER YOUR UNIQUE NUMBER :";
	            cin>>n;
	            cout<<endl;
	            result(n);
	            system("cls");
	            mainmenu();
	          }
	    case '8':
	        {
	            int n;
	            cout<<"ENTER YOUR UNIQUE NUMBER :";
	            cin>>n;
	            modify_rpt(n);
	            system("cls");
	            mainmenu();
	            //break;
	        }
	     case '9':
	        {
	            int n;
	            cout<<"ENTER YOUR UNIQUE NUMBER :";
	            cin>>n;
	            cout<<endl;
	            delete_rpt(n);
	            break;
           }
    }
}

void acceptdata()
{
    system("cls");
    system("color 1");
    student s;
    ofstream outfile;
    outfile.open("Report.txt",ios::app|ios::binary);
    if(outfile.fail())
    {
        cout<<"THE FILE COULD NOT BE OPEN...press enter key";
        cin.ignore();
        cin.get();
    }
    cout<<"\n\n";
    cout<<"\t\t\t\t=======ADD STUDENT DETAILS========\n\n";
    cout<<"ENTER YOUR FULL NAME :";
    cin.ignore();
    cin.getline(s.name,80);
    cout<<"ENTER YOUR MATRIC NUMBER : ";
    cin.ignore();
    cin.get(s.matric_no,80);
    cout<<"ENTER YOUR UNIQUE NUMBER :";
    cin>>s.unq_no;
    cout<<"ENTER DEPARTMENT :";
    cin>>s.department;
    cout<<"ENTER COURSE STUDYING :";
    cin>>s.course;
    cout<<"ENTER LEVEL :";
    cin>>s.level;
    cout<<"ENTER AGE :";
    cin>>s.age;
    cout<<"Sex ? (M/F) :";
    cin>>s.sex;
    cout<<"ENTER PHONE NUMBER :";
    cin>>s.phoneno; 
    cout<<"ENTER NATIONALITY :";
    cin>>s.nationality;
    cout<<"ENTER STATE OF ORIGIN :";
    cin>>s.so_orgin;
    cout<<"ENTER LGA :";
    cin>>s.lga;
    cout<<"ENTER DATE OF BIRTH (DD//MM//YYYY) :";
    cin>>s.dob;
    cout<<"ENTER GENOTYPE :";
    cin>>s.genotype;
    cout<<"ENTER BLOODGROUP :";
    cin>>s.b_group;
    cout<<"ENTER SPONSOR NAME :";
    cin>>s.sponsorname;  
    cout<<"ENTER MARITAL STATUS:";
    cin>>s.maritalstatus;
    
    outfile.write(reinterpret_cast<char *> (&s), sizeof(student));
    outfile.close();
    cout<<endl;
    system("color a");
    cout<<"\t\t\t\tTHE FILE IS SUCCESSFULLY SAVED"<<endl;
    cout<<endl;
    cout<<"press any key to continue...";
    cin.ignore();
    cin.get();
}

void viewall()
{
    system("cls");
    system("color 3");
    student s;
    ifstream infile;
    bool check=false;
    infile.open("Report.txt",ios::app|ios::binary);
    if(infile.fail())
    {
        cout<<"THE FILE COULD NOT BE OPENED.....press enter key...";
        cin.ignore();
        cin.get();
    }
     cout<<"\n\n";
     cout<<"\t\t\t\tALL STUDENTS DETAILS"<<endl;
     cout<<"=================================================================================="<<endl;
    while(infile.read(reinterpret_cast<char*>(&s),sizeof(student)))
    {
        cout<<"\t\t\t\tSTUDENT NAME :"<<s.name<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT MATRIC NUMBER :"<<s.matric_no<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT UNIQUE NUMBER :"<<s.unq_no<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT DEPARTMENT :"<<s.department<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT COURSE :"<<s.course<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT LEVEL :"<<s.level<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT AGE :"<<s.age<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT SEX :"<<s.sex<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT PHONENUMBER :"<<s.phoneno<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT NATIONALITY :"<<s.nationality<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT STATE OF ORIGIN :"<<s.so_orgin<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT LGA :"<<s.lga<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT DATE OF BIRTH :"<<s.dob<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT GENOTYPE :"<<s.genotype<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT BLOODGROUP :"<<s.b_group<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT SPONSOR NAME :"<<s.sponsorname<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT MARITAL STATUS :"<<s.maritalstatus<<endl<<endl;
        
        cout<<"=================================================================================="<<endl;
        check=true;
        cout<<"press any key to continue....";
        cin.ignore();
        cin.get();
        system("cls");
        mainmenu();
        
    }
    infile.close();
    if(check==false)
    cout<<"\t\t\t\tNO RECORD FOUND..."<<endl<<endl;
    cout<<"press any key to continue....";
    cin.ignore();
    cin.get();
    system("cls");
    mainmenu();
}

void view_Specific(int n)
{
    system("cls");
    system("color d");
    student s;
    ifstream infile;
    infile.open("Report.txt",ios::app|ios::binary);
    if(infile.fail())
    {
        cout<<"THE FILE COULD NOT BE OPENED...";

        cin.ignore();
        cin.get();
    }
    bool equality=false;
    cout<<"\t\t\t\t==========VIEW A SINGLE STUDENT DETAILS==========\n\n";
    while(infile.read(reinterpret_cast<char*>(&s),sizeof(student)))
    {
        if(s.unq_no==n)
        {
        cout<<"\t\t\t\tSTUDENT NAME :"<<s.name<<endl;
        cout<<"\t\t\t\tSTUDENT MATRIC NUMBER :"<<s.matric_no<<endl;
        cout<<"\t\t\t\tSTUDENT UNIQUE NUMBER :"<<s.unq_no<<endl;
        cout<<"\t\t\t\tSTUDENT DEPARTMENT :"<<s.department<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT COURSE :"<<s.course<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT LEVEL :"<<s.level<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT AGE :"<<s.age<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT SEX :"<<s.sex<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT PHONENUMBER :"<<s.phoneno<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT NATIONALITY :"<<s.nationality<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT STATE OF ORIGIN :"<<s.so_orgin<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT LGA :"<<s.lga<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT DATE OF BIRTH :"<<s.dob<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT GENOTYPE :"<<s.genotype<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT BLOODGROUP :"<<s.b_group<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT SPONSOR NAME :"<<s.sponsorname<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT MARITAL STATUS :"<<s.maritalstatus<<endl<<endl;
        
        cout<<"\t\t\t\t================================================"<<endl;
        equality=true;
        }
    }
        infile.close();
        if(equality==false)
            cout<<"\t\t\t\tRECORD NOT FOUND..."<<endl;
            cout<<endl;
            cout<<"press any key to continue...";
            cin.ignore();
            cin.get();
}

void result(int n)
{
    system("cls");
    system("color d");
    student s;
    ifstream infile;
    infile.open("Result.txt",ios::app|ios::binary);
    if(infile.fail())
    {
        cout<<"THE FILE COULD NOT BE OPENED...";

        cin.ignore();
        cin.get();
    }
    bool equality=false;
    cout<<"\t\t\t\t===========VIEW A SINGLE STUDENT RESULT==========\n\n";
    while(infile.read(reinterpret_cast<char*>(&s),sizeof(student)))
    {
        if(s.unq_no==n)
        {
        cout<<"\t\t\t\tSTUDENT NAME :"<<s.name<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT MATRIC NUMBER :"<<s.matric_no<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT UNIQUE NUMBER :"<<s.unq_no<<endl<<endl;
        cout<<"\t\t\t\t____________________________________________\n\n";
        cout<<"\t\t\t\t"<<s.cus1<<": "<<s.prog_m<<endl<<endl;
        cout<<"\t\t\t\t"<<s.cus2<<": "<<s.arch_m<<endl<<endl;
        cout<<"\t\t\t\t"<<s.cus3<<": "<<s.writing_sk<<endl<<endl;
        cout<<"\t\t\t\t"<<s.cus4<<": "<<s.alg_l<<endl<<endl;
        cout<<"\t\t\t\t"<<s.cus5<<": "<<s.alg_m<<endl<<endl;
        
        cout<<"\t\t\t\tAVERAGE :"<<s.average<<endl<<endl;
        cout<<"\t\t\t\tGRADE :"; s.calculate();
        
        cout<<"\n\t\t\t\t=============================="<<endl;
         equality=true;
        }
    }
        infile.close();
        if(equality==false)
            cout<<"\t\t\t\tRECORD NOT FOUND..."<<endl;
            cout<<endl;
            cout<<"press any key to continue...";
            cin.ignore();
            cin.get();
}

void modify(int n)
{
    system("cls");
    system("color 6");
    student s;
    fstream infile;
    infile.open("Report.txt",ios::binary|ios::in|ios::out);
    if(infile.fail())
    {
        cout<<"THE FILE COULD NOT BE OPENED..."<<endl;
        cin.ignore();
        cin.get();
    }
     bool checker=false;
     cout<<"\t\t\t\t==========MODIFY A STUDENT DETAILS==========\n\n";
     while(!infile.eof() && checker==false)
     {
     infile.read(reinterpret_cast<char*>(&s),sizeof(student));
     {
         if(s.unq_no==n)
         {
        cout<<"\t\t\t\tSTUDENT NAME :"<<s.name<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT MATRIC NUMBER :"<<s.matric_no<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT UNIQUE NUMBER :"<<s.unq_no<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT DEPARTMENT :"<<s.department<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT COURSE :"<<s.course<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT LEVEL :"<<s.level<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT AGE :"<<s.age<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT SEX :"<<s.sex<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT PHONENUMBER :"<<s.phoneno<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT NATIONALITY :"<<s.nationality<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT STATE OF ORIGIN :"<<s.so_orgin<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT LGA :"<<s.lga<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT DATE OF BIRTH :"<<s.dob<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT GENOTYPE :"<<s.genotype<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT BLOODGROUP :"<<s.b_group<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT SPONSOR NAME :"<<s.sponsorname<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT MARITAL STATUS :"<<s.maritalstatus<<endl<<endl;
        
        cout<<"============================================="<<endl;
        cout<<"\t\tENTER THE NEW INFORMATION"<<endl;
        cout<<"============================================="<<endl;
        cout<<"ENTER YOUR FULL NAME :";
	    cin.ignore();
	    cin.getline(s.name,80);
	    cout<<"ENTER YOUR MATRIC NUMBER : ";
	    cin.ignore();
	    cin.get(s.matric_no,80); 
	    cout<<"ENTER YOUR UNIQUE NUMBER :";
	    cin>>s.unq_no;
        cout<<"ENTER DEPARTMENT :";
	    cin>>s.department;
	    cout<<"ENTER COURSE STUDYING :";
	    cin>>s.course;
	    cout<<"ENTER LEVEL :";
	    cin>>s.level;
	    cout<<"ENTER AGE :";
	    cin>>s.age;
	    cout<<"Sex ? (M/F) :";
	    cin>>s.sex;
	    cout<<"ENTER PHONE NUMBER :";
	    cin>>s.phoneno; 
	    cout<<"ENTER NATIONALITY :";
	    cin>>s.nationality;
	    cout<<"ENTER STATE OF ORIGIN :";
	    cin>>s.so_orgin;
	    cout<<"ENTER LGA :";
	    cin>>s.lga;
	    cout<<"ENTER DATE OF BIRTH (DD//MM//YYYY) :";
	    cin>>s.dob;
	    cout<<"ENTER GENOTYPE :";
	    cin>>s.genotype;
	    cout<<"ENTER BLOODGROUP :";
	    cin>>s.b_group;
	    cout<<"ENTER SPONSOR NAME :";
	    cin>>s.sponsorname;  
	    cout<<"ENTER MARITAL STATUS:";
	    cin>>s.maritalstatus;
    
    int pos=(-1)*static_cast<int>(sizeof(student));
    infile.seekp(pos,ios::cur);
    infile.write(reinterpret_cast<char *> (&s), sizeof(student));
    cout<<endl;
    cout<<"\t\t\t\tTHE FILE IS SUCCESSFULLY UPDATED"<<endl;
    system("color a");
    checker=true;
         }
     }
     }
     infile.close();
         if(checker==false)
            cout<<"\t\t\t\tRECORD NOT FOUND"<<endl;
            cout<<endl;
            cout<<"press any key to continue...";
            cin.ignore();
            cin.get();
  }

void deleterecord(int n)
{
     system("cls");
     student s;
     ifstream infile;
     infile.open("Report.txt",ios::binary);
     if(!infile)
     {
         cout<<"THE FILE COULD NOT BE OPENED..."<<endl;
         cin.ignore();
         cin.get();
     }
     ofstream outfile;
     outfile.open("Record2.txt",ios::binary);
     infile.seekg(0,ios::beg);
     cout<<"\t\t\t\t===========DELETE A RECORD==========\n\n";
     while(infile.read(reinterpret_cast<char*>(&s),sizeof(student)))
     {
         if(s.unq_no!=n)
         {
             outfile.write(reinterpret_cast<char*>(&s),sizeof(student));
         }
     }
     infile.close();
     outfile.close();
     remove("Report.txt");
     rename("Record2.txt","Report.txt");
     cout<<endl;
     cout<<"\t\t\t\tRECORD SUCCESSFULLY DELETED"<<endl;
     system("color c");
     cout<<"press any key to continue...";
     cin.ignore();
     cin.get();
    system("cls");
    mainmenu();
    
  }
  
  void accept_rpt()
{
    system("cls");
    student s;
    ofstream outfile;
    outfile.open("Result.txt",ios::app|ios::binary);
    if(outfile.fail())
    {
        cout<<"THE FILE COULD NOT BE OPEN...press enter key";
        cin.ignore();
        cin.get();
    }
    cout<<"\n\n";
    cout<<"\t\t\t\t=======CREATE A REPORT CARD========\n\n";
    cout<<"ENTER YOUR FULL NAME :";
    cin.ignore();
    cin.getline(s.name,80);
    cout<<"ENTER YOUR MATRIC NUMBER : ";
    cin.ignore();
    cin.get(s.matric_no,80);
    cout<<"ENTER YOUR UNIQUE NUMBER :";
    cin>>s.unq_no;
    cout<<"_______________________________________\n\n";
   
    cout<<"Enter course code:";
	cin>>s.cus1;
	cout<<"Enter score:";
	cin>>s.prog_m;
	cout<<"Enter course code:";
	cin>>s.cus2;
	cout<<"Enter score:";
	cin>>s.arch_m;
	cout<<"Enter course code:";
	cin>>s.cus3;
	cout<<"Enter score:";
	cin>>s.writing_sk;
	cout<<"Enter course code:";
	cin>>s.cus4;
	cout<<"Enter score:";
	cin>>s.alg_l;
	cout<<"Enter course code:";
	cin>>s.cus5;
	cout<<"Enter score:";
	cin>>s.alg_m;
	s.calculate();
     s.sum=s.prog_m+s.arch_m+s.writing_sk+s.alg_m+s.alg_l;
     s.average=(s.sum/5.0);
    
    outfile.write(reinterpret_cast<char *> (&s), sizeof(student));
    outfile.close();
    cout<<endl;
    system("color a");
    cout<<"\t\t\t\tTHE FILE IS SUCCESSFULLY SAVED"<<endl;
    cout<<endl;
    cout<<"press any key to continue...";
    cin.ignore();
    cin.get();
}

void viewall_rpt()

{
    system("cls");
    student s;
    ifstream infile;
    bool check=false;
    infile.open("Result.txt",ios::app|ios::binary);
    if(infile.fail())
    {
        cout<<"THE FILE COULD NOT BE OPENED.....press enter key...";
        cin.ignore();
        cin.get();
    }
     cout<<"\n\n";
     cout<<"\t\t\t\tALL STUDENTS REPORT CARDS"<<endl;
     cout<<"=================================================================================="<<endl;
    while(infile.read(reinterpret_cast<char*>(&s),sizeof(student)))
    {
        cout<<"\t\t\t\tSTUDENT NAME :"<<s.name<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT MATRIC NUMBER :"<<s.matric_no<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT UNIQUE NUMBER :"<<s.unq_no<<endl<<endl;
        cout<<"\t\t\t\t____________________________________________";
        cout<<"\t\t\t\t"<<s.cus1<<": "<<s.prog_m<<endl<<endl;
        cout<<"\t\t\t\t"<<s.cus2<<": "<<s.arch_m<<endl<<endl;
        cout<<"\t\t\t\t"<<s.cus3<<": "<<s.writing_sk<<endl<<endl;
        cout<<"\t\t\t\t"<<s.cus4<<": "<<s.alg_l<<endl<<endl;
        cout<<"\t\t\t\t"<<s.cus5<<": "<<s.alg_m<<endl<<endl;
        
        cout<<"\t\t\t\tAVERAGE :"<<s.average<<endl<<endl;
        
        cout<<"=================================================================================="<<endl;
        check=true;
    }
    infile.close();
    if(check==false)
    cout<<"\t\t\t\tNO RECORD FOUND..."<<endl<<endl;
    cout<<"press any key to continue....";
    cin.ignore();
    cin.get();
}
void modify_rpt(int n)

{
    system("cls");
    student s;
    fstream infile;
    infile.open("Result.txt",ios::binary|ios::in|ios::out);
    if(infile.fail())
    {
        cout<<"THE FILE COULD NOT BE OPENED..."<<endl;
        cin.ignore();
        cin.get();
    }
     bool checker=false;
     cout<<"\t\t\t\t==========MODIFY A REPORT CARD==========\n\n";
     while(!infile.eof() && checker==false)
     {
     infile.read(reinterpret_cast<char*>(&s),sizeof(student));
     {
         if(s.unq_no==n)
         {
        cout<<"\t\t\t\tSTUDENT NAME :"<<s.name<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT MATRIC NUMBER :"<<s.matric_no<<endl<<endl;
        cout<<"\t\t\t\tSTUDENT UNIQUE NUMBER :"<<s.unq_no<<endl<<endl;
        cout<<"\t\t\t\t____________________________________________";
        cout<<"\t\t\t\t"<<s.cus1<<": "<<s.prog_m<<endl<<endl;
        cout<<"\t\t\t\t"<<s.cus2<<": "<<s.arch_m<<endl<<endl;
        cout<<"\t\t\t\t"<<s.cus3<<": "<<s.writing_sk<<endl<<endl;
        cout<<"\t\t\t\t"<<s.cus4<<": "<<s.alg_l<<endl<<endl;
        cout<<"\t\t\t\t"<<s.cus5<<": "<<s.alg_m<<endl<<endl;
        
        cout<<"============================================="<<endl;
        cout<<"\t\tENTER THE NEW INFORMATION"<<endl;
        cout<<"============================================="<<endl;
        cout<<"ENTER YOUR FULL NAME :";
	    cin.ignore();
	    cin.getline(s.name,80);
	    cout<<"ENTER YOUR MATRIC NUMBER : ";
	    cin.ignore();
	    cin.get(s.matric_no,80);
	    cout<<"ENTER YOUR UNIQUE NUMBER :";
	    cin>>s.unq_no;
	    cout<<"_______________________________________";
	   
	    cout<<"Enter course code:";
		cin>>s.cus1;
		cout<<"Enter score:";
		cin>>s.prog_m;
		cout<<"Enter course code:";
		cin>>s.cus2;
		cout<<"Enter score:";
		cin>>s.arch_m;
		cout<<"Enter course code:";
		cin>>s.cus3;
		cout<<"Enter score:";
		cin>>s.writing_sk;
		cout<<"Enter course code:";
		cin>>s.cus4;
		cout<<"Enter score:";
		cin>>s.alg_l;
		cout<<"Enter course code:";
		cin>>s.cus5;
		cout<<"Enter score:";
		cin>>s.alg_m;
		
		if(s.prog_m && s.arch_m && s.writing_sk && s.alg_l && s.alg_m >=80)
		cout << "A";
		else if(s.prog_m && s.arch_m && s.writing_sk && s.alg_l && s.alg_m >=60)
			cout << "B";
		else if(s.prog_m && s.arch_m && s.writing_sk && s.alg_l && s.alg_m >=50)
			cout << "C"; 
		else if(s.prog_m && s.arch_m && s.writing_sk && s.alg_l && s.alg_m >=40)
			cout <<"D";
		else if(s.prog_m && s.arch_m && s.writing_sk && s.alg_l && s.alg_m >=30)
			cout << "E";
		else
		cout <<"F";
		
		
	    s.sum=s.prog_m+s.arch_m+s.writing_sk+s.alg_l+s.alg_l;
	    s.average=(s.sum/5.0);
    int pos=(-1)*static_cast<int>(sizeof(student));
    infile.seekp(pos,ios::cur);
    infile.write(reinterpret_cast<char *> (&s), sizeof(student));
    cout<<endl;
    cout<<"\t\t\t\tTHE FILE IS SUCCESSFULLY updated"<<endl;
    checker=true;
         }
     }
     }
     infile.close();
         if(checker==false)
            cout<<"\t\t\t\tRECORD NOT FOUND"<<endl;
            cout<<endl;
            cout<<"press any key to continue...";
            cin.ignore();
            cin.get();
  }
  void delete_rpt(int n)

  {
     system("cls");
     student s;
     ifstream infile;
     infile.open("Result.txt",ios::binary);
     if(!infile)
     {
         cout<<"THE FILE COULD NOT BE OPENED..."<<endl;
         cin.ignore();
         cin.get();
     }
     ofstream outfile;
     outfile.open("Record1.txt",ios::binary);
     infile.seekg(0,ios::beg);
     cout<<"\t\t\t\t===========DELETE A REPORT CARD==========\n\n";
     while(infile.read(reinterpret_cast<char*>(&s),sizeof(student)))
     {
         if(s.unq_no!=n)
         {
             outfile.write(reinterpret_cast<char*>(&s),sizeof(student));
         }
     }
     infile.close();
     outfile.close();
     remove("Result.txt");
     rename("Record1.txt","Report.txt");
     cout<<endl;
     cout<<"\t\t\t\tRECORD SUCCESSFULLY DELETED"<<endl;
     cout<<"press any key to continue...";
     cin.ignore();
     cin.get();
  }



