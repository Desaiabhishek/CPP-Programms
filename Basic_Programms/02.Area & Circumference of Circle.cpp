using namespace std;
#include<iostream>
#include<conio.h>

#define Pi 3.14

    class Circle
     {
        private :

            float Rad;

        public :
            float Area,Circum;

            Circle();              ///Parameterized Constructor
            Circle(float);        ///Default Constructor
            Circle(Circle &);     /// Copy Constructor
            ~Circle();            /// Distructor

            void Accept_Radius();
            void Area_of_Circle();
            void Circumference();
     };

     Circle :: Circle()         ///Default Constructor
     {
         Rad = 0.0;
         Area = 0.0;
         Circum = 0.0;
     }

     Circle :: Circle(float R)   ///Parameterized Constructor
     {
         Rad = R;
         Area = 0.0;
         Circum = 0.0;

     }

     Circle :: ~Circle()
     {
       /// Distructor
     }

     Circle :: Circle(Circle &cpy)      /// Copy Constructor
     {
        Rad = cpy.Rad;
        Area = cpy.Area;
        Circum = cpy.Circum;

        cout<<"\n Copy Constructor"<<endl;
     }

     void Circle :: Accept_Radius()
     {
         cout<<"\n Enter Radius =";
         cin>>Rad;
     }

     void Circle :: Area_of_Circle()
     {
         Area = Pi * Rad * Rad;

          cout<<"\n Area of Circle is ="<<Area<<endl;
     }

     void Circle :: Circumference()
     {
         Circum = 2 * Pi * Rad;

         cout<<"\n Circumference of Circle is ="<<Circum<<endl;
     }

     int main()
     {
         Circle obj1;

         obj1.Accept_Radius();
         obj1.Area_of_Circle();
         obj1.Circumference();

         getch();

        Circle obj2(4.4);

        obj2.Area_of_Circle();
        obj2.Circumference();


        Circle Obj3(obj1);

        Obj3.Accept_Radius();

        cout<<"\n Copy Object for Area of Circle is ="<<Obj3.Area<<endl;
        cout<<"\n Copy Object for Circumference of Circle is ="<<Obj3.Circum<<endl;

         getch();
         return 0;

     }

