
#include <iostream>

using namespace std;



class node
{   public:

    int data ;
    node * next;
};




void printList(node *node1)
{
    while (node1!=NULL)
    {
        cout<<" "<<node1->data<<endl;
        node1 = node1->next;
    }
}

void reverse_the_linked_list(node ** head )
{
    node* current=*head;
    node * next=NULL;
    node* prev=NULL;


    while (current!=NULL)
    {
        next=current->next;
        current->next=prev;

        prev=current;
        current=next;
    }

    *head=prev;


}



int main()
{

    node *head =new node();
    node *second = new node ();
    node * third =new node ();
    node * fourth =new node ();
    node * fifth =new node ();
    node * sixth =new node ();
    node *seventh=new node();



    head->data=10;
    head->next=second;

    second ->data=20;
    second ->next=third ;

    third ->data =30;
    third->next=fourth;

    fourth ->data =40;
    fourth->next=fifth;

    fifth ->data =50;
    fifth->next=sixth;

    sixth ->data =60;
    sixth->next=seventh;

    seventh->data=70;
    seventh->next=NULL;


    printList(head);

    reverse_the_linked_list(&head);
    printList(head);


    return 0;
}

