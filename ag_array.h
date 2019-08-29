#ifndef AG_ARRAY_H
#define AG_ARRAY_H

namespace ag_std
{

	// Limitation:  
	// We use m_data[N+1], since if someone enters 
	// 0 for the array size, then the compiler gets
	// mad at us for initializing an array of size 0.

	// Hence, we're doing an array of size N+1. This 
	// is a problem if our type is huge, like a 
	// gigabyte, and now we're allocating an extra one
	// for no reason. 
	template 
	<typename T, std::size_t N>
	class array {
	private:
		T m_data[N+1];
		const std::size_t m_N = N;
		
	public: 
		constexpr bool empty() const noexcept {
			return m_N == 0;
		}
			





	
		


	};
} // namespace ag_std
#endif
