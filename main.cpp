#include <iostream>

using namespace std;

class Shape{
    public:
    void setHeight(int h){
        Height = h;
    }

    void setWidth(int w){
        Width = w;
    }

    protected:

    int Height;
    int Width;
};


class Retanggle: public Shape{
    public:
    int getArea (){
        return (Height * Width);
    }
};

int main()
{
    Retanggle rec;

    rec.setHeight(14);
    rec.setWidth(43);

    cout<<rec.getArea();
    return 0;
}
