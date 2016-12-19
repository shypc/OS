#ifndef PROCESS_H
#define PROCESS_H
#include<string>
#include<iostream>
using namespace std;


class Process
{
	public:
		Process();
		~Process();
		int getPid();
		void setPid(int pid);
		
	private:
		
	    //����ǽ��̵�����״̬��-1���������У�0��������У�>0�����Ѿ�ֹͣ��
    int state;

    //��ʾ�˽��̵��������ȼ�
    unsigned int initPriority,nowPriority;


    //���̺�,�ǽ��̵�Ψһ��ʶ
  	unsigned int pid;

    //������
    string   processName;

    //����Ǹý���ʹ��cpuʱ�����Ϣ��needTime�ǻ���Ҫ��ʱ�䣬maxTime���ܹ���ʱ��
    int   needTime,maxTime;

    //����������е�ʱ��
    int inTime;

    //�Ƿ�����������
    bool isInQueue;

    //�򿪵��ļ������Ϣ
    struct  files_struct  *files;

    //�Ƿ����
    bool isFinish;
    




/*
pid
state
initPriority,nowPriority;
processName
needTime,maxTime;
int intime;

 */


};

#endif
