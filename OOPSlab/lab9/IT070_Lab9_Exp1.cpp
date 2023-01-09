#include <iostream>
using namespace std;

class LinkedList
{
public:
    int number;
    LinkedList *next;
};

void create(LinkedList *head)
{
    cin >> (head->number);
    if (head->number != -100)
    {
        LinkedList *poi;
        poi = new LinkedList;
        head->next = poi;
        create(poi);
    }
    else
    {
        head->next = NULL;
        return;
    }
}

void print(LinkedList *head)
{
    cout << "\n Linked list is : ";
    LinkedList *temp = head;
    while (temp->next != NULL)
    {
        cout << (temp->number) << " ";
        temp = temp->next;
    }
    cout << "\n";
}

void insert(LinkedList *head, int g, int h)
{
    LinkedList *temp = head;
    LinkedList *temp1 = new LinkedList;
    int count = 0;
    while (count != h - 2)
    {
        temp = temp->next;
        count++;
    }
    temp1->number = g;
    temp1->next = temp->next;
    temp->next = temp1;
}

class LinkedList *insertfirst(class LinkedList *head, int x)
{
    class LinkedList *temp = new LinkedList;
    temp->number = x;
    temp->next = head;
    return temp;
}

void insertlast(class LinkedList *head, int c)
{
    class LinkedList *temp1 = new LinkedList;
    temp1->number = c;
    class LinkedList *temp2 = head;
    while (temp2->next->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
    return;
}
int main()
{
    LinkedList *head;
    head = new LinkedList;
    cout << "Enter the linked list elements (NOTE:-ENTER THE -100 FOR END)" << endl;
    create(head);
    int t1;
again:
    cout << "do you want to insert\nPRESS (1) FOR INSERT AS FIRST NODE\nPRESS (2) FOR INSERT AS LAST NODE\nPRESS (3) FOR INSERT AFTER ANY SPECIFIED NODE :\n";
    cin >> t1;
    if (t1 == 1)
    {
        int m;
        cout << "Enter the element do you want to insert first : ";
        cin >> m;
        head = insertfirst(head, m);
        print(head);
    }
    else if (t1 == 2)
    {
        int m;
        cout << "Enter the element do you want to insert last : ";
        cin >> m;
        insertlast(head, m);
        print(head);
    }
    else if (t1 == 3)
    {
        int a, b;
        cout << "Enter the element do you want to insert : ";
        cin >> a;
        cout << "Enter index do you want to insert : ";
        cin >> b;
        insert(head, a, b);
        print(head);
    }
    else
    {
        cout << "PLEASE ENTER CORRECT CHOICE !!!" << endl;
    }
    int x;
    cout << "\nEnter (1) For continue and (2) for exit : ";
    cin >> x;
    if (x == 1)
    {
        goto again;
    }
    else
    {
        cout << "THANK YOU" << endl;
    }
    return 0;
}