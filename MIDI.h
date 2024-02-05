#include <MMSystem.h>

class MIDI
{
public:
	// конструктор по умолчанию
	MIDI();
	// пустой деструктор
	~MIDI() { }
	// общие функции
	void Open(char* szFileMidi); // загружает файл MIDI, открывает MCI
	void Play(); // воспроизводит MIDI-файл
	void Stop(); // останавливает воспроизведение
	void Close(); // закрывает устройство MCI
private:
	// буфер для хранения текстовой строки
	char szBuffer[350];
	// указатель на загруженный файл
	bool bLoad;
};