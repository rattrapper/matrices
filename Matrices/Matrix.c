#include <math.h>
#include <stdio.h>
#include <malloc.h>

#define TElem double

typedef struct {
	TElem **data;
	int base1, base2;
} Matrix;

Init(Matrix m)
{
	m.data = (TElem**)malloc(sizeof(TElem*) * m.base1);
	for (int i = 0; i < m.base1; i++)
		m.data[i] = (TElem*)malloc(sizeof(TElem) * m.base2);
	return 0;
}
TElem Get(Matrix m, int row, int col)
{
	if (row < 0 || row > m.base1)
		fprintf(stderr, "argument out of range (row)");
	else if (col < 0 || col > m.base1)
		fprintf(stderr, "argument out of range (col)");
	return m.data[row][col];
}