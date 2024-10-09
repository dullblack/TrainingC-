#include <iostream>
#include <list>
#include <algorithm>
#include <bitset>
#include <stdint.h>
#include <string>
#include <vector>
// namespace {} 匿名空间
using namespace std;

//class Node{
//	Point x;
//};

//class Point {
//public:
//	Point()
//	{
//		x = 0.0;
//		y = 0.0;
//	}
//	double x;
//	double y;
//};
//class Edge {
//public:
//	Point start;
//	Point end;
//};
//
//class Bigdata {
//public:
//	int a[100000];
//};
//
//class TogoGraph{
//public:
//	// 默认的Togograph 直接调用最初始化
//	TogoGraph() = default;
//	TogoGraph(const TogoGraph & another)
//	{
//		edge = another.edge;
//		big_data = another.big_data;
//		cout << "TogoGraph copy data!\n" << endl;
//	}
//	TogoGraph& operator=(const    TogoGraph& other)
//	{
//		if(&other != this)
//		{
//			edge = other.edge;
//			cout << "TogoGraph assign operator!\n" << endl;
//		}
//		cout << "TogoGraph shoud assign to your self!\n" << endl;
//		return *this;
//	}
////	Node node;
//	Edge edge;
//	Bigdata* big_data;
//};
//
//
//
//class RoutingRequest {
//	std::string way_point_start_;
//	std::string way_point_end_;
//};
//
//class Reader{
//
//};
//
//class Writer{
//
//};
//
//class RoutingComponet {
//private:
//	std::string name;
////	Reader reader_;
////	Writer writer_;
//public:
//	bool Process()
//	{
//		std::cout << "Process" << std::endl;
//		return true;
//	}
//	void setName(std::string& name)
//	{
//		this->name = name;
//	}
//
//	std::string GetName()
//	{
//		return this->name;
//	}
//};


class Component {
public:
	virtual bool Init() = 0;
	virtual bool Process() = 0;
	std::string component_name;
};

class PerceptionComponent : public Component {
public:
	bool Init() override
	{
		std::cout << "perception init!" << endl;
		return true;
	}

	bool Process() override
	{
		std::cout << "perception process" << endl;
		return true;
	}
};

int  main(int argc, char *argv[])
{
//	TogoGraph to1;
//	TogoGraph to2(to1);
//	TogoGraph to3;
//	to1 = to1;
//	const char*s1="gc";
//	RoutingComponet rc1; 
//	rc1.setName(s1);
//	cout << rc1.GetName() << endl;
//	Test test;	
//	Test test_2;
//	std::cout << "value of test.c is:" << test.c << std::endl;
//	test_2.c = 6;
//	std::cout << "value of test.c is:" << test.c << std::endl;
	PerceptionComponent perception;
	perception.Init();
	perception.Process();
	
	// 多态
	Component& componet = perception;
	perception.Init();
	perception.Process();

	std::vector<Component*> components;
	components.push_back(&perception);
	for(auto& component : components)
	{
		component->Init();
		component->Process();
	}
	return 0;
}


