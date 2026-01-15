#include <iostream>
using namespace std;

class Train{
private:
    int trainNo;
    char trainName[50];
    char source[50];
    char destination[50];
    char traintime[10];

public:
    Train()
    {
        cout << "---Railway Reservation System Menu---" << endl;
        cout << "Add New train record" << endl;
        cout << "Display all train record" << endl;
        cout << "searh train by number" << endl;
        cout << "Exit" << endl;
        cout << "--------------------------" << endl;
    };

    // cout << endl << endl;

    void showTrain()
    {
        cout << "Enter Train Number :";
        cin >> trainNo;

        cout << "Enter Train Name :";
        cin >> trainName;

        cout << "Enter source : ";
        cin >> source;

        cout << "Destination : ";
        cin >> destination;

        cout << "Train Time : ";
        cin >> traintime;
        cout << "--------------------------" << endl;
       
    };

    void showTrain2()
    {
        cout << "Train 1 details"<<endl;
        cout << "Train Number : " << trainNo << endl;
        cout << "Train Name :  " << trainName << endl;
        cout << "source :  " << source << endl;
        cout << "Destination :  " << destination << endl;
        cout << "Train Time : " << traintime << endl;
        cout << "--------------------------" << endl;
    };

    void showTrain3()
    {
        int a;
        cout << "Enter train number to  search";
        cin >> a;

        if (a == trainNo)
        {
            cout << "Train with number " << trainNo << " is found " << endl;
        }
        else
        {
            cout << "Train with number " << trainNo << "is not found" << endl;
        }
    cout << "--------------------------" << endl;
    };
    

        

    void showTrain4()
    {
        cout << "Goodbye!"<<endl;
        cout << "--------------------------" << endl;
       };
    
        


    // ~Train()
    // {
    //     cout << "Thanks for visit" << endl;
    // }
};

int main()
{

    int choice;

    do
    {
        Train s1;

        cout << "Enter Your Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            s1.showTrain();
        }
        else if (choice == 2)
        {
            s1.showTrain2();
        }

        else if (choice == 3)
        {
            s1.showTrain3();
        }

        else if (choice == 4)
        {
            s1.showTrain4();
        }

    } while (choice != 4);
}