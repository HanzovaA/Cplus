<h1>Seznam uživatelu</h1>

<form>
    <label for="itemFilter">Filter: </label><input type="text" onkeyup="Filter(this.value)">
</form>

<ul id="demo">
    <?php foreach ($items as $item): ?>
        <li>
            <a href="/detail/?id=<?= $item['id']; ?>"><?= htmlspecialchars($item['name']); ?></a>
            <a href="/item/edit/?id=<?= $item['id']; ?>">Edit</a>
            <a href="/delete/?id=<?= $item['id']; ?>">Delete</a>
        </li>
    <?php endforeach; ?>
</ul>
<a href="/add/">add new user</a>

<br><br>

<a href="/about/">About us</a>

<script>

    function Filter(str) {
        const xmlhttp = new XMLHttpRequest();
        xmlhttp.onload = function() {
            document.getElementById("demo").innerHTML = this.responseText;
        }
        xmlhttp.open("GET", "/?q=" + str);
        xmlhttp.send();
    }

</script>