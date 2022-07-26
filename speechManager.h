#pragma once
#include <iostream>
#include <vector>
#include <map>
#include "speaker.h"
#include <algorithm>
#include <deque>
#include <numeric>
#include <fstream>
#include <ctime>
using namespace std;

//����ݽ�����������
class SpeechManager
{
public:
	
	//���캯��
	SpeechManager();

	//չʾ�˵�
	void show_Menu();

	//�˳�ϵͳ
	void exitSystem();

	//��������
	~SpeechManager();

	//��ʼ������������
	void initSpeech();

	//����12��ѡ��
	void createSpeaker();

	//��ʼ���� - �����������̿��ƺ���
	void startSpeech();

	//��ǩ
	void speechDraw();

	//����
	void speechContest();

	//��ʾ�������
	void showScore();

	//�����¼
	void saveRecord();

	//��ȡ��¼
	void loadRecord();

	//�ļ�Ϊ�յı�־
	bool fileIsEmpty;

	//�����¼
	map<int, vector<string>> m_Record;

	//��ʾ����÷�
	void showRecord();

	//��ռ�¼
	void clearRecord();
	
	//��Ա����
	//�����һ��ѡ�ֱ������
	vector<int>v1;

	//��һ�ֽ���ѡ�ֱ������
	vector<int>v2;

	//ʤ��ǰ����ѡ�ֱ������
	vector<int>vVictory;
	
	//��ű���Լ���Ӧ����ѡ��
	map<int, Speaker>m_Speaker;

	//��ű�������
	int m_Index;
};