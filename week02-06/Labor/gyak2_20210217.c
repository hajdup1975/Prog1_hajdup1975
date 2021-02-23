
struct Point {
    int x,
    int y
};

double distance (Point a, Point b) {

//...
//...

return 0;

}

int main() {

    Point a;
    a.x = 0;
    a.y = 0;
}


//osztályoik = struct C-ben


class Point {

public:
    Point (int p_x, int p_y){
        x = p_x;
        y = p_y;
    }

    ~Point () {
        //.....
    }

    int returnX() {return 3;}

private:
    int x;
    int y;
};

int main() {

    Point a{3, 4};
    int i = a.returnX();

}
