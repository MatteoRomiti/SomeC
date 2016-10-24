void main(void) {
	int i, d;
	char *days[7] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
	i = 0;
	while(i>=0){
		printf("Which character? ");
		scanf("%d", &i);
		for(d=0; d<7; d++){
			printf("%c", days[d][i]);
			printf("\n");
		}
	}
}
