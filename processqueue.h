#ifndef PROCESSQUEUE_H
#define PROCESSQUEUE_H
#include "process.h"
#include<string>
#include<iostream>
#define MaxLen 10	//���������ֻ��װ9������ 
using namespace std;

class ProcessQueue
{
	public:
		ProcessQueue();
		~ProcessQueue();
		bool ProcessQueueEmpty();				
		bool ProcessQueueFull();
		void ProcessQueueFont(Process *&x);		//ȡ��ͷԪ�أ�ע�⣺�������Զӡ� 
		
		void enProcessQueue(Process *x);		//��ջ 
		void outProcessQueue();					//��ջ 
		void OutputProcessQueue();				//�������process��pid 
	private:
		Process ** data;
		int rear;
		int font;
		int ProcessQueueNum;
};

#endif
