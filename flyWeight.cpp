#include <iostream>
#include <vector>

class State{
public:
    std::string kind;

};
class FlyWeight{
    State repeatingState;
public:
    FlyWeight(State repeatingState){
        this->repeatingState = repeatingState;
    }

    State getRepeatingState(){
        return this->repeatingState;
    }
};
class Point{
    double x;
    double y;
};
class Context{
    Point uniqueState;
    FlyWeight* flyWeight;
public:
    Context(Point uniqueState, State repeatingState) {
        this->flyWeight = new FlyWeight(repeatingState);
        this->uniqueState = uniqueState;
    }

};
class FlyWeightFactory{
    std::vector<FlyWeight> vec;
public:
    FlyWeight getFlyWeight(State repeatingState){
        for(int i = 0; i <= vec.size(); i++){
            if(this->vec.at(i).getRepeatingState().kind == repeatingState.kind) {
                return this->vec.at(i);
            }
        }
    }
};