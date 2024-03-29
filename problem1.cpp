// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Leaf{
public:
string msg;
Leaf(string msg){
this->msg=msg;
}
};
class Node{
public:
int value;
Node *left;
Node *right;
Leaf *leftL;
Leaf *rightL;
Node(int val){
value=val;
left=NULL;
right=NULL;
leftL=NULL;
rightL=NULL;
}
};

int main() {

Node *root= new Node(80);
Node *l=new Node(54);
Node *r=new Node(140);
Node *ll=new Node(49);
Node *lr=new Node(60);
Node *rl=new Node(104);
Leaf *net=new Leaf("Net");
Leaf *victory=new Leaf("Victory");
Leaf *happy=new Leaf("Happy");
Leaf *fiftyfive=new Leaf("55");
Leaf *flower=new Leaf("Flower");
Leaf *power=new Leaf("Power");
Leaf *vision=new Leaf("Vision");
root->left=l;
root->right=r;
l->left=ll;
l->right=lr;
ll->rightL=happy;
ll->leftL=victory;
lr->rightL=flower;
lr->leftL=fiftyfive;
r->rightL=net;
r->left=rl;
rl->rightL=vision;
rl->leftL=power;
int n;
cin>>n;
Node *temp=root;

while(1){
	if(n>temp->value){
		if(temp->rightL){
			cout<<temp->rightL->msg;
			break;}
		temp=temp->right;
	    
	}else{
	    if(temp->leftL){
	        cout<<temp->leftL->msg;
	        break;
	    }
	    temp=temp->left;
	}




}




    
    

    return 0;
}