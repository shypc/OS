#include "process.h"

Process::Process(int pid,string   processName,int initPriority,int nowPriority,
			int   needTime,int maxTime)
{
	this->pid=pid;
	this->processName=processName;
	this->state=0;
	this->initPriority=initPriority;
	this->nowPriority=nowPriority;
	this->needTime=needTime;
	this->maxTime=maxTime;
}

Process::~Process()
{
}

int Process::getPid()
{
	return pid;
}
void Process::setPid(int pid)
{
	this->pid=pid;
}

