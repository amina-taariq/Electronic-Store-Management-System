#include<iostream>
#include<fstream>
#include<ctime>
#include<iomanip>
#include<string.h>
#include<conio.h>
using namespace std;
struct Sale_Report{
int QTY;
string p_name;
double product_p;
string category;
double original_p;
double profit;
double Amount;
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
 void  total(){
 	int total_Qty=0;
 	double total_sale=0;
 	double total_profit=0;
 	double Net_Profit=0;
 	double total_Net_Profit=0;
 	n=f;
     	if((f==NULL)&&(r==NULL)){
     		cout<<"File is empty..."<<endl;
	     }
	else{
		while(n!=NULL){
		total_Qty=total_Qty+n->QTY;
		total_sale=total_sale+n->Amount;
		total_profit=total_profit+n->profit;
	          n=n->ptr;
		}
	Net_Profit=total_profit*5/100;
	total_Net_Profit=total_profit-Net_Profit;	
	cout<<"Total Sell Quantity: "<<total_Qty<<endl;
	cout<<"Total Sales: "<<total_sale<<endl;
	cout<<"Total Profit: "<<total_profit<<endl;
	cout<<"Net Profit: "<<total_Net_Profit<<endl;
	}
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
};
int main(){
	SaleReport SP1;
	SP1.Equeue();
	SP1.Display();
	int size=SP1.size_SP();
	cout<<size;
	while(size>10){
     	SP1.deQueue();
     	size=SP1.size_SP();
                     }
        SP1.Display();
        SP1.total();
        cout<<SP1.total_Qty()<<endl;
         cout<<SP1.total_Sale()<<endl;
	   cout<<SP1.total_Profit()<<endl;
	     cout<<SP1.total_Net_Profit()<<endl;        
	return 0;}


