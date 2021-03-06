/*
 * Implementation author: Will Dey
 */

#include "agt.h"
#include "../sms.h"

namespace stems {
namespace sms {

agt::agt(size_type size, sms& sms, std::map<std::string, stat>& stats) :
        super(size), m_sms(sms), m_stats(stats) {
}

void agt::pre_map_eviction(const value_type& elem) {
    m_stats["agt-evictions"]++;
    m_sms.commit_to_pst(elem.first);
}

}
}
