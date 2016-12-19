#ifndef OS_H
#define OS_H
#include "job.h"
#include "jobqueue.h"
#include<string>
#include<iostream>
using namespace std;
class OS
{
	public:
		//在函数中调用自身的 jobReadyQueue成员变量时要加this-> 
		void FCFS(JobQueue jobReadyQueue);	//先来先服务 
		void SJF(JobQueue jobReadyQueue);	//短进程优先 
		void RR(JobQueue jobReadyQueue);	//时间片轮转
		void PSA(JobQueue jobReadyQueue);	//优先权调度
		void HRRN(JobQueue jobReadyQueue);	//高响应比
		void MFQ(JobQueue jobReadyQueue);	//多级反馈队列 
		
		//获取就绪队列
		JobQueue getJobReadyQueue();
	private:
		//job的就绪队列 
		JobQueue jobReadyQueue;	
		//存储所有的job的数组 
		Job* JobArray;		
		
		//存储所有的process的二维数组，从ProcessArray[1][1]开始
		//例：ProcessArray[7][8]代表第7个作业的第8个进程 
		Process** ProcessArray;
		
};

#endif
