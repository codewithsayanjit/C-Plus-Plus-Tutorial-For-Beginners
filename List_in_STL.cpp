#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst) {
    list<int>::iterator iter;
    for (iter = lst.begin(); iter != lst.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
}

int main() {
    // Basic initialization and push_back
    list<int> list1;
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    list1.push_back(9);
    list1.push_back(15);
    display(list1);

    // Dynamic insertion via iterator
    list<int> list2(3);
    list<int>::iterator iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);

    // Deleting elements using pop_back, pop_front, and remove
    list1.pop_back();
    display(list1);

    list1.pop_front();
    display(list1);

    list1.remove(9); // removes all occurrences of 9
    display(list1);

    // Sorting elements
    list1.sort();
    display(list1);

    //reverse elements
    list1.reverse();
    display(list1);

    return 0;
}