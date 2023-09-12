/*

g++ -Wno-write-strings -Wno-deprecated -I./robertvi_temporary_files/boost_1_83_0 -lm -O2 robertvi_temporary_files/test4.cpp -o robertvi_temporary_files/test4

*/

#include <boost/graph/circle_layout.hpp>

int main(int argc, char* argv[]){
	
  	return 1;
}

/*
In file included from ./robertvi_temporary_files/boost_1_83_0/boost/math/tools/assert.hpp:18,
                 from ./robertvi_temporary_files/boost_1_83_0/boost/math/tools/precision.hpp:13,
                 from ./robertvi_temporary_files/boost_1_83_0/boost/math/constants/constants.hpp:13,
                 from ./robertvi_temporary_files/boost_1_83_0/boost/graph/circle_layout.hpp:12,
                 from robertvi_temporary_files/test4.cpp:7:
./robertvi_temporary_files/boost_1_83_0/boost/graph/circle_layout.hpp: In function ‘void boost::circle_graph_layout(const VertexListGraph&, PositionMap, Radius)’:
./robertvi_temporary_files/boost_1_83_0/boost/graph/circle_layout.hpp:36:9: error: ‘property_traits’ was not declared in this scope; did you mean ‘property_value’?
   36 |         property_traits< PositionMap >::value_type::dimensions >= 2);
      |         ^~~~~~~~~~~~~~~
./robertvi_temporary_files/boost_1_83_0/boost/static_assert.hpp:71:55: note: in definition of macro ‘BOOST_STATIC_ASSERT’
   71 | #     define BOOST_STATIC_ASSERT( ... ) static_assert(__VA_ARGS__, #__VA_ARGS__)
      |                                                       ^~~~~~~~~~~
./robertvi_temporary_files/boost_1_83_0/boost/graph/circle_layout.hpp:36:38: error: expected primary-expression before ‘>’ token
   36 |         property_traits< PositionMap >::value_type::dimensions >= 2);
      |                                      ^
./robertvi_temporary_files/boost_1_83_0/boost/static_assert.hpp:71:55: note: in definition of macro ‘BOOST_STATIC_ASSERT’
   71 | #     define BOOST_STATIC_ASSERT( ... ) static_assert(__VA_ARGS__, #__VA_ARGS__)
      |                                                       ^~~~~~~~~~~
./robertvi_temporary_files/boost_1_83_0/boost/graph/circle_layout.hpp:36:41: error: ‘::value_type’ has not been declared
   36 |         property_traits< PositionMap >::value_type::dimensions >= 2);
      |                                         ^~~~~~~~~~
./robertvi_temporary_files/boost_1_83_0/boost/static_assert.hpp:71:55: note: in definition of macro ‘BOOST_STATIC_ASSERT’
   71 | #     define BOOST_STATIC_ASSERT( ... ) static_assert(__VA_ARGS__, #__VA_ARGS__)
      |                                                       ^~~~~~~~~~~
*/