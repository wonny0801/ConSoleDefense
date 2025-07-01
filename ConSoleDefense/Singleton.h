#pragma once
template<typename T>
class Singleton // 싱글톤은 프로그램 내에 딱 하나만 존재해야하는 객체... and 어디서나 접근 가능해야함...
{
private:
	static T* instance; // static : 전역변수... 어디서나 접근 가능하지만 프라이빗..
	// ***중요*** 전역변수 instance가 정의가 안되어있기 때문에 console.cpp에서 초기화 필수...!!!

protected: // 생성자를 pretected 로 막아놓았기 때문에 이 클래스를 상속받은 GameMng클래스에서만 접근 가능함...
	Singleton()
	{

	}
	~Singleton()
	{

	}
	Singleton& operator=(const Singleton& a) = delete; // 오퍼레이터를 통해 싱글톤 복제 방어...
	Singleton(const Singleton&) = delete;

public:
	static T* Getles() // 전역함수... 이 함수를 통해 모든 행동을 할 예정...
	{
		if (instance == nullptr)
		{
			instance =  new T();
		}
		return instance;
	}
};