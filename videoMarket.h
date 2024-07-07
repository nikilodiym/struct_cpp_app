#ifndef MARKET_H
#define MARKET_H

#include <string>

using namespace std;

class Market {
private:
    string movie_title;
    string director;
    int genre;
    double popularity_rating;
    int price_disk;

public:
    Market();
    Market(const string& movie_title, const string& director, int genre, double popularity_rating, int price_disk);

    void setCompany(const string& movie_title);
    void setColor(const string& director);
    void setPower(int genre);
    void setVolume(double popularity_rating);
    void setHeatingTemperature(int price_disk);

    string getCompany() const;
    string getColor() const;
    int getPower() const;
    double getVolume() const;
    int getHeatingTemperature() const;

    ~Market();
};

#endif