#include<iostream>
using namespace std;
int main()
{
    int i;
    while(i=1)
    {
        int a,b,sum,sub,mul;
        float div;
        cout<<"1.Addition"<<endl;
        cout<<"2.Subtraction"<<endl;
        cout<<"3.Multiplication"<<endl;
        cout<<"4.Division"<<endl;
        int n;
        cin>>n;
        switch(n)
        {
            case 1:
            cout<<"You choose Addition"<<endl;
            cout<<"Enter two inputs"<<endl;
            cin>>a>>b;
            sum=a+b;
            cout<<"Sum="<<sum<<endl;
            break;
            case 2:
            cout<<"You choose Substraction"<<endl;
            cout<<"Enter two inputs"<<endl;
            cin>>a>>b;
            sub=a-b;
            cout<<"Sub="<<sub<<endl;
            break;
            case 3:
            cout<<"You choose Multiplication"<<endl;
            cout<<"Enter two inputs"<<endl;
            cin>>a>>b;
            mul=a*b;
            cout<<"Mul="<<mul<<endl;
            break;
            case 4:
            cout<<"You choose Division"<<endl;
            cout<<"Enter two inputs"<<endl;
            cin>>a>>b;
            div=a/b;
            cout<<"Div="<<div<<endl;
            break;
            default:
            cout<<"Error"<<endl;
        }
        int choose;
        cout<<"1. countinue"<<endl;
        cout<<"2. exit"<<endl;
        cin>>choose;
        if(choose==2)
        {
            break;
        }
    }
}
