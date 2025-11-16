#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Book Structure
struct Book {
    int id;
    char name[50];
    char author[50];
    char category[30];
    float price;
    float rating;
};

struct Book books[MAX];
int count = 0;


// Function Prototypes
void addBook();
void removeBook();
void searchBook();
void searchByID();
void searchByName();
void showAuthorsBooks();
void showCategoryBooks();
void updateBook();
void displayAllBooks();
void sortByPrice();
void sortByRating();
void top3Price();
void top3Rating();


// Add Book
void addBook() {
    if (count >= MAX) {
        printf("Database full!\n");
        return;
    }

    struct Book b;
    printf("Enter Book ID: ");
    scanf("%d", &b.id);
    printf("Enter Book Name: ");
    scanf(" %[^\n]", b.name);
    printf("Enter Author Name: ");
    scanf(" %[^\n]", b.author);
    printf("Enter Category: ");
    scanf(" %[^\n]", b.category);
    printf("Enter Price: ");
    scanf("%f", &b.price);
    printf("Enter Rating: ");
    scanf("%f", &b.rating);

    books[count++] = b;

    printf("Book added successfully!\n");
}

// Remove Book
void removeBook() {
    int id;
    printf("Enter Book ID to remove: ");
    scanf("%d", &id);

    int i, found = 0;
    for (i = 0; i < count; i++) {
        if (books[i].id == id) {
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found!\n");
        return;
    }

    for (int j = i; j < count - 1; j++)
        books[j] = books[j + 1];

    count--;
    printf("Book removed successfully!\n");
}

// Search Menu
void searchBook() {
    int choice;
    printf("\n1. Search by ID\n2. Search by Name\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) searchByID();
    else if (choice == 2) searchByName();
    else printf("Invalid choice!\n");
}

// Search by ID
void searchByID() {
    int id;
    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            printf("\nBook Found:\n");
            printf("%d | %s | %s | %s | %.2f | %.2f\n",
                   books[i].id, books[i].name, books[i].author, books[i].category,
                   books[i].price, books[i].rating);
            return;
        }
    }

    printf("Book not found!\n");
}

// Search by Name
void searchByName() {
    char name[50];
    printf("Enter Book Name: ");
    scanf(" %[^\n]", name);

    for (int i = 0; i < count; i++) {
        if (strcasecmp(books[i].name, name) == 0) {
            printf("\nBook Found:\n");
            printf("%d | %s | %s | %s | %.2f | %.2f\n",
                   books[i].id, books[i].name, books[i].author, books[i].category,
                   books[i].price, books[i].rating);
            return;
        }
    }

    printf("Book not found!\n");
}

// Show Books by Author
void showAuthorsBooks() {
    char author[50];
    printf("Enter Author Name: ");
    scanf(" %[^\n]", author);

    printf("\nBooks by %s:\n", author);
    int found = 0;

    for (int i = 0; i < count; i++) {
        if (strcasecmp(books[i].author, author) == 0) {
            printf("%d | %s | %s | %.2f | %.2f\n",
                   books[i].id, books[i].name, books[i].category,
                   books[i].price, books[i].rating);
            found = 1;
        }
    }

    if (!found) printf("No books found for this author.\n");
}

// Show Books by Category
void showCategoryBooks() {
    char cat[30];
    printf("Enter Category: ");
    scanf(" %[^\n]", cat);

    printf("\nBooks in category %s:\n", cat);
    int found = 0;

    for (int i = 0; i < count; i++) {
        if (strcasecmp(books[i].category, cat) == 0) {
            printf("%d | %s | %s | %.2f | %.2f\n",
                   books[i].id, books[i].name, books[i].author,
                   books[i].price, books[i].rating);
            found = 1;
        }
    }

    if (!found) printf("No books found in this category.\n");
}

// Update Book
void updateBook() {
    int id;
    printf("Enter Book ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            printf("Enter new Price: ");
            scanf("%f", &books[i].price);
            printf("Enter new Rating: ");
            scanf("%f", &books[i].rating);

            printf("Book updated successfully!\n");
            return;
        }
    }

    printf("Book not found!\n");
}

// Sort by Price (Descending)
void sortByPrice() {
    for (int i = 0; i < count - 1; i++)
        for (int j = i + 1; j < count; j++)
            if (books[j].price > books[i].price) {
                struct Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }

    printf("\nBooks Sorted by Price:\n");
    displayAllBooks();
}

// Sort by Rating (Descending)
void sortByRating() {
    for (int i = 0; i < count - 1; i++)
        for (int j = i + 1; j < count; j++)
            if (books[j].rating > books[i].rating) {
                struct Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }

    printf("\nBooks Sorted by Rating:\n");
    displayAllBooks();
}

// Top 3 by Price
void top3Price() {
    sortByPrice();
    printf("\nTop 3 Books by Price:\n");
    for (int i = 0; i < 3 && i < count; i++) {
        printf("%d | %s | %.2f\n", books[i].id, books[i].name, books[i].price);
    }
}

// Top 3 by Rating
void top3Rating() {
    sortByRating();
    printf("\nTop 3 Books by Rating:\n");
    for (int i = 0; i < 3 && i < count; i++) {
        printf("%d | %s | %.2f\n", books[i].id, books[i].name, books[i].rating);
    }
}

// Display All Books
void displayAllBooks() {
    if (count == 0) {
        printf("No books available.\n");
        return;
    }

    printf("\nAll Books:\n");
    for (int i = 0; i < count; i++) {
        printf("%d | %s | %s | %s | %.2f | %.2f\n",
               books[i].id, books[i].name, books[i].author, books[i].category,
               books[i].price, books[i].rating);
    }
}


// Main Menu
int main() {
    int choice;

    while (1) {
        printf("\n========== BOOK MANAGEMENT SYSTEM ============\n");
        printf("1. Add Book\n2. Remove Book\n3. Search Book\n4. Show Author's Books\n");
        printf("5. Show Category's Books\n6. Update Book\n7. Sort by Price\n8. Sort by Rating\n");
        printf("9. Top 3 Books by Price\n10. Top 3 Books by Rating\n11. Display All Books\n12. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(); break;
            case 2: removeBook(); break;


            case 3: searchBook(); break;
            case 4: showAuthorsBooks(); break;
            case 5: showCategoryBooks(); break;
            case 6: updateBook(); break;
            case 7: sortByPrice(); break;
            case 8: sortByRating(); break;
            case 9: top3Price(); break;
            case 10: top3Rating(); break;
            case 11: displayAllBooks(); break;
            case 12: exit(0);
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}
