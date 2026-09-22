function showMessage() {
    var name = document.getElementById("name").value;

    if (name === "") {
        document.getElementById("message").innerHTML =
            "Please enter your name.";
    } else {
        document.getElementById("message").innerHTML =
            "Welcome, " + name + "!";
    }
}
