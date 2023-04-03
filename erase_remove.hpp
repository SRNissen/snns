#ifndef SNNS_ERASE_REMOVE_HPP
#define SNNS_ERASE_REMOVE_HPP

#include <cassert>
#include <algorithm>
#include <vector>
#include <span>


namespace snns
{
	namespace //anonymous namespace for helper functions that shouldn't be used elsewhere
	{
l		bool valid_arguments_for_erase_indices(	std::vector<T> const & container,
							std::span<std::vector<T>::size_type> indices)
		{
			for(auto index : indices)
			{
				assert( index <  container.size() );
			}
		}
	}

	template<typename T>
	void erase_index(std::vector<T> container, std::vector<T>::size_type index)
	{
		assert( index < container.size() );
		assert( !container.empty() );

		auto itr_to_index = std::next(container.begin(), index);

		container.erase(itr_to_index);
	}

	template<typename T>
	void erase_indices(std::vector<T> container, std::span<std::vector<T>::size_type> indices)
	{
		assert(valid_arguments_for_erase_indices(container, indices));

		for(auto index : indices)
		{
			std::remove(
		}
	}
}

#endif
