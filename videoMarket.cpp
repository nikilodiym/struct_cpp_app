#include "videoMarket.h"

Disk::Disk() {
	movie_title = "";
	director = "";
	genre = "";
	popularity_rating = 0;
	price_disk = 0;
}

Disk::Disk(string movie_title, string director, string genre, double popularity_rating, int price_disk)
{
	this->movie_title = movie_title;
	this->director = director;
	this->genre = genre;
	this->popularity_rating = popularity_rating;
	this->price_disk = price_disk;
}

void Disk::setMovieTitle(string movie_title)
{
	this->movie_title = movie_title;

}
void Disk::setDirector(string director)
{
	this->director = director;
}
void Disk::setGenre(string genre)
{
	this->genre = genre;
}
void Disk::setPopularityRating(double popularity_rating)
{
	this->popularity_rating = popularity_rating;
}
void Disk::setPriceDisk(int price_disk)
{
	this->price_disk = price_disk;
}

string Disk::getMovieTitle() const
{
	return movie_title;
}
string Disk::getDirector() const
{
	return director;
}
string Disk::getGenre() const
{
	return genre;
}
double Disk::getPopularityRating() const
{
	return popularity_rating;
}
int Disk::getPriceDisk() const
{
	return price_disk;
}

Disk::~Disk()
{

}