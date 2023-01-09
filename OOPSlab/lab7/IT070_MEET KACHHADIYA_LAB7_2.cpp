#include <iostream>
using namespace std;

class Publication
{
public:
    string title;
    int Price;

    Publication()
    {
        cout << "\nEnter the Title : " << endl;
        cin >> title;
        cout << "\nEnter the Price : " << endl;
        cin >> Price;
    }
};

class Sales
{
public:
    int Last_3_month;

    Sales()
    {
        cout << "\nEnter the Last 3 month sales : " << endl;
        cin >> Last_3_month;
    }
};

class Book : public Publication, public Sales
{
public:
    int pages;

    Book(){};
    void getBook()
    {
        cout << "\nEnter the no. of pages : " << endl;
        cin >> pages;
        cout << "\nTitle : " << title << "\nPrice : " << Price << "\nLast 3 month salse : " << Last_3_month << "\npages : " << pages;
    }
};

class Tape : public Publication, public Sales
{
public:
    int play_time;

    Tape(){};
    void getTape()
    {
        cout << "\nEnter the play time : " << endl;
        cin >> play_time;
        cout << "\nTitle : " << title << "\nPrice : " << Price << "\nLast 3 month salse : " << Last_3_month << "\nplay time : " << play_time;
    }
};

class Pamphlet : public Publication
{
public:
    int pamphlet;

    Pamphlet()
    {
        cout << "\nEnter the no. of pamphlet : " << endl;
        cin >> pamphlet;
    };
};

class Notice : public Pamphlet
{
public:
    string type_of_distributor;

    Notice(){};
    void getNotice()
    {
        cout << "\nEnter the type_of_distributor : " << endl;
        cin >> type_of_distributor;
        cout << "\nTitle : " << title << "\nPrice : " << Price << "\nno.of pamphlet : " << pamphlet << "\ntype_of_distributor : " << type_of_distributor;
    }
};

int main()
{
    Book b;
    b.getBook();
    Tape t;
    t.getTape();
    Notice n;
    n.getNotice();
    return 0;
}