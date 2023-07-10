#include <stdio.h>

struct data {
	int key;
	double data1;
	double data2;
	double data3;
};

int binary_search(struct data *, int, int);
int read_data(char*, struct data*);

int main(void) {
	int k;
	struct data d[1000];
	int n;
	int f;
	printf("Input Search Key :");
	scanf("%d", &k);

	n = read_data("data2301.csv", d);
	f = binary_search(d, k, n);
	
	if (f == -1) {
		printf("Data Not Found\n");
	}
	else {
		printf("Key = %d Data = %f, %f, %f\n", d[f].key, d[f].data1, d[f].data2, d[f].data3);
	}
	return 0;
}

int read_data(char *ptr, struct data *rd) {
	FILE *fp;
	int i;
	fp = fopen(ptr, "r");
	if (fp == NULL) {
		printf("File Not Found.\n");
	}
	for (i = 0; i < 1000; i++) {
		if (feof(fp) != 0) {
			fclose(fp);
			return i;
		}
		fscanf(fp, "%d, %lf, %lf, %lf", &(rd + i)->key, &(rd + i)->data1, &(rd + i)->data2, &(rd + i)->data3);
	}
	printf("Too many data\n");
	return -1;
}

int binary_search(struct data *d, int k, int n) {
	int h;
	int t = n - 1;
	int m;
	for (h = 0; h < t; h) {
		m = (h + t) / 2;

		if ((d+m)->key == k) {
			return m;
		}
		else if ((d+m)->key < k) {
			h = m +1;
		}
		else if ((d+m)->key > k) {
			t = m - 1;
		}
		
	}
	
	return -1;
	
}