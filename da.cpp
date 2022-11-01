#include <iostream>
#include "da.h"
using namespace std;
 
// public: 
My_DA:: My_DA(int b[]   , int size){
	data = new int[capacity];
	for(int i =0 ; i<size ; i++){
		push(b[i]);
	} 
}

My_DA:: My_DA(){
	capacity=1;
	size=0;
	data = new int[capacity];
}

My_DA:: ~ My_DA(){
	//destructor 
	delete [] data;
}

int My_DA:: get(int index){
	if(index >= size || index < 0){
		return -1;
	}
	else{
		return data[index];
	}
}

void My_DA :: push(int element){
	if(size == capacity){
		capacity*=2;
		int* olddata = data;
		data = new int[capacity];
		for(int i =0 ; i<size ; i++){
			data[i]  = olddata[i];
		}
		delete[] olddata;
	}
	data[size] = element;
	size++;
}

int My_DA:: pop(){
	if (size!=0){
		size--;
		int value = data[size];
		if(size<capacity/2){
			capacity/= 2;
			int* olddata = data;
			data = new int[capacity];
			for(int i =0 ; i<size ; i++){
				data[i]  = olddata[i];
			}
			delete[] olddata;
		}
		return value;
	}
	return -1;
}

void My_DA :: insert(int index, int element){
	if(index >= size){
		push(element);
	}
	else {
		if(size == capacity){
		capacity*=2;
		int* olddata = data;
		data = new int[capacity];
		for(int i =0 ; i<size ; i++){
			data[i]  = olddata[i];
		}
		delete[] olddata;
		}
		for(int i = size; i>index ; i--){
			data[i]= data[i-1];
		}
		data[index]= element;
		size++;
		}
	
	
	
}

int My_DA:: remove(int index){
	if(index>size-1 || size < 0){
		return -1;
	}
	else{
		int value = data[index];
		for(int i = index ; i<size ; i++){
			data[i] = data[i+1]; 
		}
		size--;
		if(size<capacity/2){
			capacity/= 2;
			int* olddata = data;
			data = new int[capacity];
			for(int i =0 ; i<size ; i++){
				data[i]  = olddata[i];
			}
			delete[] olddata;
		}

		return value;
	}
	
}

void My_DA:: print(){
	for(int i =0 ; i<size ; i++){
		cout << data[i]<<"," ;
	}
}

void My_DA:: clear(){
	size = 0;
	capacity = 1;
	data = new int [capacity];
}

int My_DA:: find(int element){
	for(int i = 0 ; i<size ; i++){
		if (data[i] == element){
			return i;
		}
	}
	return -1;
}

 int My_DA:: get_size(){
	 return size;
 }

 int My_DA::  get_capacity(){
	 return capacity;
 }





// implement all the methods in da.h
// feel free to add new helper methods whether private or public