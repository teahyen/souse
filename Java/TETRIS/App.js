import {Game} from '/Game.js';

class App {
    constructor(){
    
        this.init();
        this.debug(); //테스트용 코드
        this.game = new Game();
        Game.instance = this.game;
    }

    init(){
        document.querySelector("#btnLogin").addEventListener("click", ()=> {
            let pc = document.querySelector(".page-container");
            pc.style.left = "-2048px";
        });
        document.querySelector("#btnStart").addEventListener("click", ()=>{
            this.game.start();
        });
        document.querySelector("#btnStart")
    }

    debug(){
        document.querySelector("#btnLogin").addEventListener("click", ()=>{
            e.preventDefault();
            return false;
        });
    }
}

window.addEventListener("load", e => {
    let app = new App();
});