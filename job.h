#ifndef JOB_H
#define JOB_H
#include "process.h"

class Job
{
	public:
		Job();
		void FCFS(Process* JobReadyQueue,int front,int rear);
		~Job();
	protected:
	
		
	//��ҵ��,����ҵ��Ψһ��ʶ
    unsigned int   pid;

    //��ҵ��
    String   processName;
    
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
