#pragma once

#include <cstdint>

#include "../database/netlist.hpp"
#include "../database/netlist_builder.hpp"

#include "time_wheel.hpp"

class Simulation
{
public:
    Simulation() = default;
    Simulation(const Netlist& netlist)
        : m_netlist(netlist)
    {
    }
    
    void event_driven_simulation(const  std::map<std::string, uint8_t>& primary_inputs);

    void set_netlist(const Netlist& netlist);
private:
    Netlist m_netlist;
    TimeWheel m_time_wheel;
};