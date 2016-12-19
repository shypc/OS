#ifndef JOB_H
#define JOB_H
#include "process.h"
#include "processqueue.h"
#include<string>
#include<iostream>
using namespace std;
class Job
{
	public:
		Job();
		~Job();
		//�ں����е�������� jobReadyQueue��Ա����ʱҪ��this-> 
		void FCFS(ProcessQueue processReadyQueue);	//�����ȷ��� 
		void SJF(ProcessQueue processReadyQueue);	//�̽������� 
		void RR(ProcessQueue processReadyQueue);	//ʱ��Ƭ��ת
		void PSA(ProcessQueue processReadyQueue);	//����Ȩ����
		void HRRN(ProcessQueue processReadyQueue);	//����Ӧ��
		void MFQ(ProcessQueue processReadyQueue);	//�༶�������� 
		
		//��ȡ��������
		ProcessQueue getprocessReadyQueue();
	
	private:
	//����ҵ���̵ľ�������
		ProcessQueue processReadyQueue;	
		
	//��ҵ��,����ҵ��Ψһ��ʶ
    unsigned int   pid;

    //��ҵ��
    string   processName;
    
    //�������ҵ������״̬��-1����������ɣ�0��������У�1�������,2�����������С�
    int state;

    //��ʾ����ҵ���������ȼ�
    unsigned int initPriority,nowPriority;


    

    //����Ǹ���ҵʹ��cpuʱ�����Ϣ��needTime�ǻ���Ҫ��ʱ�䣬maxTime���ܹ���ʱ��
    int   needTime,maxTime;

    //����������е�ʱ��
    int inTime;

    //�Ƿ�����������
    bool isInQueue;
	
	//
	Process* ProcessReadyQueue; 
    //�򿪵��ļ������Ϣ
    //struct  files_struct  *files;

    /*printProcess()
	pid
	state
	initPriority,nowPriority;
	processName
	needTime,maxTime;
	int intime;
	*/

};

#endif
