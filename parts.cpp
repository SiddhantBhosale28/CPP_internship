#include<iostream>
using namespace std;

class parts
{
 private:
 string desc;
 double rate;

 public:

 parts(){

 }
 parts(const string desc , double rate){
    this->desc=desc;
    this->rate=rate;


 }
 string get_desc(){
    return desc;
 }

 double get_rate(){
    return rate;
 }
 void set_desc(const string desc)
 {
     this->desc = desc;
 }

 void set_rate(double rate){
    this->rate=rate;
 }

 void input()
 {
    cout<<"enter rate"<<endl;
    cin>>rate;
     cout<<"enter desc"<<endl;
    cin>>desc;
 }   

 
};

