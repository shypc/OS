#ifndef PROCESS_H
#define PROCESS_H
#include<string>
#include<iostream>
using namespace std;


class Process
{
	public:
		Process(int pid,string   jobName,int initPriority,int nowPriority,
			int   needTime,int maxTime);
		~Process();
		int getPid();
		void setPid(int pid);
		
	private:

	//进程号,是作业的唯一标识
    unsigned int   pid;

    //进程名
    string   processName;
    
    //这个是进程的运行状态，-1代表运行完成，0代表可运行，1代表就绪,2代表正在运行。
    int state;

    //表示此进程的初始优先级，运行优先级 
    unsigned int initPriority,nowPriority;

    //这个是该进程使用cpu时间的信息，needTime是还需要的时间，maxTime是总共的时间
    int   needTime,maxTime;

    //进入就绪队列的时间
    int inTime;
    

};

#endif
