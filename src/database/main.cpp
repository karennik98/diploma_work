#include <iostream>
#include "netlist_builder.hpp"
#include "../simulation/simulation.hpp"

int main()
{
    Netlist_builder builder("/home/karennik/Desktop/diploma/Event_Driven_Simulation/simulation/files/simple.v");
    builder.construct_netlist();
    boost::shared_ptr<Netlist> netlist = builder.get_netlist();
    netlist->printNetlist();
    return 0;
}
