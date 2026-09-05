#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "ID of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};
int main()
{
    int size = 3;
    // This is a pointer to an object of ShopItem class
    ShopItem *ptr = new ShopItem[size];

    // This is another pointer to an object of ShopItem class
    ShopItem *ptrTemp = ptr;
    int id, i;
    float price;
    for (i = 0; i < size; i++)
    {
        cout << "Enter Id of item " << i + 1 << ": " << endl;
        cin >> id;
        cout << "Enter price of item " << i + 1 << ": " << endl;
        cin >> price;
        // (*ptr).setData(id, price);
        ptr->setData(id, price);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    delete[] ptr; // deallocating the memory

    delete[] ptrTemp; // deallocating the memory

    return 0;
}
