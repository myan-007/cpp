#include <iostream>
using namespace std;

class LinkedList
{
public:
    LinkedList(int data){
        number=data;
    }
    LinkedList(){

    }
    int number;
    LinkedList *next;
};

void print(LinkedList *head)
{
    cout << "\n Linked list is : ";
    LinkedList *temp = head;
    while (temp != NULL)
    {
        cout << (temp->number) << " ";
        temp = temp->next;
    }
    cout << "\n";
}
void insert(LinkedList *head,int d){
    LinkedList *toadd = new LinkedList(d);
    LinkedList *temp = head;
    while(temp->next != NULL){
        temp=temp->next;
     
    }
    temp->next = toadd;
    return;

}

LinkedList *insertfirst(LinkedList *head,int data){
    LinkedList *toadd = new LinkedList(data);
    toadd->next = head;
    return toadd;

}

void deletenode(LinkedList *head,int in){
    LinkedList *temp= head;
    int j=0;
    while(j!=(in-1)){
        temp=temp->next;
        j++;
    }
    LinkedList *po;
    po=temp;
    temp=temp->next->next;
    po->next=temp;
    return;

}

int main()
{
    LinkedList *head;
    head = new LinkedList;
    head->number=12;
    head->next = NULL;
    head = insertfirst(head,13);
    head = insertfirst(head,14);
    head = insertfirst(head,15);
    head = insertfirst(head,16);
    print(head);

    int s;
    cout << "Enter the index to deleted: ";

    cin >> s;
    deletenode(head,s);    

    print(head);
    
    return 0;
}