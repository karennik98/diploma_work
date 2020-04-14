#pragma onec
#include "event.hpp"

#include <vector>
#include <list>

class TimeWheel
{
public:
    using EventList = std::vector<std::list<boost::shared_ptr<Event>>>;
private:
    EventList m_events;
};