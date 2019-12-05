#include<iostream>

using namespace std;

class Shape	//base class
 {
    public:
      double a,b;

        virtual void get_data () = 0;	//Accepting Values
        virtual void display_area () = 0;
 };

class Triangle:public Shape	// calculating & Displaying area

 {
    public:
      void get_data()
      {
            cin>>a>>b;
      }


      void display_area ()

    {
        cout<<"Area of triangle "<<0.5*a*b<<endl;
    }
 };

class Rectangle:public Shape 	// calculating & Displaying area
	{
    	public:
        void get_data()
    {
            cin>>a>>b;
    }

           void display_area ()
   	{
          cout<<"Area of rectangle "<<a*b<<endl;
    }
    };

   int main()
    {

    	Triangle t;
    	Shape *st = &t;
    	cout<<"Enter base and height of triangle : ";
    	st->get_data();
    	st->display_area();

    	Rectangle r;
    	Shape *sr = &r;
    	cout<<"Enter length and breadth of rectangle: ";
    	sr->get_data();
    	sr->display_area();


    return 0;
}
