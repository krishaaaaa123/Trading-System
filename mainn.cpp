
#include <iostream>


#include <ctime>
using namespace std;


int main()
{
    char start;
    float shop(void);
    char choice;
    
    startL:
    cout<<"Please press H to start shopping for Home Appliances"<<endl;
      start:
         cin>>start;
         
         
        if(start =='h' || start == 'H')
        {
            float total = shop();
            time_t t = time(NULL);
            tm* tPtr= localtime(&t);
            cout<<"Bill Date: ";
            cout<<tPtr->tm_mday<<"/";
            cout<<1+tPtr->tm_mon<<"/";
            cout<<1900+tPtr->tm_year<<endl;
            cout<<"Bill Time"<<(tPtr->tm_hour)<<":"<<(tPtr->tm_min)<<":"<<(tPtr->tm_sec);
            cout<<"Total Bill Amount: "<<total<<endl;
            if(total>50000 && 100000)
            {
                total=total-(0.05*total);
                cout<<"total discount : 5%"<<endl;
                
                
            }
            
            else if(total>100000 && 125000){
                total=total-(0.1*total);
                cout<<"total discount : 10%"<<endl;
                
                
            }
            
            else if(total>125000 && 150000){
                total=total-(0.25*total);
                cout<<"total discount : 25%"<<endl;
                
                
            }
            else if(total>150000){
                total=total-(0.5*total);
                cout<<"total discount : 50%"<<endl;
                
                
            }
            
            cout<<"total bill amount is : "<<total<<endl;
            Again:
                 cout<<"Do you want to shop again y or n? "<<endl;
                 cin>>choice;
                 if(choice == 'y' || choice == 'Y'){
                     goto startL;
                     
                     
                 }
                 
                 
                 else  if(choice == 'n' || choice == 'N'){
                     cout<<"Thank you for shopping "<<endl;
                 }
                     
                 else{
                     cout<<"You have entered the wrong option. Please press H"<<endl;
                     goto Again;
                 }
                 
            
                 
            
        }
  
         else{
                     cout<<"You have entered the wrong option. Please press H to start again "<<endl;
                     goto start;
                 }
    }




       float shop()
       {
         shop:
              char choice;
              char product;
              int quantity;
              float bill=0;
               itemLevel:
                      cout<<"**********Welcome**********"<<endl;
                      cout<<"Please follow the instructions"<<endl;
                      cout<<"| 1) Press r to order refrigerator"<<endl;
                      cout<<"| 2) Press w to order Washing Machine"<<endl;
                      cout<<"| 3) Press t to order television"<<endl;
                      cout<<"| 4) Press m to order microwave"<<endl;
                      cout<<"| 5) Press a to order Air Conditioner"<<endl;
                      
                      cin>>choice;
                      
                      if( choice == 'r' || choice == 'R' || choice == 'W' || choice == 'w' || choice == 't' || choice == 'T' || choice == 'M' || choice == 'm' || choice == 'a' || choice == 'A' )
                      {
                          if( choice == 'r' || choice == 'R')
                          {
                              cout<<"_____Refrigerator Details_____"<<endl;
                              cout<<" | 1) Whirlpool => Price: 40000 |"<<endl;
                              cout<<" | 2) Samsung => Price: 60000 |"<<endl;
                              cout<<" | 3) Haiers => Price: 40000 |"<<endl;
                              cout<<" | 4) Voltas => Price: 70000 |"<<endl;
                              cout<<" | 5) Godrej => Price: 80000 |"<<endl;
                              
                              
                          
                          
                          cout<<"Please Enter your choice :"<<endl;
                          cin>>product;
                          
                          if(product== '1' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*40000;
                              
            
                              
                           }
                           
                           else if(product== '2' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*60000;
                           }
                           
                           else if(product== '3' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*40000;
                           }
                           
                           else if(product== '4' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*70000;
                           }
                           
                           else if(product== '5' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*80000;
                           }
                           else{
                               cout<<"You have entered the wrong option, please try again"<<endl;
                               goto itemLevel;
                           }
                           
                           
                              
                      }
                        if( choice == 'W' || choice == 'w')
                          {
                              cout<<"_____Washing Machine Details_____"<<endl;
                              cout<<" | 1) Bosch => Price: 40000 |"<<endl;
                              cout<<" | 2) LG => Price: 60000 |"<<endl;
                              cout<<" | 3) Haiers => Price: 40000 |"<<endl;
                              cout<<" | 4) Samsung => Price: 70000 |"<<endl;
                              cout<<" | 5) Godrej => Price: 80000 |"<<endl;
                              
                              
                          
                          
                          cout<<"Please Enter your choice :"<<endl;
                          cin>>product;
                          
                          if(product== '1' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*40000;
                              
            
                              
                           }
                           
                           else if(product== '2' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*60000;
                           }
                           
                           else if(product== '3' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*40000;
                           }
                           
                           else if(product== '4' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*70000;
                           }
                           
                           else if(product== '5' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*80000;
                           }
                           else{
                               cout<<"You have entered the wrong option, please try again"<<endl;
                               goto itemLevel;
                           }
                           
                          
                          
                          
                          }
                          
                          
                           if( choice == 't' || choice == 'T')
                          {
                              cout<<"_____Television Details_____"<<endl;
                              cout<<" | 1) Sony => Price: 40000 |"<<endl;
                              cout<<" | 2) LG => Price: 60000 |"<<endl;
                              cout<<" | 3) TCL => Price: 40000 |"<<endl;
                              cout<<" | 4) Samsung => Price: 70000 |"<<endl;
                              cout<<" | 5) Panasonic => Price: 80000 |"<<endl;
                              
                              
                          
                          
                          cout<<"Please Enter your choice :"<<endl;
                          cin>>product;
                          
                          if(product== '1' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*40000;
                              
            
                              
                           }
                           
                           else if(product== '2' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*60000;
                           }
                           
                           else if(product== '3' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*40000;
                           }
                           
                           else if(product== '4' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*70000;
                           }
                           
                           else if(product== '5' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*80000;
                           }
                           else{
                               cout<<"You have entered the wrong option, please try again"<<endl;
                               goto itemLevel;
                           }
                           
                          
                          
                          
                          }
                          
                           if( choice == 'M' || choice == 'm')
                          {
                              cout<<"_____Microwave Details_____"<<endl;
                              cout<<" | 1) Whirlpool => Price: 40000 |"<<endl;
                              cout<<" | 2) LG => Price: 60000 |"<<endl;
                              cout<<" | 3) IFP => Price: 40000 |"<<endl;
                              cout<<" | 4) Bajaj => Price: 70000 |"<<endl;
                              cout<<" | 5) Samsung => Price: 80000 |"<<endl;
                              
                              
                          
                          
                          cout<<"Please Enter your choice :"<<endl;
                          cin>>product;
                          
                          if(product== '1' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*40000;
                              
            
                              
                           }
                           
                           else if(product== '2' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*60000;
                           }
                           
                           else if(product== '3' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*40000;
                           }
                           
                           else if(product== '4' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*70000;
                           }
                           
                           else if(product== '5' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*80000;
                           }
                           else{
                               cout<<"You have entered the wrong option, please try again"<<endl;
                               goto itemLevel;
                           }
                           
                          
                          
                          
                          }
                          
                          
                           if( choice == 'a' || choice == 'A')
                          {
                              cout<<"_____Air Conditioner Details_____"<<endl;
                              cout<<" | 1) Daikins => Price: 40000 |"<<endl;
                              cout<<" | 2) Voltas => Price: 60000 |"<<endl;
                              cout<<" | 3) Hitachi => Price: 40000 |"<<endl;
                              cout<<" | 4) Samsung => Price: 70000 |"<<endl;
                              cout<<" | 5) Llyod => Price: 80000 |"<<endl;
                              
                              
                          
                          
                          cout<<"Please Enter your choice :"<<endl;
                          cin>>product;
                          
                          if(product== '1' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*40000;
                              
            
                              
                           }
                           
                           else if(product== '2' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*60000;
                           }
                           
                           else if(product== '3' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*40000;
                           }
                           
                           else if(product== '4' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*70000;
                           }
                           
                           else if(product== '5' ){
                              
                              cout<<"Please Enter the quantity of product: "<<endl;
                              cin>>quantity;
                              bill=bill+quantity*80000;
                           }
                           else{
                               cout<<"You have entered the wrong option, please try again"<<endl;
                               goto itemLevel;
                           }
                           
                          
                          
                          
                          }
                          
                          
                          
                      }
                           
                       else{
                           cout<<"you have entered the wrong option, please try again"<<endl;
                           goto shop;
                       }   
                       return bill;
                      
                      
                      
          
           
       }