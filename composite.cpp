#include <iostream>
#include <list>
class component{
protected:
    int id;
    std::list<component*> children;
public:
    virtual int  getChildren();
};
class composite:public component{
public:
    virtual int getChild(){
        std::cout << this->id << std::endl;
        for(auto c : this->children) {
            std::cout << c->getChildren() << std::endl;
        }
    }
    void add(component* c){
        this->children.push_back(c);
    }
    void remove(component* c){
        this->children.remove(c);
    }
};
class leaf:public component{
public:
    virtual int getChild(){
        std::cout << this->id << std::endl;
    }
};