#include <iostream>
using namespace std;

class CWS
{
protected:
    string title;
    float rating;

public:
    CWS(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
};
class CWSVideo : public CWS
{
    float videoLength;

public:
    CWSVideo(string s, float r, float vl) : CWS(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};
class CWSText : public CWS
{
    int words;

public:
    CWSText(string s, float r, int wc) : CWS(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "No of words in this text tutorial is: " << words << " words" << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    // for Code With Sayanjit Video
    title = "C ++ Tutorial Video";
    rating = 4.89;
    vlen = 4.56;
    CWSVideo djVideo(title, rating, vlen);

    // for Code With Sayanjit Text
    title = "C ++ tutorial Text";
    rating = 4.19;
    words = 433;
    CWSText djText(title, rating, words);

    CWS *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

/*

Rules for virtual functions
----------------------------

    1) They cannot be static
    2) They are accessed by object pointers
    3) Virtual functions can be a friend of another class
    4) A virtual function in the base class might not be used.
    5) If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/