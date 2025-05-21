#pragma once

#include <algorithm>    // std::swap

namespace sortings
{
	class BubbleSort
	{
	public:

		template< class RandomAccessIterator >
		static void sort( RandomAccessIterator first, RandomAccessIterator last )
		{
			sort( first, last, std::less< typename std::iterator_traits<RandomAccessIterator>::value_type >() );
		}

		template< class RandomAccessIterator, class Compare >
		static void sort( RandomAccessIterator first, RandomAccessIterator last, Compare comp )
		{
			for( auto i = first; i != last; i++ )
			{
				for( auto j = i + 1; j != last; j++ )
				{
					if( comp( *j, *i ) )
						std::swap( *i, *j );
				}
			}
		}

	private:
		BubbleSort(void);
		~BubbleSort(void);
	};
}