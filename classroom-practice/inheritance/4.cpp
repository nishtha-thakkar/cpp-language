# include<iostream>
using namespace std;

// inheritance - to pass data
//inheritance means one class takes properties of another class.

// Parent class / Base class → gives data & functions

// Child class / Derived class → uses them



// single Inheritance (one parent -> one child)

class Animal{
    public:
    void show(){
        cout<< "Animal is";

    }


    
};

class dog : public Animal{
    public:
    void display(){
        cout<<" very cute";
    }
};

// int main(){
//    dog a;
//    a.show();
//    a.display();


   
// }


//Hierarchical Inheritance - one parent -> many children

class Veg{
    public:
    void show2(){
        cout << " Vegetable is";
    }
};

class carrot : public Veg{
    public:
    void carr(){
        cout << " carrot is red" << endl;

    }
};

class potato : public Veg{
    public:
    void pota(){
        cout << " potato is not helathy for helath" << endl;
    }
};

// int main(){
//     carrot c;
//     potato p;

//     c.show2();
//     c.carr();
    
//     p.show2();
//     p.pota();

// }

//Multilevel Inheritance - Parent → Child → Grandchild  // child fun can use parent fun but par fun can not use child fun 

class shoes{
    public:
    void wear(){
        cout << " shoes is";
    }
};

class sportShoes : public shoes{
    public:
    void spor(){
        cout << " sport shoes are used for running" << endl;

    }
};


class causalShoes : public sportShoes {
    public:
    void cau(){
        cout << " Causal shoes are used for walking";
    }
};

int main(){
    causalShoes s;
    s.wear();
    s.spor();
    s.cau();
    
}





 