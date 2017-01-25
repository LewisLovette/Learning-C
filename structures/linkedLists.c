//from 'cprogramming.com/tutorial/c/lession15.html'
#include <stdio.h>
#include <stdlib.h>

struct node{
	int x;
	struct node *next;
};

int main(int argc, char *argv[]){
    // This won't change, or we would lose the list in memory 
    struct node *root;       
    // This will point to each node as it traverses the list
    struct node *conductor;  

    root = malloc( sizeof(struct node) );  
    root->next = 0;   
    root->x = 12;

    conductor = root; 
    if ( conductor != 0 ) {	//Makes sure there is a place to start
        while ( conductor->next != 0)
        {
        	printf( "%d\n", conductor->x );
            conductor = conductor->next;
        }
        //it will not run on the last node, so we add this to print the last node.
        printf( "%d\n", conductor->x );
    }
    // Creates a node at the end of the list 
    conductor->next = malloc( sizeof(struct node) );  

    conductor = conductor->next; 

    if ( conductor == 0 ) {
        printf( "Out of memory" );
        return 0;
    }
    // initialize the new memory -example-
    conductor->next = 0;         
    conductor->x = 42;

    return 0;
}