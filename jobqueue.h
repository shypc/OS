#ifndef JOBQUEUE_H
#define JOBQUEUE_H
#include "job.h"
#include<string>
#include<iostream>
#define MaxLen 10	//队列中最多只能装9个进程 
using namespace std;

class JobQueue
{
	public:
		JobQueue();
		~JobQueue();
		bool JobQueueEmpty();				
		bool JobQueueFull();
		void JobQueueFont(Process *&x);		//取队头元素，注意：并不出对队。 
		
		void enJobQueue(Process *x);		//入栈 
		void outJobQueue();					//出栈 
		void OutputJobQueue();				//输出各个process的pid 
	private:
		Job ** data;
		int rear;
		int font;
		int JobQueueNum;
};

#endif
