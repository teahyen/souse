export class Block {
    constructor(x, y)
    {
        this.x = x;
        this.y = y;
        this.size = 35;
        this.padding = 2
        this.fill = false;
        this.color = '#FF0000';
    }

    setBlockData(fill,color){
        this.fill = fill;
        this.color = color;
    }

    update(delta){

    }

    render(ctx){
        //사각형그리는 애, x,y랑 width, height 
        ctx.strokeStyle = 'rgba(0,0,0, 0.5)';
        ctx.strokeRect(
            this.x * this.size+this.padding, 
            this.y * this.size+this.padding, 
            this.size+1, this.size+1);

            if(this.fill){
                ctx.fillStyle = this.color;
                ctx.fillRect();
            }
    }
}