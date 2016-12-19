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
		void JobQueueFont(Job *&x);		//取队头元素，注意：并不出对队。 
		void JobQueuePriority(Job *&x);	//取优先级最高的元素，注意：并不出对队。
		void JobQueueResponse(Job *&x);	//取响应比最高的元素，注意：并不出对队。
		
		void enJobQueue(Job *x);		//入栈
		void outJobQueue();					//出栈，队头元素
		
		//出栈优先级最高的元素，注意：该元素之后的向前进一位，就像排队一样 
		void outJobQueuePriority();	
		
		//出栈优先级最高的元素，注意：该元素之后的向前进一位，就像排队一样 
		void outJobQueueResponse();	
		void OutputJobQueue();				//输出各个process的pid ,便于验证 
	private:
		Job ** data;
		int rear;
		int font;
		int JobQueueNum;
};

#endif
