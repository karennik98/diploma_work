#include "port.hpp"

#include <iostream>

/** \brief Constructor by name and type.
 *	\param[in] name - Name of the Port.
 *	\param[in] type - Type of the Port. 
 */
Port::Port(const std::string name, PortType type)
	: m_name( name )
	, m_type( type )
{

}

/// \brief Getter for the name.
const std::string& Port::get_name() const
{
	return m_name;
}

/// \brief Getter for the type.
PortType Port::get_type() const
{
	return m_type;
}

void Port::printPort() const 
{
	std::cout<<"Name: "<<m_name<<", Type: "<<m_type<<", Value: "<<m_value;
}

void Port::set_value(uint8_t value)
{
	m_value = value;
}

uint8_t Port::get_value() const
{
	return m_value;
}

