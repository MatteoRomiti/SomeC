#include <stdio.h>

typedef int Item;
typedef struct node *link;
struct node{
	Item item;
	link next;
};

link elimin(link x, Item v){
	if(x==NULL)
		return NULL;
	if(x->item == v){
		link t = x->next;
		free(x);
		return t;
	}
	x->next = elimin(x->next, v);
	return x;
}

void traverse(link h){
	if(h == NULL)
		return;
	printf("%d ", h->item);
	traverse(h->next);
}

int main(void){
	int i,  N;
	Item v;
	link p, r;
	r = malloc(sizeof(*r)); //root
	r->item = 1;
	p = r; //copy
	printf("How many elements do you want in the list? At least 2. ");
	scanf("%d", &N);

	for(i=2; i<=N; i++){ //create the rest of the list
		p = (p->next = malloc(sizeof(*r)));
		p->item = i;
	}
	p->next = NULL;
	p = r;
	printf("This is the list before the delete function: ");
	traverse(p);
	printf("\nWhich number do you want to delete? ");
	scanf("%d", &v);
	elimin(p, v);
	p = r;
	traverse(p);
	system("pause");
}
