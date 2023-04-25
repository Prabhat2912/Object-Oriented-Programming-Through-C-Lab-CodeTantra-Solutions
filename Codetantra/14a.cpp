

int add(int a, int b) {
	    return a + b;
}

float add(float a, float b) {
	    return a + b;
}

char add(char a, char b) {
	    int sum = (a - '0') + (b - '0');
	        return sum + 'a' - 1;  // or sum + '0' + '0' for uppercase 'U'
}

