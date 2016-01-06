/*
 * opachi.h
 *
 *  Created on: 05 gen 2016
 *      Author: Giada
 */

#ifndef OPACHI_H_
#define OPACHI_H_

typedef struct ListN * ListNRef;

ListNRef makeListN(int n);

void set(int i, int j, ListNRef l, int N);

int get(int i, ListNRef l, int N);

void deleteListN(ListNRef * l);

void printList(ListNRef l, int N);

#endif /* OPACHI_H_ */
