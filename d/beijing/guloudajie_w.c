//Cracked by Roath
// Room: /d/beijing/guloudajie_w.c

inherit ROOM;

void create()
{
	set("short", "鼓楼西大街");
	set("long", @LONG
这是繁华热闹的鼓楼西大街，大街街面宽阔，车水马龙，
川流不息，人群熙熙攘攘，来来往往。街边上耍枪买艺、百货
小吃，应有尽有，帝都风貌可见一斑。东面就是鼓楼。
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"bingbuyamen",
  "west" : __DIR__"xizhidajie",
  "east" : __DIR__"gulou",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
