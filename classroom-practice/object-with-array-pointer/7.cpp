# include <iostream>
using namespace std;
                   // object with class
// class Show{
//     private:
//     int id ;

//     public:
//     void setData(int a){
//         id = a;
//          }
//     void getData(){
//         cout << "ID : " << id;
   

//     }

// };

// int main(){
//     Show s;
//     s.setData(1);
//     s.getData();
// }

      // object with pointer

class Show2{
   private:
   int id;

   public:
   void setData(int a){
    id = a;

   }

   void getData(){
    cout << "ID :" << id << endl;
   }

  


} ;     

int main(){
    Show2 s;
    Show2 *p;
    p= &s;

    

}