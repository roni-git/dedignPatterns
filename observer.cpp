#include <iostream>
#include <vector>
class observable;
class event{

};
class observer{
public:
    virtual void update(observable* o, event* e)=0;
};
class score:public observer{

};
class observable{
protected:
    std::vector <observer*> observers;
public:
    virtual void add(observer* other)=0;
    virtual void remove(observer* other)=0;
    virtual void notify()=0;
};
class ball:public observable{
public:
    virtual void notify(){
        for(auto c: this->observers){
            c->update(this, new event());
        }
    }

};