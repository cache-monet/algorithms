#include <iostream>
using namespace std;

static const int N = 8;

int main (void) {
	int i, j, p, q, k, l, id[N], sz[N];
	for (int i = 0; i < N; i++) {
		id[i] = i; sz[i] = 1;	}
		
	while (cin >> p >> q) {
		for (i = p; i != id[i]; i = id[i]);
		for (j = q; j != id[j]; j = id[j]);
		
		if (j == i) continue;

		if(sz[j] > sz[i]) {
			id[i] = j;		
			sz[j] += sz[i];
			for(int tmp = k = p; k != id[k]; k = id[k], id[tmp] = j, tmp = k);
		} else {
			id[j] = i;
			sz[i] += sz[j];
			for(int tmp = l = q; l != id[l]; l = id[l], id[tmp] = i, tmp = l);
		}
		cout << p << " " << q << endl;
		for(i = 0; i < N; i++) cout << id[i] << " ";
		cout << endl;	
	}
}