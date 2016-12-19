#ifndef PROCESS_H
#define PROCESS_H
#include<string>
#include<iostream>
using namespace std;


class Process
{
	public:
		Process(int pid,string   jobName,int initPriority,int nowPriority,
			int   needTime,int maxTime);
		~Process();
		int getPid();
		void setPid(int pid);
		
	private:

	//���̺�,����ҵ��Ψһ��ʶ
    unsigned int   pid;

    //������
    string   processName;
    
    //����ǽ��̵�����״̬��-1����������ɣ�0��������У�1�������,2�����������С�
    int state;

    //��ʾ�˽��̵ĳ�ʼ���ȼ����������ȼ� 
    unsigned int initPriority,nowPriority;

    //����Ǹý���ʹ��cpuʱ�����Ϣ��needTime�ǻ���Ҫ��ʱ�䣬maxTime���ܹ���ʱ��
    int   needTime,maxTime;

    //����������е�ʱ��
    int inTime;
    

};

#endif
