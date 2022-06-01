class Point{
    int x;
    int y;
public:
    Point(int x, int y){
        this->x = x;
        this->y = y;
    }
    Point(){
        this->x = 0;
        this->y = 0;
    }
    int getX(){
        return this->x;
    }
    int getY(){
        return this->y;
    }
};
class Line{
public:
    Point * p1;
    Point * p2;

    Line(int x1, int y1, int x2, int y2){
        this->p1 = new Point(x1, y1);
        this->p2 = new Point(x2, y2);
    }
    Line(Point * p1, Point * p2){
        this->p1 = new Point(p1->getX(), p1->getY());
        this->p2 = new Point(p2->getX(), p2->getY());
    }
    Line(const Line& l){
        this->p1 = new Point(l.p1->getX(), l.p1->getY());
        this->p2 = new Point(l.p2->getX(), l.p2->getY());
    }
    Line& operator=(const Line& l){
           if(&l == this) {
               return *this;
           }
        this->p1 = new Point(l.p1->getX(), l.p1->getY());
        this->p2 = new Point(l.p2->getX(), l.p2->getY());
        return *this;
    }
    Line(Line&& l){
        this->p1 = l.p1;
        this->p2 = l.p2;
        l.p1 = nullptr;
        l.p2 = nullptr;
    }
    Line& operator=(Line&& l){
        if(&l == this) {
            return *this;
        }
        this->p1 = l.p1;
        this->p2 = l.p2;
        l.p1 = nullptr;
        l.p2 = nullptr;
        return *this;
    }
    ~Line(){
        delete p1;
        delete p2;
    }
};1``````