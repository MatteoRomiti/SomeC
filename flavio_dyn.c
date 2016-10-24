struct object{
	int number;
	struct object *next;
};

int main(void){
	int i, N, M;
	struct object *p, *x;
	p = malloc(sizeof(*p)); //pointing a memory size of a struct object
	p->number = 1;
	p->next = p; //pointing itself
	x = p;

	N = 1;
	while(N>0){
		printf("How many people? (0 to exit) \n"); scanf("%d", &N);
		if(N>0){
			printf("Count (at least 2): \n"); scanf("%d", &M);
			for(i=2; i<=N; i++){
				x = (x->next = malloc(sizeof(*x))); //first: x->next gets a new pointer, then x gets the result of (...=...), in this case: the the same pointer of x->next
				x->number = i;
				x->next = p; //closing the circle
			}
			p = x; //p points the last element
			while(p!=p->next){
				for(i=1; i<M; i++) p = p->next; //the element M steps ahead is killed (i<M, but p->next->number so M-1+1)
				printf("n.%d is dead.\n", p->next->number);
				x = p->next; //this will die now
				p->next = p->next->next;
				free(x); //p is pointing the element before the last-killed one
			}
			printf("\nn.%d survived.\n", p->number);
		}
	}		
}
