/*
 * server.h
 *
 *  Created on: Jan 2, 2023
 *      Author: moham
 */

#ifndef SERVER_H_
#define SERVER_H_

#define MAX_SUB 10


char get_data();
void subscribe(void(*ptr)(void));
void unsubscribe(void(*ptr)(void));
void notify();

#endif /* SERVER_H_ */
