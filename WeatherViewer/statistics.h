#ifndef WEATHER_VIEWER_STATISTICS_H
#define WEATHER_VIEWER_STATISTICS_H

#include <ostream>
#include <chrono>
#include "..\WeatherStation\station.h"

namespace WeatherViewer
{
    class Statistics
    {
        friend std::ostream& operator<<(std::ostream& os, Statistics const& statistics);

    private:
        WeatherStation::Station const& station_;
        auto const begin_{ std::chrono::system_clock::now() };

    public:
        explicit Statistics(WeatherStation::Station const& station);

        WeatherStation::Station const& getStation() const;
        std::chrono::system_clock::time_point getBegin() const;
    };
}

#endif // WEATHER_VIEWER_STATISTICS_H
