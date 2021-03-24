//
// Created by Tre on 3/18/2021.
//

#ifndef BINARYTREE_BINARYTREE_H
#define BINARYTREE_BINARYTREE_H

#endif //BINARYTREE_BINARYTREE_H

#include <fstream>
#include <cstdlib>
using namespace std;

template <class type>
struct binTreeNode
{
    binTreeNode();
    type item; //stores the data in the node of the tree
    binTreeNode<type> * left;
    binTreeNode<type> * right;
};

template <class type>
void readLISP(binTreeNode<type>*,  ifstream&);

binTreeNode<int>* createNode(ifstream&);

template <class type>
bool evaluate(binTreeNode<type>*, int, int, myStack<type>&);

template <class type>
void destroyTree(binTreeNode<type>*);

////////////////////////////////////////////////////////////////////

template <class type>
void readLISP(binTreeNode<type> * r,  ifstream& infile) {


    r->left = NULL;
    r->right = NULL;
    int z;
    char ch;
    infile >> ch;
  //  cout << ch;
    r->left = new binTreeNode<int>;

    if (ch == '(') {
        cout << ch;
        infile >> ch;
    }
    if (ch == ')') {
        cout << ch;
        r->left = NULL;
    } else {

        infile.putback(ch);
        infile >> z;
        r->item = z;
        cout << z;

    }
    if (r->left != NULL) {
        readLISP(r->left, infile);
    }

    // this is for the right side node
    //
    //
    r-> right =NULL;
      r->left = NULL;

    infile >> ch;
    r->right= new binTreeNode<int>;

    if (ch == '(') {
        cout << ch;
        infile >> ch;
    }
     if (ch == ')') {
        cout << ch;
        infile >> ch;
        r->right = NULL;
    }
    if (ch != ')' && ch != '(') {

        infile.putback(ch);
        infile >> z;
        r->item = z;
        cout << z;
        cout << "(";

    }

    if (r->right !=NULL) {
        infile >> ch;


        readLISP(r->right, infile);
    }

    infile >> ch;
   // cout << ch;
    return;



}


template <class type>
bool evaluate(binTreeNode<type> * r, int runningSum, int targetSum,
              myStack<type>& path)
{
bool Testing;

if (targetSum == runningSum){
    
    return true;
    }
    if (r->left != NULL){
        runningSum += r->item;
        Testing = evaluate(r->left,runningSum,targetSum,path);
    }
    if (!Testing){
        if (r->right != NUll){
            runningSum += r->item;
        }
    }

}

template <class type>
void destroyTree(binTreeNode<type> * r)
{
    if (left)
         left == NULL;
    if (right)
        right==NULL;
    delete item;
}
template <class type>
binTreeNode<type>::binTreeNode(){};