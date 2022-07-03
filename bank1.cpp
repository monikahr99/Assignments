#include <iostream>
using namespace std;
class account
{
	private:
		string name;
		int accno;
		string atype;
	public:
		void getAccountDetails()
		{
			cout<<"enter customer name:"<<endl;
			cin>>name;
			cout<<"enter account number:"<<endl;
			cin>>accno;
			cout<<"enter account type:"<<endl;
			cin>>atype;
		}
		void displayDetails()
		{
			cout<<"customer name:"<<name<<endl;
			cout<<"account number:"<<accno<<endl;
			cout<<"account type:"<<atype<<endl;
		}
};
class current_account:public account
{
	private:
		float balance;
	public:
		void c_display()
		{
			cout<<"balance:"<<balance<<endl;
		}
		void c_deposit()
		{
			float deposit;
			cout<<"enter amount to deposit:";
			cin>>deposit;
			balance=balance+deposit;
		}
		void c_withdraw()
		{
			float withdraw;
			cout<<"balance :"<<balance;
			cout<<"enter amount to be withdraw:";
			cin>>withdraw;
			if(balance>1000)
			{
				balance=balance-withdraw;
				cout<<"balance amount after withdraw:"<<balance;
			}
			else
			{
				cout<<"insufficient balance";
			}
		}
};
class saving_account:public account
{
	private:
		float sav_balance;
	public:
		void s_display()
		{
			cout<<"balance:"<<sav_balance<<endl;
		}
		void s_deposit()
		{
			float deposit,interest;
			cout<<"enter amount to deposit:";
			cin>>deposit;
			sav_balance=sav_balance+deposit;
			interest=(sav_balance*2)/100;
			sav_balance=sav_balance+interest;
		}
		void s_withdraw()
		{
			float withdraw;
			cout<<"balance :"<<sav_balance;
			cout<<"enter amount to be withdraw:";
			cin>>withdraw;
			if(sav_balance>500)
			{
				sav_balance=sav_balance-withdraw;
				cout<<"balance amount after withdraw:"<<sav_balance;
			}
			else
			{
				cout<<"insufficient balance";
			}
		}
};

int main()
{
	current_account c1;
	saving_account s1;
	char type;
	cout<<"enter s for saving customer and c for current a/c customer:";
	cin>>type;
	int choice;
	if(type=='s' || type=='S')
	{
		s1.getAccountDetails();
		while(1)
		{
			cout<<"choose your choice"<<endl;
			cout<<"1. deposit"<<endl;
			cout<<"2. withdraw"<<endl;
			cout<<"3. display balance"<<endl;
			cout<<"4. display with full details"<<endl;
			cout<<"5. exit"<<endl;
			cout<<"enter your choice:";
			cin>>choice;
			switch(choice)
			{
				case 1:
					s1.s_deposit();
					break;
				case 2:
					s1.s_withdraw();
					break;
				case 3:
					s1.s_display();
					break;
				case 4:
					s1.displayDetails();
					s1.s_display();
					break;
				case 5:
					goto end;
				default:
					cout<<"entered choice is invalid";
			}
		}
	}
	else if(type=='c' || type=='C')
	{
		c1.getAccountDetails();
		while(1)
		{
			cout<<"choose your choice"<<endl;
			cout<<"1. deposit"<<endl;
			cout<<"2. withdraw"<<endl;
			cout<<"3. display balance"<<endl;
			cout<<"4. display with full details"<<endl;
			cout<<"5. exit"<<endl;
			cout<<"enter your choice:";
			cin>>choice;
			switch(choice)
			{
				case 1:
					c1.c_deposit();
					break;
				case 2:
					c1.c_withdraw();
					break;
				case 3:
					c1.c_display();
					break;
				case 4:
					c1.displayDetails();
					c1.c_display();
					break;
				case 5:
					goto end;
				default:
					cout<<"entered choice is invalid";
			}
		}
	}
	else
	{
		cout<<"invalid account selection";
	}
end:
	cout<<"thank you for banking with us...";
	return 0;
}
	

