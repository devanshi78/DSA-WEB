#include<iostream>
using namespace std;

template <typename T>
class Demo{
    private:
        T a;
        T b;

    public:
        void add(T a, T b)
        {
            cout<<"sum of a and b : "<<a+b<<endl;
        }
};

int main()
{
    Demo<int> d;

    d.add(10,20);

    return 0;

}