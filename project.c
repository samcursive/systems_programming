/*

NAME : Sam Arshad
Course Number / Name : CS 4350-251: UNIX System Programming
Assignment Numbeer: Last Assignment - Project 
Due Date : April 23 2025
*/





#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>



#define NUM_PROCESSES 10
#define TIME_QUANTUM 100


// Global Arrays

int arrival_times[NUM_PROCESSES];
int durations[NUM_PROCESSES];
int priorities[NUM_PROCESSES];
int process_id[NUM_PROCESSES];



int main(void){

	//Header
	printf("\nNAME : Sam Arshad\n");
	printf("Course Nmber / Name : CS 4350 - UNIX Systems Programming\n");
	printf("Assignment Number : Project Assignment\n");
	printf("Due Date : April 23rd 2025\n");
	printf("\n\n\n");


	//intro
	printf("\nWelcome to Sam Arshad's Thread Program\n");
	printf("This program will simulate the CPU scheduling Algorithms in the following order:\n\n");
	printf("\n\t- First Come, First Served");
	printf("\n\t- Shortest Job First\n\t- Priority Queue\n\t- Round Robin\n");


    int farenheit = 0, count = 0;
    while (farenheit <= 300){
        farenheit += 10;
        count++;
    }
    printf("\nNum times the loop ran:%d\n ", count);


    printf("\nProgrammed by Sam Arshad\n 4-23-2025\n");
	printf("\n\nDebug Line\n\n\n");
	printf("\n\n\n\n\n\n\nDebug Line\n\n\n");
	return 0;
}