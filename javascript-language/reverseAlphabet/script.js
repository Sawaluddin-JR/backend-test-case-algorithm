document.addEventListener('DOMContentLoaded', () => {
    const reverseButton = document.getElementById('reverseButton');

    reverseButton.addEventListener('click', () => {
        const inputString = document.getElementById('userInput').value;
        let alphabets = "";
        let numbers = "";
        for (let char of inputString) {
            if (isNaN(char)) {
                alphabets += char;
            } else {
                numbers += char;
            }
        }
        const reversedAlphabets = alphabets.split('').reverse().join('');
        const resultString = reversedAlphabets + numbers;
        document.getElementById('resultString').textContent = resultString;
    });
});
