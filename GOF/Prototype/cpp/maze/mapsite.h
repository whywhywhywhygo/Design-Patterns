//
// Created by gaojian on 19-2-27.
//

#ifndef CPP_MAPSITE_H
#define CPP_MAPSITE_H

#include <memory>

class MapSite : public std::enable_shared_from_this<MapSite> {
public:
	virtual ~MapSite() = 0;

	virtual std::shared_ptr<MapSite> clone() = 0;
};


#endif //CPP_MAPSITE_H
