<?php

class Model {
    private $db;

    public function __construct() {
        $this->db = new PDO('mysql:host=localhost;dbname=mvc_example', 'root');
        $this->db->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
    }

    public function getItems() {
        $query = $this->db->query('SELECT * FROM items;');
        return $query->fetchAll(PDO::FETCH_ASSOC);
    }

    public function addItem($name, $pass, $Role) {
        $stmt = $this->db->prepare('INSERT INTO items (name, pass, Role) VALUES (:name, :pass, :Role);');
        $stmt->bindParam(':name', $name);
        $stmt->bindParam(':pass', $pass);
        $stmt->bindParam(':Role', $Role);
        $stmt->execute();
    }

    public function getItemById($id) {
        $stmt = $this->db->prepare('SELECT * FROM items WHERE id = :id');
        $stmt->bindParam(':id', $id);
        $stmt->execute();
        return $stmt->fetch(PDO::FETCH_ASSOC);
    }

    public function deleteItem($id) {
        $stmt = $this->db->prepare('Delete FROM items WHERE id = :id');
        $stmt->bindParam(':id', $id);
        $stmt->execute();
    }

    public function updateItem($id, $name, $pass, $Role) {
        $stmt = $this->db->prepare('UPDATE items SET name = :name, pass = :pass, Role = :Role WHERE id = :id');
        $stmt->bindParam(':id', $id);
        $stmt->bindParam(':name', $name);
        $stmt->bindParam(':pass', $pass);
        $stmt->bindParam(':Role', $Role);
        $stmt->execute();
    }

    public function vyplneniItem($id){
        $stmt = $this->db->prepare('SELECT name FROM items WHERE id = :id');
        $stmt->bindParam(':id', $id);
        $stmt->execute();
        return $stmt->fetch(PDO::FETCH_ASSOC);


    }

    public function searchItems($query){
        $stmt = $this->db->prepare('SELECT * FROM items WHERE name LIKE :query');
        $str =  $query . '%';
        $stmt->bindParam(':query', $str);
        $stmt->execute();
        return $stmt->fetchAll(PDO::FETCH_ASSOC);
    }
}
