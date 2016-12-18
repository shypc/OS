#ifndef JOB_H
#define JOB_H
#include "process.h"

class Job
{
	public:
		Job();
		void FCFS(Process* JobReadyQueue,int front,int rear);
		~Job();
	protected:
	
		
	//作业号,是作业的唯一标识
    unsigned int   pid;

    //作业名
    String   processName;
    
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
