/******************************************************************************

                      C++ PROJRCT
                      Frst Samester
                       VECHILE MANEGMENT SYSTEM  

****************************************************************************** */

#include <iostream>
#include<windows.h>

using namespace std;
// We declear a function with name manu
void  menu(){
	
	
	cout<<"\t\t\t\t*******************************************"<<endl;
    cout<<"\t\t\t\tPress 1 for bike: "<<endl;
     cout<<"\t\t\t\tPress 2 for cars: "<<endl;
      cout<<"\t\t\t\tPress 3 for bus: "<<endl;
     cout<<"\t\t\t\tPress 4 to check the record: "<<endl;
     cout<<"\t\t\t\tPress 5  to delete the record "<<endl;
      cout<<"\t\t\t\tPress 6  to Exit "<<endl;
    cout<<"\t\t\t\t*******************************************"<<endl;
} 
//we declare another function with name of vehicles and store our relevent  data types
void vehicles(string vehicle_name,string vehicle_number[50],int no_of_vehicles,string driver_names[50]);

int main()
{   
      
 // we  perform a  simple program for loading which work at  the start  of the  program 

    cout<<"\n\n\n\n\n\n\n\n\n";
    // for changing  the colour 
	  system ("color b0");
	cout<<"\t\t\t\t\tLoading";
	//we simply cout  ASCII value of 219 for loading   WHICH simply like [] 
	char x=219;
	cout<<x;
	
	 //useing for loop for the repetition of oue ASCII value
	for (int i=0; i<30; i++)
	{
		cout<<x;
		if (i<10)
		// Using sleep funtion for the speed of loading 
		Sleep(100);
		// using cadition for sleep
		if (i>=10 && i<20)
		Sleep(100);
		if (i>=10)
		Sleep(100);
		
	}
	 // for clear screen
     system("CLS");
     //for system color
      system ("color b0");
      // declare variables 
     int n_input;

    int amount=0;
    int count=0;
    int  True;
    int car=0;
    int bus=0;
    int bike=0;
    string Bike_Drivers[50];
    string Bike_Numbers[50];
    string Car_Drivers[50];
    string Car_Numbers[50];
    string Bus_Drivers[50];
    string Bus_Numbers[50];
while(True){


Start: 
    
	cout<<endl;
 system ("color b0");
 // we call funtion here of menu
     menu();
    cin>>n_input;
if(cin.fail()){
	// giving here condition for valid numbers f number is not valid  then  clear(); it will clear  screen  and ignore the invalid number

    cin.clear();
    cin.ignore();
    cout<<"\t\t\t\tEnter Integer Value Between 1-6."<<endl;
    goto Start;
}
   

    // giving condition for number entering
         if(n_input==1){
     // for clear screen  	        
		system("CLS");
		//color changing
 system ("color b0");
           cout<<endl;
            cout<<"\t\t\t\tEnter the Bike Number: ";
           cin>>Bike_Numbers[bike];
            cout<<"\t\t\t\tEnter the Driver's Name: ";
           cin>>Bike_Drivers[bike];
           
       cout<<endl;
       //increment  in bike with 1
           bike=bike+1;
           	system("CLS");
           cout<<"\t\t\t\tBike is successfully Parked "<<endl;
    // condition for maximum number of bikes 
           if (count<=50){
        // rate of  bike will add in total amount 
           amount=amount+100;
           count=count+1;

  }
           else
           // if parking is full the masge will show on screen 
           {
              cout<<"\t\t\t\t*******************************************"<<endl;
              cout<<"\t\t\t\tSORRY PARKING IS FULL('_')"<<endl;
            cout<<"\t\t\t\t*******************************************"<<endl;

           }
       }
  else if(n_input==2)
  {
  	        system("CLS");
 system ("color b0");
   if (count<=50)// condition for maximum car
   {
        cout<<endl;
            cout<<"\t\t\t\tEnter the Car Number: ";
           cin>>Car_Numbers[car];
            cout<<"\t\t\t\tEnter the Driver's Name: ";
           cin>>Car_Drivers[car];

       cout<<endl;


       car++;
             cout<<"\t\t\t\t Car is successfully Parked "<<endl;
             // rate of car will add in total amount 
           amount=amount+200;
           count=count+1;
       }

      else
       // if parking is full the masge will show on screen 
      {  cout<<"\t\t\t\t*******************************************"<<endl;
          cout<<"\t\t\t\tSORRY Parking IS Full"<<endl;
        cout<<"\t\t\t\t*******************************************"<<endl;
      }

  }
     else if(n_input==3)
     {     
             system("CLS");
           system ("color b0");
     
         cout<<endl;
            cout<<"\t\t\t\tEnter the Bus Number: ";
           cin>>Bus_Numbers[bus];
            cout<<"\t\t\t\tEnter the Driver's Name: ";
           cin>>Bus_Drivers[bus];
       cout<<endl;

// condition for maximum vehicles 

          if (count<=50)
          {   
          // incremnet in bus
             bus++;
             cout<<"\t\t\t\tBUS is successfully Parked "<<endl;
           
		   // rate add in total amount
		   amount=amount+300;
           count=count+1;
       }
       else
        // if parking is full the masge will show on screen 
        {
		
           cout<<"\t\t\t\t******************************************"<<endl;
           cout<<"\t\t\t\tSIR  PARKING is Full "<<endl;
           cout<<"\t\t\t\t*******************************************"<<endl;
       }

     }
       else if(n_input==4)
       {   
               system("CLS");
            system ("color b0");
         cout<<"\t\t\t\t*******************************************"<<endl;
         cout<<"\t\t\t\tThe total amount is:"<<amount<<endl;
         cout<<"\t\t\t\tThe total numbers of vehicles:="<<count<<endl;

          cout<<"\t\t\t\t The total numbers of bikes:="<<bike<<"*"<<endl;
          cout<<endl;
           cout<<"\t\t\t\t The total numbers of car:="<<car<<"*"<<endl;
        cout<<endl;
        cout<<"\t\t\t\tThe total numbers of buses:="<<bus<<"*"<<endl;
            cout<<endl;
        cout<<"\t\t\t\tBike: "<<endl;
        // call function of vehiclees
        
       vehicles("\t\t\t\tBike",Bike_Numbers,bike,Bike_Drivers);
        cout<<endl;
       
       
        cout<<"\t\t\t\tCars: "<<endl;
        // call function of vehiclees
       vehicles("\t\t\t\tCar",Car_Numbers,car,Car_Drivers);
       cout<<endl;
            
            cout<<"\t\t\t\tBuses: "<<endl;
            // call function of vehiclees
       vehicles("\t\t\t\tBus",Bus_Numbers,bus,Bus_Drivers);
       cout<<endl;
            cout<<"\t\t\t\t_________________________________________"<<endl;

       }
       else if (n_input==5)
       {     
               system("CLS");
             system ("color b0");
            cout<<"\t\t\t\t_____________________________________________"<<endl;
           cout<<"          RECORD DELETED          "<<endl;
           cout<<"\t\t\t\t_____________________________________________"<<endl ;
           amount=0;
           count=0;
           bike=0;
           car=0;
           bus=0;

       }
	   else if (n_input==6){
	       system ("color b0");
        	system("cls");
           cout<<"\t\t\t\t______________________________"<<endl;
           cout<<"\t\t\t\t        THANK YOU               "<<endl;
           cout<<"\t\t\t\t        Be CareFul              "<<endl;
           cout<<"\t\t\t\t______________________________"<<endl;
	   	exit(0);
	    
	   }
       else
       {    
       system("CLS");
    cout<<"\t\t\t\t*******************************************"<<endl;
    cout<<"\t\t\t\tplease enter the valid number"<<endl;
    cout<<"\t\t\t\t*******************************************"<<endl;
       }


}


      return 0;
}
// declear a function for vehicles repitition  and usinG for loof for the addition of vehicles 
void vehicles(string vehicle_name,string vehicle_number[50],int no_of_vehicles,string driver_names[50]){
    for(int i=0;i<no_of_vehicles;i++)
    cout<<"  "<<vehicle_name<<" Number: "<<vehicle_number[i]<<"         "<<vehicle_name<<" Driver name: "<<driver_names[i]<<endl;


}



