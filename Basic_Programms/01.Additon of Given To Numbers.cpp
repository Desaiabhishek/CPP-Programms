using namespace std;
#include<iostream>
#include<conio.h>

class Arith
{
    public :
        int No1,No2,Ans;

        Arith();
        Arith(int,int);

        void Addition();
        void Subtraction();

        ~Arith();
};

Arith :: Arith()
{
    No1 = 0;
    No2 = 0;
    cout<<"\n Default Constructor"<<endl;
}

Arith :: Arith(int N1,int N2)
{
    No1 = N1;
    No2 = N2;
    cout<<" \n Parameterized Constructor"<<endl;
}

Arith :: ~Arith()
{
 cout<<"\n Destructor"<<endl;
}

void Arith :: Addition()
{
    Ans = No1 + No2;
}

void Arith :: Subtraction()
{
    Ans = No1 - No2;
}

int main()
{
    Arith Obj1,Obj2;
    Arith Obj3(60,40);

    Obj3.Addition();
    cout<<"\n Addition of Object 3 = "<<Obj3.Ans<<endl;
    Obj3.Subtraction();
    cout<<" \n Subtraction Object 3 = "<<Obj3.Ans<<endl;

    getch();

    Obj2.No1 = 100;
    Obj2.No2 = 30;

    Obj2.Addition();
    cout<<"\n Addition of Object 2= "<<Obj2.Ans<<endl;
    Obj2.Subtraction();
    cout<<" \n Subtraction Object 2 = "<<Obj2.Ans<<endl;

    getch();

    cout<<"\n Enter Two Numbers =";
    cin>>Obj1.No1>>Obj1.No2;

    Obj1.Addition();
    cout<<"\n Addition of Object 1= "<<Obj1.Ans<<endl;
    Obj1.Subtraction();
    cout<<" \n Subtraction Object 1 = "<<Obj1.Ans<<endl;

    getch();
    return 0;

}

