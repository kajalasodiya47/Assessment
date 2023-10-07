#include<iostream>              // header file
#include<windows.h>             // windows header file
using namespace std;
class FoodOrder{                // create a class FoodOrder
	public:                     // Access specifier
	int choice;	                // declare variable
	FoodOrder()                 // constructor of class foodorder
	{ 
	    string name;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Tops Tech. Fast Food----------------------"<<endl;
		cout<<"Please Enter Your Name:";
		cin>>name;
		cout<<"Hello "<<name<<endl;
		cout<<"What would you like to order?"<<endl;
		cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"----------------Menu-----------------"<<endl;
		cout<<"1) Pizzas"<<endl<<"2) Burgers"<<endl<<"3) Sandwhich"<<endl<<"4) Rolls"<<endl<<"5) Biryani"<<endl;
	}
	
	void get_choice()          // get_choice() function for get user choice
	{
		cout<<"Please Enter your Choice:";      // enter choice
		cin>>choice;
	}
	
	void get_burgers()         // get_burgers() function for users to order the burgers
	{
	    int burger_ch,qty,amount;
	    cout<<"1 Veg Masala Grilled Burger Rs.35"<<endl<<"2 Veg Cheese Grilled Burger Rs.50"<<endl<<"3 Paneer Grilled Burger Rs.65"<<endl;   // burgers menu
		cout<<"Please Enter which Burger you would like to have?:";
		cin>>burger_ch;
		cout<<"Please Enter Quantity:";
		cin>>qty;
		if(burger_ch == 1)
	    {
		  	amount = 35 * qty;
		    system("cls");
		  	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Your Order----------------------"<<endl;
		    cout<<qty<<"  Veg Masala Grilled Burger"<<endl;
			cout<<"Your Total Bill is"<<amount;  
		}
		else if(burger_ch == 2)
 		{
		  	amount = 50 * qty;
		  	system("cls");
		  	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Your Order----------------------"<<endl;
		  	cout<<qty<<"  Veg Cheese Grilled Burger"<<endl;
			cout<<"Your Total Bill is"<<amount;
		}
		else if(burger_ch == 3)
		{
		  	amount = 65 * qty;
		    system("cls");
		  	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Your Order----------------------"<<endl;
		  	cout<<qty<<"  Paneer Grilled Burger"<<endl;
			cout<<"Your Total Bill is"<<amount;
		}
		else
		{
		  	cout<<"Please enter valid choice!!";
		}	
	} 
	
	void get_pizza()             // get_pizza() function for users to order the pizza
    {
		int pizza_ch,qty,amount,size;
		cout<<"1 Peri-Peri"<<endl<<"2 Indian Touch"<<endl<<"3 Margherita"<<endl;              // pizza menu
		cout<<"Please Enter which Pizza you would like to have?:";
		cin>>pizza_ch;
		if(pizza_ch == 1)
		{
			cout<<"1 Regular Rs.149"<<endl<<"2 Medium Rs.209"<<endl<<"3 Large Rs.429"<<endl;           // pizza's different size
			cout<<"Select your size:";                                                                 // choose size
			cin>>size;
			cout<<"Please Enter Quantity:";
		    cin>>qty;  
		    switch(size){
		    	case 1:
		    		amount = 149 * qty;
		            system("cls");
		        	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Your Order----------------------"<<endl;
		            cout<<qty<<"  Peri-Peri Regular size"<<endl;
			        cout<<"Your Total Bill is "<<amount; 
				break; 
				case 2:	
		    		amount = 209 * qty;
		            system("cls");
		        	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Your Order----------------------"<<endl;
		            cout<<qty<<"  Peri-Peri Medium size"<<endl;
			        cout<<"Your Total Bill is "<<amount; 
			    break;
			    case 3:
				    amount = 429 * qty;
		            system("cls");
		        	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Your Order----------------------"<<endl;
		            cout<<qty<<"  Peri-Peri Large size"<<endl;
			        cout<<"Your Total Bill is "<<amount;   
				break;
				default:
				     cout<<"Please select size";	  
			}
			
		}
		else if(pizza_ch == 2)
		{
		    cout<<"1 Regular Rs.129"<<endl<<"2 Medium Rs.199"<<endl<<"3 Large Rs.349"<<endl;
			cout<<"Select your size:";
			cin>>size;
			cout<<"Please Enter Quantity:";
		    cin>>qty;  
		    switch(size){
		    	case 1:
		    		amount = 129 * qty;
		            system("cls");
		        	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Your Order----------------------"<<endl;
		            cout<<qty<<"  Indian Touch Regular size"<<endl;
			        cout<<"Your Total Bill is "<<amount; 
				break; 
				case 2:	
		    		amount = 199 * qty;
		            system("cls");
		        	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Your Order----------------------"<<endl;
		            cout<<qty<<"  Indian Touch Medium size"<<endl;
			        cout<<"Your Total Bill is "<<amount; 
			    break;
			    case 3:
				    amount = 349 * qty;
		            system("cls");
		        	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Your Order----------------------"<<endl;
		            cout<<qty<<"  Indian Touch Large size"<<endl;
			        cout<<"Your Total Bill is "<<amount;   
				break;
				default:
				     cout<<"Please select size";	  
			}	
		}
		else if(pizza_ch == 3)
		{
			cout<<"1 Regular Rs.109"<<endl<<"2 Medium Rs.179"<<endl<<"3 Large Rs.329"<<endl;
			cout<<"Select your size:";
			cin>>size;
			cout<<"Please Enter Quantity:";
		    cin>>qty;  
		    switch(size){
		    	case 1:
		    		amount = 109 * qty;
		            system("cls");
		        	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Your Order----------------------"<<endl;
		            cout<<qty<<"  Margherita Regular size"<<endl;
			        cout<<"Your Total Bill is "<<amount; 
				break; 
				case 2:	
		    		amount = 179 * qty;
		            system("cls");
		        	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Your Order----------------------"<<endl;
		            cout<<qty<<"  Margherita Medium size"<<endl;
			        cout<<"Your Total Bill is "<<amount; 
			    break;
			    case 3:
				    amount = 329 * qty;
		            system("cls");
		        	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Your Order----------------------"<<endl;
		            cout<<qty<<"  Margherita Large size"<<endl;
			        cout<<"Your Total Bill is "<<amount;   
				break;
				default:
				     cout<<"Please select size";
		    }
		}
		else
		{
			cout<<"Please enter valid choice!!";
		}
	}
	
	void get_sandwich()                   // get_sandwich() function for users to order the sandwich
	{
		  int sandwich_ch,qty,amount;
		  cout<<"1 Club Sandwich Rs.240"<<endl<<"2 Veg. Crispy Sandwich Rs.160"<<endl<<"3 Extream Veg Sandwich Rs.100"<<endl;               // sandwich menu
		  cout<<"Please Enter which Sandwich you would like to have?:";
		  cin>>sandwich_ch;
		  cout<<"Please Enter Quantity:";
		  cin>>qty;
		  if(sandwich_ch == 1)
		  {
		  	amount = 240 * qty;
		    system("cls");
		  	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Your Order----------------------"<<endl;
		    cout<<qty<<"  Club Sandwich"<<endl;
			cout<<"Your Total Bill is "<<amount;  
		  }
		  else if(sandwich_ch == 2)
 		  {
		  	amount = 160 * qty;
		  	system("cls");
		  	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Your Order----------------------"<<endl;
		  	cout<<qty<<"  Veg. Crispy Sandwich"<<endl;
			cout<<"Your Total Bill is "<<amount;
		  }
		  else if(sandwich_ch == 3)
		  {
		  	amount = 100 * qty;
		    system("cls");
		  	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Your Order----------------------"<<endl;
		  	cout<<qty<<"  Extream Veg Sandwich"<<endl;
			cout<<"Your Total Bill is "<<amount;
		  }
		  else
		  {
		  	cout<<"Please enter valid choice!!";
		  }
	}
	
	void get_rolls()                  // get_rolls() function for users to order the rolls
	{
        int roll_ch,qty,amount;	
		cout<<"1 Aloo Fry Roll Rs.60"<<endl<<"2 Veg Cheese Roll Rs.130"<<endl<<"3 Cheesy Corn Roll Rs.140"<<endl;            // rolls menu
		cout<<"Please Enter which Rolls you would like to have?:";
		cin>>roll_ch;
		cout<<"Please Enter Quantity:";
		cin>>qty;
		if(roll_ch == 1)
		{
		  	amount = 60 * qty;
		    system("cls");
		  	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Your Order----------------------"<<endl;
		    cout<<qty<<"  Aloo Fry Roll"<<endl;
			cout<<"Your Total Bill is "<<amount;  
		}
		else if(roll_ch == 2)
 		{
		  	amount = 130 * qty;
		  	system("cls");
		  	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Your Order----------------------"<<endl;
		  	cout<<qty<<"  Veg Cheese Roll"<<endl;
			cout<<"Your Total Bill is "<<amount;
		}
		else if(roll_ch == 3)
		{
		  	amount = 140 * qty;
		    system("cls");
		  	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Your Order----------------------"<<endl;
		  	cout<<qty<<"  Cheesy Corn Roll"<<endl;
			cout<<"Your Total Bill is "<<amount;
		}
		else
		{
		  	cout<<"Please enter valid choice!!";
		}	
	}
	
	void get_biryani()                   // get_biryani() function for users to order the biryani
	{
	    int biryani_ch,qty,amount;
		cout<<"1 Veg Biryani Rs.160"<<endl<<"2 Paneer Biryani Rs.190"<<endl<<"3 Kathal Biryani Rs.200"<<endl;       //biryani menu
		cout<<"Please Enter which Biryani you would like to have?:";
		cin>>biryani_ch;
		cout<<"Please Enter Quantity:";
		cin>>qty;
		if(biryani_ch == 1)
		{
		  	amount = 160 * qty;
		    system("cls");
		  	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Your Order----------------------"<<endl;
		    cout<<qty<<"  Veg Biryani"<<endl;
			cout<<"Your Total Bill is "<<amount;  
		}
		else if(biryani_ch == 2)
 		{
		  	amount = 190 * qty;
		  	system("cls");
		  	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Your Order----------------------"<<endl;
		  	cout<<qty<<"  Paneer Biryani"<<endl;
			cout<<"Your Total Bill is "<<amount;
		}
		else if(biryani_ch == 3)
		{
		  	amount = 200 * qty;
		    system("cls");
		  	cout<<"\t"<<"\t"<<"\t"<<"\t"<<"------------------Your Order----------------------"<<endl;
		  	cout<<qty<<"  Kathal Biryani"<<endl;
			cout<<"Your Total Bill is "<<amount;
		}
		else
		{
		  	cout<<"Please enter valid choice!!";
		}	
	}	
};

int main()               // main function with int return type
{
	char extra;          // declare character variable
	do{
	FoodOrder obj;       // create a FoodOrder class object obj
	obj.get_choice();    // call the get choice function through the obj
	switch(obj.choice)
	{
		case 1:
			obj.get_pizza();
		break; 
		case 2:
		    obj.get_burgers();
		break;		
		case 3:
			obj.get_sandwich();
		break;
		case 4:
			obj.get_rolls();
		break;	
		case 5:
			obj.get_biryani();
		break;
		default:
		    cout<<"Please choose your Menu!!";	
	}
	cout<<endl;
	cout<<"Your Order Will be delivered in 40 Minutes"<<endl;
	cout<<"Thank you For Ordering From Tops Tech Fast Food"<<endl;
	cout<<"Would you like to order anything else? Y / N:";
	cin>>extra;
	system("cls");
	}while(extra == 'Y');
	return 0;                  // return 0 ends with the main function
}
