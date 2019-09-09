#ifndef AG_ARRAY_H
#define AG_ARRAY_H

#include <stdexcept>

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
		// type aliases 
		using value_type = T;
		using size_type = std::size_t;
		using difference_type = std::ptrdiff_t;
		using reference = value_type&;
		using const_reference = const value_type&;
		using pointer = value_type*;
		using const_pointer = const value_type*;
		// TODO: Need to do iterators aliases

		
	public: 
		// Data members
		T m_data[N+1];
		const std::size_t m_N = N;
		

		// Element Access	
		constexpr T& at(std::size_t pos) {
			if(pos >= m_N) {
				throw std::out_of_range("pos > size of array");
			} else {
				return m_data[pos];
			}
		}

		constexpr reference operator[](size_type pos) {
			return m_data[pos];
		}

		constexpr reference front() {
			return m_data[0];
		}

		constexpr reference back() {
			return m_data[m_N - 1];
		}

		constexpr T* data() noexcept  {
			if(empty()) { 
				return NULL;
			} else {
				return m_data;
			}
		}

		// Capacity 
		constexpr bool empty() const noexcept {
			return m_N == 0;
		}
		constexpr std::size_t size() const noexcept {
			return m_N;
		}

		constexpr std::size_t max_size() const noexcept {
			return m_N;
		}

		// Member operations
		constexpr void fill(const_reference value) {
			for (size_type i = 0; i < m_N; i++) {
				m_data[i] = value;
			}
		}
/*
		constexpr void swap(std::array &other) {
			for (size_type i = 0; i < m_N; i++) {
				value_type c(m_data[i]);
				m_data[i] = other.m_data[i];
				other.m_data[i] = c;
			}
		}
*/

	};
} // namespace ag_std

#endif
