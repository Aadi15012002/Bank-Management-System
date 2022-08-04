//BANK MANAGEMENT SYSTEM
#include<bits/stdc++.h>
using namespace std;
class bank{
    char name[100],add[100],y;
    float balance;

public:
    void open_account();
    void deposite_money();
    void withdraw_money();
    void display_account();
};
void bank :: open_account()
{
    cout<<"enter your full name :: ";
    cin.ignore();
    cin.getline(name,100);
    cout<<"enter your address :: ";
    cin.getline(add,100);
    cout<<"what type of account you want to open \n saving (s) \n current (c) ";
    cin>>y;
    cout<<"enter amount for deposite :: ";
    cin>>balance;
    cout<<"your account is created \n";

}
void bank :: deposite_money()
{
    int a;
    cout<<"enter money to be deposite :: ";
    cin>>a;
    balance+=a;
    cout<<"total amount :: "<<balance<<endl;
}
void bank :: display_account()
{
    cout<<"your full name :: \t"<<name<<endl;
    cout<<"your address :: \t"<<add<<endl;
    cout<<"type of account :: \t"<<y<<endl;
    cout<<"total amount :: \t"<<balance<<endl;

}
void bank :: withdraw_money()
{
    float amount;
    cout<<"\n withdraw :: "<<endl;
    cout<<"enter amount to withdraw :: ";
    cin>>amount;
    balance-=amount;
    cout<<" total amount left :: "<<balance<<endl;
}
int main()
{
    int ch;
    char x;
    bank obj;
    do{
    cout<<"1) open account \n";
    cout<<"2) deposite money \n";
    cout<<"3) withdraw money \n";
    cout<<"4) display account \n";
    cout<<"5) Exit \n";
    cout<<"select the options from above \n";
    cin>>ch;
    switch(ch){
        case 1:cout<<"\n-----------------------------------------------------------------------------\n";obj.open_account();break;
        case 2:cout<<"\n-----------------------------------------------------------------------------\n";obj.deposite_money();break;
        case 3:cout<<"\n-----------------------------------------------------------------------------\n";obj.withdraw_money();break;
        case 4:cout<<"\n-----------------------------------------------------------------------------\n";obj.display_account();break;
        case 5:if(ch==5){exit(1);}
        default:cout<<"invalid entry, try again.... \n ";


    }}

        while(ch!=5);

    return 0;

}
