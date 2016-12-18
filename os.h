#ifndef OS_H
#define OS_H
#include "job.h"
class OS
{
	public:
		void FCFS(Job* JobReadyQueue,int front,int rear);
		
	protected:
		
		//�洢���е�job������ 
		Job* JobArray;	
		
		//job�ľ������� 
		Job* JobReadyQueue;	
		
		//�洢���е�process�Ķ�ά���飬��ProcessArray[1][1]��ʼ
		//����ProcessArray[7][8]�����7����ҵ�ĵ�8������ 
		Process** ProcessArray;
		
		//�洢������process�Ķ�ά���飬��ProcessReadyQueue[1][1]��ʼ
		//����ProcessReadyQueue[7][8]�����7����ҵ�ĵ�8���������� 
		Process** ProcessReadyQueue;
};

#endif
