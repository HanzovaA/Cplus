-- Vytvoøení databáze
CREATE DATABASE IF NOT EXISTS mvc_example;

-- Pouití vytvoøené databáze
USE mvc_example;

-- Vytvoøení tabulky
CREATE TABLE IF NOT EXISTS items (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(255) NOT NULL,
    pass INT NOT NULL,
    Role VARCHAR(255) NOT NULL
);

