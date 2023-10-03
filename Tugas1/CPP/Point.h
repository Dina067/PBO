#include <iostream>
#include <cmath>
using namespace std;

// Class Point memodelkan titik 2D di (x,y)
class Point{
    // variabel instance private
    private :
    int x, y;

    // Constructor (overloading)
    /* membuat instance poin dengan nilai default */
    public :
    Point(){
        this->x = 0;
        this->y = 0;
    }

    /* membuat instance point dengan x dan y yang diberikan */
    public :
    Point(int x, int y){
        this->x = x;
        this->y = y;
    }

    // Getter/Setter public
    /* mengembalikan nilai x */
    public :
    int ambilX(){
        return this->x;
    }

    /* mentapkan nilai x */
    public :
    void setelX(int x){
        this->x = x;
    }

    /* mengembalikan nilai y */
    public :
    int ambilY(){
        return this->y;
    }

    /* menetapkan nilai y */
    public :
    void setelY(int y){
        this->y = y;
    }

    /* mengembalikan string deskriptif diri dalam bentuk "(x,y)" */
    public :
    string toString(){
        return "( " + to_string(this->x) + "," + to_string(this->y) + " )";
    }

    /* mengembalikan array int 2 elemen yang berisi x dan y */
    public :
    int *ambilXY(){
        int *hasil = new int[2];
        hasil[0] = x;
        hasil[1] = y;
        return hasil;
    }

    /* menyatel x dan y */
    public :
    void setelXY(int x, int y){
        this->x = x;
        this->y = y;
    }

    /* mengembalikan jarak dari instance ini ke titik tertentu di (x,y). Panggil melalui p1.distance(1,2) */
    public :
    double jarak(int x, int y){
        int xDiff = this->x - x;
        int yDiff = this->y - y;
        return sqrt(xDiff * xDiff + yDiff * yDiff);
    }

    /* mengembalikan jarak dari instace ini ke instance point yang diberikan. Panggil melalui p1.distance(p2) */
    public :
    double jarak(Point &lainnya){
        int xDiff = this->x - lainnya.x;
        int yDiff = this->y - lainnya.y;
        return sqrt(xDiff * xDiff + yDiff * yDiff);
    }

    /* mengembalikan jarak dari instance ini ke (0,0). Panggil melalui p1.distance() */
    public :
    double jarak(){
        return sqrt(this->x * this->x + this->y * this->y);
    }
};