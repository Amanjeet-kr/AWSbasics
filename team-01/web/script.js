const button = document.getElementById("welcome-btn");
const message = document.getElementById("message");

button.addEventListener("click", function () {
  message.textContent = "Hello from Team-01! Welcome to the AWS Club!";
});
