#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char str1[100], str2[1];
	gets(str1);
	gets(str2);
	for (int i=0; i<strlen(str1); i++) {
		if (str1[i] == str2[0]) {
			cout << i+1 << " ";
		}
	}
	return 0;
}
