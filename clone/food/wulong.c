//Cracked by Roath
// 乌龙茶

inherit ITEM;
inherit F_LIQUID;

void create()
{
        set_name("乌龙茶茶杯", ({"wulong chabei", "bei", "cup"}));
        set_weight(70);
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("long", "一个普通的茶杯。\n");
                set("unit", "个");
                set("value", 30);
		set("max_liquid", 4);
		set("worthless", 1);
		set("liquid", ([
        		"type": "tea",
			"name": "乌龙茶",
			"remaining": 4,
			"drunk_supply": 0,
    		]));
        }
}
