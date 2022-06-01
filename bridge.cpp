//
// Created by גלבוע on 14/02/2022.
//
#include <iostream>

#include "iostream"
class materialBuild{
public:
    virtual void paintDoor()=0;
    virtual void paintWindow()=0;
    virtual void paintRoof()=0;
    void paintAll(){
        this->paintDoor();
        this->paintWindow();
        this->paintRoof();
        std::cout<<""<<std::endl;
    }
};
class woodHouse:public materialBuild{
public:
    virtual void paintDoor(){
        std::cout << "wood door, ";
    }
    virtual void paintWindow(){
        std::cout << "wood window, ";
    }
    virtual void paintRoof(){
        std::cout << "wood roof.";
    }
};
class brickHouse:public materialBuild{
public:
    virtual void paintDoor(){
        std::cout << "brick door, ";
    }
    virtual void paintWindow(){
        std::cout << "brick window, ";
    }
    virtual void paintRoof(){
        std::cout << "brick roof.";
    }
};
class house{
protected:
    materialBuild* data;
public:

    virtual void paint()=0;
};
class bigHouse:public house{
public:
    bigHouse(materialBuild* data){
        this->data = data;
    }
    virtual void paint(){
        std::cout<<"big house- ";
        this->data->paintAll();
    }

};
class littleHouse:public house{
public:
    littleHouse(materialBuild* data){
        this->data = data;
    }
    virtual void paint(){
        std::cout<<"little house- ";
        this->data->paintAll();
    }
};

int main(){
    materialBuild* material1= new woodHouse();
    house* h1 = new bigHouse(material1);
    h1->paint();
    materialBuild* material2= new brickHouse();
    house* h2 = new littleHouse(material2);
    h2->paint();
}

