public abstract class Shape {
    /*Зорилго: Дүрсийн байгуулагч функц
     *Параметр: String name - дүрсийг нэрлэх нэр
     *Буцаах утга: Улга олгох учир утга буцаахгүй
     */
    public Shape(String name, double length){
        //нэрэнд утга олгох функцийг ашиглах
        setName(name);
        //талын уртад утга олгох функцийг ашиглах
        setLength(length);
    }

    //Дүрсийн нэр
    protected String name;
    /*Зорилго: Дүрсийн нэрэнд утга оноох
     *Параметр: String name - дүрсийг нэрлэх нэр
     *Буцаах утга: Улга олгох учир утга буцаахгүй
     */
    public void setName(String name){
        //дүрсийн нэрэнд параметрийн утгыг олгох
        this.name = name;
    }
    /*Зорилго: Дүрсийн нэрйиг авах
     *Параметр: байхгүй
     *Буцаах утга: name~String төрлийн дүрсийн нэр
     */
    public String getName(){
        //дүрсийн нэрийг буцаах
        return name;
    }
