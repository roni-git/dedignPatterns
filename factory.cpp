#include <map>
#include <iostream>
class product{

public:
    virtual std::string getName();
};
class coldProduct:public product{
    std::string name;
public:
    coldProduct(){
        this->name = "cold";
    }
    virtual std::string getName(){
        return this->name;
    }
};
class animalProduct:public product{
    std::string name;
public:
    animalProduct(){
        this->name = "animals";
    }
    virtual std::string getName(){
        return this->name;
    }

};
class logisticCreator{
    std::map<std::string ,logisticCreator*> products;
public:
    logisticCreator(){
        std::pair<std::string, product*> * p = new std::pair<std::string, product*>();
        p->first = "animal";
        p->second = new animalProduct();
        this->products.std::insert(p);

    }
    virtual product getProduct();
};
class coldCreator:public logisticCreator{
    //std::string cold;
public:
    /*
    coldCreator(){
        this->cold = "cold";
    }
     */
    virtual product getProduct(){

    }
};
class animalsCreator:public logisticCreator{
    //std::string animals;
public:
    /*
    animalsCreator(){
        this->animals  = "animals";
    }
     */
    virtual product getProduct(){

    }
};

