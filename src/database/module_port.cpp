#include "module_port.hpp"
#include "module_description.hpp"

#include <iostream>

/** \brief Constructor by name and type.
 *	\param[in] name - Name of the Port.
 *	\param[in] type - Type of the Port. 
 *	\param[in] parent_module_description - Description of the parent Module.
 */
Module_port::Module_port(const std::string name, PortType type, const Module_description * const parent_module_description)
	: Port(name, type)
	, m_parent_module_description( parent_module_description )
{
	
}

/// \brief Getter for the parent Module Description.
const Module_description * const Module_port::get_parent_module_description() const
{
	return m_parent_module_description;	
}

void Module_port::printPort() const
{
	// std::unique_ptr<Port> parent = reinterpret_cast<std::unique_ptr<Port>>(this);
	// parent->printPort();
	// printPort();
	std::cout<<"Module_port: "<<m_parent_module_description->printModule();
}

