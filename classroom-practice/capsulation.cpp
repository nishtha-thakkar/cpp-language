# include <iostream>
using namespace std;

// class Show{
//     public:
//     int age = 20;

// };

// int main(){
//     Show s1;
//     s1.age = 40;
//     cout<< "Age:" << s1.age;

// }

class Show2{
   private:
   int age;
   public:
   void Setdata(int a){
    age = a;
   }
    void getdata(){
    cout<<"age :" <<age <<endl;
    


   }
};
 

int main(){
    Show2 s1, s2;
    s1.Setdata(20);
    s1.getdata();

    s2.Setdata(40);
    s2.getdata();




}