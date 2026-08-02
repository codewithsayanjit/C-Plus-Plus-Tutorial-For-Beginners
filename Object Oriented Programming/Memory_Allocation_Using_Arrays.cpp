#include <iostream>
using namespace std;

class Shop
{
private:
    int itemId[100];    // Array to store item IDs
    int itemPrice[100]; // Array to store item prices
    int counter;        // Keeps track of the number of items entered

public:
    // Initializes counter to 0
    void initCounter(void)
    {
        counter = 0;
    }

    void setPrice(void);     // Function to enter item details
    void displayPrice(void); // Function to display item details
};

void Shop::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl; // counter starts from 0 because array indexing starts at 0. But for the user, item numbers should start from 1.
    cin >> itemId[counter];

    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];

    counter++;
}

void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id "
             << itemId[i]
             << " is "
             << itemPrice[i]
             << endl;
    }
}

int main()
{
    Shop dukaan; // Create object of Shop class

    dukaan.initCounter(); // Initialize counter

    // Enter details of 2 items
    dukaan.setPrice();
    dukaan.setPrice();

    // Display all item details
    dukaan.displayPrice();

    return 0;
}