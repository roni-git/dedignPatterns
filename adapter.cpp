

class angle{
    int value;
public:
    virtual int getAngle(){
        return this->value;
    }
    virtual void setValue(int x){
        this->value = x;
    }
};
class radian{
    angle* a;
public:
    int getAngleRadian(){
        return this->a->getAngle()*(180/3.14);
    }
    int add_val(int x){
        this->a->setValue(this->a->getAngle()+(x*180/3.14));
    }
};
class adapter:public angle{
    radian r;
public:
    virtual int getAngle(){
        return this->r.getAngleRadian();
    }
    int add_val(int x){
        this->r.add_val(x);
    }
};
