#include <iostream>
#include <cmath>

void moreMagic(int *&a, int count, int exp, int *&b , int first[200] , int second[200]) {
	
    int table[10] = {0};
    
	for (int c = 0; c < count; c++) {
		const int index = (a[c] / exp) % 10;
		table[index]++;
	}
    
	for (int c = 1; c < 10; c++) {
		table[c] += table[c - 1];
	}

	for (int c = count - 1; c >= 0; c--) {
		const int idx = (a[c] / exp) % 10;
		b[table[idx] - 1] = a[c];
		table[idx]--;
	}
    
	int *x = a;
	a = b;
	b = x;
}

void magic(int *a, int count, int *b, int first[200] , int second[200]) {
	if (count < 2) return;
	for(int i = 0 , exp = 1; i < count; i++ , exp *= 10)  moreMagic(a, count, exp, b , first , second );
}

int main() {
    int first[200] = {0};

    int second[200] = {0};
    int num;
    std::cin >> num;
    for (int c = 0; c < num; c++) {
        std::cin >> first[c];
    }
    magic(first, num, second , first, second);
    for (int c = 0; c < num; c++) {
        std::cout << first[c] << ' ';
    }
    return 0;
}

/*
3
73 31 13

11
73 31 27 13 9 27 35 11 7 1 99
*/