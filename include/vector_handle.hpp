#include <vector>

namespace vh
{

template<typename T>
class Handle
{
public:
	Handle(std::vector<T>& container, uint64_t index)
		: m_container(container)
		, m_index(index)
	{}

	T& operator->()
	{
		return m_container[m_index];
	}

	T& operator*()
	{
		return m_container[m_index];
	}

private:
	std::vector<T>& m_container;
	const uint64_t m_index;
};


}