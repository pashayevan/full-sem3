#include <iostream>
#include <set>
#include <string>
#include <unordered_set>

int main() {
	std::unordered_set<std::string> words ;
	std::set<std::string> dublicate_words ;
	std::string word;
	while(std::cin>>word)
	{
	/*/	
	{
		dublicate_words.insert(word);
	} 
	else
	{
		words.insert(word);
	} 	 /*/
	
	auto[iter,has_been_inserted] = words.insert(word);
	if(!has_been_inserted)
	{
		dublicate_words.insert(word);
	}
}
for(const auto& word:dublicate_words)
{
	std::cout<<word<<"\n";
}
return 0;
}
