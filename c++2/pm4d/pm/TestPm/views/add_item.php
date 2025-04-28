<h1>add new user</h1>
<form action="/add/" method="post">
    <label for="itemName">Name:</label>
    <input type="text" id="itemName" name="itemName" required>
    <br>
    <label for="itemPass">Password:</label>
    <input type="password" id="itemPass" name="itemPass" required>
    <br>
    <label for="itemRole">Role:</label>
            <select id="itemRole" name="itemRole" required>
                <option value="user">user</option>
                <option value="admin">admin</option>
                <option value="idk">idk</option>
            </select>
    <button type="submit">add</button>
</form>
