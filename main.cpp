#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "videoMarket.h"

using namespace std;

bool sortByPopularity(const Disk* a, const Disk* b) {
	return a->getPopularityRating() > b->getPopularityRating();
}

bool sortByPrice(const Disk* a, const Disk* b) {
	return a->getPriceDisk() < b->getPriceDisk();
}

int main() {
	int count_disk = 10;
	Disk ** market = new Disk* [count_disk]
	{
		{ new Disk("The Shawshank Redemption", "Frank Darabont", "Drama", 9.3, 100) },
		{ new Disk("The Godfather", "Francis Ford Coppola", "Crime", 9.2, 90) },
		{ new Disk("The Dark Knight", "Christopher Nolan", "Action", 9.0, 80) },
		{ new Disk("The Lord of the Rings: The Return of the King", "Peter Jackson", "Adventure", 8.9, 70) },
		{ new Disk("Pulp Fiction", "Quentin Tarantino", "Crime", 8.9, 60) },
		{ new Disk("Forrest Gump", "Robert Zemeckis", "Drama", 8.8, 50)},
		{ new Disk("Inception", "Christopher Nolan", "Action", 8.8, 40)},
		{ new Disk("The Matrix", "Lana Wachowski", "Action", 8.7, 30) },
		{ new Disk("The Lord of the Rings: The Fellowship of the Ring", "Peter Jackson", "Adventure", 8.7, 20) },
		{ new Disk("The Lord of the Rings: The Two Towers", "Peter Jackson", "Adventure", 8.7, 10) }
	};
    do
    {
        system("cls");
        cout << "------Welcome to the video market------" << endl;
        cout << "1 -- List of disks in the market" << endl;
        cout << "2 -- Sort disks by popularity rating" << endl;
        cout << "3 -- Sort disks by price" << endl;
        cout << "4 -- Search for a disk by genre" << endl;
        cout << "5 -- Search for a disk by director" << endl;
        cout << "6 -- Search for a disk by movie title" << endl;
        cout << "7 -- Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
		system("cls");
        switch (choice) {
        case 1:
            cout << "List of disks in the market:" << endl;
            for (int i = 0; i < count_disk; ++i) {
                cout << "Disk " << i + 1 << ":" << endl;
                cout << "Movie title: " << market[i]->getMovieTitle() << endl;
                cout << "Director: " << market[i]->getDirector() << endl;
                cout << "Genre: " << market[i]->getGenre() << endl;
                cout << "Popularity rating: " << market[i]->getPopularityRating() << endl;
                cout << "Price disk: " << market[i]->getPriceDisk() << endl;
                cout << endl;
            }
            break;

        case 2:
            sort(market, market + count_disk, sortByPopularity);
            cout << "Disks sorted by popularity rating:" << endl;
            for (int i = 0; i < count_disk; ++i) {
                cout << "Disk " << i + 1 << ":" << endl;
                cout << "Movie title: " << market[i]->getMovieTitle() << endl;
                cout << "Director: " << market[i]->getDirector() << endl;
                cout << "Genre: " << market[i]->getGenre() << endl;
                cout << "Popularity rating: " << market[i]->getPopularityRating() << endl;
                cout << "Price disk: " << market[i]->getPriceDisk() << endl;
                cout << endl;
            }
            break;

        case 3:
            sort(market, market + count_disk, sortByPrice);
            cout << "Disks sorted by price:" << endl;
            for (int i = 0; i < count_disk; ++i) {
                cout << "Disk " << i + 1 << ":" << endl;
                cout << "Movie title: " << market[i]->getMovieTitle() << endl;
                cout << "Director: " << market[i]->getDirector() << endl;
                cout << "Genre: " << market[i]->getGenre() << endl;
                cout << "Popularity rating: " << market[i]->getPopularityRating() << endl;
                cout << "Price disk: " << market[i]->getPriceDisk() << endl;
                cout << endl;
            }
            break;

        case 4:
        {
            string search_genre;
            cout << "Enter genre to search: ";
            cin >> search_genre;
            cout << "Disks with genre \"" << search_genre << "\":" << endl;
            bool found_genre = false;
            for (int i = 0; i < count_disk; ++i) {
                if (market[i]->getGenre() == search_genre) {
                    found_genre = true;
                    cout << "Disk " << i + 1 << ":" << endl;
                    cout << "Movie title: " << market[i]->getMovieTitle() << endl;
                    cout << "Director: " << market[i]->getDirector() << endl;
                    cout << "Genre: " << market[i]->getGenre() << endl;
                    cout << "Popularity rating: " << market[i]->getPopularityRating() << endl;
                    cout << "Price disk: " << market[i]->getPriceDisk() << endl;
                    cout << endl;
                }
            }
            if (!found_genre) {
                cout << "No disks found with genre \"" << search_genre << "\"" << endl;
            }
        }
        break;

        case 5:
        {
            string search_director;
            cout << "Enter director to search: ";
            cin >> search_director;
            cout << "Disks directed by \"" << search_director << "\":" << endl;
            bool found_director = false;
            for (int i = 0; i < count_disk; ++i) {
                if (market[i]->getDirector() == search_director) {
                    found_director = true;
                    cout << "Disk " << i + 1 << ":" << endl;
                    cout << "Movie title: " << market[i]->getMovieTitle() << endl;
                    cout << "Director: " << market[i]->getDirector() << endl;
                    cout << "Genre: " << market[i]->getGenre() << endl;
                    cout << "Popularity rating: " << market[i]->getPopularityRating() << endl;
                    cout << "Price disk: " << market[i]->getPriceDisk() << endl;
                    cout << endl;
                }
            }
            if (!found_director) {
                cout << "No disks found directed by \"" << search_director << "\"" << endl;
            }
        }
        break;

        case 6:
        {
            string search_title;
            cout << "Enter movie title to search: ";
            cin.ignore();
            getline(cin, search_title);
            cout << "Disks with title \"" << search_title << "\":" << endl;
            bool found_title = false;
            for (int i = 0; i < count_disk; ++i) {
                if (market[i]->getMovieTitle() == search_title) {
                    found_title = true;
                    cout << "Disk " << i + 1 << ":" << endl;
                    cout << "Movie title: " << market[i]->getMovieTitle() << endl;
                    cout << "Director: " << market[i]->getDirector() << endl;
                    cout << "Genre: " << market[i]->getGenre() << endl;
                    cout << "Popularity rating: " << market[i]->getPopularityRating() << endl;
                    cout << "Price disk: " << market[i]->getPriceDisk() << endl;
                    cout << endl;
                }
            }
            if (!found_title) {
                cout << "No disks found with title \"" << search_title << "\"" << endl;
            }
        }
        break;

        case 7:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice. Please enter a number between 1 and 7." << endl;
            break;
        }

        /*cout << "List of disks in the market:" << endl;
        for (int i = 0; i < count_disk; i++)
        {
            cout << "Disk " << i + 1 << ":" << endl;
            cout << "Movie title: " << market[i]->getMovieTitle() << endl;
            cout << "Director: " << market[i]->getDirector() << endl;
            cout << "Genre: " << market[i]->getGenre() << endl;
            cout << "Popularity rating: " << market[i]->getPopularityRating() << endl;
            cout << "Price disk: " << market[i]->getPriceDisk() << endl;
            cout << endl;
        }*/
        system("pause");
    } while (true);
	
	delete[] market;

	system("pause");
    return 0;
} 