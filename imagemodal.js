function openModal(modalId) {
    let modal = document.getElementById(modalId);
    modal.classList.add("is-active");
}

function closeModal(modalId) {
    let modal = document.getElementById(modalId);
    modal.classList.remove("is-active");
}