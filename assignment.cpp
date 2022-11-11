//implementing stack with linked list -----> Assignment-02
#include <iostream>

using namespace std;

class node {
    public:
    int data;
    node *next;
};

class linkedList{
    // making it public because classes are private by default
    public:
    //node head (top) type pointer will equal null since there nothing yet in the linked list 
    node *top =NULL;
    //display function
    void display(){
        //creating temp pointer equal as head and will act like checker , checks for the data in the linked list
        node *temp;
        //assigning temp pointer equal to head pointer
        temp = top;
        //if head (top) equal null then there nothing in the linked list
        if (top == NULL)
        {
            cout << "stack is empty.";
        }
        else{
        //making a while loop checks for the data in the linked list and if it equals null then it reached the final node
        while (temp != NULL)
        {
            cout << temp->data << "\n";
            temp = temp->next;
        }
            
        }
        
    }
    //push (add) function
    //will take a parameter (the that will be add to the list)
    void push (int value){
        //creating new node for the new element
        node *newNode = new node();
        //here will assign the input value to the node data
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }
    //pop function
    //will return head (top) value and delete it
    int pop (){
        int value ;
        //checks if the linked list is empty or not
        if (top == NULL)
        {
            cout << "stack is empty.\n";
            return -1 ;
        }
        else {
            //creatintg pointer like temp pointer equal head (top)
            node *firstNode = top;
            //assigning the head (top) pointer value with the second node 
            top = firstNode -> next;
            //return the value of the first node before deleting it
            value = firstNode->data;
            //deleting the first node
            delete(firstNode);
            cout << "pop value = "<<value<<endl ;
            return value;
        }
        
    }
    //peek function
    //as like the pop function but it doesnot delet the value after returing it
    void peek(){
    //checking if the stack is empty or not
    if (top == NULL)
    {
        cout << "stack is empty.\n";
    }
    else {
        //if it's not will return the first node data
        int data = top->data;
        cout << "top = " << data << endl;
    }

    }
};

int main(){
    //in terms of using any function in any class we need to creat object from this class
    linkedList miroObject;

    miroObject.push(1);
    miroObject.pop();
    miroObject.push(2);
    miroObject.pop();
    miroObject.push(3);
    miroObject.push(4);
    miroObject.pop();
    miroObject.push(5);


    miroObject.pop();
    
    
    
    
    return 0;
}