// Problem	story	
// Riya	is	at	a	store	checkout	with	a	gift	card	of	exact	value	T.	The	bill	screen	shows	prices	of	n	items.	She	wants	to	buy	
// exactly	two	items	whose	prices	together	use	up	the	card	completely.	
// Given	the	price	array	and	T,	return	the	indices	of	the	two	items.	Exactly	one	answer	exists;	the	same	item	cannot	be	
// used	twice.	
// Example	
// Input : prices = [2, 7, 11, 15], T = 9	
// Output: [0, 1]        # 2 + 7 = 9	

#include <stdio.h>

int main(){

    int prices[] = {2, 7, 11, 15,8,1};
    int T = 9;
    int n = sizeof(prices)/sizeof(prices[0]);   //basically this gives the number of elements in an array
    int i, j;

    for (i=0;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(prices[i]+prices[j] == T){
                printf("indices are %d %d\n", i ,j);
            }
        }
    }
return 0;
}