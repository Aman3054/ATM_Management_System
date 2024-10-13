#include <iostream>
using namespace std;

class ATM
{
    int pin=0;
    int amount = 500;
    
    public:
    
    void setPin(int m)
    {
        if(pin == 0){
            pin = m;
            cout<<"Pin Changed Successfully"<<endl;
        }
        else{
            cout<<"Enter Old Pin: ";
            int i;
            cin>>i;
            
            if(i==pin){
                pin = m;
                cout<<"Pin changed sucessfully"<<endl;
            }
            else{
                cout<<"Please enter correct old pin: "<<endl;
            }
        }
    }
    
    void withdrawn(int n)
    {
        if (n < 0 ){
            cout<<"Please Enter valid amount: "<<endl;
            return;
        }
        cout<<"Enter Pin: ";
        int m;
        cin>>m;
        if(pin == m)
        {
            cout<<"Access Granted"<<endl;
        }
        else
        {
            cout<<"wrong Pin. Please Try Again"<<endl;
        }
        
        if(n < amount)
        {
            amount = amount - n;
            cout<<"Current Balance"<<amount<<endl;
            cout<<"Withdrawn Amount"<<n<<endl;
        }else{
            cout<<"Insufficient Balance"<<endl;
            cout<<"Current Balance"<<amount<<endl;
        }
    }
    void deposit(int depMoney)
    {
        amount = amount + depMoney;
        cout<<"Current Balance"<<amount<<endl;
        
    }
    void printBalance(){
        cout<<"The cureent balance is: "<<amount<<endl;
    }
    
    
};

int main()
{
    ATM sbiBank;
    
    cout<<"Press 1 to set pin: "<<endl;
    cout<<"Press 2 to withdraw money : "<<endl;
    cout<<"Press 3 to Deposit Money : "<<endl;
    cout<<"Press 4 to check Current Balance : "<<endl;
    cout<<"Press 5 to EXIT"<<endl;
    
    while(1){
        cout<<"Please Enter no. from 1 to 5: ";
        int i;
        cin>>i;
        if(i>5){
            cout<<"Please enter number between 1 to 5"<<endl;
        }
        if(i==1){
            cout<<"Enter New Pin: ";
            int currPin;
            cin>>currPin;
            sbiBank.setPin(currPin);
        }
        else if(i==2){
            cout<<"Please enter money to withdrawn:";
            int withdrawMoney;
            cin>>withdrawMoney;
            sbiBank.withdrawn(withdrawMoney);
            
        }
        else if(i==3){
            cout<<"Please enter deposit money: ";
            int deepMoney;
            cin>>deepMoney;
            sbiBank.deposit(deepMoney);
        }
        else if(i==4)
        {
            sbiBank.printBalance();
        }
        else{
            cout<<"Thank you! Please visit again:"<<endl;
            break;
        }
    }
}

