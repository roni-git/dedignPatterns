class sword: public abstractSword{

};
class abstractShield{

};
class shield:public abstractShield{

};
class ironSword:public sword{

};
class treeSword:public sword{

};
class ironShield:public shield{

};
class treeShield:public shield{

};
class abstractSword{

};
class abstractFactory{
public:
    virtual abstractSword* creatorSword()=0;
    virtual abstractShield* creatorShield()=0;
};
class createIron:public abstractFactory{

public:
    virtual abstractSword* creatorSword(){

    }
    virtual abstractShield* creatorShield(){

    }
};
class createTree:public abstractFactory{
public:
    virtual abstractSword* creatorSword(){

    }
    virtual abstractShield* creatorShield(){

    }
};

