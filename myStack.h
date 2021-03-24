//
// Created by Tre on 3/18/2021.
//

#ifndef BINARYTREE_MYSTACK_H
#define BINARYTREE_MYSTACK_H

#endif //BINARYTREE_MYSTACK_H

template <class Type>
class myStack
{
public:
    myStack();
    myStack(const myStack<Type>&);
    const myStack<Type>& operator=(const myStack<Type>&);
    ~myStack();

    void push(const Type&);
    void pop();
    Type top() const;
    bool isEmpty() const;

private:
    struct node
    {
        Type item;
        node * next;
    };

    node * topOfmyStack;
};


template <class Type>
myStack<Type>::myStack()
{
topOfmyStack = NULL;
}

template <class Type>
myStack<Type>::myStack(const myStack<Type>& copy)
{
 *this= copy; // to make a deep copy of the copy object

}

template<class Type>
const myStack<Type>& myStack<Type>::operator=(const myStack<Type>& rhs)
{
 *this = rhs;
}

template<class Type>
myStack<Type>::~myStack()
{
    while (!isEmpty()) // if not empty keep popping the values
    {
        pop();
    }
}

template <class Type>
void myStack<Type>::push(const Type& insert)
{
    struct Node* temp; // pointer to new node
    temp = new Node(); //new node created

    temp->item =insert; // store the inserted element in the node
    temp ->next = topOfmyStack; // insert the new node before the top of stack
    topOfmyStack = temp; // sets the topofstack to point to top node


}

template <class Type>
void myStack<Type>::pop()
{
    struct Node* temp;

    // Check for stack underflow
    if (topOfmyStack != NULL)
    {
        temp = topOfmyStack;
        topOfmyStack = topOfmyStack->next;
        delete temp;
    }
    else
        cout << "Cannot remove from an empty stack" << endl;
}



template <class Type>
Type myStack<Type>::top() const
{
    assert(topOfmyStack != nullptr); // if stack is empty
    return topOfmyStack ->item; // stop the program
}

template <class Type>
bool myStack<Type>::isEmpty() const
{
 return (topOfmyStack == nullptr);
}