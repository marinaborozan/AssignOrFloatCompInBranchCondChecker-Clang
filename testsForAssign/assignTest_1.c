
void test() {
	int x=2, y=3;

	do{
		
	}
	while((x=1)==(y=1), y=1, y=2); //expected warning for assign in controlling stmt
}

