#include "simulation.hpp"
#include "../database/module_port.hpp"

void Simulation::event_driven_simulation(const std::map<std::string, uint8_t>& primary_inputs)
{
    auto input_ports = m_netlist.get_input_ports();

    for(const auto& [name, value] : primary_inputs)
    {
        if(auto el = input_ports.find(name); el != input_ports.end())
        {
            el->second->set_value(value);
        }
    }

    size_t simulation_time = 0;
    std::list<boost::shared_ptr<Event>> event_list;

    for(const auto& [name, port] : input_ports)
    {
        // auto gates = port->
    }
}

void Simulation::set_netlist(const Netlist&  netlist)
{
    if(netlist.is_empty()) 
    {
        throw std::runtime_error("Empty netlist are passed");
    }

    m_netlist = netlist;
}