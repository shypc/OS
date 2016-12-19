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
		void JobQueueFont(Job *&x);		//ȡ��ͷԪ�أ�ע�⣺�������Զӡ� 
		void JobQueuePriority(Job *&x);	//ȡ���ȼ���ߵ�Ԫ�أ�ע�⣺�������Զӡ�
		void JobQueueResponse(Job *&x);	//ȡ��Ӧ����ߵ�Ԫ�أ�ע�⣺�������Զӡ�
		
		void enJobQueue(Job *x);		//��ջ
		void outJobQueue();					//��ջ����ͷԪ��
		
		//��ջ���ȼ���ߵ�Ԫ�أ�ע�⣺��Ԫ��֮�����ǰ��һλ�������Ŷ�һ�� 
		void outJobQueuePriority();	
		
		//��ջ���ȼ���ߵ�Ԫ�أ�ע�⣺��Ԫ��֮�����ǰ��һλ�������Ŷ�һ�� 
		void outJobQueueResponse();	
		void OutputJobQueue();				//�������process��pid ,������֤ 
	private:
		Job ** data;
		int rear;
		int font;
		int JobQueueNum;
};

#endif
