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
		void ProcessQueuePriority(Process *&x);	//取优先级最高的元素，注意：并不出对队。
		void ProcessQueueResponse(Process *&x);	//取响应比最高的元素，注意：并不出对队。 
		
		void enProcessQueue(Process *x);		//入栈 
		void outProcessQueue();					//出栈 
		//出栈优先级最高的元素，注意：该元素之后的向前进一位，就像排队一样 
		void outProcessQueuePriority();	
		
		//出栈优先级最高的元素，注意：该元素之后的向前进一位，就像排队一样 
		void outProcessQueueResponse();	
		void OutputProcessQueue();				//输出各个process的pid 
	private:
		Process ** data;
		int rear;
		int font;
		int ProcessQueueNum;
};

#endif
