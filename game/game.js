// Game Variables
let balance = 3000.00;
let betAmount = 1.00;
let currentMultiplier = 1.00;
let gameInProgress = false;
let interval;
let airplane = document.getElementById('airplane');
let multiplierDisplay = document.getElementById('multiplier');
let balanceDisplay = document.getElementById('balance');

// Start a new game
document.getElementById('bet-button').addEventListener('click', startGame);
document.getElementById('cashout-button').addEventListener('click', cashOut);

function startGame() {
    if (gameInProgress) return; // Prevent starting a new game if one is already in progress

    gameInProgress = true;
    currentMultiplier = 1.00;
    betAmount = parseFloat(document.getElementById('bet-amount').value);

    if (betAmount > balance) {
        alert("Insufficient balance!");
        return;
    }

    balance -= betAmount;
    balanceDisplay.textContent = `Balance: $${balance.toFixed(2)}`;

    // Animate airplane and increase multiplier
    airplane.style.left = '0';
    let airplaneLeft = 0;
    interval = setInterval(() => {
        airplaneLeft += 2;
        airplane.style.left = `${airplaneLeft}px`;

        if (currentMultiplier < 1000) {
            currentMultiplier += 0.02; // Increase multiplier over time
        }

        multiplierDisplay.textContent = `${currentMultiplier.toFixed(2)}x`;

        if (airplaneLeft >= 1000) {
            // Game crash (airplane reaches the end)
            clearInterval(interval);
            gameInProgress = false;
            alert('The airplane crashed! You lost your bet.');
        }
    }, 50);
}

function cashOut() {
    if (!gameInProgress) return;

    gameInProgress = false;
    clearInterval(interval);

    // Calculate the payout and add it to the balance
    balance += betAmount * currentMultiplier;
    balanceDisplay.textContent = `Balance: $${balance.toFixed(2)}`;
    alert(`You cashed out at ${currentMultiplier.toFixed(2)}x!`);
}
