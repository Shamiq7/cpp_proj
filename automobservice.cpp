#include<iostream>
#include<string>
using namespace std;
/*

1. welcome to automob service 
2. what type of vehicle you want 
3. id verification
4. option to choose betewwn different vehicle with prices  
5. start date to end date 
6. confirmation
7.Customer details 
8. Receipt

*/
void confirm(string selectedvehicle);
void ID(string selectedvehicle);


void DriverDetails(string selectedVehicle){
    int age;
    string name; 
    string adress;
  cout<<"<<<Enter Driver Details>>> \n"<<endl;

  cout<<"Enter Your Name : ";
  cin.ignore();
  getline(cin,name);
   
   cout<<"Enter Your Adress : ";
  
  getline(cin,adress);
   cout<<"\n";

ID(selectedVehicle);
}




void ID(string selectedvehicle){
    cout<<"*****ID VERIFICATIION*****\n";
    int age;
    cout<<"Enter Your Age : ";
    cin>>age;
    if(age<18){
        cout<<"You Are Not Enough To Rent A Vehicle";
    }else{
        int choice;
        cout<<"Enter ID To Varify and Submit : \n";
          cout<<"1. Adhaar"<<endl;
          cout<<"2. PAN"<<endl;
          cout<<"3. Others"<<endl;
          cout<<"Enter Choice : ";
          cin>>choice;
          switch (choice)
          {
          case 1 : cout<<"ID Verified And Submitted"<<endl;
          confirm(selectedvehicle);          
            break;
          case 2 : cout<<"ID Verified And Submitted"<<endl;
          confirm(selectedvehicle);
          break;
          case 3: cout<<"ID Verified And Submitted"<<endl;
          confirm(selectedvehicle);
            break;

          default: cout<<"Please Select Valid ID!"<<endl;
            break;
          }
        
    }
}


void confirm(string selectedvehicle){
    string vehicle = selectedvehicle;
    int choice;
    cout<<endl;
     cout<<"<<<<<<Your Confirmed Vehicle is : "<<vehicle<<">>>>>> \n";
    cout<<endl;
    cout<<"Confirm Your Choice Of Vehicle\n";
    cout<<"1.Yes"<<endl;
    cout<<"2.No"<<endl;
    cout<<"Confirm Your Choice : ";
    cin>>choice;
    cout<<endl;
    switch (choice)
    {
    case 1:
        cout<<"Choice Confirmed!\n";
       
        cout<<"Have A Nice Trip\n";
        break;
     case 2: cout<<"Not Confirmed\n";
     break;

    default: cout<<"Please Select A Choice\n";
        break;
    }
}

class msg {
    public:
   string DtailCar(int choice){
          int Choice = choice;
          string selectedChoice;
          
          switch (Choice)
          {
          case 1:
          selectedChoice = "Swift";
            break;
            case 2:
          selectedChoice = "Alto";
            break;
            case 3:
          selectedChoice = "Creta";
            break;
          
          default: cout<<"Enter Valid Choice";
            break;
          }
          return selectedChoice;
    }
    string DtailBike(int choice){
          int Choice = choice;
          string selectedChoice;
          
          switch (Choice)
          {
          case 1:
          selectedChoice = "Bullet";
            break;
            case 2:
          selectedChoice = "Sports";
            break;
            case 3:
          selectedChoice = "Electra";
            break;
          
          default: cout<<"Enter Valid Choice";
            break;
          }
          return selectedChoice;
    }
    string DtailCycle(int choice){
          int Choice = choice;
          string selectedChoice;
          
          switch (Choice)
          {
          case 1:
          selectedChoice = "Atlas";
            break;
            case 2:
          selectedChoice = "Mountain";
            break;
            case 3:
          selectedChoice = "Desi";
            break;
          
          default: cout<<"Enter Valid Choice";
            break;
          }
          return selectedChoice;
    }
    string DtailTruck(int choice){
          int Choice = choice;
          string selectedChoice;
          
          switch (Choice)
          {
          case 1:
          selectedChoice = "Ashok Leyland";
            break;
            case 2:
          selectedChoice = "Desi Truck";
            break;
            case 3:
          selectedChoice = "Jhadol Truck";
            break;
          
          default: cout<<"Enter Valid Choice";
            break;
          }
          return selectedChoice;
    }
};

class vehicleDetail : public msg{
    public:
void Typecar(){
        int choice;
        string selectedchoice;
        cout <<"Select car\n";
        cout <<"1.Swift (1000/day)\n";
        cout <<"2.Alto (1500/day) \n";
        cout <<"3.Creta (2000/day)\n";
        cout<<"enter choice : ";
        cin>>choice;
          
        cout<<endl;

        selectedchoice = DtailCar(choice);
         DriverDetails(selectedchoice);
      }
      void TypeBike(){
        int choice;
        string selectchoice;
        cout <<"Select Bike \n";
        cout <<"1.Bullet 350 (1200/day)\n";
        cout <<"2.Sports (1500/day)\n";
        cout <<"3.Electra (2000/day)\n";
        cout<<"enter choice : ";
        cin>>choice;
        cout<<endl;
        
        selectchoice = DtailBike(choice);
          DriverDetails(selectchoice);
      }
       void TypeCycle(){
        int choice;
        string selectChoice;
        cout <<"Select Cycle \n";
        cout <<"1.Atlas (10/hr)\n";
        cout <<"2.MountainBike (20/he)\n";
        cout <<"3.Desi \n";
        cout<<"enter choice : ";
        cin>>choice;
        cout<<endl;
        
       selectChoice = DtailCycle(choice);
        DriverDetails(selectChoice);
   
      }
       void TypeTruck(){
        int choice;
        string selectedchoice;
        cout <<"Select Truck\n";
        cout <<"1.Ashok Leyland\n";
        cout <<"2.Desi Truck\n";
        cout <<"3.Jhadol Truck \n";
        cout<<"enter choice : ";
        cin>>choice;
        cout<<endl;
        
      selectedchoice = DtailTruck(choice);
      DriverDetails(selectedchoice);


      }
};

class vehicle : public vehicleDetail {
    public:

    void vehicleType(){
        int choice;
     cout <<"Select vehicle to drive\n";
     cout<<"1.Car"<<endl;
     cout<<"2.Bike"<<endl;
     cout<<"3.Cycle"<<endl;
     cout<<"4.Truck"<<endl;
     cout<<"Enter Choice : ";
     cin>>choice;
     cout<<endl;
     switch (choice)
     {
     case 1: Typecar();
        /* code */
        break;
        case 2 : TypeBike();
        break;
        case 3: TypeCycle();
        break;
     case 4  : TypeTruck();
     break;
     
     default:
        break;
     }
     

    }
      

};
class ReturnWindow{
    public :
    void IDReturn(){
        cout<<"Select Submitted ID \n";
     int choice;
          cout<<"1. Adhaar"<<endl;
          cout<<"2. PAN"<<endl;
          cout<<"3. Others"<<endl;
          cout<<"Enter Choice : ";
          cin>>choice;
     cout<<endl;
     if(choice==1){
        cout<<"Adhaar ID Returned\n";
     }else if(choice ==2){
         cout<<"PAN id Returned\n";
     }else if(choice ==3){
         cout<<"other id Returned\n";
     }
     else {
         cout<<"Invalid Choice\n";
     }
    }
    void feedback(){
        IDReturn();
    cout<<"How Was Your Ride? \n";
    int choice;
     cout<<"1.Good"<<endl;
     cout<<"2.Bad"<<endl;
     cout<<"Enter Choice : ";
     cin>>choice;
     cout<<endl;
     if(choice==1){
        cout<<"Good To Hear That!\n";
     }else if(choice ==2){
         cout<<"Hope Your Day Gets Better\n";
     }else {
         cout<<"Invalid Choice\n";
     }
}

void Return_FeedBack(){
  feedback();
  cout<<"Select Vehicle To Return\n";
  int choice;
     cout<<"1.Car"<<endl;
     cout<<"2.Bike"<<endl;
     cout<<"3.Cycle"<<endl;
     cout<<"4.Truck"<<endl;
     cout<<"Enter Choice : ";
     cin>>choice;
     cout<<endl;
     if(choice==1){
        cout<<"Car IS Returned\n";
     }else if(choice ==2){
         cout<<"Bike IS Returned\n";
     }else if(choice ==3){
         cout<<"Cycle IS Returned\n";
     }else {
         cout<<"Truck IS Returned\n";
     }

}

};
class Return : public ReturnWindow{
   public :
   Return(){
    cout<<"\n***********************************\n";
    cout<<"Welcome To Return Window";
   cout<<"\n***********************************\n";
   cout<<endl;
     Return_FeedBack();
     
   }
};

int main (){
cout<<"\n***********************************\n";
cout<<"Welcome To Our Automobile Services!";
cout<<"\n***********************************\n";
cout<<endl;
vehicle a;

a.vehicleType();
Return b;
cout<<endl;
cout<<"\n***********************************\n";
cout<<"Thank You Visit Again!";
cout<<"\n***********************************\n";

return 0;

}



