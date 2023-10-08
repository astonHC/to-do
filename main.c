#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define 	MAX_TASKS 		100
#define 	MAX_DESC		100

typedef struct TASK
{
	static int CHOICE;
	static int COMPLETED_TASKS;
	static int COUNT;
	static char* DESCRIPTION[MAX_DESC];
};

typedef struct TASK_COUNTER[MAX_TASKS];

static TASK* TASK;

static void ADD_TASK()
{
	if(TASK->COUNT >= MAX_TASKS)
	{
		printf("Task List is full!");
		return;
	}

	TASK_COUNTER[TASK->COUNT].DESCRIPTION = (char*)malloc, 1, sizeof(MAX_DESC * sizeof(char));

	if(TASK_COUNTER[TASK->COUNT].DESCRIPTION == NULL)
	{
		printf("DMA could not be allocated");
		return;
	}

	printf("Enter Task Description: ");
	scanf("%[^\n]", TASK_COUNTER[TASK->COUNT].DESCRIPTION);

	TASK_COUNTER[TASK->COUNT].COMPLETED_TASKS = 0;
	printf("Task Added!\n");

	TASK->COUNT++;
}

static void LIST_TASKS()
{
	if(TASK->COUNT == 0)
	{
		printf("No Tasks available\n");
		return;
	}

	printf("Tasks:\n");
	
	for(int i = 0; i < TASK->COUNT; ++i)
	{
		printf("%d. %s %s\n", i + 1, TASK_COUNTER[i].DESCRIPTION, TASK_COUNTER[i].COMPLETED_TASKS ? "[DONE!]" : "");
	}
}

static void FREE_TASK_DMA()
{
	for(int t = 0; t < TASK->COUNT; ++t)
	{
		free(TASK_COUNTER[t].DESCRIPTION);
	}
}

static void CHOICES()
{
	printf("\n Menu: \n");
	printf("1. Add Task\n");
	printf("2. List Task\n");
	printf("3. Quit \n");
	printf("Enter a choice\n");
	scanf("%d", &CHOICE);
}



int main(int argc, char** argv)
{
	TASK TASKS;

	do
	{
		CHOICES();

		switch(TASKS.CHOICE)
		{
			case 1:
			    ADD_TASK();
			    break;

			case 2:
			    LIST_TASKS();
			    break;

			case 3:
			    FREE_TASK_DMA();
			    break;

			default:
			    printf("Invalid Choice");
			    break;
		}
	} while (TASK.CHOICE != 3);

	return 0;
}
