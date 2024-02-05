#include <MMSystem.h>

class MIDI
{
public:
	// ����������� �� ���������
	MIDI();
	// ������ ����������
	~MIDI() { }
	// ����� �������
	void Open(char* szFileMidi); // ��������� ���� MIDI, ��������� MCI
	void Play(); // ������������� MIDI-����
	void Stop(); // ������������� ���������������
	void Close(); // ��������� ���������� MCI
private:
	// ����� ��� �������� ��������� ������
	char szBuffer[350];
	// ��������� �� ����������� ����
	bool bLoad;
};