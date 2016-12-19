#include "process.h"

Process::Process()
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

Process::~Process()
{
}
