#ifndef MARKET_H
#define MARKET_H

#include <string>

using namespace std;

class Disk {
private:
    string movie_title;
    string director;
    string genre;
    double popularity_rating;
    int price_disk;

public:
    Disk();
    Disk(string movie_title, string director, string genre, double popularity_rating, int price_disk);

    void setMovieTitle(string movie_title);
    void setDirector(string director);
    void setGenre(string genre);
    void setPopularityRating(double popularity_rating);
    void setPriceDisk(int price_disk);

    string getMovieTitle() const;
    string getDirector() const;
    string getGenre() const;
    double getPopularityRating() const;
    int getPriceDisk() const;

    ~Disk();
};

#endif