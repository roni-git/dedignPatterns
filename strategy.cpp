#include <iostream>
class strategy{
public:
    virtual std::string getName()=0;
};
class Sort{

public:
    virtual void sorting()=0;
};
class bubbleSort:public Sort{
    strategy * strateg;
public:
    bubbleSort(strategy *strateg){
        this->strateg = strateg;
    }
    virtual void sorting(){
        std::cout << strateg->getName() << std::endl;
    }
};
class topologySort:public Sort{
    strategy * strateg;
public:
    topologySort(strategy *strateg){
        this->strateg = strateg;
    }
    virtual void sorting(){
        std::cout << strateg->getName() << std::endl;
    }
};
class ageSort:public strategy{
    std::string name;
public:
    virtual std::string getName(){
        return this->name;
    }
};
class nameSort:public strategy{
    std::string name;
public:
    virtual std::string getName(){
        return this->name;
    }
};
class salarySort:public strategy{
    std::string name;
public:
    virtual std::string getName(){
        return this->name;
    }
};
