#include<bits/stdc++.h> 
using namespace std ;


bool areQuestionEven(string s){
    int qC = 0;
    for(auto i : s){
        if(i == '?'){
            qC++;
        }
    }
    cout << s << " " <<qC << endl ; 
    // (qc%2 == 0 ? return true  : return false );
    if(qC%2 == 0){
        return true ;
    }else {
        return false; 
    }
}

bool areBracketsBalanced(string expr){   
    stack<char> s; 
    char x; 
  
    // Traversing the Expression 
    for (int i = 0; i < expr.length(); i++)  
    { 
        if (expr[i] == '(' )  
        { 
            // Push the element in the stack 
            s.push(expr[i]); 
            continue; 
        } 
  
        // IF current current character is not opening 
        // bracket, then it must be closing. So stack 
        // cannot be empty at this point. 
        if (s.empty()) 
            return false; 
  
        switch (expr[i]) { 
        case ')': 
              
            // Store the top element in a 
            x = s.top(); 
            s.pop(); 
            if (x != '(') 
                return false; 
            break; 
    } 
  
    // Check Empty Stack 
}
return (s.empty()); 
} 
  

int main() {
    int t ;
    cin >> t; 
    while(t-- ){
        string s ;
        cin >> s; 
    
         if(areBracketsBalanced(s) == 1 && areQuestionEven(s) ){
            cout << "Yes"<< endl ;
        }else if(areBracketsBalanced(s) == 0 && areQuestionEven(s) == false ){
                cout << "Yes" <<  endl ;
        }else {
            cout << "NO" << endl ;
        }    
    }
    return 0;
    
}