#include<iostream>
using namespace std;

class excep{};
int main()
{   excep e1,e2;
    string city;
	string wheeler;

    cout<<"Enter the name of city where you stay: ";
    cin>>city;

    try
     {
         if(city=="mumbai"||city=="pune"||city=="bangalore"||city=="chennai")
             cout<<city<<" is an Amazing city"<<endl;
         else
            throw e1;
     }
     catch(excep e1)
     {
         cout<<"!!!You have entered wrong city, Please enter any city from these cities mumbai ,pune, banglore and chennai"<<endl;
     }


    cout<<"\nEnter the type of wheeler: ";
    cin>>wheeler;


      try
     {
         if(wheeler=="4")
             cout<<wheeler<<" wheelers are comfortable"<<endl;
         else
            throw e2;
     }
     catch(excep e2)
     {
         cout<<"!!!Please enter 4 wheeler"<<endl;
     }

   return 0;
}
