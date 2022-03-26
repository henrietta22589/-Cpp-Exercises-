/******************************************************************************

                          First Exercise
                          A programm, which requests these information from the user:
                          
                          (1) FirstName
                          (2) LastName
                          (3) Age
                          In different Lines to be desplayed the information, of the user.

*******************************************************************************/

#include <iostream>
#include<cstring>
using namespace std;
int main()
{
     //Declarations of the types and variables, which will be used in this programm
    string FirstName,LastName;
    int Age;
    //First Message, which will be desplayed to the user, in order to Give us the firstName
    cout<<"Give us your First Name";
    //Change Lines
    cout<<endl;
    // The compiler imports the inforation,the user just gave us.
    cin>>FirstName;
    //Change Lines
    cout<<endl;
    //Second Message, which will be desplayed to the user, in order to inform him(print in consol) about the information, which gave us.
    cout<<"The name you gave us is:"<<endl<<FirstName;
    //Change Lines
    cout<<endl;
    //Third Message, which will be desplayed to the user, in order to Give us the Last Name
    cout<<"Give us your Last Name";
     //Change Lines
    cout<<endl;
    // The compiler imports the inforation,the user just gave us.
    cin>>LastName;
    //Fourth Message, which will be desplayed to the user, in order to inform him(print in consol) about the information, which gave us.
    cout<<"The Last name you gave us is:"<<endl<<LastName;
    //Change Lines
    cout<<endl;
    //Fifth message, in which is being desplayed the message, which requests the age of the user
    cout<<"Give me your age";
    //Change Line
    cout<<endl;
    //Import the information, for the age
    cin>>Age;
    //Exports this information to the user
    cout<<"The age you gave us is:"<<endl<<Age;
       return 0;
}
    
    
    
    

   
    
    
   

 



