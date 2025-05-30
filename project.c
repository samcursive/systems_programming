/*

NAME : Sam Arshad
Course Number / Name : CS 4350-251: UNIX System Programming
Assignment Numbeer: Last Assignment - Project 
Due Date : April 23 2025
*/




//Libraries and imports
#include <stdlib.h>	  // for general utilities such as EXIT_SUCCESS 
#include <stdio.h> 	  // for printf 
#include <pthread.h>  // for POSIX threading support
#include <stdbool.h>  // for using bool, true false





#define NUM_PROCESSES 10
#define TIME_QUANTUM 100


// Global Arrays
int arrival_times[NUM_PROCESSES];
int durations[NUM_PROCESSES] = {100, 20, 80, 20, 140, 220, 360, 120, 170, 110};
int priorities[NUM_PROCESSES] = {1, 10, 3, 5, 7, 2, 8, 4, 9, 6};
int process_id[NUM_PROCESSES] = {5, 11, 238, 254, 330, 637, 1042, 1163, 1364, 1404};

// Global variable to store schduling results
int total_duration[4] = {0}; // One for each scheduling algorithm (4in this case)


//Mutex for synchronization
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int current_thread = 0;



//Function Prototypes

//******************First Come First Served******************//
//**													   **//
void *fcfs_scheduling(void *arg);
//**													   **//
//***********************************************************//


//******************Shortest Job First***********************//
//**													   **//
void *sjf_scheduling(void *arg);
//**													   **//
//***********************************************************//



//*****************Priority Scheduling***********************//
//**													   **//
void *priority_scheduling(void *arg);
//**													   **//
//***********************************************************//



//******************Round Robin Scheduling*******************//
//**													   **//
void *round_robin_scheduling(void *arg);
//**													   **//
//***********************************************************//

int proc_id[NUM_PROCESSES], dur[NUM_PROCESSES], priority[NUM_PROCESSES];

void initialize_data(){
	for (int i = 0; i < NUM_PROCESSES; i++){
		proc_id[i] = process_id[i];
		dur[i] = durations[i];
		priority[i] = priorities[i]; 

		printf("Process ID = %d, \tDuration = %d, \tPriority = %d\n", proc_id[i], dur[i], priority[i]);
	}
}









// // First Come First Serve
// Process FCFS_QUEUE[NUM_PROCESSES];


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


	initialize_data();



   


    printf("\nProgrammed by Sam Arshad\n 4-23-2025\n");
	printf("\n\nDebug Line\n\n\n");
	printf("\n\n\n\n\n\n\nDebug Line\n\n\n");
	return 0;
}