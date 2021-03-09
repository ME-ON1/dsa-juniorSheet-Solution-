#include <bits/stdc++.h> 
using namespace std ; 

#define ll long long 

class Node { 
	public :
		int val ;
		Node * left , *right  ;
	Node (){
		this->val = -1 ; 
		this->right = NULL ;
		this->left = NULL ;
	}
} ;

Node * root; 
int flag = 1 ;

int nnum = 0 , nodeC = 0 ;

void makeBST(Node* root ,int number , string direc, int pos ) {

	if(direc.size() == 0 ) {
		if(root->val != -1 ) {
			flag = 0 ;
		}
		root->val = number  ;
	}

	if(direc[pos] == 'L'){  
		if(root->left == NULL ){ 
			nodeC++; 
			Node* nodep = new Node ;
			root->left = nodep ;
			makeBST(nodep, number , direc, pos + 1) ;
		}else makeBST(root->left , number , direc, pos+1 ) ;
	}

	if(direc[pos] == 'R' ){
		if(root->right == NULL ) {
			nodeC++ ;
			Node* node = new Node ; 
			root->right = node ; 
			makeBST(node , number , direc ,pos+1) ;		
		}else makeBST(root->right, number, direc,pos +1) ;
	}
	
}

void bfs(Node * root ) {
	queue<Node* > q ; 
	q.push(root) ; 
	while(!q.empty()) {
		Node* n = q.front() ; 
		q.pop(); 
		cout << n->val << " " ; 
		if(n->left != NULL ) {
			q.push(n->left) ;
		}else if(n->right != NULL ){
			q.push(n->right ) ;
		}
		
	}
}

void check() {
	if(!flag || nodeC != nnum) {
		cout << "NOT COMPLETED" << endl ;
	}else {
		bfs(root) ;
	}
}


void init() {
	delete root ;
	root = new Node ;
	nnum = 1 ;
	flag = 1 ;
	nodeC = 0;
}

int main(){
	string s;
	while( cin >> s) {
		if(s == "()") {
			check() ;
			init() ;
		}
		int number = 0 ;
		nnum++; 
		string direc ; 
		for(int i = 0 ; i < s.size(); i++ ){ // extract number and direc 
			if(s[i] == ',') {
				number = stoi(s.substr(1, i - 1 ));
				for(int j = i + 1; j < s.size() ; j++ )  {
					if(s[j] == ')' ){
						break ;
					
					}else {
						direc += s[j] ;
					}
				}
				break ;
			}	
		}
		makeBST(root ,number , direc, 0 ) ; 
	}
    return 0;
}
