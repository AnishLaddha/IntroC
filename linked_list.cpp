#include <iostream>
#include <string>

using namespace std;
struct node
{    
    int data;
    node* next;
};
class linked_list
{
    private:
        node *head, *tail;
    public:
        linked_list()
        {
            head = NULL;
            tail = NULL;
        }
        node* get_head()
        {
            return head;
        }
        void display(node *d_node)
        {
            if(d_node == NULL)
            {
                cout<<"NULL: END"<< endl;
            }
            else
            {
                cout<< d_node-> data<< "  --  ";
                display(d_node->next);
            }
        }
        void insert_node(int val)
        {
            node *new_node = new node;
            new_node -> data=val;
            new_node -> next = head;
            head = new_node;
        }
        int delete_node()
        {
            if(head != NULL)
            {
                int ret_val = head -> data;
                head = head ->next;
                return ret_val;
            }
            
            return 0;
        }
};
int main()
{
    linked_list list;
    list.insert_node(12);
    list.insert_node(76);
    list.insert_node(34);
    cout <<"List after inserting all nodes:"<< endl;
    list.display(list.get_head());
    cout <<"Deleted value: "<< endl;
    cout << list.delete_node() << endl;
    cout <<"List after deleting first nodes:"<< endl;
    list.display(list.get_head());
    return 0;
}