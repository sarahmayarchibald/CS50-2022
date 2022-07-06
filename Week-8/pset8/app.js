const form = document.querySelector('#contact-form');
const thanks = document.querySelector('#contact-title');
const msgSubmit = document.querySelector('#text-submitted');

form.addEventListener('submit', (e) => {
    e.preventDefault();
    thanks.innerHTML = 'Thank you!';
    form.innerHTML = '';
    msgSubmit.innerText = 'We will contact you within 2 business days';
});