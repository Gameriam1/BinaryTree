#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include "myStack.h"
#include "binaryTree.h"
#include <iostream>
using namespace std;


int main()
{
    ifstream infile;
    infile.open("Dino/L_input.txt", ios::in);

        binTreeNode<int> *root;
        int total = 0;
        int TarValue;
        int x;
        char ch;
        infile >> TarValue;
        cout << TarValue;
        infile >> ch;
        infile >> x;
        cout << x;


        root = new binTreeNode<int>;

        root->item = x;
        root->right = NULL;
        root->left = NULL;
        readLISP(root, infile);




    return 0;
}

