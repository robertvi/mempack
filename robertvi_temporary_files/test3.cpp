/*

g++ -Wno-write-strings -Wno-deprecated -I/usr/include/ -lm -O2 robertvi_temporary_files/test3.cpp -o robertvi_temporary_files/test3

*/

#include <boost/graph/circle_layout.hpp>

int main(int argc, char* argv[]){
	
  	return 1;
}

/*
In file included from /usr/include/boost/math/policies/policy.hpp:20,
                 from /usr/include/boost/math/constants/constants.hpp:12,
                 from /usr/include/boost/graph/circle_layout.hpp:12,
                 from robertvi_temporary_files/test3.cpp:7:
/usr/include/boost/graph/circle_layout.hpp: In function ‘void boost::circle_graph_layout(const VertexListGraph&, PositionMap, Radius ’:
/usr/include/boost/graph/circle_layout.hpp:35:5: error: ‘property_traits’ was not declared in this scope; did you mean ‘property_value’?
   35 |     BOOST_STATIC_ASSERT(
      |     ^~~~~~~~~~~~~~~~~~~
/usr/include/boost/graph/circle_layout.hpp:35:5: error: expected primary-expression before ‘>’ token
   35 |     BOOST_STATIC_ASSERT(
      |     ^~~~~~~~~~~~~~~~~~~
/usr/include/boost/graph/circle_layout.hpp:35:5: error: ‘::value_type’ has not been declared
   35 |     BOOST_STATIC_ASSERT(
      |     ^~~~~~~~~~~~~~~~~~~
*/