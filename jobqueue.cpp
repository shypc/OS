#include "jobqueue.h"

JobQueue::JobQueue()
{
	data=new Process*[MaxLen];
	font=-1;
	rear=-1;
	JobQueueNum=0;
}

JobQueue::~JobQueue()
{
}

bool JobQueue::JobQueueEmpty()
{
	if(font==rear)
		return 1;
	return 0;
}

bool JobQueue::JobQueueFull()
{
	if(font==(rear+1)%MaxLen)
		return 1;
	return 0;
}

void JobQueue::JobQueueFont(Process *&x)
{
	if(JobQueueEmpty() )
		cout<<"队空，不能取队头元素。"<<endl; 
	else{
		x=data[(font+1)%MaxLen];
	}	
}

void JobQueue::enJobQueue(Process *x)
{
	if(JobQueueFull())
	{
		cout<<"队满，不能入队。"<<endl;  
	}else{
		rear=(rear+1)%MaxLen;
		data[rear]=x;
		JobQueueNum++;
	}
}

void JobQueue::outJobQueue()
{
	if(JobQueueEmpty())
	{
		cout<<"队空，不能出队。"<<endl; 
	}else{
		font=(font+1)%MaxLen;
		JobQueueNum--;
	}
	
}


void JobQueue::OutputJobQueue()
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


