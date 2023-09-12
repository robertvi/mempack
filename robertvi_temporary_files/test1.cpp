/*
g++ -Wno-write-strings -Wno-deprecated -I/usr/include/boost -I/usr/include/ -lm -O2 robertvi_temporary_files/test1.cpp -o robertvi_temporary_files/test1


In file included from /usr/include/boost/tuple/tuple.hpp:24,
                 from /usr/include/boost/graph/graph_traits.hpp:16,
                 from /usr/include/boost/graph/random_layout.hpp:12,
                 from robertvi_temporary_files/test1.cpp:31:
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



// #include <string>
// #include <iostream>
// #include <vector>
// #include <fstream>
// #include <sstream>
// #include <vector>
// #include <map>
// #include <math.h>
// #include <stdio.h>
// #include <string.h>
#include <boost/graph/random_layout.hpp>
#include <boost/graph/circle_layout.hpp>
// #include "kamada_kawai_spring_layout.h"
#include <boost/random/linear_congruential.hpp>
#include <boost/graph/graph_utility.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/simple_point.hpp>
#include <boost/graph/connected_components.hpp> 
// #include "globals.h"
// #include "paramopt.h"


int main(int argc, char* argv[]){
	
  	return 1;
}

