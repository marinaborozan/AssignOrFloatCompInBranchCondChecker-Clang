
void test(){
	float y = 4.5;

	for (float x = 0.1f; x <= y; x++) //expected warning for float loop counter
   break;
}
