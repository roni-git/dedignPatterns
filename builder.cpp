#include <iostream>
class director{

public:

};
class builder{

public:
    virtual std::string setCharacters();
    virtual std::string setPlatform();
    virtual std::string setEnemies();
};
class mario:public builder{
public:
    virtual std::string setCharacters(){
        return "mario";
    }
    virtual std::string setPlatform(){
        return "mario platform";
    }
    virtual std::string setEnemies(){
        return "mario's enemies";
    }
};
class aladin:public builder{
public:
    virtual std::string setCharacters(){
        return "aladin";
    }
    virtual std::string setPlatform(){
        return "aladin platform";
    }
    virtual std::string setEnemies(){
        return "aladin's enemies";
    }
};

class bossLevel:public director{
    std::string platform;
    std::string character;
    std::string enemy;
    builder* kind;
public:
    void make(){
        this->character = kind->setCharacters();
        this->enemy = kind->setEnemies();
        this->platform = kind->setPlatform();
    }
};
class firstLevel:public director{
    std::string platform;
    std::string character;
    std::string enemy;
    builder* kind;
public:
    void make(){
        this->character = kind->setCharacters();
        this->enemy = kind->setEnemies();
        this->platform = kind->setPlatform();
    }
};
class middleLevel:public director{
    std::string platform;
    std::string character;
    std::string enemy;
    builder* kind;
public:
    void make(){
        this->character = kind->setCharacters();
        this->enemy = kind->setEnemies();
        this->platform = kind->setPlatform();
    }
};