#include <iostream>

using namespace std;

class Calculate
{
    public:
    void check(int atten,float mar,int sc)
    {
      if (atten>50 && sc>5600 && mar>0.7){
          cout<<"GRADE IS 10";
      }
      else if (atten>50 && sc>5600){
          cout<<"GRADE IS 9";
      }
      else if(atten>50 && mar>0.7){
          cout<<"GRADE IS 7";
      }
      else if(sc>5600 && mar>0.7){
          cout<<"GRADE IS 8";
      }
      else if(atten>50 || sc>5600 || mar>0.7){
          cout<<"GRADE IS 6";
      }
      else{
          cout<<"GRADE IS 5";
      }
      
  }  
  
};

int main()
{
    int attendace,scores,catch_here;
    float marks;
    cout<<"		GRADE CALCULATOR		";
    cout<<"\n_________________________________________";
    cout<<"\nEnter Attendace of Student = ";
    cin>>attendace;
    cout<<"Enter Marks of Student = ";
    cin>>marks;
    cout<<"Enter Scores of Student = ";
    cin>>scores;
    
    Calculate ob;
    ob.check(attendace,marks,scores);
    
    return 0;
}
