#include <iostream>
#include <algorithm>

using namespace std;


char buf[100001];
int n, k, index[100001];

struct node {
	int x, y, dx, dy;
	bool visit;
	node *a, *b, *c, *d;

	node() {

	}
}arr[100001];

bool cmp_dx(int a, int b) {
	if (arr[a].dx == arr[b].dx) {
		/*if (arr[a].dy == arr[b].dy) {
			return arr[a].x > arr[b].x;
		}*/
		return arr[a].dy > arr[b].dy;
	}
	return arr[a].dx > arr[b].dx;
}

bool cmp_dy(int a, int b) {
	if (arr[a].dy == arr[b].dy) {
		/*if (arr[a].dx == arr[b].dx) {
			return arr[a].x > arr[b].x;
		}*/
		return arr[a].dx > arr[b].dx;
	}
	return arr[a].dy > arr[b].dy;
}

void qsort(int start, int end, bool c) {
	if (start >= end) { return; }

	int left = start, right = end;
	int mid = (left + right) / 2;

	while (left <= right) {
		if (c) {
			while (cmp_dx(mid, left)) left++;
			while (cmp_dx(right, mid)) right--;
		}
		else {
			while (cmp_dy(mid, left)) left++;
			while (cmp_dy(right, mid)) right--;
		}

		if (left <= right) {
			int tmp = index[left];
			index[left] = index[right];
			index[right] = tmp;

			left++; right--;
			break;
		}
	}
	if (left < end) qsort(left, end, c);
	if (start < right) qsort(start, right, c);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);

	cin >> n >> k >> buf;
	for (int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		arr[i].x = x; arr[i].y = y;
		arr[i].dx = x + y; arr[i].dy = x - y;
		arr[i].visit = false;

		index[i] = i;
	}

	int sx = arr[0].x, sy = arr[0].y;

	// dx 같으면 B C 방향
	sort(index, index + n, cmp_dx);
	//qsort(0, n - 1, true);
	for (int i = 1; i < n; i++) {
		int ii = index[i];
		int jj = index[i-1];
		if (arr[ii].dx == arr[jj].dx) {
			arr[jj].c = &arr[ii];
			arr[ii].b = &arr[jj];
		}
	}

	// dy 같으면 A D 방향
	sort(index, index + n, cmp_dy);
	//qsort(0, n - 1, false);
	for (int i = 1; i < n; i++) {
		int ii = index[i];
		int jj = index[i - 1];

		if (arr[ii].dy == arr[jj].dy) {
			arr[jj].d = &arr[ii];
			arr[ii].a = &arr[jj];
		}
	}

	node* cur = NULL;

	cur = &arr[0];
	cur->visit = true;

	for (int i = 0; i < k; i++) {
		node* t = cur;
		if (buf[i] == 'A') {
			while (t->a != NULL && t->a->visit) {
				t = t->a;
			}
			if (t->a == NULL) {
				cur->a = NULL;
			}
			if (t->a != NULL && !(t->a->visit)) {
				t = t->a;
				cur->a = t;
				cur = t;
			}
		}
		else if (buf[i] == 'B') {
			while (t->b != NULL && t->b->visit) {
				t = t->b;
			}
			if (t->b == NULL) {
				cur->b = NULL;
			}
			if (t->b != NULL && !(t->b->visit)) {
				t = t->b;
				cur->b = t;
				cur = t;
			}
		}
		else if (buf[i] == 'C') {
			while (t->c != NULL && t->c->visit) {
				t = t->c;
			}
			if (t->c == NULL) {
				cur->c = NULL;
			}
			if (t->c != NULL && !(t->c->visit)) {
				t = t->c;
				cur->c = t;
				cur = t;
			}
		}
		else if (buf[i] == 'D') {
			while (t->d != NULL && t->d->visit) {
				t = t->d;
			}
			if (t->d == NULL) {
				cur->d = NULL;
			}
			if (t->d != NULL && !(t->d->visit)) {
				t = t->d;
				cur->d = t;
				cur = t;
			}
		}
		cur->visit = true;
	}
	cout << cur->x << ' ' << cur->y << '\n';
	return 0;
}
