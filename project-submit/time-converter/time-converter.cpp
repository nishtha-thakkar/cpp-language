# include <iostream>
using namespace std;

int main(){
    int h, m, s;
    int second;
    cout<<"Enter a second";
    cin>> second;

     h = second/3600;   //
    m = (second%3600)/60;
     s = second%60;

    cout<<"total  "<<h << ":"<<m<< ":"<<s << endl;

    int hour;
    cout<< "Enter Hour " ;
    cin>>hour;
    
    int Minute;
    cout<< "Enter Minute" ;
    cin>>Minute;

    int sec;
    cout<<"Enter a sec";
    cin>> sec;

    int a = hour*3600;
    int b  = Minute*60;

    cout<<"Enter second : "<<a + b+ sec;



   


}