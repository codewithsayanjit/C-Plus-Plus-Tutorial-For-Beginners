#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;

    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v) // vector &v : means v is a reference to another vector object.
    {
        T dot = 0; // dot to store the result.
        for (int i = 0; i < size; i++)
        {
            dot += this->arr[i] * v.arr[i]; // this refers to the current object.
        }
        return dot;
    }
};

int main()
{
    vector<float> v1(3); // vector 1 with a float data type
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;

    vector<float> v2(3); // vector 2 with a float data type
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;

    float result = v1.dotProduct(v2);
    cout << result << endl;

    return 0;
}
