#include <stdio.h>
struct object{
	int number;
	struct object *next;
};

int main(void){
	int i,  N;
	struct object *p, *r, *t1, *t2;
	r = malloc(sizeof(*r)); //root
	r->number = 1;
	p = r; //copy
	printf("How many elements do you want in the list? At least 2...");
	scanf("%d", &N);

	for(i=2; i<=N; i++){ //create the rest of the list
		p = (p->next = malloc(sizeof(*r)));
		p->number = i;
	}

	p = r;
	printf("The numbers are:\n");
	for(i=1; i<=N; i++){
		printf("%d\n", p->number);
		p = p->next;
	}
	printf("\n");

	t1 = r->next; //save the element that will be the first of the old list
	t2 = t1->next;
	//printf("t1->number is %d", t1->number);
	r->next = NULL; //the tail of the new list
	for(i=1; i<N; i++){
		t1->next = r; //link between the first element of the new list and the last element of the old list
		r = t1; //new root of the new list
		t1 = t2; //shift
		if(i<N-1)
			t2 = t2->next; //shift
	}
	free(t1);
	free(t2);

	p = r;
	printf("The reverse list is:\n");
	for(i=1; i<=N; i++){
		printf("%d\n", p->number);
		p = p->next;
	}

	system("pause");
}

