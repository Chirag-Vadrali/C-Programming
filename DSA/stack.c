// Problem	story	
// A	code	editor	must	warn	programmers	when	brackets	are	mismatched.	A	file	contains	only	the	characters	(	)	[	]	{	}.	
// Return	true	if	every	bracket	closes	the	most	recently	opened	bracket	of	the	same	type,	false	otherwise.	
// Example	
// Input : s = "{[()]}"   
// Input : s = "(]"       
// →  Output: true	
// →  Output: false	
// How	to	approach	(think	before	you	code)	
// • Nesting	=	most-recent-first.	The	bracket	that	must	close	next	is	the	one	opened	last.	"Last	in,	first	out"	is	the	
// definition	of	a	stack.	
// • Push	opens,	match	closes.	On	an	opening	bracket,	push	it.	On	a	closing	bracket,	the	stack	top	must	be	its	partner	
// —	pop	and	compare;	any	mismatch	or	empty	stack	means	invalid.	
// • End	condition.	A	valid	string	leaves	the	stack	empty.	Leftover	opens	(like	"(("	)	are	also	invalid	—	beginners	
// forget	this.	
// Complexity:		Time O(n) · Space O(n)
// so basically first create a string and then stack,so traverse the string and then check for the if conditions 
// then push and then pop	


#include <stdio.h>
#include <string.h>

int isValid(char s[]){
    char stack[100];
    int top = -1;
    int i;

    for (i=0;i<strlen(s);i++){
        char ch = s[i];
        if(ch == '(' || ch =='{' || ch == '['){
            stack[++top] = ch;      //push the ch
        }
        else{
            if(top == -1){
                return 0;
            }

            char open = stack[top--];

            if((ch == ')' && open != '(') ||
               (ch == ']' && open != '[') ||
               (ch == '}' && open != '{')){

                   return 0;
               }
        }
    }
    return top == -1;
}

int main (){

    char s[] = "({[]})";

    if(isValid(s)){
        printf("Correct");
    }
    else{
        printf("Incorrect");
    }
    return 0;
}



 