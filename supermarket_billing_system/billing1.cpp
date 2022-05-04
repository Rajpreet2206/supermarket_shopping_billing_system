#include<isotream>
#include<fstream>

using namespace std;

class shopping{
  private:
	  int pcode;
	  float price;
	  float discount;
	  string pname;
  public:
	  void menu(){};
	  void administrator();
	  void buyer();
	  void add();
	  void edit();
	  void rem();
	  void list();
	  void receipt();

};

void shopping::menu(){
 m:	
 int choice;
 string email;
 string password;

 cout<<"\t\t\t\t__________________\n";
 cout<<"\t\t\t\t__________________\n";
 cout<<"\t\t\t\t SuperMarket Menu_\n";
 cout<<"\t\t\t\t__________________\n";
 cout<<"\t\t\t\t__________________\n";
 cout<<"\t\t\t\t | 1) Administrator |\n";
 cout<<"OR\n";
 cout<<"\t\t\t\t | 2) Buyer         |\n";
 cout<<"OR\n";
 cout<<"EXIT\n";
 cout<<"\t\t\t\t ____Please Select one of the above ___\n";
 cin>>choice;

 switch(choice){
 	case 1:
	       cout<<"\t\t\t Please Login \n";
	       cout<<"\t\t\t Enter Email \n";
	       cin>>email;
 	       cout<<"\t\t\t Enter Password \n";
	       cin>>password;

		if(email="random@email.com" && password="random@123"){
			administrator();
		}		
		else{
			cout<<"Invalid Email and Password \n";

		}
		break;
	case 2:
		{
			buyer();
		}
	case 3:
		{
			exit();
		}
	default:
		{
			cout<<"Please Select from the Given Options \n";

		}
		
 }
goto m;
}

void shopping::administrator(){
	m:
	int choice;
	cout<<"\n\n\n\t\t\t Administrator Menu \n";
	cout<<"\n\t\t\t | _____1) Add the Product____ \n";
	cout<<"\n\t\t\t |_____________________________\n";
	cout<<"\n\t\t\t |______2) Modify the Product__\n";
	cout<<"\n\t\t\t |_____________________________\n";
	cout<<"\n\t\t\t |______3) Delete the Product__\n";
	cout<<"\n\t\t\t |_____________________________\n";
	cout<<"\n\t\t\t |______4) Back to Main Menu___\n";
	cout<<"\n\t\t\t                               \n";
	cout<<"Please Enter Your Choice \n";
	cin>>choice;

	switch(choice){
		case 1:
			add();
			break;
		case 2:
			edit();
			break;
		case 3:
			rem();
			break;
		case 4:
			menu();
			break;
		default:
			cout<<"Invalid Choice \n";
	}	
	goto m;
}

void shopping::buyer(){
	m:
	int choice;
	cout<<"\t\t\t   Buyer   \n";
	cout<<"\t\t\t__________ \n";
	cout<<"                 \n";
	cout<<"\t\t\t 1) Buy Product \n";
	cout<<"                 \n";
	cout<<"\t\t\t 2) Go Back\n";
	cout<<"\t\t\t Enter Your Choice: \n";
	cin>>choice;

	switch(choice){
		case 1:
			receipt();
			break;
		case 2:
			menu();

		default:
			cout<<"Invalid Choice";
	}
	goto m;
	
}


