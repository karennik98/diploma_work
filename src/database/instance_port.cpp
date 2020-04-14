#include "instance_port.hpp"
#include "module_instance.hpp"

#include <iostream>

/** \brief Constructor by name and type.
 *	\param[in] name - Name of the Port.
 *	\param[in] type - Type of the Port. 
 *	\param[in] parent_module_instance - Instance of the parent Module.
 */
Instance_port::Instance_port(const std::string name, PortType type, const Module_instance * const parent_module_instance)
	: Port(name, type)
	, m_parent_module_instance( parent_module_instance )
{
	
}

/// \brief Getter for the parent Module Instance.
const Module_instance * Instance_port::get_parent_module_instance() const
{
	return m_parent_module_instance;	
}

void Instance_port::printPort() const
{
	// std::unique_ptr<Port> parent = reinterpret_cast<std::unique_ptr<Port>>(this);
	// parent->printPort();
	// printPort();
	std::cout<<"Instance_port: "<<m_parent_module_instance->get_name();
}

