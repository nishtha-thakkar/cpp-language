# include<iostream>
using namespace std;

class Student{
    int id;
    public:
    
    void setData(int i){
        cout << "Enter a value";
        cin >> i;
        id=i;
    };

    void getData(){
        cout<<id<<" ";
    }
};



int main(){
    Student s[5];

    for(int i=0 ; i<5 ; i++){
        s[i].setData(i+1);
    }
    for(int i=0 ; i<5 ; i++){
        s[i].getData();
    }



}