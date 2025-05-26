#include<iostream>
using namespace std;

template <typename T>
class Demo{
    private:
        T a;
        T b;

    public:
    void setvalue(int x,int y){ //with constructure.
        this->a = x;
        this->b = y;
    }
    void getvalue(){
        cout<<"sum of a and b is : "<<a+b<<endl;
    }
};

int main()
{
    Demo<int> d;

    d.setvalue(10,20);

    d.getvalue();

    return 0;

}