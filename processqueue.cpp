#include "processqueue.h"

ProcessQueue::ProcessQueue()
{
	data=new Process*[MaxLen];
	font=-1;
	rear=-1;
	ProcessQueueNum=0;
}

ProcessQueue::~ProcessQueue()
{
}

bool ProcessQueue::ProcessQueueEmpty()
{
	if(font==rear)
		return 1;
	return 0;
}

bool ProcessQueue::ProcessQueueFull()
{
	if(font==(rear+1)%MaxLen)
		return 1;
	return 0;
}

void ProcessQueue::ProcessQueueFont(Process *&x)
{
	if(ProcessQueueEmpty() )
		cout<<"队空，不能取队头元素。"<<endl; 
	else{
		x=data[(font+1)%MaxLen];
	}	
}

void ProcessQueue::enProcessQueue(Process *x)
{
	if(ProcessQueueFull())
	{
		cout<<"队满，不能入队。"<<endl;  
	}else{
		rear=(rear+1)%MaxLen;
		data[rear]=x;
		ProcessQueueNum++;
	}
}

void ProcessQueue::outProcessQueue()
{
	if(ProcessQueueEmpty())
	{
		cout<<"队空，不能出队。"<<endl; 
	}else{
		font=(font+1)%MaxLen;
		ProcessQueueNum--;
	}
	
}


void ProcessQueue::OutputProcessQueue()
{
	int f=font;
	int r=rear;
//	cout<<"从队头到队尾的元素为："<<endl;
	while(f!=r)
	{
		f=(f+1)%MaxLen; 
		cout<<data[f]->getPid()<<"	"; 
	} 
	cout<<endl;
	return;
}


