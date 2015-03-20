<%@ page import="java.util.Iterator" %>
<%@ page import="java.util.List" %>
<%@ page import="java.util.ArrayList" %>
<jsp:useBean id="user_id" scope="request" type="java.lang.Long"/>
<jsp:useBean id="errors" scope="request" type="java.util.Map" class="java.util.HashMap" />
<jsp:useBean id="user_name" scope="request" type="java.lang.String"/>
<script>var title="<%= title %>";</script>

<!DOCTYPE html>
<html>

	<head>

    <meta name="viewport" content="width=device-width, initial-scale=1">

    <script src="js/lib/jquery-1.9.1.min.js"></script>
	<link rel="stylesheet"  href="css/jquery.mobile-1.3.0.min.css">
	<script src="js/lib/jquery.mobile-1.3.0.min.js"></script>
    
    <link rel="stylesheet" href="css/screen.css" />
    <link href="css/bootstrap.css" rel="stylesheet"> 
    <!-- link rel="stylesheet" href="css/jquery.mobile-1.3.0.min.css" / -->
    
    <script>var iperpage = 15;</script>
 
</head>
<body>

<script>
    var mobile = 0;
</script>
 
 <%
    String[] collection={"安利","安娜苏","阿迪达斯","奥比虹","爱丽","爱马仕","奥莎迪","安安","阿芙","艾凡达","安霓可古特尔","奥兰斯娇","奥蜜思","奥岚雪","ALMAY","艾妃儿","奥洛菲","AUBREY ORGANICS","Aube","爱特纳","阿瓦隆","Anosa","爱雅","阿蒂仙之香","艾丽美","艾尔诗丹","艾菲","爱肯","嗳呵","安芙兰","奥尔莱薇","alba botanica","艾丽碧丝","ANASTASIA","ARGITAL","安美拉","ABSOLUTE Aromas","伊蒂之屋","Antonia\'s Flowers","Antonias Flowers","alima","爱格纳","爱娜丝","AminoGenesis","Actifirm","ANSR","安东尼男士","安热沙","澳赞","奥诗娜","爱护","澳优","艾娃浓","艾玛丝","澳罗玛.汀","澳蕾丝","安缇雅筑","澳芙园","爱这茶语","澳娜莉亚","ALLRICAN","安安金纯","Abercrombie & Fitch","SENSE/先施","比佛利","贝佳斯","碧欧泉","博姿","芭比波朗","宝格丽","BURBERRY","碧斯","贝玲妃","巴黎欧莱雅","Beauty Diy","柏氏","BOSS","贝黎诗","泊美","白大夫","保仙健","苾丽丝","BARE ESCENTUALS","PBA","百雀羚","柏菲妮","BYTREE\'S","BYTREES","BYTREE\'","波斯顿","Beauty Tech","冰美人","BEAUTY MAKER","宝迪佳","宝拉珍选","柏凡琪","白晳","宝蕴","芭乐雅","百年丽人","BeautyMed","宝丽","BEELY","菠丹妮","巴列艾儿","Bumble & Bumble","碧修堂","芭比","保加利亚医药集团","邦9号","blinc","白凤堂","Bach","博倩叶","泊妃","蓓丽雅","Banila Co.","贝蒂儿","巴黎欧莱雅沙龙专属","哺宝","贝悦","贝因美","帮宝适","百优丝","BRADELIS","贝莉娅","白兰氏","蓓柔","宝蒂格拉菲","巴宝莉","香奈儿","婵真","克里斯汀·拉克鲁瓦","宠爱之名","Coppertone","萃芙理","Cyber Colors","卡罗琳娜·海莱拉","CB I hate perfume","婵婷","C\'EST UNE BEAUTE","CEST UNE BEAUTE","C","太子乐","甜心妈咪","汤臣倍健","田七","TOPIX","调皮宝","太阳香","The Namir","THE SAEM","土家硒泥坊","天芮","too cool for school","Miss Candy","U2B","URBAN DECAY","UNES","ULTIMA II","柚子舍","VOV","Valentino","Vinistyle","VIE","Virginale","薇薇尔","无限极","维健美","薇姿","薇婷","威娜","丸美","维尔汀","无印良品","维肌泉","完美","唯美施维亚","婉丝","我的美丽日志","温碧泉","完美晶妆","玮拉","我的心机","宛如新生","Wee\'p","Weep","薇诺娜","维婕娜","薇润","维他男士","小蜜蜂","香缇卡","希思黎","修丽可","相宜本草","型采","小护士","夏士莲","仙丽施","雪花秀","萧邦","心清堂","霞飞","小家碧玉","小青","修花堂","希金诺","秀媛堂","皙肤泉","馨丝兰","席琳狄翁","希芸","新面孔","秀雅韩","修芙俪","协和维肤佳","雪浓莎","雪芙兰","喜多","歆宝婴儿","香格里拉","心洁","禧贝","星纯","高丝雪妮","喜美绘","雪果","熙妍","香约","小奥汀","雅芳","雅漾","伊索","伊丽莎白雅顿","雅诗兰黛","茵芙莎","幽兰","依泉","伊夫圣罗兰","羽西","一朵","伊夫黎雪","雅呵雅","优姿婷","颐莲","伊诺姿","印象之美","伊卡璐","悦诗风吟","英国AA网","悠莱","亿自美","雅邦","怡丽丝尔","优白","雅美姿","御泥坊","忆念美","依琳娜","伊卡露诗","婴唯爱","雅蔻","雅男仕","伊莲娇雪","樱奈儿","依爱","咏薇堂","尹姬","悦容堂","婴肌源","一清堂","永芳","依贝佳","仪特丝","伊诗贝格","忆可恩","英格蜜儿","ILISYA伊丽丝雅","医婷","云草堂","玉颜素","雅呵雅丝睿","亚诗缇丽","法国雅诗敦","有情","英国芳疗协会","语净","伊乐瑞","依奈","韵姿","1028","原尚草","盈彩可伊","英国芙耐","亚蓝卡","悠纯","有机配方","婴姿坊","御信堂","雅馨安娜","雅滋美特","幽蒂薇","雅培","伊威","雅茚","英氏","孕丽宝","亚佩尔","一叶子","YangSang","伊亿莉","忆草","雅琳娜","伊贝诗","雅呵雅润希","优资莱","御润堂","亚缇克兰","英洁丽","德国活力素","悦植粹","茱莉蔻","资生堂","植村秀","昭贵","郑明明","自然美","自然堂","珍爱","贞采源","祖·玛珑","自然哲理","自然美人","真百代","贞水","植美村","植物语","早稻田","真丽斯","泽平","姿维雅","珍仁堂","莊能子","荘典","卓碧泉","芝恩布莎","自然保养网","芝诺菲","卓尔诗婷","ZFC","尊积帕","植玫兰","真子","植萃集","植荟之源","植物乐园","中草集","安婕妤","纯即","多多","蝶翠诗","蝶妆","东洋之花","丁家宜","丹芭碧","黛妃","Dr.Jart+","Dr.Sha","大创","丹姿","丹娜工坊","大家闺秀","Dr.G","朵而","第六感","FANCL","芳草集","肤美灵","法兰琳卡","樊文花","芳玑","芙水","方广","菲莎妮丝","高丝","高夫","高丝妍皙","高丽雅娜","高姿","高丝菲希欧","高柏诗","高丝贝缔雅","高丝雪肌精","果柔洗颜","格凌兰","果达儿","佰草集","黑龙堂","韩国新生活","后","海洋传说","海蕴","黑珍珠","韩束","汉芳","怀素堂","HABA","韩伊","蝶妆海皙蓝","火烈鸟","韩雅","赫拉","花信堂","化蝶秀","华教授","HADA RiKi","华桑","海润","韩生缘","花印","韩·多喜爱","WAKODO","罕纳蔻","韩国777","花酿","汇香坊","花妍丽","花娜小姐","花恋肌","三宅一生","i-Three","IOPE","IDUN APPLE","IT\'S SKIN","ITS SKIN","IT\'","梦幻之谜","洁沃","简语","玩乐","肌醇","Calvin Klein","Kiehl\'s","Kiehls","Kiehl","凯卓","巴黎卡诗","卡尼尔","科丽妍","可采","卡姿兰","KATE","凯芙兰","珂诺诗","克丽缇娜","凯伊秀","卡朗","KISS MY FACE","科丝莱","凯蕾梵思","可蕊儿","凯斯柏莎","卡婷","凯婷","卡玫尔","卡洛哥林多","科蒂","克雷德","科莱丽","康比特","可莱丝","坤尚莉","康宝莱","卡楠菲","凯皙漫","克里斯蒂安·奥迪吉","加州KMS","兰芝","兰蔻","理肤泉","莱珀妮","李医生","露得清","露华浓","利维肤","兰嘉丝汀","力士","恋爱魔镜","拉芳","露姿","LCN","里美","露诗","蕾克蕾","罗拉玛斯亚","露兰姬娜","兰西碧","LANVIN","LORAC","蕾琪","拉格贝尔","露千儿","莱薏","LotionSPA","蓝色之恋","莱俪","露韩饰","老中医","绿世界","林清轩","力奇","路易维娜","芦丹氏","Lavshuca","LAURA GELLER","恋妆","丽颜世家","莱文医生","LONGCILS BONZCA","Lumi","蓝色和平","乐玩美研","李奥纳德","丽诗加邦","Le Metier De Beaute","路丝","LAB SERIES","澜碧","兰亭","LOTREE","乐蔓","两面针","丽盾","莱茜儿","兰奈姬","俪瑞思","恋火","兰诺儿","林三益","莱珀丽","琳珈","绿叶","兰泽","罗拉玫瑰","LASTRE","美体考究","玫琳凯","美宝莲","曼秀雷敦","蜜丝佛陀","魅可","玛贝拉","谜尚","玛格丽娜","曼诗贝丹","MAKE UP FOR EVER","美爱斯","莫斯奇诺","梦妆","美加净","美即面膜","漫丹","妙巴黎","MARC JACOBS","妙思乐","美素","美丽加芬","迷奇","美华丽","蒙芭拉","美奇丝","美肤宝","美津植秀","美国队员","慕拉","名爽","玛丽嘉兰","明色","美肌学","MEI\'s VICTANI","MEIs VICTANI","毛戈平","媚点","膜法世家","玛奇亚米","美国永恒","玛丽黛佳","MOLTON BROWN","魅卡秀","米洛医生","美肌之志","MISS FACE","MTM","美芙乐","梦宝星","米勒·哈瑞丝","莫利纳尔","男性主义","Melvita","Martina Gebhardt","MOMUS","美舍雅阁","美肌纯","玫莉兰","彩妆之星","MOR","魔盒","棉花糖","美吾发","玛莎","美医生","妙棵","明艳","梦柏婷","M.D.Forte","玛思红","美萨崎","美妆仙","Margaret Josefin","梅赛罗兰","魔法天空","美人符","美康粉黛","MADARA","莫施","米欧","盟友","慕尼丽丝","猫语玫瑰","妮维雅","NINA RICCI","NARS","NEAL\'S YARD REMEDIES","NEALS YARD REMEDIES","NEAL\'","妮欧瓦","纽约色彩","娜丽丝","奶奶的百草堂","女友","妮顿丝","NYX","农庄生机","NIOXIN","NOPS","牛尔娜露可","内斯蒂丹特","诺曼姿","纽斯葆","诺蒂雅","NEW DIRECTIONS AUSTRALIA","纽比士","纳尔兰","霓净思","欧舒丹","玉兰油","ORIGINS","欧莉维亚","欧蕙","欧格玛","欧瑞莲","欧萃碧","欧缇丽","欧诗漫","欧嘉霓","欧芝儿","欧贝斯","O.P.I","ORLY","ORIKS","欧贝诗","Olivessence","欧瑞福","Olay","欧蜜","旁氏","珀莱雅","普兰娜","飘柔","POLA","PAUL & JOE","普拉达","陈燕萍植丽素","保罗·史密斯","PHYSICIANS FORMULA","PUPA","片仔癀","潘丽雅","帕尔玛之水","裴礼康","珀颜","Philip Kingsley","珀莱","普润普斯","珮漪妮","佩吉","POLAR PLUS","Profumi del Forte","芙莉美娜","Pure Smile","佩佩彩妆","品木丝序","琵熹","倩碧","屈臣氏","【其他】","爱茉莉","COVERMARK","艾杜纱","艾丝珀","艾文莉","艾茜凯","安尚秀","爱泊丽","AYURA","阿尔法","奥雅","艾琳","奥伦纳素","阿朵","Aveeno","爱卉妮丝","艾黛尔","爱目","阿尼亚斯贝","安吉希可儿","阿皙尔","alverde","ASTALIFT艾诗缇","Arouge","艾肤琳","Aromaleigh","ANNABELLE","ATORREGE AD+","嫒碧知","奥丽哈力逊","艾天然","ARCONA","艾米","ADDICTION","Amazing Cosmetics","ASTOR","安露莎","爱机宝","AFELEIA","澳方有机","安植","ABC","艾儿希亚","爱丽莎酷伊","奥斯曼","安肤","安泽秀","爱贵兰","艾迪儿","诗婷露雅","贝罗","百分百","碧柔","贝德玛","贝碧冰","永恒之美","白娣颜","栢草源","柏兰雅","BECCA","白芙素","碧伊","贝印","Bloom","柏姿雅","彼嘉","蓓护","柏康朵","By Terry","薄美克","冰凝24/7","缤纯","BRTC","百奢俪","Beauty Bank","Belli","宝莲妃玥","贝莉雅黛","BONNE BELL","博纳姿","白皙","BN(Ben Nye)","Besame","本草堂","泊妮","B. Kamins","Billion Dollar Brows","贝曼姿","芭特尔芙莱","倍丽颜","碧诗澜黛","芭茉儿","百丽多华","贝康碧欧","铂肌","Beauty Formulas","Berrisom","缤肌","Being TRUE","贝拉多娜","Barry M","芭乐苏","冰点","柏婷","百匡","泊美舒亚","Bye Bye Blemish","蓓肤美","佰参堂","柏丽兰","布兰朵","蓓慕","查名","草木良品","CYCLAX","CathyCat","城野医生","CLIO","Casuelle","CANMAKE","CEZANNE","CARGO","纯点","诚美","Chacott","COVER FX","城市丽人","春纪","COVER PLUS","春娟","淳美","彩琳","C.O.Bigelow","Cat Cosmetics","COSMEDICINE","Coastal Scents","彩丰行","COLLECTION 2000","Cyuto Cyuto","Cinci Claire","CE本草","CHICCA","纯净农庄","COSMOS","长生鸟","传说之谜","萃物泥语","纯沁肌语","chant a charm","翠萃集","迪奥","多芬","思妍丽","迪梵","迪奥普路丝","德国世家","德美乐嘉","DKNY","柏瑞特","达尔肤","德丽芙","黛摩霏","杜嘉班纳","DEJAVU FIBERWIG","蒂思岚","缔凡","迪士尼","Duwop","迪赫尔","Dr. PIERRE RICAUD","黛兰丝汀","德玛依","蒂花之秀","朵妮雅","德国女孩","岱蔻儿","点点","DB","Dr100","蒂珂","Dermaviduals","朵影","Daniel Jouvance","DARIYA","黛汐魅","Dr.young","皮肤专家","蒂芬妮","DermaQuest Skin Therapy","diego dalla palma","蝶莲娜","Dr. Michelle Copeland","东洋逸品","Dream Skin","戴春林","朵拉朵尚","东方婵妆","黛依美","东医七味","娥佩兰","ENIN","eve color","e.l.f","ERKENA","Everyday Minerals","Embryolisse","Essence of Beauty","ECCO BELLA","elite","Elysambre","ESTEBEL","EFU","Eyeko","ELLIS FAAS","EVE PEARL","elianto","艾博妍","ELLE girl","27.3°C","范思哲","佛罗浪丝","fresh馥蕾诗","封面女郎","芙丽芳丝","凡士林","梵希陀","抚柔","馥珮","芳香誌","Fujimu","芙秀","菲迪曼","芬琳思","凤妃堂","芙茹菲","凡茜","菲乐","绯黛","梵洁诗","F2F","FLIRT","玩美彩妆","菲丽颜","Fyrinnae","妃玲","菲洛嘉","费欧蜜娜","菲奥娜","凡黛兰","法蝶","芙缇","芬理希梦","芳香树","芙伦卡妃","嬏娜","广源良","高丝兰皙欧","阿玛尼","歌剧魅影","果漾美人","歌丽诗","GOODSKIN LABS","歌诗美","宫灯","高丝葛伦黛娜","古缇","果蕾","高丝润肌精","格兰玛弗兰","GOSH","GARDEN BOTANIKA","高丝莱菲","格蕾雅","高丝清肌晶","歌琳玫","葛罗氏","Glo&Ray;","赫莲娜","海蓝之谜","汇美舍","草木年华","皇太医","嫒色","韩斯清","草本美学","韩色菲","花前月下","韩后","CINEMA SECRETS","韩粉世家","Hourglass","海丝蔓尔","Heynature","化妆惑星","韩洛依","Holika Holika","荟诗","韩媛","HACCI 1912","Honeycat cosmeics","HOHO HANARO","花约","花皙蔻","花瑶花","Hi Sisters","icon","INTEGRATE","Illuminare","ILLAMASQUA","IGNIS","i+m有机护肤","ISOMARINE","医洛维媞","娇韵诗","法国娇兰","纪梵希","积姬仙奴","佳丽宝","姬芮","嘉媚乐","嘉贝诗","佳雪","JUJU","吉米娃娃儿","肌肤之钥","九美子","俊士","近江兄弟","金芭兰","金珀莱","Jemma Kidd","娇伊兰","京润珍珠","Julie Hewett","Jill Stuart","嘉魅儿","剧场魔匠","婕若琳","纪梵婷","肌研","经典爱心","瑾泉","Just BB","Jadilla.J","Janson Beckett","嘉芙诗","金炫光灿","玖玖","嘉露芬","Jordana","橘滋","京卫本草","娇兰佳人","佳丽宝REVUE","简诗美","静佳Jplus","珍可JCare","静佳Jmixp","佳丽宝Kanebo ALLIE","婕洛妮丝","肌美精","Jino","肌养晶","肌肤快线","锦缎水","今生宝贝","嘉康利","精品白如雪","纪花村","久奈美","积香莲","姬丝维尔","金雨轩","嘉世美伊","JLYNN","凯伦赫容","咖啦咖啦","可贝尔","蔻吉","可东爱西","孔凤春","恺思","蔻雅","珂润","K-Palette","珂珂","康丝嘉露","Kevyn Aucoin","可爱派","KEMUEL","Kawaii TOKYO","矿物彩妆科学","可丽扶","KEROMASK","寇诗茉","珂芮姿","凯特方迪","珂玛德","克缇贝卡布","卡姿图","凯文时尚彩妆网","克丽贝蒂","开乐时","卡莉芙","凯琳嘉兰","黎得芳","丽蕾克","蓝秀","丽蕴","莲蔻","兰肌","莱姿","乐敦","兰吉儿","丽弗","拉塞娜","兰瑟","Living Nature","莱仕","LILISHA","La pensee","丽莎怀特","Lola","LIPSTICK QUEEN","LEADERS INSOLUTION","露伊","L.A.COLORS","莱佳奴","兰菲儿","LIZ EARLE","LISSAGE","L.A. Girl，LA Girl","LE WATOSA","Lily Lolo","Leichner","露丝玛丽","蕾珂美","拉杜丽","兰芳草","翎皙","莱庄","名门闺秀","美伊娜多","名兰","美谛高丝","MuGu","魅力匙","玛采莲","美肌水","明朗月儿","ModelCo","妙力芙","美丽佳人","美康","玛佳蒂娜","Me Me Me","膜法世家1908","MIOGGI","美丽诺言","玛丽·奎恩特","Mario Badescu","魔彩精灵","摩凡时","MIKA","米思杜","美凯娜","蜜雪儿","MTM Skincare","MARY COHR","MILANI","魅影好莱坞","MERLE NORMAN","MARCELLE","Mally Beauty","慕迪","MAKE UP STORE","美好星","美国环球健康集团","Melliesh","miss sporty","蜜颜诗","美妍素","Model in a Bottle","魔力瓶美人网","motives","木兰紫","梦迪莎","玫瑰人生","美妍速配","美膳媛","玛茜","小蜜坊","妮攸尔","Natura Bisse","娜芙","诺薇雅","妮安诗","妮薇雅姿","娘家","妮塔莉雅","奈奥比","娜蔻","诺美丽莎","娜的丽","牛牌(牛乳石硷)","NAGASE","NASOMATTO","No7","Napoleon Perdis","NUDE","牛尔ampm","NOUBA","NACOLA","欧珀莱","欧树","欧邦琪","欧诗顿","欧果","欧力汉瑞克森","欧蒙","欧菲姿","欧芙兰","欧玫佳","ONLY MINERALS","Pro-X","Oceana","PURE","皮尔卡丹","Pinkie Swear","PRESCRIPTIVES","柏纷","PATYKA","Peter Thomas Roth","Palladio","贝丽丝","Pure Luxe","保娜多芙","PEDRINI","Pop Beauty","玻儿","purminerals","plus+JUST@100","Purlisse","LC品爱","PF79","peripera","PSK","清妃","清妍","奇可俏可","绮丝碧珍悦","琦草","泉润","巧迪尚惠","千纤草","奇士美","千妇恋","巧茜妮","千艺彩妆","茜素斯","绮怡","茜尔珂","群丽","qiora","奇姬","乔伊纽约","倩丽","奇碧欧","泉逸","七分雪","俏十岁","如新","red earth","RMK","高丝若缇娜","日月晶采","ROSEBUD","瑞士蜜黛诗","柔丝芬","芮谜","REN","ROJUKISS","瑞士活泉","Rodial","睿姿丽","RVB","瑞珂","Cellcosmet and Cellmen","柔美娜","瑞士科婷","润活极致","蕊莉芙","柔菲","惹恋","润妆","日本龟山堂","Ruby & Millie","茹妆","偌水","瑞之萃","蕊丽思","若水生花","緻妍","睫毛快长","水芝澳","水果之乡","圣大保罗","suki(舒琪)","Swiss line","所望","莎莉汉诗","苏菲娜","桑丽卡","思亲肤","索芙特","赛维","SK-II","丝芙兰","色彩地带","姗娜","思魅欧珀莱","葆丽美","苏薇","生活良品","巴黎雪完美","水之印","珊妃","施��","树语","诗狄娜","生命密码","SONY CP","诗恩碧","Smashbox","丝密斯","生态美","思蒂","束氏","三津村","SKIN79","丝佩兰","十二月坊","莎莎","SK Cara","SUQQU","舒友阁","诗芙雅","欣蔓","诗维娅","上山采药","SHILLS","尚朵","深蓝彩妆","Scinic","十二味","生肌良品","SOAP&GLORY;","世纪丽人","SENERINE","石泽研究所","施露兰","水姿媛","上海","Sonia Kashuk","SKINDINAVIA","Scott Barnes","Sugar Cosmetics","诗碧曼","SEBASTIAN","圣爱","SU:M37°","尚惠","索瓦妮","SUNDARI","Sleek","Sukin","苏黎氏","水之璨","Sinful Colors","水之秀","赛派","山田养蜂场","SWISS GETAL","雙妹","森田药妆","素问本草","赛斯娜","Solone","SEXY LOOK","Sula","瞬时美肌","suki","SOWAY","Skinnara","诗纳帝尔","SparkRing","诗泊蓝","SUPER","圣克莱尔","施普乐","奢华宝贝","seventh sense","索菲欧","舒妃","施莉宝","索菲思","水美姬","SCOS","Somme Institute","淑美华","SECRET KEY","SilkyGirl","圣芙兰","水之蔻","四季彩吧","诗蓓欧","水理肌","施华洛世奇","思贝德","Stylenanda","圣欧泉","SUVAL","水芝容","水木萃白","绍河珍珠","三粧","sesou","诗宣","水密码","斯郦玫","优方","菲诗小铺","塔莉卡","TOUS","田缘舞沙","婷美","同仁堂","TIFFA","天然之扉","TONYMOLY","TRINITYLINE","Too Faced","Tarte","托尼蒂娜","Trish McEvoy","汤姆·福特","the Balm","that girl","淘奇多奇","TSZ","THREE","ULTA","ultrasun","UTU","蓓葵","VINCENT LONGO","VISEE","Vidi Vici","Virgin Vie","薇可","瓦伦西亚姬奥","无龄肌密","维美源素","万宁","无瑕修颜","Witch","唯美嘉露","WEI to Go Beauty","皙泉","心机彩妆","谢馥春","喜蜜","幸福菲雅","新萃妍","轩谛","希格","香蕉船","新乐新","皙颜","细胞博士","洗颜专科","小白鲨","纤蔓绮丽","香格顿","香林秀","秀吉","宣琪","西姿","由你","雅丽莎","伊奈美","雅倩","玉丽","雅姿®","雅格丽白","伊莎美尔","优蜜","优色林","依菲伲缇","伊雅索","茵芭兰","伊之情","Yes To","YONKA","雅莉格丝","源素","依蕾朵立","尤皙","佑天兰","伊美莱","彦部秀","雅纳达","瑶草医生","雅诗敦","依曼","优婵蓓雅","伊丽莎白泰勒","YUMEI","雅倩美","伊姿法玛","御木本","宇航人","银座丝蒂芙尼","伊玟格琳","翌生美","雅妮","依蜜","虞文萱","悠刻","妍诗美","YOUR-LIFE","姿语","珍碧嘉","自由呼吸","皂美舍","自然乐园","芝碧","自然雅舍","植木方","珍妃","至爱终生","中英雅丽","知玟","紫醉睛迷","自然之悦","祉霖","真至和","佐颜","真皙","奥迪氏","爱琪美","阿呀呀","艾蜜塔","傲凝姬亚","艾芙美","艾三","澳洲悦仙子","艾思黎","奥莉","奥丽蔻","阿芦润滋","艾丽素","Alpha Hydrox","奥雅诗丽","安娜雅克","爱俐思娜","爱若莎","傲姿","爱多康","ALOEMASTERCARE","阿多玛","AFIRM","Alterra","安婷","Acne.org","Aromatica","安娜菲拉","A.H.C","Alchimie Forever","AMERIGEL","Anthelios","Ascorderm","Auriderm","ACC","爱迪威","AMALA","ALDO VANDINI","爱生态","奥丽颜","Akamuti","Annemarie Borlind","艾克卡帕","艾诗可因","AUS LIFE","奥罗黎","爱面膜","艾弗莎","艾蜜蒂","医世家","澳宝","澳诗丹","爱诗黛菈","OLEVA+","AperioNatural","爱肤宜","Abeeco","阿芙青春版","安琪","贝吉獾","柏姿","比度克","葆时婕","葆疗美","玻璃人","宝琪兰","波莉娜","柏莱诗","宝得露丝","葆丽德","贝亲","BORBA","Botani","Body Farm","碧蕾","碧研","白丝娇丽","芭芭多","芭蕾","柏芙","褒曼","波罗尼亚","柏卡姿","泊诗","博生能","BIONSEN","本草新妍","柏莉诗","碧乔依","100% Pure","柏逸菲","BROCATO","BeFine","贝兰","Babor","Billy Jealousy","Brave Soldier","贝文研究室","bioxil","巴登魔瓶","贝伊莎","波斯玫瑰","本草怡","Babies Only","Bay House","BIOLINE","巴颜喀拉","栢芯","芭司曼","波比爱","贝菲儿","宝艺","布莱斯森林","比利山羊奶","采诗","大长今","纯新","CF药妆","Cartidea","CoverBlend","COSMETEX ROLAND","CeraVe","Coryse Salome","Christian BRETON","C豆","Canyon Ranch","celazome","CelluliteRx","Citrix","Coola","Cor Silver","COSMEDIX","Clearasil","Clinica Ivo Pitanguy","Cowshed","C-UK","Calu","C+RESEARCH","cellbone","TeaBeauty茶颜","大宝","杜若","丹堤","迪豆","得美新","德国小甘菊","蒂芬妮亚","敦美园","丹派诗","都百","Daggett & Ramsdell","黛露","丹梦戈兰","达瑞肤","Dr.N+LAB","豆语","DEWINS","DR.MELAVAX","Desert Essence","DERMAdoctor","Dr.BRAGI","Dr.ALKAITIS","黛丽嘉人","DCL","DOSHA","DermaSilk","DEADSEA MINERAL","dui vivant","DO.S","丹尼诗","Dreamtimes","Diana B.","蒂尔诗莱","雏菊花语","丹尼斯医生","德丽斯康","哆啦A梦","多萝皙","德玫恩","DAFFADILLY","朵露曼","东方季道","蝶芙兰","朵拉纯粹","Diovia","鳄鱼宝宝","2B Alternative","EVE LOM","EVER SINCE","EMINENCE","E45","EmerginC","蕴妙","Eveline","芳程式","法儿曼","菲璐泽","范美蒂","Fruit of the earth","粉粉香","肤膳坊","芙蓉妮","芙美佳","菲丽姬奥","菲俪蔓","跟随我","蜂花","凡歌","富士山","芙蕾蓉娜","芙玖","佛迪力菲凯","菲苏德美","Fresh Line","Face of Australia Sun","方纯式","馥兰皙儿","FLORIAL(FLORIHANA)","梵俪缇","富丽美","FGF-1","范薇蜜","肥皂剧","FarmHouse Fresh","富思伊娃","梵颜","芳香假日","菲娣","FOOSKIN芙柯","Fumakilla","妃秀爱","高伦雅芙","瑰珀翠","Gorgeous","广德堂","高丝纯肌粹","国品牌","歌丽姬宝","歌美","GLYSOMED","GlyMed Plus","Grooming Lounge","古尔莎","海伦皇后","HotCosmetics","花颜多香","活之肤","护蕾","Humphreys","韩律","华纳制药","花凝","花王","花恩娜","华伦美","Hydra Mar","花的样子","活焕","涵沛","华邦","Hydro Peptide","HERBAL CARE","花之使者","花语者","Herbal Of Forest","黄金密码","Isomers","In Essence","Inecto","In Fiore","蕾萱","茵菲妮","杰士派","金缕梅","景天丽雪","肌透润","敬修堂","军献","洁莱雅","Jergens","999王妃","JASON Natural","吉列","娇兰世家","姬芙美","Juice Organics","健安喜","John Masters organics","肌言堂","霍金博士","京都尚品","加州宝贝","金蔻","肌水","基茵壹号","绝世美肌","Jack Black","Juara","肌情","靓倍尔","JANUE","巨型一号","娇莉芙","嘉威宝","极上肤品","肌肤食品","静佳Jcode","家化玉泽","嘉年华","JSKIN","简妮","嘉人","可伶可俐","卡诗德丽","珂莉安","凯娜诗","凯伊黛","科莲","卡尔诗","科诗美","可怡本草","肯拿士","珂肤梦","KEYS","Kate Somerville","Korner","KOSMEA","狂爱","可耐美","KYLRIE","肯园","KIMBERLY SAYER","Kerstin Florian","可生","可丽芬","蓝顿","靓妃","伶采","丽纯","绿之韵","莱茵","罗渣格尔","兰侬","兰心","里海之谜","六神","兰芭顿","隆力奇","Leaf & Rusher","露蔻","萝蔓蒂","罗美","罗伯特·卡沃利","Lather","莱丝威娜","拉薇","La SINCIA","莉凯雅","乐洁庄园","蕾莉欧","Laventine","莱丝威娜EPI","利芙达","蓝蜥蜴","朗沛柔","丽嘉儿","露可","Lanosan med","LVERY","Lex","兰媚儿","浪漫香榭丽","洛法兰","乐尚丽","蕾舒翠","莱玫","蓝色香芬","La Rosée","林香玉","满婷","玛坤丝","魔力配方","美媛春","Matricol","美时美刻","玛姬儿","玛朵","名蔻","魅迪诗","美质原生","魔法医生","妙芙乐","魔法青春","蜜帝蜜后","Marie-Veronique Organics","MD skincare","牧野","膜语","木本水源","Montagne Jeunesse","美肌一族","梦迪欧","魅丽","美丽小屋","Mountain Rose Herbs","美森","摩索","玛帝","M LAB","Menscience","Meadows","美植兰","膜妍天姿","美袭来","美蒂凯丝","MedSPA","NeoStrata","Nature Gem","牛奶","奈碧","娜迪奥","Nexcare","NEOSPORIN","诺福克","纳缇诺","Natcol","纽蜜","诺婕蒂","Nahla","欧敏肤","OLINA","欧治","欧润芙","欧莉珂","欧克兰妮","欧玛左旋C","欧影","OCEAN Potion","ohBases","OMBRELLE","O2","Osmotics","Omorovicza","Oe 元索","海灵","欧芮泉","欧俪","普若诗兰雅","Purpose","帕斯婷","柏妮兰","埔里阿嬷","Pola Celdie","品木源","帕玛氏","PHILIP B","Primavera life","Predige","普瑞登","普皙金","培法芝","PURE SKIN Formulations","PARRS","PCA skin","PANNA","朴安堂","普兰诗","清芝","七日香","庆琇","乔芙妮","强生","QUINESSENCE","七天美","趣乐活","琪贝斯","亲润","Quintessence","芊滋","Renee Rouleau","Remergent","ROC","柔婷","REVERSA","瑞薇琪","瑞斯澜","瑞士柏奥丝","芮呵诗雅","瑞德露","瑞肌儿","Rote Fabrik","瑞士宝","REMEDE","Rosense","瑞士梦缇","Restgenol","芮娥卡","润泉贝儿","容园美","闰年","然姿雅","诗碧","姗拉娜","斯特拉麦卡托尼","圣艾芙","圣泉薇","SWISSWEDA","丝塔芙","思美兰","SWISS BORN","SkinMedica","舒珀莱","深大玉妹","诗黛纷妮","生物阳光","SANOFLORE","斯佳唯婷","SILK WHITIA","Skinlite","皮肤医生","SpaRitual","香雪丽舍","3LAB","时尚生活原素","生活涵美","施泰福","少女之春","赛朵","素问堂素儿","松竹","丝菲","水之谜","双头蛇","帅霓鸿","舒丝曼","施丹兰","山中采药","舒适地带","诗莱雅","圣洁兰","丝琪","闪露","瑟雅","Saisona","STYX","Sexy Girl","草花木果","狮王","Schaebens","四月天","赛贝格医师","丝源","skyn ICELAND","山心","神秘卡米拉","莎夫医生","圣薇特","圣蜜莱雅","思蔻尔","诗留美屋","肤新纪","水平衡","圣活泉","Santa Maria Novella","sophyto","试验室","舒罗曼","诗丹丽","斯美凯","Southrom","SEA FLORA","丝诺","史努比","师夷家","施蓓泉","水之守护","善草纪","时间海","森芝玑","水草坊","施蔻兰","sweetie beetie","4W Solution","Sisidyll","诗薇奈","This Works","The Best","桃丽丝","T透","天使丽人","双妹嚜","茜茜尔","百度百丽","TWEEZERMAN","特偲芙","The Art of Shaving","媞尔妮","THANN","泰娅","TO-PLAN","Tensage","Tracie Martyn","跳跃泡泡","TUNEMAKERS","UBONITO","Vitacreme B12","VANCL","吾诺","薇薇小姐","韦斯拿博士","草本之源","维蕾德","Whip Pack","薇霓肌本","Winnie Lady","薇迪兰高","苇芝","维特护","维纳斯蒂尔","Whish","完颜","薇罗尼卡","WEI","香贝肌","小蜜缇","雪肤莱","雪莉派思","夏威夷热带","夏珑娜","香草魔法学苑","雪绒蓝天","西藏红花","星期四农庄","皙摩","雪莉花园","星之光芒","新宝容","新肌","熊津","小叮当","雪罗兰","小迷糊","惜颜","养生堂","依云","永爱","郁美净","雅艾芬迪","伊立信","伊芭诗","雅而顿","一品婷","雅丽","颜庄","意高","咏梅","御露醋元素","悠姿","依普斯","伊诗泰莱","茵蝶","伊尤赛","一花堂","依泉丽尔","孕肤宝","医丽纤","悠斯晶","伊斯法玛","幽蔻","雅昵","瑜媞","悦薇","医肤基","Yakult Beautiens","优莎娜","有机护发","英佐依","伊莎珂丝","孕祺","云之萃","永续","伊源美","Yu-Be","源仁堂","依蓓棠","怡人草","咏花集","因为您","御雪","优肌源","叶语","悠兰","臻美","哲·碧卡狄","臻水","祖嘉儿","植物工坊","姿蒂","ZENSATION","自然机理","佐媚朵尔","珍达菲","自然晨露","珍曼妮","自白肌","自选肌","Agatha","Archipelago","宝姿","Blistex","Chap Stick","Earthbound Organics","富思","丰添","菲格丝","GUCCI","Guess","HYLEXIN","好时","皇冠鸭","集香舍","卡地亚","蔻依","可蕾蒂","克连贝格","Lip Smacker","Lypsyl","美丽果","Moglie","NIP + FAB","on10","欧博士","Perfumeria Gal","QTICA","Revitalash","水之密语","Super Gloss","视康","丝凯露-D","VII","VII CODE","香袭人","依纱维纱","颜魔师","伊娜薇","爱斯卡达","阿曼贝丝","澳希亚","艾芙","AQUAGENA","安吉斯勒塞","爱伦瑞丝","ALQVIMIA","AMPLEX","爱姬玛琳","埃及魔法","布兰妮","Bill Blass","Bath&Body; Works","霸王","贝蒂娜","Bavaria","Badgley Mischka","Bamford","巴黎世家","Betsey Johnson","毕坚","宝诗龙","Byblos","宝娜","邦迪","BooBoo","Beauty Image","巴斯克林","碧芝莱","巴斯洛漫","belif","比华利山","百洛","倍润","CND","采幽","COGIT","储菲希尔","细胞因子","登喜路","大卫杜夫","滴露","蒂埃里·穆勒","diptyque paris","DR.FUJITA","迪赛","D二次方","Deonatulle","得露丽","de-luxe","Dermatix","朵朵贝儿","淡泊坊","东方宝石","都彭","朵昂思","鳄鱼","ETRO","飞利浦","富贵猫","公主娜娜","古皂","葛莉斯黛","花","孩儿面","活希源","候司顿","荷芙妮格","霍比格恩特","惠润","海洋之心","INLIGHT","积架","姬龙雪","Jean Paul Gaultier","Zegna","兹法高","嘉珂","JAQUA","JIL SANDER","杰西卡·马克兰托克","洁净","加伊·马蒂奥洛","姬尔克曼","JESUS DEL POZO","吉斯迈","Just Cavalli","贾斯汀·比伯","Cacharel","Kamill","Carolina Herrera","克奈浦","凯莉·米洛","凯特莫斯","可悠然","康洁司乐","Kings&Queens;","凯玛士","卡斯琳","蕾沃斯","洛俪塔","Lactacyd","莱俪迩","梨牌","罗娜","露丝安妮","罗拔贝格","丽芙","玛花纤体","MaxMara","美德","MISTRAL","MARILYN MIGLIN","木之秘密","MOOM","MASIK","马维斯","纳爱斯","NEREIDS","纳西索·罗德里格斯","娜芙娜芙","纳奥米·坎贝尔","诺蒂卡","欧榄","Olay美肌沐浴","Phytomagie","泡泡玉","皮皮狗","强生婴儿","切瑞蒂","趣乐","强生美肌","奇安弗兰科·费雷","乔普","Rose of Sharon Acres","瑞砂","让巴度","回忆","诗瑞","舒蕾","舒肤佳","圣姗娜","舒耐","欣纯","ShiKai","Suave","森英惠","沈云门","水莲娜","Suzanne Aux Bains","CELINE","尚美","斯坦伯丽","Somatoline","上海药皂","SOAP-n-SCENT","赛吉儿","Scar Fade","she","三舍","汤米·希尔费格","TOCCA","Triple Dry","威露士","Wakilala","温莎之林","Well Land","夏依","香阁娜","现代美","小灵通","香似","西妮","小农场","伊兰纤姿","伊藤园","雨洁","亚历山大麦昆","意大利鸳鸯","Yardley London","云南白药","伊丽莱","月光力","浴见知己","詹妮弗·洛佩兹","哲非班利","珍蒂毕丝","追风","ALLERDERM","butter LONDON","China Glaze","Credo Solingen","CD","ciate","大元","DERMAL therapy","Dr.SCHELLER","essie","风中花语","Herome","花道","Handsan","Konad","Lucky Trendy","美润护手霜","美国箭牌","牛牛","NailTek","Oops!J","Polaar","RGB","松下","Seche","泰雅","TRIM","Trind","UNT","维特汀尼","艾的","Aquage","AUSSIE","abba","Alberto VO5","Aphogee","奥莉维亚","宝美奇","博倩","Beauteen","b+美发诊所","Back to BASICS","Beyond The Zone","Bain de Terre","缤丽","Beautylabo","博朗","柏美","Crisan","采尼","蒂芝","迪彩","大岛椿","达芬尼斯","蒂蕾丝","菲奈诗","馥绿德雅","发歌","高露洁","GENDARME","歌薇","海飞丝","花王飞逸","HAMADI","汉伯斯","Herbatint","光彩","海索草","iPure","JOHN FRIEDA","Jessicurl","彩艳","janeke","卡罗尔的女儿","蔻萝兰","联合利华","label.m","莱欧","俪诗朵","Live Clean","LAVOIR","拉宝丽","Leonor Greyl","陆小曼魔发网","丽莎贝","莉婕","力士生命奇迹","梦特蓓妮","玛莉安","美涛","mod’s hair","美源","梅森皮尔森","Mastey","Metropolis Technology","摩洛哥","娜莎迪","Nexxus","Ojon","Oscar Blandi","欧芭","潘婷","发朵","PUREOLOGY","清扬","清逸","REDKEN","RUSK","施华蔻","沙宣","诗芬","史云逊","丝蓓绮","纱飞浓","顺爽","三九军医生","SUNSILK","Sexy Hair Concepts","丝韵妮","丝蕴","TONI&GUY;","TRESemme","欣香","Tangle Teezer","Therapy-g","vosene","温雅","我的样子","西格尔","新宫园","悦丝","亚羡姿","伊卡璐丝焕","章光101","章华","资生堂专业美发","庄拿顿用品","Alessandro DELLA TORRE","白元","帝诗","ECOTOOLS","晃祐堂","JAPONESQUE","KOBAKO","丽丽贝尔","FOREO","Sigma Makeup","竹宝堂","Azzaro","埃德·哈迪","艾瓦国际","阿兰德龙","艾伯特尼波","阿历珊度","艾丽莎","安尼米尔","Aura Cacia","奥斯卡·德拉伦塔","ALEXANDER DE CASTA","Benetton","邦沐","冰山","Black Phoenix Alchemy Lab","巴黎蓝色","Bob Mackie","葆蝶家","BCBG","冰希黎","城市疗愈大师","Charrier","川久保玲","楚萨迪","纯品芳典","Coach","蒂芙尼","杜兰朵","黛安·冯芙丝汀宝","达芝妮","大内密探","Emanuel Ungaro","��拉利","芬迪","费雷","芬旎","芳蕾玫瑰","梵克雅宝","Fragonard","法康娜布","芙蓉天使","佛罗瑞斯","弗朗西斯丹尼","法式连结","Franck Olivier Paris","芳香堂","歌宝婷","歌莉亚温德比","葛柏","GAP","乔治 梵勒堤","华顿","皇家玛丽娜","哈维王子","希拉里·达芙","皇族秘奥","华纳兄弟","华纯伊人","花斯丹宝","Isadora","ibody","坚尼哥尔","J.Del Pozo","JEANNE ARTHES","John Varvatos","积歌蒙","Jimmy Choo","John Galliano","Kaloo","CARVEN","克莱夫基斯汀","肯尼思·杰·莱恩","卡尔·拉格菲尔德","凯蒂派瑞","罗莎","路易斯花娃","罗伯特","罗意威","鲁比诺","LOLLIA","La Maison de la VANILLE","罗密欧布里托","罗密欧·吉利","凌仕","Blumarine","露露熊","罗科巴洛克","迈克高仕","摩根","MISSONI","马莫尔&孙","民族风俗","玛德琳·维奥内特","Mariella Burani","玛丽莲·梦露","美泰","Mexx","Miss sixty","魅影","马克·艾克","妮奥莉","妮可·波利兹","Oils4life","ORMONDE JAYNE","弗洛蒙","帕高","帕丽斯·希尔顿","皮埃尔巴尔曼","毕加索","平阴","PARLUX","帕蒂拉贝尔","派瑞·艾力斯","珀菲","气味图书馆","骑士国际","祈丽诗雅","QUIKSILVER","气味故事书","拉夫·劳伦","ROXY","让·路易·雪莱","RAMPAGE","Rose&Co;","莎娃蒂妮","圣伊美","Six Scents","尚塔尔·汤玛斯","SEAN JOHN","SNOWXIXI","莎拉·杰西卡·帕克","圣瓦伦丁","the healing garden","唐那·凯伦","Ted Lapidus","汤美巴哈马","Trina","甜心索菲","U2 Brands","Vera Wang","Victorinox Swiss Army","Vicky Tiel","万宝龙","维果罗夫","雯艾尔","薇薇恩·韦斯特伍德","Woods of Windsor","夏利豪","香水工房","Banana Republic","榭飞雍","幸运商标","仙蒂罗福","雅宝信","原宿娃娃","雅诗卫丹","一叶绿地","亚菲儿","至纯","祖梵","朱迪思·雷伯","zippo","安琪纽特","安琪尔","安豆","爱珍","倍诺洁","本草婴缘","宝比珊","贝丽玛","宝贝可爱","百乐麦","贝智康","贝兜","宝育堂","百益康","百得智","CHUCHU","多美滋","恩姆花园","菲丽洁","福孕妈咪","法贝儿","飞鹤","法雅诗蒂","钙尔奇","格兰宝","亨氏","好乐","海王","合生元","华亨","嘉宝","嘉滋","加贝能","嘉华妈妈","康贝","乐儿宝","穆明","美赞臣","妈咪宝贝","每伴","美素佳儿","美可高特","妙而舒","NUK","纽瑞滋","Piave","雀氏","雀巢","岂止美","润本","人之初","如意","十月天使","sanosan","圣元","生命阳光","舒爽","Trisa","唐贵妃","味奇","完达山","新安怡","星尚","小阿哥","喜安智","医莱美思","Zwitsal","滋儿乐","帝宁","杰威尔","锐度男士","上士","泰仕可","Tend Skin","英格拉姆","优采","ABODE AROMA","Apothia","AHMAD TEA","爱透","澳佳宝","艾禾美","百源堂","Brilliant","Beverly Hills Formula","百花滟","CCS","Clinomyn","De Tuinen","朵莉","枫特","futurebiotics","高洁丝","高斯密","HANIX","护舒宝","禾羽","黑人","佳洁士","娇爽","金思健","金韵娇儿","洁霸","康美柯","康蓓健","康齿灵","冷酸灵","李施德林","乐丽琪","乐而雅","美由奈","美澳健","美研社","米娅","Natural White","朵朵","Neocell","nippi","Ortis","o.b.","ODIN","纯娇源","Pure Inventions","浅山之家","Rapid White","若丝","舒客","水磨坊","姝兰蔓庭","圣峰","爽健","善存","苏菲","Supersmile","三得利","The Laundress","Veg Valley","维您","慰舒","伊美婷","YUKI","一诺美","足爱","中华","自然之宝"};
    List<String> brand = new ArrayList<String>();
    for (int i=0; i<collection.length; i++){
        brand.add(collection[i]);
    }

%>
<div data-role="page" id="mainPage">
       
        <span class="status"></span>
        <div id="recommends">
           <header>
               <div data-role="header" data-position="fixed">
	               <% if (title=="Today's Picks") { %><a href="#" id="reCalc"><small>ReCalc</small></a><% } %>
	               <h1 class="mirrorTitle"><%= title %></h1>
	               <a href="#filter" id="reFine" class="ui-btn-right"><small>Refine</small></a>
               </div><!-- header -->  
               <div data-role="panel" data-position="right" data-display="overlay" id="filter" data-theme="b">
                   <% if (title!="My Ratings") { %>
                   <ul data-role="listview" data-inset="true">
                       <li><a id="selectedSort" href="#sort-panel">Sort by</a></li>
                   </ul>
                   <% } %>
                   
                   <ul data-role="listview" data-inset="true">
                       <li><a id="selectedCategory" href="#category-panel">Category</a></li>
                       <li><a id="selectedSubcategory" href="#subcategory-panel">Subcategory</a></li>
                   </ul>
                   
                   <ul data-role="listview" data-inset="true">
                       <li><a id="selectedBrand" href="#brand-panel">Brand</a></li>
                   </ul>
				   
				   <button id="search_button" class="btn btn-sm btn-info">Set Filter</button>
                   
               </div><!-- /panel -->
               
               <div data-role="panel" data-position="right" data-display="overlay" id="sort-panel" data-theme="b">
                   <ul id="sortlist" data-role="listview" data-inset="true">
                       <li><a href="#filter">Score</a></li>
                       <li><a href="#filter">Confidence</a></li>
                   </ul>
                   <a href="#filter" class="btn btn-sm btn-info">Back</a>
               </div><!-- /panel -->
               
               <div data-role="panel" data-position="right" data-display="overlay" id="brand-panel" data-theme="b">
                   <ul id="brandlist"  data-inset="true" data-role="listview" data-filter="true" data-filter-reveal="true" data-filter-placeholder="Search brands..." data-inset="true">
					   <% 
                           Iterator<String> itbr = brand.iterator();
                           while(itbr.hasNext()) { %>
	                           <li><a href="#filter"> <%= itbr.next() %></a></li>
					   <% } %>
				   </ul>
                   <a href="#filter" class="btn btn-sm btn-info">Back</a>
                   <a id="allbrand" href="#filter" class="btn btn-sm btn-info">OK</a>
               </div><!-- /panel -->
               
               <div data-role="panel" data-position="right" data-display="overlay" id="category-panel" data-theme="b">
                   <ul id="categorylist" data-role="listview" data-inset="true">
                       <li><a href="#filter">All</a></li>
                       <li><a href="#filter">Skin Care</a></li>
                       <li><a href="#filter">Makeup</a></li>
                       <li><a href="#filter">Fragrance</a></li>
                       <li><a href="#filter">Hair</a></li>
                       <li><a href="#filter">Nail</a></li>
                       <li><a href="#filter">Body</a></li>
                       <li><a href="#filter">Other</a></li>
                   </ul>
                   <a href="#filter" class="btn btn-sm btn-info">Back</a>
               </div><!-- /panel -->
               
               <div data-role="panel" data-position="right" data-display="overlay" id="subcategory-panel" data-theme="b">
                   <ul id="subcategorylist" data-role="listview" data-inset="true">
                   </ul>
                   <a href="#filter" class="btn btn-sm btn-info">Back</a>
               </div><!-- /panel -->
               
		   </header>
		   <ul id="contentView" data-role="listview" data-inset="true">
		   </ul>
       </div><!-- /recommend -->
       <%@ include file="footer.inc" %>

    </div><!-- /page -->
    
    <div data-role="page" id="nxtgModal">

        <div data-role="header" data-position="fixed">
	        <a data-transition="slide" data-direction="reverse" id="Back2Detail"><small id="backbutton">Back</small></a>
	        <h1 class="mirrorTitle"><%= title %></h1>
       </div><!-- header --> 
       
       <div data-role="content" id="modalContent">
           <div id="pagebutton">
               <button class="prevpage btn">Previous</button>&#160;&#160;
               <button class="nextpage btn">Next</button>
           </div><br>
           <h4 class="modal-title"><span id="modalTitle"></span></h4>
           <span id="sellerimg" class="floatimg"></span>
           <div class="details">
               <p>&#160;&#160;&#160;&#160;<span id="description"></span></p>
               <span id="price"></span>
               <span id="sellers"></span>
           </div><br>
           <div id="pagebutton">
               <button class="prevpage btn">Previous</button>&#160;&#160;
               <button class="nextpage btn">Next</button>
           </div>
       </div>
       
       <%@ include file="footer.inc" %>
   </div><!-- /page -->
        
    
    
        <script id="recommendTemplate" type="text/template">
            <a href="#{{ prod_id }}" data-role="button" class="toDetail" data-transition="slide" data-inline="true">
	            <img src="data:image/jpeg;base64,{{ photo }}" alt="{{ prod_name }}" />
				<h2>{{ prod_name }}</h2>
				<p>{{ prod_brand }}&#160;-&#160;{{ prod_category }}</p>
			</a>
        </script>	      
            
        <script id="DetailTemplate" type="text/template">  

            <div data-role="header" data-position="fixed">
	            <a href="#mainPage" data-transition="slide" data-direction="reverse" id="toList"><small>Back</small></a>
	            <h1 class="mirrorTitle"><%= title %></h1>
	            <a id="nxtg" href="#nxtgModal" data-transition="slide"><small>Where to Buy</small></a>
            </div><!-- header -->  
        
            <h4>{{ prod_name }}</a></h4>
            <big>{{ prod_category }}&#160;-&#160;<span>{{ prod_subcategory }}&#160;-&#160;</span><span>{{ prod_brand }}</span></big>
            <div class="container">