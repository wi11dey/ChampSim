/*
 * Implementation author: Will Dey
 */

#include "pst.h"

namespace stems {
namespace sms {

pst::pst(size_type max_size, std::map<std::string, stat>& stats) :
        super(max_size), m_stats(stats) {
}

void pst::pre_map_eviction(const value_type& elem) {
    m_stats["pst-evictions"]++;
}

}
}
