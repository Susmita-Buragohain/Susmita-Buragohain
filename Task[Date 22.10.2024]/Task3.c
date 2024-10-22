Task 3: Nested Structures

	•	Objective: Create a structure to represent a book, which includes fields for title, author, and publication year. Additionally, create another structure for a library that contains an array of books. Write a program that initializes the library and displays the list of books.
	•	Requirements:
	•	Define a Book structure and a Library structure.
	•	Include an array of Book structures within the Library structure.
	•	Implement functions to add books to the library and display all books

CODE

#include <stdio.h>
#include <string.h>


struct Book {
    char title[100];
    char author[100];
    int publicationYear;
};


struct Library {
    struct Book books[100]; 
    int bookCount;       
};


void addBook(struct Library *library, const char *title, const char *author, int publicationYear) {

    if (library->bookCount < 100) {

        strcpy(library->books[library->bookCount].title, title);
        strcpy(library->books[library->bookCount].author, author);
        library->books[library->bookCount].publicationYear = publicationYear;
        library->bookCount++; 
    } else {
        printf("Library is full!\n");
    }
}


void displayBooks(const struct Library *library) {
    printf("Library contains %d book(s):\n", library->bookCount);

    int i;
    for (i = 0; i < library->bookCount; i++) {
        printf("Book %d: %s by %s (Published: %d)\n", 
               i + 1, 
               library->books[i].title, 
               library->books[i].author, 
               library->books[i].publicationYear);
    }
}

int main() {
    struct Library myLibrary = { .bookCount = 0 }; 


    addBook(&myLibrary, "1984", "George Orwell", 1949);
    addBook(&myLibrary, "To Kill a Mockingbird", "Harper Lee", 1960);
    addBook(&myLibrary, "The Great Gatsby", "F. Scott Fitzgerald", 1925);


    displayBooks(&myLibrary);

    return 0;
}
