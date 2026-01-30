# include <iostream>
using namespace std;

// polymorphism // samefunction name but they works different

// class Show{
//     public:
//     int add(int a , int b){
//         return a+b;

//     }
//     float add(float a , float b){
//         return a+b;

//     }
//     int add (int a , int b , int c){
//         return a+b+c;
//     }
// };

// int main(){
//     Show s ;
//     cout << s.add(10,20) << endl;
//     cout << s.add(10.5f , 20.5f) << endl;
//     cout << s.add(30,40 ,50)<< endl;
// }


// operator overloading - overloading means ek ke upar ek

class Show{
    private:
    int a,b;
    public:
    void setData(int x, int y){
        a = x;
        b = y;

    }
    void getData(){
        cout << "A is : " << a << " , " << " B is : " << b << endl;
    }

    Show operator+(Show n){
        Show temp;
        temp.a = this -> a + n.a;
        temp.b = this -> b + n.b;
        return temp;

    }
};

int main(){
    Show s1 , s2 , s3;
    s1.setData(20 , 30);
    s1.getData();

    s2.setData(50 , 60);
    s2.getData();

    //s3 =s1 + s2 // i can not directly add two object with opearor so i will have to write pre-defined  function operator+

   s3 = s1 +s2;
   s3.getData();



}


