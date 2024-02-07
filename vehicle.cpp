#include<iostream>
using namespace std;

class vehicle
{
  private:

  string company;
  string model;
  string vehicleNo;

  private:

  vehicle()
  {

  }
  vehicle(const string company, const string model, const string vehicleNo)
  {  
    this->company=company;
    this->model=model;
    this->vehicleNo=vehicleNo;


  }
  string get_company()
   {
     return company;
   }
 string get_model()
   {
     return model;
   }
 string get_vehicleNo()
   {
    return vehicleNo;
   }
 void set_company(const string company)
   {
     this->company=company;

   } 
 void set_model(const string model)
   {
     this->model=model;
   }
 void set_vehicleNo(const string vehicleNo)
   {
     this->vehicleNo=vehicleNo;
   }
  void input()
  {
    cout<<"enter company"<<endl;
    cin>>company;

    cout<<"enter model"<<endl;
    cin>>model;

    cout<<"enter vehicleNo"<<endl;
    cin>>vehicleNo;
  }


 

};