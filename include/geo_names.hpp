#pragma once

#include <span>
#include <string>
#include <string_view>

struct GeoNamesRegion
{
    std::string Location;
    float MinLatitude;
    float MinLongitude;
    float MaxLatitude;
    float MaxLongitude;
};

void GeoNamesFindRegion(std::vector<GeoNamesRegion>& regions, const std::string_view& prompt);