#include <stdio.h>
#include <math.h>

int main (int argc, char** argv) {
	int maxX, maxY, maxShop;
	int shopLine[100], shopPosi[100];
	int myLine, myPosi;
	int result = 0;
	int i;
	int temp;
	
	// scan input
	scanf(" %d %d", &maxX, &maxY);
	scanf(" %d", &maxShop);
	for(i = 0; i < maxShop; i++) {
		scanf(" %d %d", &shopLine[i], &shopPosi[i]);
	}
	scanf(" %d %d", &myLine, &myPosi);
	
	// loop shop by shop
	for (i = 0; i < maxShop; i++) {
		// shop , me same line
		if (shopLine[i] == myLine) {
			result += abs(myPosi-shopPosi[i]);
		}
		// north, south
		else if (myLine == 1 && shopLine[i] == 2 || myLine == 2 && shopLine[i] == 1) {
			temp  = maxX - shopPosi[i] + maxY + maxX - myPosi;
			(temp>maxX+maxY)? temp = maxX+maxX+maxY+maxY-temp : temp;
			result += temp;
		}
		// east, west
		else if (myLine == 3 && shopLine[i] == 4 || myLine == 4 && shopLine[i] == 3) {
			temp  = maxY - shopPosi[i] + maxX + maxY - myPosi;
			(temp>maxX+maxY)? temp = maxX+maxX+maxY+maxY-temp : temp;
			result += temp;
		}
		// north, west
		else if (myLine == 1 && shopLine[i] == 3 || myLine == 3 && shopLine[i] == 1) {
			temp = myPosi + shopPosi[i];
			result += temp;
		}
		// me north, shop east
		else if (myLine == 1 && shopLine[i] == 4) {
			temp = (maxX-myPosi) + shopPosi[i];
			result += temp;
		}
		// me east, shop north
		else if (myLine == 4 && shopLine[i] == 1) {
			temp = myPosi + (maxX-shopPosi[i]);
			result += temp;
		}
		// me south, shop west
		else if (myLine == 2 && shopLine[i] == 3) {
			temp = myPosi + (maxY-shopPosi[i]);
			result += temp;
		}
		// me south, shop east
		else if (myLine == 2 && shopLine[i] == 4) {
			temp = (maxX-myPosi) + (maxY-shopPosi[i]);
			result += temp;
		}
		// me west, shop south
		else if (myLine == 3 && shopLine[i] == 2) {
			temp = (maxY-myPosi) + shopPosi[i];
			result += temp;
		}
		// me east, shop south
		else if (myLine == 4 && shopLine[i] == 2) {
			temp = (maxY-myPosi) + (maxX-shopPosi[i]);
			result += temp;
		}		
	}
	
	printf("%d\n", result);
	return 0;	
}
