#include<iostream>
using namespace std;


class feedback{
 public:
 feedback(){
    int feedback;
    cout<<"How Was Your Ride?"<<endl;
    cout<<"1.Good!"<<endl;
    cout<<"2.Amazing!"<<endl;
    cout<<"3.Average"<<endl;
    cout<<"enter here : ";
    cin>>feedback;
    cout<<endl;

  if(feedback==1){
    cout<<"Hope You Had A Great Time"<<endl;
  }else if(feedback==2){
    cout<<"Glad To Hear That"<<endl;
  }else if(feedback== 3){
    cout<<"Hope Your Day Gets Better"<<endl;
  }else{
    cout<<"Plese Select Valid Option";
  }
  
 }
};

int id (){

 int age; 
 cout<<"Plese Enter Your Age : ";
 cin>>age;

 if(age<=18){
    cout<<"You Are Not OLD Enough\n";
 }else{


    int idselect;
    cout<<": submit a valid ID :"<<endl;
    cout<<"Select Type Of ID To Give "<<endl;
cout<<"1.Adhaar Card "<<endl;
cout<<"2.Pan Card "<<endl;
cout<<"3.Others "<<endl;
cout<<"enter here : ";
cin>>idselect;
cout<<endl;

switch (idselect)
{
case 1 : cout<<"adhaar id varified succesfully"<<endl;break;
case 2 : cout<<"PAN id varified succesfully"<<endl;break;
case 3 : cout<<"Other id varified succesfully"<<endl;break;
    

default:
    break;
}
 }

}

int Bill(){
cout<<"**********************"<<endl;
cout<<"Bill Generated Successfully!"<<" "<<endl;
cout<<"Have A safe Ride!"<<endl;
 cout<<"**********************"<<endl;
 cout<<endl;
}

int Car(){
    int carselect;

    cout<<endl;
cout<<"Select Your Car "<<endl;
cout<<"1.Alto(300/day) "<<endl;
cout<<"2.Swift(400/day) "<<endl;
cout<<"3.Maybech(1000/day) "<<endl;
cout<<"enter here : ";
cin>>carselect;
cout<<endl;
int option;
cout<<"Confirm Your Option"<<endl;
cout<<"1.YES"<<endl;
cout<<"2.No "<<endl;
cout<<"enter here : ";
cin>>option;
if(option==2){
    cout<<"No Problem";
}else if(option==1){
switch (carselect)
{
case 1 : cout<<"Alto Car Selected!"<<endl;
cout<<"Amount to be paid [ 300INR ]\n";
cout<<Bill()<<endl;
break;

case 2 :  cout<<"Swift Car Selected!\n"<<endl;
cout<<"Amount to be paid [ 400INR ]\n"<<endl;
cout<<Bill()<<endl;
break;

case 3 :  cout<<"Maybech Car Selected!\n"<<endl;
cout<<"Amount to be paid [ 1000INR ]\n"<<endl;
cout<<Bill()<<endl;
break;

default : cout<<"Please Select A CAR";
}
}else{
    cout<<"Enter Valid Option";
}
}
int bus(){
    int busselect;
    cout<<endl;
cout<<"Select Your Bus "<<endl;
cout<<"1.VolVo(3000/day) "<<endl;
cout<<"2.City(4000/day) "<<endl;
cout<<"3.Desi(1000/day) "<<endl;
cout<<"enter here : ";
cin>>busselect;
cout<<endl;
int option;
cout<<"Confirm Your Option"<<endl;
cout<<"1.YES"<<endl;
cout<<"2.No "<<endl;
cout<<"enter here : ";
cin>>option;
if(option==2){
  cout<<"No Problem";
}else if (option == 1){
cout<<endl;
switch (busselect)
{
case 1 : cout<<"Volvo bus Selected!"<<endl;
cout<<"Amount to be paid [ 3000INR ]\n";
cout<<Bill()<<endl;
break;

case 2 :  cout<<"city bus Selected!\n"<<endl;
cout<<"Amount to be paid [ 4000INR ]\n"<<endl;
cout<<Bill()<<endl;
break;

case 3 :  cout<<"desi bike Selected!\n"<<endl;
cout<<"Amount to be paid [ 1000INR ]\n"<<endl;
cout<<Bill()<<endl;
break;

default : cout<<"Please Select A BUS";
}
}else{
    cout<<"plese select valid option";
}
}
int bike(){
    int bikeselect;
    cout<<endl;
cout<<"Select Your bike "<<endl;
cout<<"1.atlas(300/day) "<<endl;
cout<<"2.mountaingoat(400/day) "<<endl;
cout<<"3.Desi(1000/day) "<<endl;
cout<<"enter here : ";
cin>>bikeselect;
cout<<endl;
int option;
cout<<"Confirm Your Option"<<endl;
cout<<"1.YES"<<endl;
cout<<"2.No "<<endl;
cout<<"enter here : ";
cin>>option;
if(option==2){
    cout<<"No Problem";
}else if(option==1){

switch (bikeselect)
{
case 1 : cout<<"atlas bike Selected!"<<endl;
cout<<"Amount to be paid [ 300INR ]\n";
cout<<Bill()<<endl;
break;

case 2 :  cout<<"mountaingoat bike Selected!\n"<<endl;
cout<<"Amount to be paid [ 400INR ]\n"<<endl;
cout<<Bill()<<endl;
break;

case 3 :  cout<<"desi bike Selected!\n"<<endl;
cout<<"Amount to be paid [ 1000INR ]\n"<<endl;
cout<<Bill()<<endl;
break;

default : cout<<"Please Select A BIKE";
}
}else{
    cout<<"enter valid option";
}
}

int CarReturn(){
    cout<<"Returning car"<<endl;
    feedback();
    cout<<"Collect Your Id"<<endl;
    cout<<endl;
    cout<<"vehicle returned"<<endl;
}
int busReturn(){
    cout<<"Returning bus"<<endl;
    feedback();
    cout<<"Collect Your Id"<<endl;
    cout<<endl;
    cout<<"vehicle returned"<<endl;
}
int bikeReturn(){
    cout<<"Returning bike"<<endl;
    feedback();
    cout<<"Collect Your Id"<<endl;
    cout<<endl;
    cout<<"vehicle returned"<<endl;
}




int main(){

cout<<"**********************"<<endl;
cout<<"Welcome To RENTAL STORE!\n";
cout<<"**********************"<<endl;
cout<<endl;


int choice;
cout<<"enter your Choice "<<endl;
cout<<"1.Car "<<endl;
cout<<"2.Bus "<<endl;
cout<<"3.Bike "<<endl;
cout<<"enter here : ";
cin>>choice;

cout<<id()<<endl;


switch (choice)
{
case 1 : Car();break;
case 2 : bus(); break;
case 3 : bike();break;
default : cout<<"Select Valid Option";
}

int select;
cout<<"<<<<Return Window>>>>\n "<<endl;
cout<<"Select Vehicle To Return"<<endl;
cout<<"1.Car "<<endl;
cout<<"2.Bus "<<endl;
cout<<"3.Bike "<<endl;
cout<<"enter here : ";
cin>>select;

switch (choice)
{
case 1 : CarReturn();break;
case 2 : busReturn(); break;
case 3 : bikeReturn();break;
default : cout<<"Select Valid Option";
}





    return 0;
}


