#include <stdio.h>
#include <stdlib.h>

int set(int bit ,int num){
int var = 1<<bit ;
return num | var ;
}

int clear(int bit , int num){
int var = 1 << bit ;
var = ~var ;
return num & var ;
}


int toggle (int bit , int num){
int var = 1 << bit ;
return num ^ var ;
}
int get (int bit , int num){
int var = 1<< bit;
var = var & num;
var = var >> bit;
return var;
}
