<h1>Upravit položku</h1>
<form action="/item/edit/?id=<?= htmlspecialchars($_GET['id']); ?>" method="post">
    <label for="itemName">Change name:</label>
    <input type="text" id="itemName" name="itemName" value="<?= htmlspecialchars($item['name'] ?? ''); ?>">
    <br>
    <label for="itemPass">Password:</label>
    <input type="password" id="itemPass" name="itemPass" >
    <br>
    <label for="itemRole">Role:</label>
    <select id="itemRole" name="itemRole" value="<?= htmlspecialchars($item['Role'] ?? ''); ?>">
                <option value="user">user</option>
                <option value="admin">admin</option>
                <option value="idk">idk</option>
            </select>
    <br>
    <button type="submit">submit changes</button>
</form>

<script>

    function vyplnit(){
        const xhttp = new XMLHttpRequest();
        xhttp.onload = function() {
            document.getElementById("itemName").value = this.responseText;
            document.getElementById("itemPass").value = this.responseText;
            document.getElementById("itemRole").value = this.responseText;
        }
        xhttp.open("GET","/vyplneni/?id=" + <?= $_GET['id']; ?>);
        xhttp.send();
    }
</script>