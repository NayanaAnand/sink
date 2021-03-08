#include <iostream>
#include "ossie/ossieSupport.h"

#include "sink.h"
int main(int argc, char* argv[])
{
    sink_i* sink_servant;
    Component::start_component(sink_servant, argc, argv);
    return 0;
}

