#include "job.h"

Job::Job(int pid,string   jobName,int initPriority,int nowPriority,
			int   needTime,int maxTime)
{
	this->pid=pid;
	this->jobName=jobName;
	this->state=0;
	this->initPriority=initPriority;
	this->nowPriority=nowPriority;
	this->needTime=needTime;
	this->maxTime=maxTime;
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

