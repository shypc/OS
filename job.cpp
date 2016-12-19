#include "job.h"

Job::Job(int pid,string   jobName,int initPriority,int nowPriority,
			int   needTime,int maxTime,int inTime)
{
	this->pid=pid;
	this->jobName=jobName;
	this->state=0;
	this->initPriority=initPriority;
	this->nowPriority=nowPriority;
	this->needTime=needTime;
	this->maxTime=maxTime;
	this->inTime=inTime;
}

Job::~Job()
{
	
}

void Job::FCFS(ProcessQueue processReadyQueue)
{
	return;
}

ProcessQueue Job::getprocessReadyQueue()
{
	return processReadyQueue;
} 

int Job::getPid()
{
	return pid;
}

