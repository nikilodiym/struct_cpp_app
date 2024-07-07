#ifndef MARKET_H
#define MARKET_H

#include <string>

using namespace std;

class Market {
private:
    string movie_title;
    string director;
    string genre;
    double popularity_rating;
    int price_disk;

public:
    Market();
    Market(const string& movie_title, const string& director, int genre, double popularity_rating, int price_disk);

    void setMovieTitle(string movie_title);
    void setDirector(string director);
    void setGenre(string genre);
    void setPopularityRating(double popularity_rating);
    void setPriceDisk(int price_disk);

    string getMovieTitle() const;
    string getDirector() const;
    int getGenre() const;
    double getPopularityRating() const;
    int getPriceDisk() const;

    ~Market();
};

#endif