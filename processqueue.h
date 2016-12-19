#ifndef PROCESSQUEUE_H
#define PROCESSQUEUE_H
#include "process.h"
#include<string>
#include<iostream>
#define MaxLen 10	//队列中最多只能装9个进程 
using namespace std;

class ProcessQueue
{
	public:
		ProcessQueue();
		~ProcessQueue();
		bool ProcessQueueEmpty();				
		bool ProcessQueueFull();
		void ProcessQueueFont(Process *&x);		//取队头元素，注意：并不出对队。 
		
		void enProcessQueue(Process *x);		//入栈 
		void outProcessQueue();					//出栈 
		void OutputProcessQueue();				//输出各个process的pid 
	private:
		Process ** data;
		int rear;
		int font;
		int ProcessQueueNum;
};

#endif
