#include <iostream>
#include <functional>
#include <queue>
#include <vector>

int main() {
	std::priority_queue<int, std::vector<int>, std::greater<int>>pq;
	for (int x: {3,14,15,92,6}){
		pq.push(x);
	}
	while(!pq.empty()){
		std::cout<<pq.top()<<"\n";
		pq.pop();
	}
	return 0;
}
