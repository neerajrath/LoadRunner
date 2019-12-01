Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("bins.json", 
		"URL=https://www.gstatic.com/autofill/hourly/bins.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_url("merchants.json", 
		"URL=https://www.gstatic.com/autofill/weekly/merchants.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	lr_think_time(4);

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=78", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("www.flipkart.com", 
		"URL=https://www.flipkart.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/sw.js", "Referer=https://www.flipkart.com/sw.js", ENDITEM, 
		"Url=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/css/MultiWidgetPage.chunk.67221b.css", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/flap/278/278/image/beac999f33db064a.jpg?q=90", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/flap/278/278/image/3d05d2f19dbdbfc4.jpg?q=90", ENDITEM, 
		"Url=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/js/MultiWidgetPage.chunk.9c1ece3e.js", ENDITEM, 
		"Url=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/img/login_img_dec4bf.png", "Referer=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/css/app.chunk.82a2ce.css", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/flap/480/480/image/75eaa875424c5b69.jpg?q=50", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/image/200/200/k2jbyq80pkrrdj/mobile-refurbished/t/z/g/z1pro-128-u-1951-pd1911f-ex-vivo-6-original-imafhmyayxdjghhm.jpeg?q=70", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/image/200/200/jzhb24w0/mobile/z/j/k/realme-5-pro-rmx1971-original-imafjhk3dyggb2bg.jpeg?q=70", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/flap/480/480/image/9479c2b130f51ef2.jpg?q=50", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/flap/480/480/image/26bc0fedfd5b4cf4.jpg?q=50", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/flap/1688/280/image/e2f0e4d97806dfce.jpg?q=50", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/image/200/200/jskofww0/mobile/3/u/t/mi-redmi-note-7-pro-na-original-imafe4bddnr7n5vb.jpeg?q=70", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/image/200/200/jua4djk0/computer/k/z/x/asus-na-gaming-laptop-original-imafffw6vzw6hjwm.jpeg?q=70", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/flap/1688/280/image/f64d11d43b0ab3e7.jpg?q=50", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/flap/1688/280/image/33ba3db1a5479f46.jpg?q=50", ENDITEM, 
		"Url=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/fonts/roboto-regular-webfont.woff2", "Referer=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/css/app.chunk.82a2ce.css", ENDITEM, 
		"Url=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/fonts/roboto-medium-webfont.woff2", "Referer=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/css/app.chunk.82a2ce.css", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Origin", 
		"https://www.flipkart.com");

	web_add_auto_header("X-user-agent", 
		"Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.108 Safari/537.36 FKUA/website/41/website/Desktop");

	web_add_header("apiKey", 
		"KrWcJnCSZFBLFR39DtHYySjcDCHg2LeC3sxdx7646n7iy7oy");

	web_custom_request("callback", 
		"URL=https://www.flipkart.com/api/1/connekt/push/callback", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"type\":\"PN\",\"eventType\":\"TICKLE\",\"cargo\":\"{\\\"permissionStatus\\\":\\\"default\\\"}\"}", 
		LAST);

	web_add_cookie("AMCV_17EB401053DAF4840A490D4C%40AdobeOrg=-227196251%7CMCIDTS%7C18232%7CMCMID%7C81780763095549659609212179226902644462; DOMAIN=www.flipkart.com");

	web_custom_request("getData", 
		"URL=https://www.flipkart.com/lc/getData?dataSourceId=websiteNavigationMenuDS_1.0&t=26253697", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_add_cookie("gpv_pn=HomePage; DOMAIN=www.flipkart.com");

	web_add_cookie("gpv_pn_t=FLIPKART%3AHomePage; DOMAIN=www.flipkart.com");

	web_add_cookie("AMCV_17EB401053DAF4840A490D4C%40AdobeOrg=-227196251%7CMCIDTS%7C18232%7CMCMID%7C81780763095549659609212179226902644462%7CMCAID%7CNONE; DOMAIN=www.flipkart.com");

	web_add_auto_header("Origin", 
		"https://www.flipkart.com");

	web_custom_request("fdp", 
		"URL=https://www.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"ssid\":\"jca30xauds0000001575221817801\",\"mpid\":\"FLIPKART\",\"pn\":\"hp\",\"pt\":\"hp\",\"iid\":\"sl5gzsys9c0000001575221819762\",\"fm\":\"organic\"},\"e\":[{\"en\":\"PV\",\"ib\":false,\"id\":false,\"t\":1575221818042}]}]", 
		LAST);

	web_add_cookie("s_cc=true; DOMAIN=www.flipkart.com");

	web_add_cookie("AMCVS_17EB401053DAF4840A490D4C%40AdobeOrg=1; DOMAIN=www.flipkart.com");

	web_add_cookie("AMCV_17EB401053DAF4840A490D4C%40AdobeOrg=-227196251%7CMCIDTS%7C18232%7CMCMID%7C81780763095549659609212179226902644462%7CMCAID%7CNONE%7CMCOPTOUT-1575229029s%7CNONE%7CMCAAMLH-1575826625%7C12%7CMCAAMB-1575826629%7Cj8Odv6LonN4r3an7LhD3WZrU1bUpAkFkkiY1ncBR96t2PTI; DOMAIN=www.flipkart.com");

	web_add_cookie("s_sq=flipkart-prd%3D%2526pid%253DHomePage%2526pidt%253D1%2526oid%253Dhttps%25253A%25252F%25252Fwww.flipkart.com%25252Fmobiles%25252Fpr%25253Fsid%25253Dtyy%2525252C4io%252526p%2525255B%2525255D%25253Dfacets.brand%252525255B%252525255D%2525253DRealme%252526otracker%25253Dn%2526ot%253DA; DOMAIN=www.flipkart.com");

	web_custom_request("fetch", 
		"URL=https://www.flipkart.com/api/4/page/fetch", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"pageUri\":\"/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme\",\"pageContext\":{\"paginatedFetch\":false,\"pageNumber\":1,\"fetchSeoData\":true},\"requestContext\":{\"type\":\"BROWSE_PAGE\",\"ssid\":\"p4xf83ehzk0000001575221835710\",\"sqid\":\"e0orfvaif40000001575221835710\"}}", 
		LAST);

	web_custom_request("fdp_2", 
		"URL=https://www.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"ssid\":\"p4xf83ehzk0000001575221835710\",\"mpid\":\"FLIPKART\",\"pn\":\"hp\",\"pt\":\"hp\",\"iid\":\"sl5gzsys9c0000001575221819762\",\"fm\":\"organic\"},\"e\":[{\"en\":\"DCI\",\"iid\":\"M_7ed149c1-0bad-4f3d-b154-bbf83c4c6681_2.G3H2N8WEGWZI\",\"ct\":\"bannerAdCard\",\"p\":\"2\",\"t\":1575221837773,\"st\":1575221831580,\"f\":true,\"pv\":79},{\"en\":\"DWI\",\"iid\":\"M_7ed149c1-0bad-4f3d-b154-bbf83c4c6681_2\",\"wk\":\"2.bannerAdCard.BANNERADS_2\",\"p\":2,\"t\":1575221837774,\"st\""
		":1575221819302,\"f\":true,\"pv\":100},{\"en\":\"DCI\",\"iid\":\"M_7ed149c1-0bad-4f3d-b154-bbf83c4c6681_2.E389W9MFSDJS\",\"ct\":\"bannerAdCard\",\"p\":\"3\",\"t\":1575221837774,\"st\":1575221834159,\"f\":true,\"pv\":79}]}]", 
		EXTRARES, 
		"Url=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/img/fa_8b4b59.png", "Referer=https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme", ENDITEM, 
		"Url=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/img/buying-guide-illustration_48642c.png", "Referer=https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme", ENDITEM, 
		LAST);

	web_add_cookie("S=d1t14VAwJPxk/Xz8/Sz8/P0g/PyzN367+YW3R3Gfokpb4B5iD6bDr+M1IPchrsPoc6+S+vrDpD/bjigzaiFPmzQ85Nw==; DOMAIN=www.flipkart.com");

	web_custom_request("fdp_3", 
		"URL=https://www.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"ssid\":\"p4xf83ehzk0000001575221835710\",\"mpid\":\"FLIPKART\",\"pn\":\"hp\",\"pt\":\"hp\",\"iid\":\"sl5gzsys9c0000001575221819762\",\"fm\":\"organic\"},\"e\":[{\"en\":\"LSE\",\"starttime\":0,\"type\":\"loader\",\"rid\":\"7ed149c1-0bad-4f3d-b154-bbf83c4c6681\",\"prid\":\"7ed149c1-0bad-4f3d-b154-bbf83c4c6681\",\"t\":1575221835716}]}]", 
		EXTRARES, 
		"Url=https://rukminim1.flixcart.com/image/312/312/k34rki80/mobile/p/z/q/realme-5s-rmx1925-original-imafmbm6hp9eutam.jpeg?q=70", "Referer=https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/image/312/312/k34rki80/mobile/t/t/z/realme-5s-rmx1925-original-imafmbm6hatkkzys.jpeg?q=70", "Referer=https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme", ENDITEM, 
		LAST);

	web_add_cookie("gpv_pn=Store%20%3AMobiles%20%26%20Accessories%7CMobiles; DOMAIN=www.flipkart.com");

	web_add_cookie("gpv_pn_t=Store%20Browse; DOMAIN=www.flipkart.com");

	web_add_cookie("s_sq=%5B%5BB%5D%5D; DOMAIN=www.flipkart.com");

	web_custom_request("fdp_4", 
		"URL=https://www.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"ssid\":\"p4xf83ehzk0000001575221835710\",\"ppt\":\"hp\",\"ppn\":\"hp\",\"mpid\":\"FLIPKART\",\"pn\":\"browse\",\"pt\":\"browse\",\"iid\":\"sl5gzsys9c0000001575221819762\",\"fm\":\"organic\"},\"e\":[{\"en\":\"PV\",\"ib\":false,\"id\":false,\"t\":1575221841884}]}]", 
		LAST);

	web_add_cookie("s_sq=flipkart-prd%3D%2526pid%253DStore%252520%25253AMobiles%252520%252526%252520Accessories%25257CMobiles%2526pidt%253D1%2526oid%253Dhttps%25253A%25252F%25252Fwww.flipkart.com%25252Frealme-5s-crystal-blue-64-gb%25252Fp%25252Fitm592977b0ba210%25253Fpid%25253DMOBFM2WZ9AZUPTTZ%252526srno%25253Db%2526ot%253DA; DOMAIN=www.flipkart.com");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-user-agent");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("itm592977b0ba210", 
		"URL=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/img/shield_435391.svg", "Referer=https://img1a.flixcart.com/www/linchpin/fk-cp-zion/css/MultiWidgetPage.chunk.67221b.css", ENDITEM, 
		LAST);

	web_add_cookie("SN=2.VI13CA5E823F974EA0BA8C3D1FCF94E3D0.SI7F3CD46CF7474CBA9834D85958F75F2F.VSA1A5E65DF81347308472B89D3C7B1C61.1575221807; DOMAIN=www.flipkart.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://www.flipkart.com");

	web_add_header("X-user-agent", 
		"Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.108 Safari/537.36 FKUA/website/41/website/Desktop");

	web_custom_request("fdp_5", 
		"URL=https://www.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"ssid\":\"p4xf83ehzk0000001575221835710\",\"ppt\":\"hp\",\"ppn\":\"hp\",\"mpid\":\"FLIPKART\",\"pn\":\"browse\",\"pt\":\"browse\",\"iid\":\"sl5gzsys9c0000001575221819762\",\"fm\":\"organic\"},\"e\":[{\"en\":\"DCC\",\"iid\":\"35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH\",\"ct\":\"productCard\",\"p\":\"1\",\"t\":1575221849165}]}]", 
		EXTRARES, 
		"Url=https://rukminim1.flixcart.com/image/128/128/k34rki80/mobile/t/t/z/realme-5s-rmx1925-original-imafmbm65dwgffqg.jpeg?q=70", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/image/128/128/k34rki80/mobile/t/t/z/realme-5s-rmx1925-original-imafmbm6d6sjyhae.jpeg?q=70", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/image/128/128/k34rki80/mobile/t/t/z/realme-5s-rmx1925-original-imafmbm67vvxya5c.jpeg?q=70", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/image/128/128/k34rki80/mobile/t/t/z/realme-5s-rmx1925-original-imafmbm6e3szwd72.jpeg?q=70", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/image/128/128/k34rki80/mobile/t/t/z/realme-5s-rmx1925-original-imafmbm6hatkkzys.jpeg?q=70", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/image/128/128/k34rki80/mobile/t/t/z/realme-5s-rmx1925-original-imafmbm6tpkregsq.jpeg?q=70", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/image/128/128/k34rki80/mobile/t/t/z/realme-5s-rmx1925-original-imafmbm6wcagxhhy.jpeg?q=70", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("security", 
		"URL=https://sentry.flipkart.com/api/2/security/?sentry_key=b2fe488e344a47eda53b8d306edec9b7&sentry_release=3.52.0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/csp-report", 
		"Body={\"csp-report\":{\"document-uri\":\"https://www.flipkart.com/mobiles/pr?sid=tyy%2C4io&p%5B%5D=facets.brand%255B%255D%3DRealme&otracker=nmenu_sub_Electronics_0_Realme\",\"referrer\":\"\",\"violated-directive\":\"img-src\",\"effective-directive\":\"img-src\",\"original-policy\":\"script-src 'self' 'unsafe-eval' https://*.flixcart.com https://*.flixcart.net https://flipkart.d1.sc.omtrdc.net https://dpm.demdex.net https://sslwidget.criteo.com https://widget.as.criteo.com https://tnc.phonepe.com "
		"'nonce-13387000479650510493'; style-src 'self' 'unsafe-inline' https://*.flixcart.com https://tnc.phonepe.com https://*.flixcart.net; img-src 'self' data: blob: https://*.flixcart.com https://*.flixcart.net https://flipkart.d1.sc.omtrdc.net https://www.facebook.com https://*.fkapi.net https://googleads.g.doubleclick.net https://www.google.com https://www.google.co.in https://www.googleadservices.com https://sp.analytics.yahoo.com https://bat.bing.com https://bat.r.msn.com https://www.payzippy.com "
		"https://tnc.phonepe.com; font-src 'self' data: https://*.flixcart.com https://tnc.phonepe.com https://*.flixcart.net; frame-src 'self' https://*.flipkart.com http://*.flipkart.com https://*.youtube.com https://youtube.com https://*.vimeo.com https://dis.as.criteo.com https://gum.criteo.com https://www.payzippy.com https://tnc.phonepe.com https://cdemux.appspot.com 'nonce-13387000479650510493'; worker-src 'self' https://*.flipkart.com blob:; child-src 'self' https://*.flipkart.com "
		"'nonce-13387000479650510493'; connect-src 'self' *; object-src 'none'; base-uri 'self'; report-uri https://sentry.flipkart.com/api/2/security/?sentry_key=b2fe488e344a47eda53b8d306edec9b7&sentry_release=3.52.0\",\"disposition\":\"enforce\",\"blocked-uri\":\"https://cx.atdmt.com\",\"status-code\":0,\"script-sample\":\"\"}}", 
		EXTRARES, 
		"Url=https://rukminim1.flixcart.com/blobio/178/178/imr-201911/blobio-imr-201911_11c4a1c04e604d878d34219a04a9664b.jpg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/image/128/128/k34rki80/mobile/t/t/z/realme-5s-rmx1925-original-imafmbm6shwwzh9d.jpeg?q=70", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/blobio/178/178/imr-201912/blobio-imr-201912_c6cf5e8fb32a44d78d12916ea8859f63.jpeg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/blobio/178/178/imr-201911/blobio-imr-201911_47d5a7068a0f491aaa21bb49c1eef7ad.jpg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/blobio/178/178/imr-201911/blobio-imr-201911_590f6b6a6ef746ceba762ade065fe903.jpg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/blobio/178/178/imr-201912/blobio-imr-201912_cc74a4c5f9674ebf96ecf08e2f6915a3.jpg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/blobio/178/178/imr-201911/blobio-imr-201911_109dcaa6ef704a9e80f363652216c8f8.jpg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/blobio/178/178/imr-201911/blobio-imr-201911_607af4cafb954ba4a968d24464d3b426.jpg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/blobio/124/124/imr-201911/blobio-imr-201911_11c4a1c04e604d878d34219a04a9664b.jpg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/blobio/178/178/imr-201911/blobio-imr-201911_0282332f406745bd8cd41d98e2e6358d.jpg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/blobio/124/124/imr-201911/blobio-imr-201911_47d5a7068a0f491aaa21bb49c1eef7ad.jpg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/blobio/124/124/imr-201912/blobio-imr-201912_cc74a4c5f9674ebf96ecf08e2f6915a3.jpg?q=90", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-user-agent", 
		"Mozilla/5.0 (Windows NT 6.3; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/78.0.3904.108 Safari/537.36 FKUA/website/41/website/Desktop");

	web_custom_request("getData_2", 
		"URL=https://www.flipkart.com/lc/getData?dataSourceId=websiteNavigationMenuDS_1.0&t=26253698", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		EXTRARES, 
		"Url=https://rukminim1.flixcart.com/image/416/416/k34rki80/mobile/t/t/z/realme-5s-rmx1925-original-imafmbm6hatkkzys.jpeg?q=70", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", ENDITEM, 
		"Url=https://rukminim1.flixcart.com/lockin/763/182/images/CCO__PP_2019-07-14.png?q=50", "Referer=https://www.flipkart.com/realme-5s-crystal-blue-64-gb/p/itm592977b0ba210?pid=MOBFM2WZ9AZUPTTZ&srno=b_1_1&otracker=nmenu_sub_Electronics_0_Realme&lid=LSTMOBFM2WZ9AZUPTTZXXEDBC&fm=organic&iid=35b9166c-3d92-4fd0-960e-c703e7e3a5d4.MOBFM2WZ9AZUPTTZ.SEARCH&ppt=browse&ppn=browse&ssid=p4xf83ehzk0000001575221835710", ENDITEM, 
		LAST);

	return 0;
}