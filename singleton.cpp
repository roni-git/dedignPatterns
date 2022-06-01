class Singleton{
public:
    static Singleton singleton;
};
int main(){
    Singleton::singleton = nullptr;
}