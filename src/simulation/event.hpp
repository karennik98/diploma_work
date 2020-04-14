#pragma once

#include "../database/net.hpp"
#include <boost/shared_ptr.hpp>

class Event 
{
public:
    size_t get_time() const                      { return m_time;         }
    const boost::shared_ptr<Net> get_net() const { return m_net;          }
    const size_t get_signal_value() const        { return m_signal_value; }
private:
    size_t m_time;
    boost::shared_ptr<Net> m_net;
    size_t m_signal_value;
};