#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    int choice;
    cout<<"Enter the number 1: ";
    cin>>num1;
    cout<<"Enter the number 2: ";
    cin>>num2;
    cout<<"Enter the choice";
    cin>>choice;
    switch(choice)
    {
    	case 1:
    		{
    			cout<<"Addition is : "<<num1+num2;
			}
			break;
		case 2:
    		{
    			cout<<"Subtraction is : "<<num1-num2;
			}
			break;
		case 3:
    		{
    			cout<<"Multiplication is : "<<num1*num2;
			}
			break;
		case 4:
    		{
    			cout<<"Division is : "<<num1/num2;
			}
			break;
		default:
			{
				cout<<"Enter valid choice";
			}
    }
}