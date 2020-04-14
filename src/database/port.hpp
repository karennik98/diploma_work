#ifndef PORT_H
#define PORT_H

#include <string>

/// Enum for holding port Type.
enum PortType
{
	IN = 1,
	OUT = 2,
	INOUT = 3
};

/// Class for Port.
class Port
{
public:

	/** \brief Constructor by name and type.
	 *	\param[in] name - Name of the Port.
	 *	\param[in] type - Type of the Port. 
	 */
	Port(const std::string name, PortType type);

	/// \brief Getter for the name.
	virtual const std::string& get_name() const;

	/// \brief Getter for the type.
	virtual PortType get_type() const;

	virtual void set_value(uint8_t value);
	
	virtual uint8_t get_value() const;

	virtual void printPort() const;

private:

	/// Name of the Port.
	std::string m_name;

	/// Type of the Port.
	PortType m_type;

	uint8_t m_value; 

};

#endif // PORT_H
