#include <iostream>
using namespace std;

class ATM{
	private:
		double balance;
	
	public:
		ATM(){
			balance = 0.0;
		}	
		
	void deposit(double amount){
		if( amount > 0 ){
			balance+=amount;
			cout<<" Deposit Successfully!"<<endl; 
		}else{
			cout<<" Invalid Amount!"<<endl;
		}
	}
	
	void withdraw(double amount){
		if(amount <= 0){
			cout<<" Invalid Amount! "<<endl;
		}else if(amount > balance){
			cout<<" Insuffucient Balance!"<<endl;
		}else{
			balance-=amount;
			cout<<" Withdrawal Successfully!"<<endl;
		}
	}
	
	void checkBalance(){
		cout<<" Current Balance = "<<balance<<endl;
	}
	
	
};

int main(){
	ATM userAtm;
	int choice;
	double amount;
	cout<<"\n Welcome to Simple ATM Simulation "<<endl;
	do{
		cout<<" 1) Check Balance "<<endl;
		cout<<" 2) Deposit Money "<<endl;
		cout<<" 3) Withdraw Money "<<endl;
		cout<<" 4) Exit "<<endl;
		cout<<" Enter Your Choice : ";
		cin>>choice;
		
		switch(choice){
			case 1:
				userAtm.checkBalance();
				break;
			case 2:
				cout<<" Enter amount for deposit : ";
				cin>>amount;
				userAtm.deposit(amount);
				break;
			case 3:
				cout<<" Enter amount for withdraw : ";
				cin>>amount;
				userAtm.withdraw(amount);
				break;
			case 4:
				cout<< " Thankyou for using ATM "<<endl;
				break;
			default:
				cout<<" Invalid Choice ! Enter correct choice "<<endl;
				
		}
		
	}while(choice != 4);
	
	return 0;
}