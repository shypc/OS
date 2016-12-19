#include "jobqueue.h"

JobQueue::JobQueue()
{
	data=new Job*[MaxLen];
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

void JobQueue::JobQueueFont(Job *&x)
{
	if(JobQueueEmpty() )
		cout<<"�ӿգ�����ȡ��ͷԪ�ء�"<<endl; 
	else{
		x=data[(font+1)%MaxLen];
	}	
}

void JobQueue::enJobQueue(Job *x)
{
	if(JobQueueFull())
	{
		cout<<"������������ӡ�"<<endl;  
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
		cout<<"�ӿգ����ܳ��ӡ�"<<endl; 
	}else{
		font=(font+1)%MaxLen;
		JobQueueNum--;
	}
}


void JobQueue::OutputJobQueue()
{
	int f=font;
	int r=rear;
//	cout<<"�Ӷ�ͷ����β��Ԫ��Ϊ��"<<endl;
	while(f!=r)
	{
		f=(f+1)%MaxLen; 
		cout<<data[f]->getPid()<<"	"; 
	} 
	cout<<endl;
	return;
}


