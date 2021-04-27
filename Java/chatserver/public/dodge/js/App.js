class App{
    constructor(selector){
        this.canvas = document.querySelector(selector);
        this.ctx = this.canvas.getContext("2d");

        this.bulletList = [];
        
        this.player = new Player(285, 185, 30, 30, "/dodge/images/mario.png");        

        this.bg = new Image();
        this.bg.src = "/dodge/images/bgmain.png";
        this.score = 0;

        this.gameStart();

        this.nextGenTime = 0;

        this.time = performance.now();
        requestAnimationFrame(this.frame);

        this.socket = new io();
    }

    frame = (timestamp) =>{
        let d = (timestamp - this.time) / 1000;
        this.time = timestamp;
        this.update(d);
        this.render(this.ctx);
        requestAnimationFrame(this.frame);
    };

    gameStart(){
        this.bulletList = [];
        this.score = 0;
        this.nextGenTime = 0;
        this.gameOver = false;
    }
    makeBullet(count){
        for(let i = 0; i < 20; i++){
            let b = new Bullet(600, 400, this.player);
            b.reset();
            this.bulletList.push(b)
        }
    }

    update(d){
        if(this.gameOver) return;
        this.score += d;
        if(this.score > this.nextGenTime){
            this.makeBullet(10);
            this.nextGenTime += 5;
        }
        this.player.update(d);
        this.bulletList.forEach(x => {
            x.update(d);
            if(this.player.checkCol(x)) {
                this.setgameOver = true;
            }
        });

        
    }
    setgameOver(){
        this.gameOver = true;
        let name = prompt("당신의 이름을 입력하세요.");

        console.log(name);
        if(name !=null){
            this.socket.emit("savescore",{name,score:this.score})
            
        }
    }

    render(ctx){
        
        ctx.clearRect(0,0, 600, 400);
        

        ctx.drawImage(this.bg, 0, 0, 600, 400);
        ctx.font = "25px Arial";
        let displayScore = Math.round(this.score * 100) / 100;
        ctx.fillText(displayScore, 500, 20);
        this.player.render(ctx);
        this.bulletList.forEach(x => x.render(ctx));

        if(this.gameOver) {
            ctx.save();
            ctx.fillStyle = "rgba(0,0,0,0.3)";
            ctx.fillRect(0, 0, 600, 400);
            ctx.textBaseline = "middle";
            ctx.textAlign = "center";
            ctx.fillStyle = "#fff";
            ctx.font = "40px Arial";
            ctx.fillText("Game Over", 300, 200);
            ctx.restore();
            return
        };
    }
}