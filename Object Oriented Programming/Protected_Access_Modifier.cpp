#include <iostream>
using namespace std;

/*
Protected access modifiers are similar to the private access modifiers but protected access modifiers can be accessed in the derived class whereas private access modifiers cannot be accessed in the derived class. A table is shown below which shows the behavior of access modifiers when they are derived “public”, “private”, and “protected”.

*                            Public Derivation          Private Derivation        Protected Derivation
1) Private members             Not Inherited             Not Inherited             Not Inherited
2) Protected members            Protected                Private                   Protected
3) Public members               Public                   Private                   Protected
*/
class Base{
    protected:
        int a;
    private:
        int b;
};

class Derived: protected Base{
};

int main(){
    Base c;
    Derived d;
    cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}