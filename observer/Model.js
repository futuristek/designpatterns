function Model() {
    this.observerList = [];
    this.counter = 0;

    this.attach = function (observer) {
        this.observerList.push(observer);
    }

    this.detach = function (observer) {
        this.observerList = this.observerList.filter(function (item) {
            return item !== observer;
        });
    }

    this.getCounter = function() {
        return this.counter;
    }

    this.notify = function () {
        this.counter += 1;
        for (var i = 0; i < this.observerList.length; i++) {
            this.observerList[i].update(this);
        }
        /*
        this.observerList.forEach(function (item) {
            item.update(this);
        });
        */
    }
}