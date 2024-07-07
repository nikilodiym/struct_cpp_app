#include <iostream>
#include <string>
#include "videoMarket.h"

using namespace std;

Market::Market() {
    movie_title = "";
    director = "";
    genre = "";
    popularity_rating = 0.0;
    price_disk = 0;
}

Market::Market(const string& movie_title, const string& director, const string& genre, double popularity_rating, int price_disk) {
    this->movie_title = movie_title;
    this->director = director;
    this->genre = genre;
    this->popularity_rating = popularity_rating;
    this->price_disk = price_disk;
}

void Market::setMovieTitle(const string& movie_title) {
    this->movie_title = movie_title;
}

void Market::setDirector(const string& director) {
    this->director = director;
}

void Market::setGenre(const string& genre) {
    this->genre = genre;
}

void Market::setPopularityRating(double popularity_rating) {
    this->popularity_rating = popularity_rating;
}

void Market::setPriceDisk(int price_disk) {
    this->price_disk = price_disk;
}

string Market::getMovieTitle() const {
    return movie_title;
}

string Market::getDirector() const {
    return director;
}

string Market::getGenre() const {
    return genre;
}

double Market::getPopularityRating() const {
    return popularity_rating;
}

int Market::getPriceDisk() const {
    return price_disk;
}
