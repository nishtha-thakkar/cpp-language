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

// int main(){
//     causalShoes s;
//     s.wear();
//     s.spor();
//     s.cau();
    
// }


// Multiple inheritance  - many parent -> one children

class Color {
    public:
    void show3(){
        cout << "parent-1" <<endl;

    }
};

class Fruit{
    public:
    void show4(){
        cout << "parent-2" << endl;
    }
};

// one child

class Redapple: public Color, public Fruit{
    public:
    void show5(){
        cout << "children of parents";
    }
};

// int main(){
//     Redapple r;
//     r.show3();
//     r.show4();
//     r.show5();
   
    
// }




// hybrid inheritance -

//Hybrid = Mix  So,Hybrid inheritance = mix of inheritance types

// Grandfather
//      ↓
//    Father
//    ↓    ↓
//  Son1  Son2

//C++ class example (simple)
// Color → Apple → RedApple
//              → GreenApple


// Color = parent

// Apple = child

// RedApple, GreenApple = grandchildren


// Animal
//    ↓
//  Mammal
//  ↓     ↓
// Dog   Cat
// Animal → Mammal → Dog → multilevel

// Mammal → Dog, Cat → hierarchical


///Together = HYBRID INHERITANCE


// first i make  Parent → Child → Grandchild 

// parent
class Games{
    public:
    void play1(){
        cout << "parent" <<endl;
    }

};

class Cricket : public Games{
    public:
    void play2(){
        cout << "child of parent means child of games" << endl;
    }


};

class player : public Cricket{
    public:
    void play3(){
        cout << " grand child of games means child of cricket" <<endl;
    }

     void play4(){
        cout << " grand child of games means child of cricket" <<endl;
    }
    };


// class player2 : public Cricket{
//     public:
//     void play4 (){
//         cout << "2. grand child of games means 2 child of cricket";
//     }
// };


int main(){
    player p;
    p.play1();
    p.play2();
    p.play3();
    p.play4();
    
}












 