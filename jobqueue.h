#ifndef JOBQUEUE_H
#define JOBQUEUE_H
#include "job.h"
#include<string>
#include<iostream>
#define MaxLen 10	//���������ֻ��װ9������ 
using namespace std;

class JobQueue
{
	public:
		JobQueue();
		~JobQueue();
		bool JobQueueEmpty();				
		bool JobQueueFull();
		void JobQueueFont(Process *&x);		//ȡ��ͷԪ�أ�ע�⣺�������Զӡ� 
		
		void enJobQueue(Process *x);		//��ջ 
		void outJobQueue();					//��ջ 
		void OutputJobQueue();				//�������process��pid 
	private:
		Job ** data;
		int rear;
		int font;
		int JobQueueNum;
};

#endif
