#ifndef OS_H
#define OS_H
#include "job.h"
#include "jobqueue.h"
#include<string>
#include<iostream>
using namespace std;
class OS
{
	public:
		//�ں����е�������� jobReadyQueue��Ա����ʱҪ��this-> 
		void FCFS(JobQueue jobReadyQueue);	//�����ȷ��� 
		void SJF(JobQueue jobReadyQueue);	//�̽������� 
		void RR(JobQueue jobReadyQueue);	//ʱ��Ƭ��ת
		void PSA(JobQueue jobReadyQueue);	//����Ȩ����
		void HRRN(JobQueue jobReadyQueue);	//����Ӧ��
		void MFQ(JobQueue jobReadyQueue);	//�༶�������� 
		
		//��ȡ��������
		JobQueue getJobReadyQueue();
	private:
		//job�ľ������� 
		JobQueue jobReadyQueue;	
		//�洢���е�job������ 
		Job* JobArray;		
		
		//�洢���е�process�Ķ�ά���飬��ProcessArray[1][1]��ʼ
		//����ProcessArray[7][8]�����7����ҵ�ĵ�8������ 
		Process** ProcessArray;
		
};

#endif
