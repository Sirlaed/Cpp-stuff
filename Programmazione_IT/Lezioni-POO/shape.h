#ifndef H_SHAPE
#define H_SHAPE

class shape
{
private:

    double b;
    double h;

public:

    shape(double _b = -1, double _h = -1);
    double get_b() const;
    double get_h() const;
    void set_b(double _b);
    void set_h(double _h);

    void print();
    double area();
    double perimetro();


};

#endif
