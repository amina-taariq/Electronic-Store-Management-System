#include<iostream>
#include<fstream>
#include<ctime>
#include<iomanip>
#include<string.h>
#include<conio.h>
using namespace std;
double productPrice;
string productCategory;
double org_price;
void time(){
	time_t t=time(NULL);
	tm* tPtr= localtime(&t);
	cout<<"Date: "<<(tPtr->tm_mday)<<"/"<<(tPtr->tm_mon)+1<<"/"<<(tPtr->tm_year)+1900<<"\t\t";
	cout<<"Time: "<<(tPtr->tm_hour)<<":"<<(tPtr->tm_min)<<":"<<(tPtr->tm_sec)<<endl;
}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
bool isAtoZ(string check){
    for ( int i =0 ; check[i]!=NULL; i++)
    if((!(check[i]>='A'&&check[i]<='Z'))&&(!(check[i]>='a'&&check[i]<='z'))) return false;
    if(check=="NILL"||check=="nill"||check=="Nill")return false;
    if(check=="NULL"||check=="null"||check=="Null")return false;
    else
    return true;}
    
bool isNumber(string check){
    for ( int i =0 ; check[i]!=NULL; i++)
    {
    if(!(check[i]>='0'&&check[i]<='9'))return false;
    if(check[i]=='0'&&check[i+1]=='0'&& check[i+2]=='0'&& check[i+3]=='0' ) return false;
    else
    return true;}}
    
    bool isNumber(double check){
   if((!(check>=0 )))return false;
   if(check==00) return false;
    else
    return true;}
    bool Product_check(string product){
    	      	int p_nu;
              string p_n;
              string cat_p;
              double p_p;
              //double productPrice;
              int f=0;
    		fstream filep;
		  filep.open("Product.txt",ios::in);
		  filep>>p_n>>p_nu>>p_p>>cat_p;
               while(! filep.eof()){
               if(product==p_n){
               productPrice=p_p;
		 productCategory=cat_p;
		p_nu--;	
                f++;
                break;
		 }
		filep>>p_n>>p_nu>>p_p>>cat_p;}
		 filep.close();
		 if(f==1){
		 	return true;
		 }
		 else if (f==0){
		 	return false;
		 }
    }
  
class login{
	public:
	void admin_login(){
	string username;
	string password;
	string uname;
       string pass="";
	int count;
	int attempt = 0;
	p:{
		char ch;
		string pword;
		if(attempt==3){
		 cout<<"Too many tries.."<<endl;
		 cout<<"Terminating the program"<<endl;
		  exit(0);
			 }
	fstream file;
	file.open("Adminlogin.txt",ios::in);
	file>>username>>password;
	while(!file.eof()){
	attempt++;
	system("cls");
	cout<<"\n\n\n\t\t\tAdmin login "<<endl;
	cout<<"Attempt: "<<attempt<<endl<<endl;
	cout<<"Enter your Username"<<endl;
	cin>>uname;
	cout<<"Enter your Password"<<endl;
	int b=0;
	while(b!=3){
	     ch=getch();
		cout<<"*";
		pword+=ch;
		b++;
	}
	

	if(username==uname&&password==pword){
		system("cls");
		cout<<"\n\n\t\t\t\t\t\t Welcome"<<endl;
			cout<<"\n";
  cout<<"\t\t\t\t    ------------------------------------\n";
  cout<<"\t\t\t\t    |ELECTRONIC STORE MANAGEMENT SYSTEM|\n";
  cout<<"\t\t\t\t    ------------------------------------\n";
  cout<<"\n\n\n\n";
		
		break;
	}
	else{
		system("cls");
		
       	cout<<"\n\n\t\t\tInvalid Username OR Password "<<endl;
       	system("pause");
       	goto p;
	}
	}
       file.close();
	}
	}
	
	void SeniorStaff_login(){
	string username;
	string password;
	string uname;
	int count;
	int attempt = 0;
	p:{
		char ch;
		string pword;
		if(attempt==3){
		 cout<<"Too many tries.."<<endl;
		 cout<<"Terminating the program"<<endl;
		  exit(0);
			 }
	fstream fileS;
	fileS.open("SeniorStafflogin.txt",ios::in);
	attempt++;
	system("cls");
	cout<<"\n\n\n\t\t\tSenior Staff login "<<endl;
	cout<<"Attempt: "<<attempt<<endl<<endl;
	cout<<"Enter your Username"<<endl;
	cin>>uname;
	cout<<"Enter your Password"<<endl;
	int b=0;
	while(b!=3){
		//pass.push_back(ch);
	     ch=getch();
		cout<<"*";
		pword+=ch;
		b++;
	}
	while(!fileS.eof()){
		fileS>>username>>password;
	if(uname==username&&pword==password){
			system("cls");
  cout<<"\n\n\t\t\t\t\t\t Welcome"<<endl;
			cout<<"\n";
  cout<<"\t\t\t\t    ------------------------------------\n";
  cout<<"\t\t\t\t    |ELECTRONIC STORE MANAGEMENT SYSTEM|\n";
  cout<<"\t\t\t\t    ------------------------------------\n";
  cout<<"\n\n\n\n";
		count++;
		//system("pause");
		break;
	}
	}

	if(count==0){
		system("cls");
       	cout<<"\n\n\t\t\tInvalid Username OR Password "<<endl;
       	system("pause");
       	goto p;
	}
	
       fileS.close();
	}
	}
	void Staff_login(){
	string username;
	string password;
	string uname;
	int count;
	int attempt = 0;
	p:{
		char ch;
		string pword;
		if(attempt==3){
		 cout<<"Too many tries.."<<endl;
		 cout<<"Terminating the program"<<endl;
		  exit(0);
			 }
	fstream fileS1;
	fileS1.open("Stafflogin.txt",ios::in);
	attempt++;
	system("cls");
	cout<<"\n\n\n\t\t\tStaff login "<<endl;
	cout<<"Attempt: "<<attempt<<endl<<endl;
	cout<<"Enter your Username"<<endl;
	cin>>uname;
	cout<<"Enter your Password"<<endl;
	int b=0;
	while(b!=3){
	     ch=getch();
		cout<<"*";
		pword+=ch;
		b++;
	}
	while(!fileS1.eof()){
		fileS1>>username>>password;
	if(uname==username&&pword==password){
			system("cls");
	cout<<"\n\n\t\t\t\t\t\t Welcome"<<endl;

			cout<<"\n";
  cout<<"\t\t\t\t    ------------------------------------\n";
  cout<<"\t\t\t\t    |ELECTRONIC STORE MANAGEMENT SYSTEM|\n";
  cout<<"\t\t\t\t    ------------------------------------\n";
  cout<<"\n\n\n\n";
		count++;

		break;
	}
	}

	if(count==0){
		system("cls");
       	cout<<"\n\n\t\t\tInvalid Username OR Password "<<endl;
       	system("pause");
       	goto p;
	}
	
       fileS1.close();
	}
	}

	};
struct Staff{
	int ID;
string name;
string fname;
string CNIC;
string PhoneNo;
string address;
string position;
double salary;
struct Staff*ptr;
};
class staf{
	private:
		Staff *s,*c, *n;
	public:
	  staf(){
	  	s=c=n=NULL;
	  }
	
	  void create_s(){
	  	int s_id;
	  	string s_n;
	  	string s_f;
	  	string s_cnic;
	  	string s_ph;
	  	string s_a;
	  	string s_p;
	  	double s_s;
	  	fstream fileS;
		  fileS.open("Staff.txt",ios::in);
		  fileS>>s_id>>s_n>>s_f>>s_cnic>>s_ph>>s_s>>s_a>>s_p;
               while(! fileS.eof()){
		if(s==NULL){
		s=new Staff;
		s->ID=s_id;
		s->name=s_n;
		s->fname=s_f;
		s->CNIC=s_cnic;
		s->PhoneNo=s_ph;
		s->address=s_a;
		s->position=s_p;
		s->salary=s_s;
		s->ptr=NULL;
		c=s;
	}
	else{
		n=new Staff;
		n->ID=s_id;
		n->name=s_n;
		n->fname=s_f;
		n->CNIC=s_cnic;
		n->PhoneNo=s_ph;
		n->address=s_a;
		n->position=s_p;
		n->salary=s_s;
		n->ptr=NULL;
		c->ptr=n;
		c=n;
	}
		  fileS>>s_id>>s_n>>s_f>>s_cnic>>s_ph>>s_s>>s_a>>s_p;	  } 
		 fileS.close(); 
	  }
	  
	  void add_s(){
	  	cout<<"\t \t Enter New Staff"<<endl;
	  	int size= size_s();
	  	int s_id=size;
	  	string s_n;
	  	string s_f;
	  	string s_cnic;
	  	string s_ph;
	  	string s_a;
	  	string s_p;
	  	double s_s;
	  	fstream fileS;
	  	fileS.open("Staff.txt",ios::out|ios::app);
	  	s_id++;
	  	do{
	  	cout<<"Enter Name: ";
	  	cin>>s_n;
	  	       if(!isAtoZ(s_n))cout<<"re-";
				}while(!isAtoZ(s_n));
		do{
	  	cout<<"Enter Father Name: ";
	  	cin>>s_f;
	  	       if(!isAtoZ(s_f))cout<<"re-";
				}while(!isAtoZ(s_f));
		do{
	  	cout<<"Enter CNIC: ";
	  	cin>>s_cnic;
	  	 if(!isNumber(s_cnic))cout<<"re-";
				}while(!isNumber(s_cnic));
		do{
	  	cout<<"Enter Phone Number: ";
	  	cin>>s_ph;
	  	if(!isNumber(s_ph))cout<<"re-";
				}while(!isNumber(s_ph));
		do{
	  	cout<<"Enter Address: ";
	  	cin>>s_a;
	  	if(!isAtoZ(s_a))cout<<"re-";
				}while(!isAtoZ(s_a));
		do{
	  	cout<<"Enter Position: ";
	  	cin>>s_p;
	  	if(!isAtoZ(s_f))cout<<"re-";
				}while(!isAtoZ(s_f));
		do{
	  	cout<<"Enter Salary: ";
	  	cin>>s_s;
	  		if(!isNumber(s_s))cout<<"re-";
				}while(!isNumber(s_s));
	  	fileS<<s_id<<" "<<s_n<<" "<<s_f<<" "<<s_cnic<<" "<<s_ph<<" "<<s_s<<" "<<s_a<<" "<<s_p<<" "<<endl;
	  	n=new Staff;
	  	n->ID=s_id;
		n->name=s_n;
		n->fname=s_f;
		n->CNIC=s_cnic;
		n->PhoneNo=s_ph;
		n->address=s_a;
		n->position=s_p;
		n->salary=s_s;
	       c=s;
	    while(c->ptr!=NULL){
	    	c=c->ptr;
		}
		n->ptr=NULL;
		c->ptr=n;
		c=n;
			cout<<"New Staff is added....."<<endl;
	
	  	fileS.close();
	  	
	  }
	int size_s(){
	  	
			int count ;
		if(s==NULL){
			cout<<"List is Empty.";
		}
		else
		{
			c=s;
			while(c!=NULL)
			{
			count++;
				c=c->ptr;
			}
		}
	
		return count;
	}
	void search_s(){
		 	int id_search;
		 	string idSearch;
		 	int f=0;
		 	int a;
		 	cout<<"Search "<<endl;
		 	cout<<"1: By ID "<<endl;
		 	cout<<"2: By Name "<<endl;
		 	cin>>a;
		 	if(a==1){
		 		system("CLS");
			cout<<"\n\nEnter Staff ID you want to Search: ";
			cin>>id_search;
			
		 if(s==NULL){
			cout<<"List is Empty.";
		}
		else
		{
			c=s;
			while(c!=NULL){	
			if(c->ID==id_search){
	               f++;
	               break;
			}
			c=c->ptr;
		
		  } }}
		else if (a==2){
		system("CLS");	
		cout<<"\n\nEnter Staff Name you want to Search: ";
			cin>>idSearch;
		if(s==NULL){
			cout<<"List is Empty.";
		}
		else
		{
			c=s;
			while(c!=NULL){	
			if(c->name==idSearch){
	               f++;
	               break;
			}
			c=c->ptr;
		
		  } }
		}
		  if(f==1){
		  	cout<<" Staff Found..."<<endl;
			cout<<" ID: "<<c->ID<<endl;
			cout<<" Name: "<<c->name<<endl;
			cout<<" Father Name: "<<c->fname<<endl;
			cout<<" CNIC: "<<c->CNIC<<endl;
			cout<<" Phone Number: "<<c->PhoneNo<<endl;
			cout<<" Salary: "<<c->salary<<endl;
			cout<<" Address: "<<c->address<<endl;
			cout<<" Position: "<<c->position<<endl;
		  }
		  else if(f==0){
		  	cout<<"Staff is not found......"<<endl;
		  } }
			
 void display_s(){
 	        
		    if(s==NULL){
			cout<<"List is Empty"<<endl;
		}
		else
		{
		cout<<"\t\t\t\tDisplay Staff Information    "<<endl<<endl;
		cout<<"\tID"<<"\tName"<<"\tF_Name"<<"\tCNIC\t"<<"\tPhone No"<<"\tSalary"<<"\tAddress\t"<<"\tPosition"<<endl<<endl;
	
			c=s;
			while(c!=NULL)
			{     
			       cout<<"\t"<<c->ID<<"\t"<<c->name<<"\t"<<c->fname<<"\t"<<c->CNIC<<"\t"<<c->PhoneNo<<"\t"<<c->salary<<"\t"<<c->address<<"\t\t"<<c->position<<endl;
				c=c->ptr;
				cout<<endl;
	
			}
		}	  
	  }
	
	  void delete_s(){
	  	int s_id;
	  	string s_n;
	  	string s_f;
	  	string s_cnic;
	  	string s_ph;
	  	string s_a;
	  	string s_p;
	  	double s_s;
	  fstream fileS;
	  fstream fileS1;
	  fileS.open("Staff.txt",ios::in);
	  if(!fileS){
	  	cout<<"Error..."<<endl;
	  	fileS.close();
	  } 
	  else{
	  	int id_d;
	  	string delete_na;
	  	int delete_check=0;
	  		int a;
		 	cout<<"Delete "<<endl;
		 	cout<<"1: By ID "<<endl;
		 	cout<<"2: By Name "<<endl;
		 	cin>>a;
		 	if(a==1){
		 	system("CLS");
			cout<<"\n\nEnter Staff ID you want to delete: ";
			cin>>id_d;
			
	  fileS1.open("Staff1.txt",ios::out|ios::app);
	  fileS>>s_id>>s_n>>s_f>>s_cnic>>s_ph>>s_s>>s_a>>s_p;
	  while(!fileS.eof()){
	  	if(id_d==s_id){
	  		delete_check=1;}
	  	
		  else{
		  		fileS1<<s_id<<" "<<s_n<<" "<<s_f<<" "<<s_cnic<<" "<<s_ph<<" "<<" "<<s_s<<s_a<<" "<<s_p<<" "<<endl;
		  }
	
		fileS>>s_id>>s_n>>s_f>>s_cnic>>s_ph>>s_s>>s_a>>s_p;}
		fileS.close(); 
		 fileS1.close();
		 remove("Staff.txt")	;
		 rename("Staff1.txt","Staff.txt");
		if(delete_check==1){
			cout<<"Staff is Deleted...."<<endl;	
		}
		else if  (delete_check==0){
		cout<<"Staff Not exit......"<<endl;	
		}
	       s=c=n=NULL;
	        create_s();}
		 	else if(a==2){
		 	system("CLS");
			cout<<"\n\nEnter Staff Name you want to delete: ";
			cin>>delete_na;
			
	  fileS1.open("Staff1.txt",ios::out|ios::app);
	  fileS>>s_id>>s_n>>s_f>>s_cnic>>s_ph>>s_s>>s_a>>s_p;
	  while(!fileS.eof()){
	  	if(delete_na==s_n){
	  		delete_check=1;}
	  	
		  else{
		  		fileS1<<s_id<<" "<<s_n<<" "<<s_f<<" "<<s_cnic<<" "<<s_ph<<" "<<" "<<s_s<<s_a<<" "<<s_p<<" "<<endl;
		  }
	
		fileS>>s_id>>s_n>>s_f>>s_cnic>>s_ph>>s_s>>s_a>>s_p;}
		fileS.close(); 
		 fileS1.close();
		 remove("Staff.txt")	;
		 rename("Staff1.txt","Staff.txt");
		if(delete_check==1){
			cout<<"Staff is Deleted...."<<endl;	
		}
		else if  (delete_check==0){
		cout<<"Staff Not exit......"<<endl;	
		}
	       s=c=n=NULL;
	        create_s();}
		 
		 }
		  }  
	void update_s(){
	  	int s_id;
	  	string s_n;
	  	string s_f;
	  	string s_cnic;
	  	string s_ph;
	  	string s_a;
	  	string s_p;
	  	double s_s;
	  fstream fileS;
	  fstream fileS1;
	  fileS.open("Staff.txt",ios::in);
	  if(!fileS){
	  	cout<<"Error..."<<endl;
	  	fileS.close();
	  }
	  else{
	  	int id_update;
	  	int update_ch;
	  	string idUpdate;
	  	int update_check=0;
	  	string n_ph;
	  	string n_a;
	  	double n_s;
	  	int a;
		 	cout<<"Delete "<<endl;
		 	cout<<"1: By ID "<<endl;
		 	cout<<"2: By Name "<<endl;
		 	cin>>a;
		 	if(a==1){
		 	system("CLS");
			cout<<"\n\nEnter Staff ID you want to Update : ";
			cin>>id_update;
			
	  fileS1.open("Staff1.txt",ios::out|ios::app);
	  fileS>>s_id>>s_n>>s_f>>s_cnic>>s_ph>>s_s>>s_a>>s_p;
	  while(!fileS.eof()){
	  	if(id_update==s_id){
	  		update_check=1;
	  		cout<<"What you want to update ?"<<endl;
	  		cout<<"1: Phone Number "<<endl;
	  		cout<<"2: Address "<<endl;
	  		cout<<"3: Salary "<<endl;
	  		cin>>update_ch;
	  		system("CLS");
	  		if(update_ch==1){
	  			cout<<"Enter new Phone Number: ";
	  			cin>>n_ph;
	  			fileS1<<s_id<<" "<<s_n<<" "<<s_f<<" "<<s_cnic<<" "<<n_ph<<" "<<s_s<<" "<<s_a<<" "<<s_p<<" "<<endl;
			  }
	  		else if(update_ch==2){
	  			cout<<"Enter new Address: ";
	  			cin>>n_a;
	  			fileS1<<s_id<<" "<<s_n<<" "<<s_f<<" "<<s_cnic<<" "<<s_ph<<" "<<s_s<<" "<<n_a<<" "<<s_p<<" "<<endl;
			  }
			else if(update_ch==3){
	  			cout<<"Enter new Salary: ";
	  			cin>>n_s;
	  			fileS1<<s_id<<" "<<s_n<<" "<<s_f<<" "<<s_cnic<<" "<<s_ph<<" "<<n_s<<" "<<s_a<<" "<<s_p<<" "<<endl;
			  }
			  }
	  	
		  else{
		  		fileS1<<s_id<<" "<<s_n<<" "<<s_f<<" "<<s_cnic<<" "<<s_ph<<" "<<s_s<<" "<<s_a<<" "<<s_p<<" "<<endl;
		  }
	
		fileS>>s_id>>s_n>>s_f>>s_cnic>>s_ph>>s_s>>s_a>>s_p;}
		fileS.close(); 
		 fileS1.close();
		 remove("Staff.txt")	;
		 rename("Staff1.txt","Staff.txt");
		if(update_check==1){
			cout<<"Information Updated...."<<endl;	
		}
		else if  (update_check==0){
		cout<<"Staff Not exit......"<<endl;	
		}
	       s=c=n=NULL;
	        create_s();}
		 	 	if(a==2){
		 	system("CLS");
			cout<<"\n\nEnter Staff Name you want to Update : ";
			cin>>idUpdate;
			
	  fileS1.open("Staff1.txt",ios::out|ios::app);
	  fileS>>s_id>>s_n>>s_f>>s_cnic>>s_ph>>s_s>>s_a>>s_p;
	  while(!fileS.eof()){
	  	if(idUpdate==s_n){
	  		update_check=1;
	  		cout<<"What you want to update ?"<<endl;
	  		cout<<"1: Phone Number "<<endl;
	  		cout<<"2: Address "<<endl;
	  		cout<<"3: Salary "<<endl;
	  		cin>>update_ch;
	  		system("CLS");
	  		if(update_ch==1){
	  			cout<<"Enter new Phone Number: ";
	  			cin>>n_ph;
	  			fileS1<<s_id<<" "<<s_n<<" "<<s_f<<" "<<s_cnic<<" "<<n_ph<<" "<<s_s<<" "<<s_a<<" "<<s_p<<" "<<endl;
			  }
	  		else if(update_ch==2){
	  			cout<<"Enter new Address: ";
	  			cin>>n_a;
	  			fileS1<<s_id<<" "<<s_n<<" "<<s_f<<" "<<s_cnic<<" "<<s_ph<<" "<<s_s<<" "<<n_a<<" "<<s_p<<" "<<endl;
			  }
			else if(update_ch==3){
	  			cout<<"Enter new Salary: ";
	  			cin>>n_s;
	  			fileS1<<s_id<<" "<<s_n<<" "<<s_f<<" "<<s_cnic<<" "<<s_ph<<" "<<n_s<<" "<<s_a<<" "<<s_p<<" "<<endl;
			  }
			  }
	  	
		  else{
		  		fileS1<<s_id<<" "<<s_n<<" "<<s_f<<" "<<s_cnic<<" "<<s_ph<<" "<<s_s<<" "<<s_a<<" "<<s_p<<" "<<endl;
		  }
	
		fileS>>s_id>>s_n>>s_f>>s_cnic>>s_ph>>s_s>>s_a>>s_p;}
		fileS.close(); 
		 fileS1.close();
		 remove("Staff.txt")	;
		 rename("Staff1.txt","Staff.txt");
		if(update_check==1){
			cout<<"Information Updated...."<<endl;	
		}
		else if  (update_check==0){
		cout<<"Staff Not exit......"<<endl;	
		}
	       s=c=n=NULL;
	        create_s();}
		 }
		  } 
		  
		  
	void sorting_s(){
		int size=size_s();
			int arry[size] ;
			int temp;
			int i=0;
		if(s==NULL){
			cout<<"List is Empty.";
		}
		else
		{
			c=s;
			while(c!=NULL)
			{
			arry[i]=c->salary;
				c=c->ptr;
				i++;
			}
		}
	
	    for(int i=0;i<size;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if(arry[j]>arry[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=arry[i];
            arry[i]=arry[min];
            arry[min]=temp;
        }
    }
		int s_id;
	  	string s_n;
	  	string s_f;
	  	string s_cnic;
	  	string s_ph;
	  	string s_a;
	  	string s_p;
	  	double s_s;
	  	int a=0;
	  	fstream fileS;
	  fstream fileS1;
	
	while(a<size)
	{
	  fileS.open("Staff.txt",ios::in);
	  if(!fileS){
	  	cout<<"Error..."<<endl;
	  	fileS.close();}
	else{
	
	  fileS1.open("Staff1.txt",ios::out|ios::app);
	  fileS>>s_id>>s_n>>s_f>>s_cnic>>s_ph>>s_s>>s_a>>s_p;
	  while(!fileS.eof()){
	  	if(s_s==arry[a]){
	  		
	  		fileS1<<s_id<<" "<<s_n<<" "<<s_f<<" "<<s_cnic<<" "<<s_ph<<" "<<s_s<<" "<<s_a<<" "<<s_p<<" "<<endl;

	  		a++;
		  }
		fileS>>s_id>>s_n>>s_f>>s_cnic>>s_ph>>s_s>>s_a>>s_p;
		}
		fileS.close();
		fileS1.close(); 	
	}}
               remove("Staff.txt")	;
		 rename("Staff1.txt","Staff.txt");
		     s=c=n=NULL;
	        create_s();
	        cout<<"Sorting Done "<<endl;
		}
		 
       
};
struct customer{
int c_no;
string c_name;
string c_PhoneNo;
string c_product;
double amount;
string product_category;
struct customer*ptr;
};
class custo{
	private:
		customer*s,*c, *n;
	public:
	   custo(){
	  	s=c=n=NULL;
	  }
	
	void create_c(){
	  	string c_n;
	  	string c_ph;
	  	string c_p;
	  	string p_c;
	  	double c_amnt;
	  	string product_category;
	  	fstream fileC;
		  fileC.open("Customer.txt",ios::in);
		  fileC>>c_n>>c_ph>>c_amnt>>c_p>>p_c;
               while(! fileC.eof()){
		  	if(s==NULL){
		s=new customer;
		s->c_name=c_n;
		s->c_PhoneNo=c_ph;
		s->c_product=c_p;
		s->amount=c_amnt;
		s->product_category=p_c;
		s->ptr=NULL;
		c=s;
	}
	else{
		n=new customer;
		n->c_name=c_n;
		n->c_PhoneNo=c_ph;
		n->c_product=c_p;
		n->amount=c_amnt;
		n->product_category=p_c;
		n->ptr=NULL;
		c->ptr=n;
		c=n;
	}
	fileC>>c_n>>c_ph>>c_amnt>>c_p>>p_c; 
	 } 
		 fileC.close(); 
	  }
	   void display_c(){
		    if(s==NULL){
			cout<<"List is Empty"<<endl;
		}
		else
		{
		cout<<"\t\t\tDisplay Customer Information    "<<endl<<endl;
		cout<<"\tName"<<"\tPhone No."<<"\tAmount"<<"\tProduct\t"<<"\tCategory"<<endl<<endl;
	
			c=s;
			while(c!=NULL)
			{     
			cout<<"\t"<<c->c_name<<"\t"<<c->c_PhoneNo<<"\t"<<c->amount<<"\t"<<c->c_product<<"\t\t"<<c->product_category<<endl;
				c=c->ptr;
				cout<<endl;
	
			}
		}	  
	  }
		  void add_c(){
	  	cout<<"\t \t Enter New Customer"<<endl;
	  	string c_n;
	  	string c_ph;
	  	string c_p;
	  	string p_c;
	  	double c_amnt;
	  	fstream fileC;
	  	fileC.open("Customer.txt",ios::out|ios::app);
	  	do{
	  	cout<<"Enter Name: ";
	  	cin>>c_n;
	  	if(!isAtoZ(c_n))cout<<"re-";
				}while(!isAtoZ(c_n));
		do{
	  	cout<<"Enter Phone Number: ";
	  	cin>>c_ph;
	  		if(!isNumber(c_ph))cout<<"re-";
		}while(!isNumber(c_ph));
		do{
	  	cout<<"Enter Product Name: ";
	  	cin>>c_p;
	  	if(!Product_check(c_p)){
	  	  cout<<"Product Not Available..."<<endl;
		  cout<<"re-";}
	       }while(!Product_check(c_p));
	  		
	  	fileC<<c_n<<" "<<c_ph<<" "<<productPrice<<" "<<c_p<<" "<<productCategory<<" "<<endl;
	  	n=new customer;
		n->c_name=c_n;
		n->c_PhoneNo=c_ph;
		n->c_product=c_p;
		n->amount=productPrice;
		n->product_category=productCategory;
	       c=s;
	    while(c->ptr!=NULL){
	    	c=c->ptr;
		}
		n->ptr=NULL;
		c->ptr=n;
		c=n;
			cout<<"New Customer is added....."<<endl;
	
	  	fileC.close();
	  	
	  }
	int size_c(){
	  	
			int count ;
		if(s==NULL){
			cout<<"List is Empty.";
		}
		else
		{
			c=s;
			while(c!=NULL)
			{
			count++;
				c=c->ptr;
			}
		}
	
		return count;
	}
	void search_c(){
		 	string c_search;
		 	int f=0;
			cout<<"Enter Customer Name you want to Search: ";
			cin>>c_search;
			
		 if(s==NULL){
			cout<<"List is Empty.";
		}
		else
		{
			c=s;
			while(c!=NULL){	
			if(c->c_name==c_search){
	               f++;
	              cout<<" Customer Found..."<<endl;
			cout<<" Name: "<<c->c_name<<endl;
			cout<<" Phone Number: "<<c->c_PhoneNo<<endl;
			cout<<" Amount: "<<c->amount<<endl;
			cout<<" Product: "<<c->c_product<<endl;
			cout<<" Category: "<<c->product_category<<endl;
			}
			c=c->ptr;
		
		  }
		 
		   if(f==0){
		  	cout<<"Customer  is not found......"<<endl;
		  } }
			
}
      void delete_c(){
	  	string c_n;
	  	string c_ph;
	  	string c_p;
	  	string p_c;
	  	double c_amnt;;
	  fstream fileC;
	  fstream fileC1;
	  fileC.open("Customer.txt",ios::in);
	  if(!fileC){
	  	cout<<"Error..."<<endl;
	  	fileC.close();
	  } 
	  else{
	  	string id_d;
	  	int delete_check=0;
			cout<<"Enter Customer Name you want to delete: ";
			cin>>id_d;
			
	  fileC1.open("Customer1.txt",ios::out|ios::app);
	  fileC>>c_n>>c_ph>>c_amnt>>c_p>>p_c;
	  while(!fileC.eof()){
	  	if(id_d==c_n){
	  		delete_check=1;}
	  	
		  else{
		  	fileC1<<c_n<<" "<<c_ph<<" "<<c_amnt<<" "<<c_p<<" "<<p_c<<" "<<endl;
		  }
	
		 fileC>>c_n>>c_ph>>c_amnt>>c_p>>p_c;}
		fileC.close(); 
		 fileC1.close();
		 remove("Customer.txt")	;
		 rename("Customer1.txt","Customer.txt");
		if(delete_check==1){
			cout<<"Customer is Deleted...."<<endl;	
		}
		else if  (delete_check==0){
		cout<<"Customer Not exit......"<<endl;	
		}
	       s=c=n=NULL;
	        create_c();}
		  }  
		  
	void update_c(){
	  	string c_n;
	  	string c_ph;
	  	string c_p;
	  	string p_c;
	  	double c_amnt;;
	  fstream fileC;
	  fstream fileC1;
	  fileC.open("Customer.txt",ios::in);
	  if(!fileC){
	  	cout<<"Error..."<<endl;
	  	fileC.close();
	  }
	  else{
	  	string id_update;
	  	int update_ch;
	  	int update_check=0;
	  	string n_p;
	  	string n_ph;
	  	double n_a=0;
			cout<<"Enter Customer Name you want to Update : ";
			cin>>id_update;
			
	  fileC1.open("Customer1.txt",ios::out|ios::app);
	  fileC>>c_n>>c_ph>>c_amnt>>c_p>>p_c;
	  while(!fileC.eof()){
	  	if(id_update==c_n){
	  		update_check=1;
                     cout<<"What you want to update ?"<<endl;
	  		cout<<"1: Phone Number "<<endl;
	  		cout<<"2: Product "<<endl;
	  		cin>>update_ch;
	  		if(update_ch==1){
	  			cout<<"Enter new Phone Number: ";
	  			cin>>n_ph;
	  			fileC1<<c_n<<" "<<n_ph<<" "<<c_amnt<<" "<<c_p<<" "<<p_c<<" "<<endl;
			  }
			  	else if(update_ch==2){
	  			do{
	  	         cout<<"Enter Product Name: ";
	                cin>>n_p;
	  	         if(!Product_check(n_p)){
	  	         cout<<"Product Not Available..."<<endl;
		         cout<<"re-";}
	                 }while(!Product_check(n_p));
	  		
	  			n_a=c_amnt+productPrice;
	  			fileC1<<c_n<<" "<<c_ph<<" "<<n_a<<" "<<c_p<<"&"<<n_p<<" "<<productCategory<<" "<<endl;
			  } }
	  	
		  else{
		  	fileC1<<c_n<<" "<<c_ph<<" "<<c_amnt<<" "<<c_p<<" "<<p_c<<" "<<endl;
		  }
	          
		fileC>>c_n>>c_ph>>c_amnt>>c_p>>p_c;}
		 fileC.close(); 
		 fileC1.close();
		 remove("Customer.txt")	;
		 rename("Customer1.txt","Customer.txt");
		if(update_check==1){
			cout<<"Information Updated...."<<endl;	
		}
		else if  (update_check==0){
		cout<<"Customer Not exit......"<<endl;	
		}
	       s=c=n=NULL;
	        create_c();}
	       } 
	  

};
struct ProductList{
int qty_p;
string p_name;
double product_p;
string category;
double Pdt_Original_Price;
struct ProductList*ptr;
};
class productList{
       private:
		ProductList*s,*c, *n;
	public:
	   productList(){
	  	s=c=n=NULL;
	  }
	void new_ProductList(){
		s=c=n=NULL;
	}
	  void create_productList(){
	  
	  	int p_nu;
              string p_n;
              string cat_p;
              double p_p;
              double pdt_org_p;
	  	fstream filePL;
		  filePL.open("ProductList.txt",ios::in);
		  filePL>>p_n>>p_nu>>pdt_org_p>>p_p>>cat_p;
                while(!filePL.eof()){
		if(s==NULL){
		s=new ProductList ;
		s->p_name=p_n;
		s->qty_p=p_nu;
		s->Pdt_Original_Price=pdt_org_p;
		s->product_p=p_p;
		s->category=cat_p;
		s->ptr=NULL;
		c=s;
	}
	else{
	       n=new ProductList ;
		n->p_name=p_n;
		n->qty_p=p_nu;
		n->product_p=p_p;
		n->Pdt_Original_Price=pdt_org_p;
		n->category=cat_p;
		n->ptr=NULL;
		c->ptr=n;
		c=n;
		
	}
	  filePL>>p_n>>p_nu>>pdt_org_p>>p_p>>cat_p;	 } 
		 filePL.close(); 
	  } 
	  
	  void Display_product_list(){
		int sr_p=1;
		c=s;
	if(s==NULL){
			cout<<"List is Empty"<<endl;
		}
		else
		{
		cout<<"\n\n\t\t\t\tDisplay Product List  \n"<<endl<<endl;
		cout<<"\tSr.no"<<"\tProduct\t"<<"\tQuantity"<<"\tOriginal\t"<<"Price\t"<<"\tCategory\n";
		cout<<"\t\t\t\t\t\tPrice\t\n"<<endl<<endl;
		      c=s;
			while(c!=NULL)
			{     
			       cout<<"\t"<<sr_p<<"\t"<<c->p_name<<"\t\t"<<c->qty_p<<"\t\t"<<c->Pdt_Original_Price<<"\t\t"<<c->product_p<<"\t\t"<<c->category<<endl;
				c=c->ptr;
				sr_p++;
				cout<<endl;
			}
		}	  	
	}
		int Size_ProductList(){
	  	
			int count ;
		if(s==NULL){
			cout<<"List is Empty.";
		}
		else
		{
			c=s;
			while(c!=NULL)
			{
			count++;
				c=c->ptr;
			}
		}
	
		return count;
	}
		int total_ProductList(){
	  	
			int count=0 ;
		if(s==NULL){
			cout<<"List is Empty.";
		}
		else
		{
			c=s;
			while(c!=NULL)
			{
			count=c->qty_p+count;
				c=c->ptr;
			}
		}
	
		return count;
	}
	 void sorting_Product_By_Quantity(){
		int size=Size_ProductList();
			int arry[size] ;
			int temp;
			int i=0;
		if(s==NULL){
			cout<<"List is Empty.";
		}
		else
		{
			c=s;
			while(c!=NULL)
			{
			arry[i]=c->qty_p;
				c=c->ptr;
				i++;
			}
		}
	
	    for(int i=0;i<size;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if(arry[j]>arry[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=arry[i];
            arry[i]=arry[min];
            arry[min]=temp;
        }
    }
		int p_nu;
              string p_n;
              string cat_p;
              double p_p;
              double pdt_org_p;
              int a=0;
	  	fstream filePL;
	       fstream filePL1;
	
	while(a<size)
	{
	  filePL.open("ProductList.txt",ios::in);
	  if(!filePL){
	  	cout<<"Error..."<<endl;
	  	filePL.close();}
	else{
	
	  filePL1.open("ProductList1.txt",ios::out|ios::app);
	 filePL>>p_n>>p_nu>>pdt_org_p>>p_p>>cat_p;
	  while(!filePL.eof()){
	  	if(p_nu==arry[a]){
	  		
	  		filePL1<<p_n<<" "<<p_nu<<" "<<pdt_org_p<<" "<<p_p<<" "<<cat_p<<" "<<endl;

	  		a++;
		  }
	     filePL>>p_n>>p_nu>>pdt_org_p>>p_p>>cat_p;
		}
		filePL.close();
		filePL1.close(); 	
	}}
               remove("ProductList.txt");
		 rename("ProductList1.txt","ProductList.txt");
		     s=c=n=NULL;
	        create_productList();
	      
		} 
		
	void sorting_Product_By_Price(){
			int size=Size_ProductList();
			int arry[size] ;
			int temp;
			int i=0;
		if(s==NULL){
			cout<<"List is Empty.";
		}
		else
		{
			c=s;
			while(c!=NULL)
			{
			arry[i]=c->product_p;
				c=c->ptr;
				i++;
			}
		}
	
	    for(int i=0;i<size;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if(arry[j]>arry[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=arry[i];
            arry[i]=arry[min];
            arry[min]=temp;
        }
    }
		int p_nu;
              string p_n;
              string cat_p;
              double p_p;
              double pdt_org_p;
              int a=0;
	  	fstream filePL;
	       fstream filePL1;
	
	while(a<size)
	{
	 filePL.open("ProductList.txt",ios::in);
	  if(!filePL){
	  	cout<<"Error..."<<endl;
	  	filePL.close();}
	else{
	
	   filePL1.open("ProductList1.txt",ios::out|ios::app);
	 filePL>>p_n>>p_nu>>pdt_org_p>>p_p>>cat_p;
	  while(!filePL.eof()){
	  	if(p_p==arry[a]){
	  		
	  		filePL1<<p_n<<" "<<p_nu<<" "<<pdt_org_p<<" "<<p_p<<" "<<cat_p<<" "<<endl;

	  		a++;
		  }
	    filePL>>p_n>>p_nu>>pdt_org_p>>p_p>>cat_p;
		}
		filePL.close();
		filePL1.close(); 	
	}}
               remove("ProductList.txt");
		 rename("ProductList1.txt","ProductList.txt");
		     s=c=n=NULL;
	        create_productList();
		} 
	 
	  };
struct Product{
int p_no;
string p_name;
double product_p;
string category;
struct Product*ptr;
};
class product:public productList {
       private:
		Product*s,*c, *n;
	public:
	   product(){
	  	s=c=n=NULL;
	  }
	    friend class productList;
	  void create_product(){
	  
	  	int p_nu;
              string p_n;
              string cat_p;
              double p_p;
	  	fstream filep;
		  filep.open("Product.txt",ios::in);
		  filep>>p_n>>p_nu>>p_p>>cat_p;
                while(!filep.eof()){
		if(s==NULL){
		s=new Product ;
		s->p_name=p_n;
		s->p_no=p_nu;
		s->product_p=p_p;
		s->category=cat_p;
		s->ptr=NULL;
		c=s;
	}
	else{
	       n=new Product ;
		n->p_name=p_n;
		n->p_no=p_nu;
		n->product_p=p_p;
		n->category=cat_p;
		n->ptr=NULL;
		c->ptr=n;
		c=n;
		
	}
	 filep>>p_n>>p_nu>>p_p>>cat_p;	 } 
		 filep.close(); 
	  }
	  
void Display_p(){
		int sr_p=1;
	if(s==NULL){
			cout<<"List is Empty"<<endl;
		}
		else
		{
		cout<<"\n\n\t\t\t\tDisplay Product   \n"<<endl<<endl;
		cout<<"\tSr.no"<<"\tProduct\t"<<"\tQuantity\t"<<"Price\t"<<"Category\n"<<endl<<endl;
		      c=s;
			while(c!=NULL)
			{     
			       cout<<"\t"<<sr_p<<"\t"<<c->p_name<<"\t\t"<<c->p_no<<"\t\t"<<c->product_p<<"\t"<<c->category<<endl;
				c=c->ptr;
				sr_p++;
				cout<<endl;
			}
		}	  	
	}
	
	int total_p(){
	  	
			int count=0 ;
		if(s==NULL){
			cout<<"List is Empty.";
		}
		else
		{
			c=s;
			while(c!=NULL)
			{
			count=c->p_no+count;
				c=c->ptr;
			}
		}
	
		return count;
	}
	int Size_Product(){
	  	
			int count ;
		if(s==NULL){
			cout<<"List is Empty.";
		}
		else
		{
			c=s;
			while(c!=NULL)
			{
			count++;
				c=c->ptr;
			}
		}
	
		return count;
	}
	void add_product(){
		cout<<"\t \t Enter New Product"<<endl;
		double buy_price;
		int p_nu;
              string p_n;
              string cat_p;
              double p_p;
		fstream filePL;
		filePL.open("ProductList.txt",ios::out|ios::app);
		fstream filep;
	  	filep.open("Product.txt",ios::out|ios::app);
		do{
	  	cout<<"Enter Product Name: ";
	  	cin>>p_n;
	  	if(!isAtoZ(p_n))cout<<"re-";
				}while(!isAtoZ(p_n));
		do{
	  	cout<<"Enter Quantity: ";
	  	cin>>p_nu;
	  	if(!isNumber(p_nu))cout<<"re-";
				}while(!isNumber(p_nu));
	       do{
	  	cout<<"Enter Product Original Price: ";
	  	cin>>buy_price;
	  	if(!isNumber(buy_price))cout<<"re-";
				}while(!isNumber(buy_price));
		do{
	  	cout<<"Enter Product Price: ";
	  	cin>>p_p;
	  	if(!isNumber(p_p))cout<<"re-";
				}while(!isNumber(p_p));
		do{
	  	cout<<"Enter Category: ";
	  	cin>>cat_p;
	  	if(!isAtoZ(cat_p))cout<<"re-";
				}while(!isAtoZ(cat_p));
	  	filePL<<p_n<<" "<<p_nu<<" "<<buy_price<<" "<<p_p<<" "<<cat_p<<" "<<endl;
	  	filep<<p_n<<" "<<p_nu<<" "<<p_p<<" "<<cat_p<<" "<<endl;
	  	n=new Product ;
		n->p_name=p_n;
		n->p_no=p_nu;
		n->product_p=p_p;
		n->category=cat_p;
		n->ptr=NULL;
	       c=s;
	    while(c->ptr!=NULL){
	    	c=c->ptr;
		}
		n->ptr=NULL;
		c->ptr=n;
		c=n;
			cout<<"New Product is added....."<<endl;
	
	  	filePL.close();
	  	filep.close();
	}

	void search_product(){
		 	string p_search;
		 	int f=0;
			cout<<"Enter Product Name [Search]: ";
			cin>>p_search;
			
		 if(s==NULL){
			cout<<"List is Empty.";
		}
		else
		{
			c=s;
			while(c!=NULL){	
			if(c->p_name==p_search){
	               f++;
	               break;
			}
			c=c->ptr;
		
		  }
		  if(f==1){
		  	cout<<" Product Found..."<<endl;
			cout<<" Product Name: "<<c->p_name<<endl;
			cout<<" Quantity: "<<c->p_no<<endl;
			cout<<" Product Price: "<<c->product_p<<endl;
			cout<<" Category: "<<c->category<<endl;
		  }
		  else if(f==0){
		  	cout<<"Product not found..."<<endl;
		  } }
			
} 
void delete_product(){
	       double buy_price;
	  	int p_nu;
              string p_n;
              string cat_p;
              double p_p;
              fstream filePL1;
              fstream filePL;
		filePL.open("ProductList.txt",ios::in);
	  	fstream filep;
	       fstream filep1;
	  filep.open("Product.txt",ios::in);
	  if(!filep){
	  	cout<<"Error..."<<endl;
	  	filep.close();
	  } 
	  else{
	  	string product_d;
	  	int delete_check=0;
			cout<<"Enter Product Name [Delete]: ";
			cin>>product_d;
		
	  filep1.open("Product1.txt",ios::out|ios::app);
	  filePL1.open("ProductList1.txt",ios::out|ios::app);
	   filep>>p_n>>p_nu>>p_p>>cat_p;
	filePL>>p_n>>p_nu>>buy_price>>p_p>>cat_p;
	  while((!filep.eof())&&(!filePL1.eof())){
	  	if(product_d==p_n){
	  		delete_check=1;}
	  	
		  else{
		  		filep1<<p_n<<" "<<p_nu<<" "<<p_p<<" "<<cat_p<<" "<<endl;
		  		filePL1<<p_n<<" "<<p_nu<<" "<<buy_price<<" "<<p_p<<" "<<cat_p<<" "<<endl;
		  }
	
		 filep>>p_n>>p_nu>>p_p>>cat_p;
		 filePL>>p_n>>p_nu>>buy_price>>p_p>>cat_p;}
		 filep.close(); 
		 filep1.close();
		 filePL.close(); 
		 filePL1.close();
		 remove("Product.txt");
		 rename("Product1.txt","Product.txt");
	        remove("ProductList.txt")	;
		 rename("ProductList1.txt","ProductList.txt");
		if(delete_check==1){
			cout<<"Product is Deleted...."<<endl;	
		}
		else if  (delete_check==0){
		cout<<"Product Not exit......"<<endl;	
		}
	       s=c=n=NULL;
	        create_product();
	        
	      
	       productList::new_ProductList();
	      productList::create_productList();
	        
		 }
		  }  
	
	void update_Product(){
	  	int p_nu;
              string p_n;
              string cat_p;
              double p_p;
              double buy_price;
	  	fstream filep;
	       fstream filep1;
	       fstream filePL1;
              fstream filePL;
		filePL.open("ProductList.txt",ios::in);
	  filep.open("Product.txt",ios::in);
	  if(!filep){
	  	cout<<"Error..."<<endl;
	  	filep.close();
	  }
	  else{
	  	string p_update;
	  	int update_ch;
	  	int update_check=0;
	  	int n_q;
	  	double n_p;
			cout<<"Enter Product Name [Update] : ";
			cin>>p_update;
			system("cls");
	  filep1.open("Product1.txt",ios::out|ios::app);
	  filePL1.open("ProductList1.txt",ios::out|ios::app);
	 filep>>p_n>>p_nu>>p_p>>cat_p;
	 filePL>>p_n>>p_nu>>buy_price>>p_p>>cat_p;
	 while((!filep.eof())&&(!filePL1.eof())){
	  	if(p_update==p_n){
	  		update_check=1;
                     cout<<"What you want to update ?"<<endl;
	  		cout<<"1: Quantity "<<endl;
	  		cout<<"2: Product Price "<<endl;
	  		cin>>update_ch;
	  		system("cls");
	  		if(update_ch==1){
	  			cout<<"Enter new Quantity: ";
	  			cin>>n_q;
	  			filep1<<p_n<<" "<<n_q<<" "<<p_p<<" "<<cat_p<<" "<<endl;
	  			filePL1<<p_n<<" "<<n_q<<" "<<buy_price<<" "<<p_p<<" "<<cat_p<<" "<<endl;
			  }
			  	else if(update_ch==2){
	  			cout<<"Enter new Product Price: ";
	  			cin>>n_p;
	  			filep1<<p_n<<" "<<p_nu<<" "<<n_p<<" "<<cat_p<<" "<<endl;
	  			filePL1<<p_n<<" "<<p_nu<<" "<<buy_price<<" "<<n_p<<" "<<cat_p<<" "<<endl;
			  } }
	  	
		  else{
		  	filep1<<p_n<<" "<<p_nu<<" "<<p_p<<" "<<cat_p<<" "<<endl;
		  	filePL1<<p_n<<" "<<p_nu<<" "<<buy_price<<" "<<p_p<<" "<<cat_p<<" "<<endl;
		  }
	          
		 filep>>p_n>>p_nu>>p_p>>cat_p;
		 filePL>>p_n>>p_nu>>buy_price>>p_p>>cat_p;}
		 filep.close(); 
		 filep1.close();
		 filePL.close(); 
		 filePL1.close();
		 remove("Product.txt");
		 rename("Product1.txt","Product.txt");
	        remove("ProductList.txt")	;
		 rename("ProductList1.txt","ProductList.txt");
		if(update_check==1){
			cout<<"Information Updated...."<<endl;	
		}
		else if  (update_check==0){
		cout<<"Product Not exit......"<<endl;	
		}
	       s=c=n=NULL;
	        create_product();}
	       } 
	void sorting_Product(){
		int sorting_ch;
		int size=Size_Product();
			int arry[size] ;
			int temp;
			int i=0;
		cout<<"\tSort "<<endl;
		cout<<"\t1: By Quantity "<<endl;
		cout<<"\t2: By Product Price "<<endl;
		cout<<"\t";
		cin>>sorting_ch;
		system("cls");
		if(sorting_ch==1){
		if(s==NULL){
			cout<<"List is Empty.";
		}
		else
		{
			c=s;
			while(c!=NULL)
			{
			arry[i]=c->p_no;
				c=c->ptr;
				i++;
			}
		}
	
	    for(int i=0;i<size;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if(arry[j]>arry[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=arry[i];
            arry[i]=arry[min];
            arry[min]=temp;
        }
    }
		int s_id;
	  	int p_nu;
              string p_n;
              string cat_p;
              double p_p;
	  	int a=0;
	  	fstream filep;
	  fstream filep1;
	
	while(a<size)
	{
	  filep.open("Product.txt",ios::in);
	  if(!filep){
	  	cout<<"Error..."<<endl;
	  	filep.close();}
	else{
	
	  filep1.open("Product1.txt",ios::out|ios::app);
	  filep>>p_n>>p_nu>>p_p>>cat_p;
	  while(!filep.eof()){
	  	if(p_nu==arry[a]){
	  		
	  		filep1<<p_n<<" "<<p_nu<<" "<<p_p<<" "<<cat_p<<" "<<endl;

	  		a++;
		  }
	     filep>>p_n>>p_nu>>p_p>>cat_p;
		}
		filep.close();
		filep1.close(); 	
	}}
               remove("Product.txt");
		 rename("Product1.txt","Product.txt");
		     s=c=n=NULL;
	        create_product();
	       productList::create_productList();
	       productList::sorting_Product_By_Quantity();
	        
	        cout<<"Sorting Done "<<endl;
		} 
	else if(sorting_ch==2){
		if(s==NULL){
			cout<<"List is Empty.";
		}
		else
		{
			c=s;
			while(c!=NULL)
			{
			arry[i]=c->product_p;
				c=c->ptr;
				i++;
			}
		}
	
	    for(int i=0;i<size;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if(arry[j]>arry[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=arry[i];
            arry[i]=arry[min];
            arry[min]=temp;
        }
    }
		int s_id;
	  	int p_nu;
              string p_n;
              string cat_p;
              double p_p;
	  	int a=0;
	  	fstream filep;
	  fstream filep1;
	
	while(a<size)
	{
	  filep.open("Product.txt",ios::in);
	  if(!filep){
	  	cout<<"Error..."<<endl;
	  	filep.close();}
	else{
	
	  filep1.open("Product1.txt",ios::out|ios::app);
	  filep>>p_n>>p_nu>>p_p>>cat_p;
	  while(!filep.eof()){
	  	if(p_p==arry[a]){
	  		
	  		filep1<<p_n<<" "<<p_nu<<" "<<p_p<<" "<<cat_p<<" "<<endl;

	  		a++;
		  }
	     filep>>p_n>>p_nu>>p_p>>cat_p;
		}
		filep.close();
		filep1.close(); 	
	}}
               remove("Product.txt");
		 rename("Product1.txt","Product.txt");
		     s=c=n=NULL;
	        create_product();
	        productList::create_productList();
	        productList::sorting_Product_By_Price();
	             //PL.sorting_Product_By_Price();
	        cout<<"Sorting Done "<<endl;
		} 
		}
void Bill_System(){
	       string c_n;
	  	string c_ph;
	       int p=1;
		int Bill_no;
		double total=0;
		double Discount=0;
		int total_Qty=0;
		double Amount;
		double buy_price;
		double Net_total=0;
		int Qty;
		double profit;
		string Cat_product;
		int Sr_no=0;
		string pdt;
		fstream fileC;
	  	fileC.open("Customer.txt",ios::out|ios::app);
	  	do{
	  	cout<<"Enter Customer Name: ";
	  	cin>>c_n;
	  	if(!isAtoZ(c_n))cout<<"re-";
				}while(!isAtoZ(c_n));
		do{
	  	cout<<"Enter Customer Phone Number: ";
	  	cin>>c_ph;
	  		if(!isNumber(c_ph))cout<<"re-";
		}while(!isNumber(c_ph));
		
			fstream fileB;
	       while(p!=0){
	
		fileB.open("Bill.txt",ios::out|ios::app);
		b:
		   do{
		cout<<"Enter Product: ";
		cin>>pdt;
		if(!Product_check(pdt)){
		   //org_price_check(pdt);
	  	  cout<<"Product Not Available..."<<endl;
		  cout<<"re-";}
	       }while(!Product_check(pdt));
	       d:
		cout<<"Enter Qty: ";
		cin>>Qty;
		int p_nu;
              string p_n;
              string cat_p;
              double p_p;
	  	fstream filep;
	       fstream filep1;
	  filep.open("Product.txt",ios::in);
	  if(!filep){
	  	cout<<"Error..."<<endl;
	  	filep.close();
	  }
	  else{
	  filep1.open("Product1.txt",ios::out|ios::app);
	 filep>>p_n>>p_nu>>p_p>>cat_p;
	  while(!filep.eof()){
	  	if(pdt==p_n){
	  		if(p_nu==0){
	  			cout<<"Product Sold Out..."<<endl;
	  			goto b;
			  }
			  if(p_nu<Qty){
			  	cout<<p_nu<<" is available ..."<<endl;
			  	cout<<"Re-";
			  	goto d;
			  }
			else{
	  	       p_nu=p_nu-Qty;}
	  	       fileC<<c_n<<" "<<c_ph<<" "<<productPrice<<" "<<p_n<<" "<<cat_p<<" "<<endl;
	  		filep1<<p_n<<" "<<p_nu<<" "<<p_p<<" "<<cat_p<<" "<<endl;
			  }
	  	
		  else{
		  	filep1<<p_n<<" "<<p_nu<<" "<<p_p<<" "<<cat_p<<" "<<endl;
		  }
	          
		filep>>p_n>>p_nu>>p_p>>cat_p;}
		 filep.close(); 
		 filep1.close();
		 remove("Product.txt");
		 rename("Product1.txt","Product.txt");
		 
		 //Product List
		  fstream fileSR;
		fstream filePL;
	       fstream filePL1;
	  filePL.open("ProductList.txt",ios::in);
      	 fileSR.open("SaleReport.txt",ios::out|ios::app);
	  filePL1.open("ProductList1.txt",ios::out|ios::app);
	 filePL>>p_n>>p_nu>>buy_price>>p_p>>cat_p;
	  while(!filePL.eof()){
	  	if(pdt==p_n){
	  	       p_nu=p_nu-Qty;
	  		filePL1<<p_n<<" "<<p_nu<<" "<<buy_price<<" "<<p_p<<" "<<cat_p<<" "<<endl;
	  		profit=p_p-buy_price;
	  		profit=profit*Qty;
	  		Amount=Qty*productPrice;
	  		fileSR<<pdt<<" "<<Qty<<" "<<buy_price<<" "<<p_p<<" "<<Amount<<" "<<productCategory<<" "<<profit<<" "<<endl;	
			  }
	  	
		  else{
		  	filePL1<<p_n<<" "<<p_nu<<" "<<buy_price<<" "<<p_p<<" "<<cat_p<<" "<<endl;
		  }
	          
		filePL>>p_n>>p_nu>>buy_price>>p_p>>cat_p;}
		 filePL.close(); 
		 filePL1.close();
		 fileSR.close();
		 remove("ProductList.txt");
		 rename("ProductList1.txt","ProductList.txt");
		}
	
	         Sr_no++;
	       Amount=Qty*productPrice;
	        Cat_product=productCategory;
		fileB<<Sr_no<<" "<<pdt<<" "<<Cat_product<<" "<<Qty<<" "<<productPrice<<" "<<Amount<<" "<<endl; 
		fileB.close();
			cout<<"\t0: Exit"<<endl;
		cout<<"\t";
		cin>>p;
		   
	} 
               
	       fstream fileBN;
	        fileBN.open("Bill-No.txt",ios::in);
	        fileBN>>Bill_no;
	       while(!(fileBN.eof())){
	       fileBN>>Bill_no;}
	       fileBN.close();
	       Bill_no= Bill_no+1;
		fileBN.open("Bill-No.txt",ios::out|ios::app);
		fileBN<<Bill_no<<" "<<endl;
		 system("cls");
		cout<<"\n\n\t\t\t\t\tSALE INVOICE"<<endl;
		cout<<"Bill No: "<<Bill_no<<endl;
		fileBN.close();
		time();
		cout<<"Customer Name: "<<c_n<<endl;
		cout<<"Customer Phone Number: "<<c_ph<<endl;
		Sr_no=0;
		cout<<"\n\n";
		cout<<"\t_______________________________________________________________________________\n";
		cout<<"\tSr #"<<"\tProduct Name\t"<<"\tQuantity\t"<<"Price\t"<<"\tAmount\t"<<endl;
		cout<<"\t_______________________________________________________________________________\n";
		fileB.open("Bill.txt",ios::in);
		
		fileB>>Sr_no>>pdt>>Cat_product>>Qty>>productPrice>>Amount;
		while(!(fileB.eof())){
		cout<<"\t"<<Sr_no<<"\t"<<pdt<<" "<<Cat_product<<"\t\t"<<Qty<<"\t\t"<<productPrice<<"\t\t"<<Amount<<endl;
		total=total+Amount;
		total_Qty=total_Qty+Qty;
		fileB>>Sr_no>>pdt>>Cat_product>>Qty>>productPrice>>Amount;
	      }
	      fileB.close();
	      remove("Bill.txt");
	      cout<<"\n\t\t\t\t\t\t\t\t\tTotal:"<<total<<endl;
	      if(total>100000){
	      	Discount=2000;}
	      cout<<"\t\t\t\t\t\t\t\t\tDiscount:"<<Discount<<endl;
	      Net_total=total-Discount;
	      cout<<"\t\tNo.of Item(s):"<<Sr_no<<" \t\tTotal Qty:"<<total_Qty<<"\t\tNet Total:"<<Net_total<<endl;
	      cout<<"\n\n\t\t\t\t\tTHANK YOU FOR SHOPPING "<<endl;
	        s=c=n=NULL;
	        create_product();
		}
		
   		  	
};
struct Sale_Report{
int QTY;
string p_name;
double product_p;
string category;
double original_p;
double Amount;
double profit;
struct Sale_Report*ptr;
};
class SaleReport{
     private:
		Sale_Report*f,*r,*n;
	public:
	   SaleReport(){
	  	f=r= n =NULL;
	  }  
	void Equeue(){
      //int bill_no;
      string p_nam;
      double pdt_p;
      string caty;
      int qty;
      double Ant;
      double org_p;
      double pfit;
      fstream fileSR;
      fileSR.open("SaleReport.txt",ios::in);
      fileSR>>p_nam>>qty>>org_p>>pdt_p>>Ant>>caty>>pfit;
       while(!fileSR.eof()){
       if(r==NULL){
       r=new Sale_Report;
	r->p_name=p_nam;
	r->product_p=pdt_p;
	r->QTY=qty;
	r->original_p=org_p;
	r->Amount=Ant;
	r->category=caty;
	r->profit=pfit;
	r->ptr=NULL;
       f= r;
	}
	else{
	n=new Sale_Report;
	n->p_name=p_nam;
	n->product_p=pdt_p;
	n->QTY=qty;
	n->original_p=org_p;
	n->Amount=Ant;
	n->category=caty;
	n->profit=pfit;
	n->ptr=NULL;
	r->ptr=n;
       r= n;	
	}
	fileSR>>p_nam>>qty>>org_p>>pdt_p>>Ant>>caty>>pfit;
	}
	fileSR.close();
	}
	
     void Display(){
     	n=f;
     	if((f==NULL)&&(r==NULL)){
     		cout<<"File is empty..."<<endl;
	     }
	else{
		cout<<"\n\nDisplay"<<endl;
		while(n!=NULL){
			cout<<	n->p_name<<"\t";
               	cout<<n->product_p<<"\t";
	              cout<< n->QTY<<"\t";
	           cout<<n->original_p<<"\t";
	           cout<<n->Amount<<"\t";
	          cout<<n->category<<"\t";
	          cout<<n->profit<<"\t";
	          n=n->ptr;
	          cout<<endl;
		}
	}
     }
     void deQueue(){
     	n=f;
     	if((f==NULL)&&(r==NULL)){
     		cout<<"File is empty..."<<endl;
	     }
	else {
	 
	 if(n->ptr!=NULL){
	 	n=n->ptr;
	 	f=n;
	 }
	 else {
	 	f=NULL;
	 	r=NULL;
	}}
     }
     
     int size_SP(){
     	int count=0;
     	n=f;
     	if((f==NULL)&&(r==NULL)){
     		cout<<"File is empty..."<<endl;
	     }
	else{
		while(n!=NULL){
			count++;
	          n=n->ptr;
		}
		
	}
	return count;
     }
    double total_Qty(){
	int total_qty=0;
	n=f;
     	if((f==NULL)&&(r==NULL)){
     		cout<<"File is empty..."<<endl;
	     }
	else{
		while(n!=NULL){
		total_qty=total_qty+n->QTY;
	          n=n->ptr;
		}
}
return total_qty;
}
double total_Sale(){
	int total_sale=0;
	n=f;
     	if((f==NULL)&&(r==NULL)){
     		cout<<"File is empty..."<<endl;
	     }
	else{
		while(n!=NULL){
		total_sale=total_sale+n->Amount;
	          n=n->ptr;
		}
}
return total_sale;
}
double total_Profit(){
	int total_profit=0;
	n=f;
     	if((f==NULL)&&(r==NULL)){
     		cout<<"File is empty..."<<endl;
	     }
	else{
		while(n!=NULL){
	total_profit=total_profit+n->profit;
	          n=n->ptr;
		}
}
return total_profit;
}
     double   total_Net_Profit() {
	double Net_Profit;
	double total_Net_profit;
		Net_Profit=total_Profit()*5/100;
	total_Net_profit=total_Profit()-Net_Profit;
	return total_Net_profit;
      }

     void create_SaleReport(){
     	double Total_sale;
     	int size=size_SP();
     	cout<<"\n\n\n\t\t\t\t\t SALE REPORT \n\n"<<endl;
     	while(size>10){
     	deQueue();
     	size=size_SP();}
     		cout<<"Total Sell Quantity: "<<total_Qty()<<endl;
		cout<<"Total Sales: "<<total_Sale()<<endl;
       	cout<<"Total Profit: "<<total_Profit()<<endl;
		cout<<"Net Profit: "<<total_Net_Profit()<<endl;
     }
     void create_SaleReportFile(){
     	int size=size_SP();
     	string Sale_Report1="SALE REPORT ";
     	fstream fileSRF;
     	fileSRF.open("SaleReportF.txt",ios::out|ios::app);
     		fileSRF<<"\n\t\t\t SALE REPORT \n\n";
     	   	while(size>10){
     	deQueue();
     	size=size_SP();}
     	fileSRF<<"Total Sell Quantity: "<<total_Qty()<<endl;
		fileSRF<<"Total Sales: "<<total_Sale()<<endl;
       	fileSRF<<"Total Profit: "<<total_Profit()<<endl;
		fileSRF<<"Net Profit: "<<total_Net_Profit()<<endl;
		cout<<"Sale Report Done..."<<endl;
     	
     } 
};

int main(){        
	system("color F9");
	cout<<"\n\n";
  cout<<"\t\t\t\t    ------------------------------------\n";
  cout<<"\t\t\t\t    |ELECTRONIC STORE MANAGEMENT SYSTEM|\n";
  cout<<"\t\t\t\t    ------------------------------------\n";
  cout<<"\n\n\n\n";
  cout<<"\t\t\t\tPrepared By:\n\n\n";
  cout<<"\t\t\t\t\t";
  cout<<"Amina Tariq (20021519-035)"<<endl;
  cout<<"\t\t\t\t\t";
  cout<<"\n\n\t\t\t\t    Press Enter to continue......\n\n";
  getch();
  cout<<"\t\t\t\tLoading";
  for(int process=0;process<30;process++)
  {
    delay(50);
    cout<<(char)177;
  }
  system("cls");
  login l1;
  int ch_login;
  int Admin_opt;
  cout<<"\n\n\n\t\t\t\tLOGIN\n\n"<<endl;
  	cout<<"\tPress"<<endl;
	cout<<"\t1: Admin "<<endl;
	cout<<"\t2: Senior Staff"<<endl;
	cout<<"\t3: Staff"<<endl;
	cout<<"\t";
	cin>>ch_login;
	if(ch_login==1){
		cout<<endl;
	l1.admin_login();
	cout<<"\t\t\t";
	system("pause");
	back:
		system("cls");
	cout<<"\n\n\tPress"<<endl;
	       cout<<"\t1: Staff"<<endl;
	       cout<<"\t2: Customer"<<endl;
	       cout<<"\t3: Product List"<<endl;
	       cout<<"\t4: Product "<<endl;
	       cout<<"\t5: Billing System"<<endl;
	       cout<<"\t6: Sell Report"<<endl;
	       cout<<"\t0: Exit"<<endl;
	       cout<<"\t";
	       cin>>Admin_opt;
	if(Admin_opt==1){
	          staf s1;
	          s1.create_s();
	        int s_choice;
              	do{
		       system("CLS");
	              cout<<"\tPress"<<endl;
	              cout<<"\t1: Update Staff data"<<endl;
	              cout<<"\t2: Add new Staff"<<endl;
	              cout<<"\t3: Delete Staff"<<endl;
	              cout<<"\t4: Search"<<endl;
	              cout<<"\t5: Display Staff data"<<endl;
	              cout<<"\t6: Sort Staff data"<<endl;
	              cout<<"\t7: Back"<<endl;
	              cout<<"\t0: Exit"<<endl;
	              cout<<"\t";
              	cin>>s_choice;
	              system("CLS");
	                     if(s_choice==1){
		                     cout<<endl;
	                            s1.update_s();
	                            system("pause");}
	                     else if(s_choice==2){
	                  	       cout<<endl;
	                            s1.add_s();
	                            system("pause");}
	                     else if(s_choice==3){
		                     cout<<endl;
	                            s1.delete_s();
                            	system("pause");}
	                     else if(s_choice==4){
	                     	cout<<endl;
                                   s1.search_s();
                            	system("pause");}
                     	else if(s_choice==5){
	                     	cout<<endl;
	                            s1.display_s();
	                            system("pause");}
	                     else if(s_choice==6){
	                     	cout<<endl;
	                            s1.sorting_s();
	                            system("pause");}
	                     else if(s_choice==7){
	                            goto back;
	                            system("pause");}
	                      else if(s_choice==0){
	              	system("CLS");
	              	 cout<<"\n\n\t\t\tLOG OUT"<<endl;
	              	 goto exit;
	                     system("pause");
			}
	                       }while(s_choice!=0);}
	              
      else if(Admin_opt==2){
      	      custo c1;
	c1.create_c();
	 int c_choice;
              	do{
		       system("CLS");
	              cout<<"\tPress"<<endl;
	              cout<<"\t1: Update Customer data"<<endl;
	              cout<<"\t2: Add new Customer"<<endl;
	              cout<<"\t3: Delete Customer"<<endl;
	              cout<<"\t4: Search"<<endl;
	              cout<<"\t5: Display Customer data"<<endl;
	              cout<<"\t6: Back"<<endl;
	              cout<<"\t0: Exit"<<endl;
	              cout<<"\t";
              	cin>>c_choice;
	              system("CLS");
	                     if(c_choice==1){
		                     cout<<endl;
	                            c1.update_c();
	                            system("pause");}
	                     else if(c_choice==2){
	                  	       cout<<endl;
	                            c1.add_c();
	                            system("pause");}
	                     else if(c_choice==3){
		                     cout<<endl;
	                          c1.delete_c();
                            	system("pause");}
	                     else if(c_choice==4){
	                     	cout<<endl;
                                   c1.search_c();
                            	system("pause");}
                     	else if(c_choice==5){
	                     	cout<<endl;
	                            c1.display_c();
	                            system("pause");}
	                     else if(c_choice==6){
	                            goto back;
	                            system("pause");}
	                      else if(c_choice==0){
	              	system("CLS");
	              	 cout<<"\n\n\t\t\tLOG OUT"<<endl;
	              	 goto exit;
	                     system("pause");
			}
	              }while(c_choice!=0);	}
	              
              else if(Admin_opt==3){
              	int p_choice;
              	do{
              	system("CLS");
              	cout<<"\tPress"<<endl;
              	cout<<"\t1: Display Product List"<<endl;
              	cout<<"\t2: Back"<<endl;
	              cout<<"\t0: Exit"<<endl;
	              cout<<"\t";
                     cin>>p_choice;
                     if(p_choice==1){
                     system("CLS");
              	productList PL;
	              PL.create_productList();
	              PL.Display_product_list();
              	cout<<"\tTotal Products: "<< PL.total_ProductList()<<endl;
	              system("pause");}
	              
	              else if(p_choice==2){
	              	system("CLS");
	              	 goto back;
	                     system("pause");
			}
	               else if(p_choice==0){
	              	system("CLS");
	              	 cout<<"\n\n\t\t\tLOG OUT"<<endl;
	              	 goto exit;
	                     system("pause");
			}
	              }while(p_choice!=0);  }
	              
	else if(Admin_opt==4){
	         product p1;
	              p1.create_product();
	        int p_choice;
              	do{
		       system("CLS");
	              cout<<"\tPress"<<endl;
	              cout<<"\t1: Update Product"<<endl;
	              cout<<"\t2: Add new Product"<<endl;
	              cout<<"\t3: Delete Product"<<endl;
	              cout<<"\t4: Search Product"<<endl;
	              cout<<"\t5: Display Product Informtion"<<endl;
	              cout<<"\t6: Sort Product data"<<endl;
	              cout<<"\t7: Back"<<endl;
	              cout<<"\t0: Exit"<<endl;
	              cout<<"\t";
              	cin>>p_choice;
	              system("CLS");
	                     if(p_choice==1){
		                     cout<<endl;
	                            p1.update_Product();
	                            system("pause");}
	                     else if(p_choice==2){
	                  	       cout<<endl;
	                            p1.add_product();
	                            system("pause");}
	                     else if(p_choice==3){
		                     cout<<endl;
	                           p1.delete_product();
                            	system("pause");}
	                     else if(p_choice==4){
	                     	cout<<endl;
                                   p1.search_product();
                            	system("pause");}
                     	else if(p_choice==5){
	                     	cout<<endl;
	                            p1.Display_p();
	                            system("pause");}
	                     else if(p_choice==6){
	                     	cout<<endl;
	                           p1.sorting_Product();
	                            system("pause");}
	                     else if(p_choice==7){
	                            goto back;
	                            system("pause");}
	                      else if(p_choice==0){
	              	system("CLS");
	              	 cout<<"\n\n\t\t\tLOG OUT"<<endl;
	              	 goto exit;
	                     system("pause");
			}
	                       }while(p_choice!=0);}
	                       
		else 	if(Admin_opt==5){
				system("CLS");
		        product p1;
	              p1.create_product();
	              p1.Bill_System();
	               system("pause");
	                goto back;
			}
		else if(Admin_opt==6){
				system("CLS");
			int SR;
		cout<<"\n\n\tPress"<<endl;
	       cout<<"\t1: Sale Report [Console]"<<endl;
	       cout<<"\t2: Sale Report [File]"<<endl;
	       cout<<"\t ";
	       cin>>SR;
	       if(SR==1){
	       	system("CLS");
		        SaleReport SR;
	              SR.Equeue();
	              SR.create_SaleReport();
	              system("pause");
	                  goto back;
			}
			
		else if (SR==2){
	       	system("CLS");
		        SaleReport SR;
	              SR.Equeue();
	              SR.create_SaleReportFile();
	              system("pause");
	              goto back;
			}
	       }
	       else if(Admin_opt==0){
	              	system("CLS");
	              	 cout<<"\n\n\t\t\tLOG OUT"<<endl;
	              	 goto exit;
	                     system("pause");
			}
		}
	       
	else if(ch_login==2){
		int ss_opt;
		cout<<endl;
	l1.SeniorStaff_login();
	cout<<"\t\t\t";
	system("pause");
	 Back:
	 	system("cls");
	       cout<<"\n\n\tPress"<<endl;
	       cout<<"\t1: Staff"<<endl;
	       cout<<"\t2: Customer"<<endl;
	       cout<<"\t3: Product List"<<endl;
	       cout<<"\t4: Product "<<endl;
	       cout<<"\t6: Back"<<endl;
	       cout<<"\t7: Exit"<<endl;
	       cout<<"\t";
	       cin>>ss_opt;
	if(ss_opt==1){
	          staf s1;
	          s1.create_s();
	        int s_choice;
              	do{
		       system("CLS");
	              cout<<"\tPress"<<endl;
	              cout<<"\t1: Search"<<endl;
	              cout<<"\t2: Display Staff data"<<endl;
	              cout<<"\t3: Back"<<endl;
	              cout<<"\t0: Exit"<<endl;
	              cout<<"\t";
              	cin>>s_choice;
	              system("CLS");
	                      if(s_choice==1){
	                     	cout<<endl;
                                   s1.search_s();
                            	system("pause");}
                     	else if(s_choice==2){
	                     	cout<<endl;
	                            s1.display_s();
	                            system("pause");}
	                     else if(s_choice==3){
	                            goto back;
	                            system("pause");}
	                      else if(s_choice==0){
	              	system("CLS");
	              	 cout<<"\n\n\t\t\tLOG OUT"<<endl;
	              	 goto exit;
	                     system("pause");
			}
	                       }while(s_choice!=0);}
	              
      else if(ss_opt==2){
      	      custo c1;
	c1.create_c();
	 int c_choice;
              	do{
		       system("CLS");
	              cout<<"\tPress"<<endl;
	              cout<<"\t1. Search"<<endl;
	              cout<<"\t2. Display Customer data"<<endl;
	              cout<<"\t3. Back"<<endl;
	               cout<<"\t0. Exit"<<endl;
	              cout<<"\t";
              	cin>>c_choice;
	              system("CLS");
	                      if(c_choice==1){
	                     	cout<<endl;
                                   c1.search_c();
                            	system("pause");}
                     	else if(c_choice==2){
	                     	cout<<endl;
	                            c1.display_c();
	                            system("pause");}
	                     else if(c_choice==3){
	                            goto back;
	                            system("pause");}
	                      else if(c_choice==0){
	              	system("CLS");
	              	 cout<<"\n\n\t\t\tLOG OUT"<<endl;
	              	 goto exit;
	                     system("pause");
			}       
	              }while(c_choice!=0);}	
	       else if(ss_opt==3){
              	int p_choice;
              	do{
              	system("CLS");
              	cout<<"\tPress"<<endl;
              	cout<<"\t1: Display Product List"<<endl;
              	cout<<"\t2: Back"<<endl;
	              cout<<"\t0: Exit"<<endl;
	              cout<<"\t";
                     cin>>p_choice;
                     if(p_choice==1){
                     system("CLS");
              	productList p1;
	              p1.create_productList();
	              p1.Display_product_list();
              	cout<<"\tTotal Products: "<<p1.total_ProductList()<<endl;
	              system("pause");}
	              
	              else if(p_choice==2){
	              	system("CLS");
	              	 goto back;
	                     system("pause");
			}
	               else if(p_choice==0){
	              	system("CLS");
	              	 cout<<"\n\n\t\t\tLOG OUT"<<endl;
	              	 goto exit;
	                     system("pause");
			}
	              }while(p_choice!=0);  }
	              
	else if(ss_opt==4){
	         product p1;
	              p1.create_product();
	        int p_choice;
              	do{
		       system("CLS");
	              cout<<"\tPress"<<endl;
	              cout<<"\t1: Update Product"<<endl;
	              cout<<"\t2: Add new Product"<<endl;
	              cout<<"\t3: Delete Product"<<endl;
	              cout<<"\t4: Search Product"<<endl;
	              cout<<"\t5: Display Product Informtion"<<endl;
	              cout<<"\t6: Sort Product data"<<endl;
	              cout<<"\t7: Back"<<endl;
	              cout<<"\t0: Exit"<<endl;
	              cout<<"\t";
              	cin>>p_choice;
	              system("CLS");
	                     if(p_choice==1){
		                     cout<<endl;
	                            p1.update_Product();
	                            system("pause");}
	                     else if(p_choice==2){
	                  	       cout<<endl;
	                            p1.add_product();
	                            system("pause");}
	                     else if(p_choice==3){
		                     cout<<endl;
	                           p1.delete_product();
                            	system("pause");}
	                     else if(p_choice==4){
	                     	cout<<endl;
                                   p1.search_product();
                            	system("pause");}
                     	else if(p_choice==5){
	                     	cout<<endl;
	                            p1.Display_p();
	                            system("pause");}
	                     else if(p_choice==6){
	                     	cout<<endl;
	                           p1.sorting_Product();
	                            system("pause");}
	                     else if(p_choice==7){
	                            goto Back;
	                            system("pause");}
	                      else if(p_choice==0){
	              	system("CLS");
	              	 cout<<"\n\n\t\t\tLOG OUT"<<endl;
	              	 goto exit;
	                     system("pause");
			}
	                       }while(p_choice!=0);}
	             else  if(ss_opt==5){
				system("CLS");
		        product p1;
	              p1.create_product();
	              p1.Bill_System();
	              system("pause");
	               goto back;
			}
			else if(ss_opt==0){
	              	system("CLS");
	              	 cout<<"\n\n\t\t\tLOG OUT"<<endl;
	              	 goto exit;
	                     system("pause");
			}
			}
	
	else if(ch_login==3){
		cout<<endl;
        l1.Staff_login();
        int s_opt;
        cout<<"\t\t\t";
	 system("pause");
	 system("cls");
	 Bk:
	 	 system("cls");
	       cout<<"\n\n\tPress"<<endl;
	       cout<<"\t1: Product List"<<endl;
	       cout<<"\t2: Billing System"<<endl;
	       cout<<"\t0: Exit "<<endl;
	       cout<<"\t";
	       cin>>s_opt;
	if(s_opt==1){
		 product p1;
	              p1.create_product();
	        int p_choice;
		do{
              	system("CLS");
              	cout<<"\tPress"<<endl;
              	cout<<"\t1: Display Product List"<<endl;
              	cout<<"\t2: Back"<<endl;
	              cout<<"\t0: Exit"<<endl;
	              cout<<"\t";
                     cin>>p_choice;
                     if(p_choice==1){
                     system("CLS");
	              p1.Display_p();

              	cout<<"\tTotal Products: "<<p1.total_p()<<endl;
	              system("pause");}
	              
	              else if(p_choice==2){
	              	system("CLS");
	              	 goto Bk;
	                     system("pause");
			}
	               else if(p_choice==0){
	              	system("CLS");
	              	 cout<<"\n\n\t\t\tLOG OUT"<<endl;
	              	 goto exit;
	                     system("pause");
			}
	              }while(p_choice!=0);
			  }
	       else  if(s_opt==2){
				system("CLS");
		        product p1;
	              p1.create_product();
	              p1.Bill_System();
	               system("pause");
	               goto Bk;
			}
		 else if(s_opt==0){
	              	system("CLS");
	              	 cout<<"\n\n\t\t\tLOG OUT"<<endl;
	              	 goto exit;
	                     system("pause");
			}	
	       } 
	exit:
	return 0;
}
