// Inheritance 
/* Inheritance is the process of aquiring features of an existing class. It is used for acheiving 
   reusability. Feature of parent class will be available in child class. 

*/

#include <iostream>
using namespace std; 

class Rectangle {
private:
    int length; 
    int breadth; 

public:
    Rectangle();
    Rectangle (int l, int b);
    Rectangle(Rectangle &r);
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();

};

Rectangle :: Rectangle(){
    length = 1;
    breadth = 1;
}

Rectangle :: Rectangle(int l, int b){
    length =l;
    breadth =b;
}

Rectangle :: Rectangle( Rectangle &r){
    length = r.length;
    breadth = r.breadth;
}

void Rectangle :: setLength(int l){
    length =l;
}

void Rectangle :: setBreadth(int b){
    breadth = b;
}

int Rectangle :: area(){
    return length * breadth;
}

int Rectangle :: perimeter(){
    return 2 * (length + breadth);
}

bool Rectangle :: isSquare(){
    return length == breadth;
}

Rectangle :: ~Rectangle(){
    // cout<<"Rectangle class destroyed"<<endl;
}


class Cuboid: public Rectangle {
private:
    int height; 

public:
     Cuboid (int h){
        height = h;
     }
    int getHeight(){
        return height;
    }
    void setHeight(int h){
        height = h;
    }

    int volume(){
        return getLength() * getBreadth() * height;
    }
}; 


int main(){

    Cuboid c(5);
    c.setLength(5);
    c.setBreadth(4);
    cout<<"Volume of cuboid is "<<c.volume()<<endl;

}