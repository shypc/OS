#ifndef JOB_H
#define JOB_H
#include "process.h"
#include "processqueue.h"
#include<string>
#include<iostream>
using namespace std;
class Job
{
	public:
		Job();
		~Job();
		//在函数中调用自身的 jobReadyQueue成员变量时要加this-> 
		void FCFS(ProcessQueue processReadyQueue);	//先来先服务 
		void SJF(ProcessQueue processReadyQueue);	//短进程优先 
		void RR(ProcessQueue processReadyQueue);	//时间片轮转
		void PSA(ProcessQueue processReadyQueue);	//优先权调度
		void HRRN(ProcessQueue processReadyQueue);	//高响应比
		void MFQ(ProcessQueue processReadyQueue);	//多级反馈队列 
		
		//获取就绪队列
		ProcessQueue getprocessReadyQueue();
	
	private:
	//该作业进程的就绪对列
		ProcessQueue processReadyQueue;	
		
	//作业号,是作业的唯一标识
    unsigned int   pid;

    //作业名
    string   processName;
    
    //这个是作业的运行状态，-1代表运行完成，0代表可运行，1代表就绪,2代表正在运行。
    int state;

    //表示此作业的运行优先级
    unsigned int initPriority,nowPriority;


    

    //这个是该作业使用cpu时间的信息，needTime是还需要的时间，maxTime是总共的时间
    int   needTime,maxTime;

    //进入就绪队列的时间
    int inTime;

    //是否进入就绪队列
    bool isInQueue;
	
	//
	Process* ProcessReadyQueue; 
    //打开的文件相关信息
    //struct  files_struct  *files;

    /*printProcess()
	pid
	state
	initPriority,nowPriority;
	processName
	needTime,maxTime;
	int intime;
	*/

};

#endif
