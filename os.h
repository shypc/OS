#ifndef OS_H
#define OS_H
#include "job.h"
class OS
{
	public:
		void FCFS(Job* JobReadyQueue,int front,int rear);
		
	protected:
		
		//存储所有的job的数组 
		Job* JobArray;	
		
		//job的就绪队列 
		Job* JobReadyQueue;	
		
		//存储所有的process的二维数组，从ProcessArray[1][1]开始
		//例：ProcessArray[7][8]代表第7个作业的第8个进程 
		Process** ProcessArray;
		
		//存储就绪的process的二维数组，从ProcessReadyQueue[1][1]开始
		//例：ProcessReadyQueue[7][8]代表第7个作业的第8个就绪进程 
		Process** ProcessReadyQueue;
};

#endif
