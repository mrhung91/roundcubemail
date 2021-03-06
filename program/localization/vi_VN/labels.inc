<?php

/*
 +-----------------------------------------------------------------------+
 | localization/<lang>/labels.inc                                        |
 |                                                                       |
 | Localization file of the Roundcube Webmail client                     |
 | Copyright (C) 2005-2013, The Roundcube Dev Team                       |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 |                                                                       |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/labels/
*/

$labels = array();

// login page
$labels['welcome']   = 'Chào bạn đã đến với $product';
$labels['username']  = 'Tên đăng nhập';
$labels['password']  = 'Mật khẩu';
$labels['server']    = 'Máy chủ';
$labels['login']     = 'Đăng nhập';

// taskbar
$labels['logout']   = 'Thoát';
$labels['mail']     = 'Thư';
$labels['settings'] = 'Tùy chọn';
$labels['addressbook'] = 'Sổ địa chỉ';

// mailbox names
$labels['inbox']  = 'Hộp thư';
$labels['drafts'] = 'Thư nháp';
$labels['sent']   = 'Đã gửi';
$labels['trash']  = 'Sọt rác';
$labels['junk']   = 'Thư rác';
$labels['show_real_foldernames'] = 'Show real names for special folders';

// message listing
$labels['subject'] = 'Tiêu đề';
$labels['from']    = 'Người gửi';
$labels['sender']  = 'Người gửi';
$labels['to']      = 'Người nhận';
$labels['cc']      = 'Đồng kính gửi';
$labels['bcc']     = 'Người đồng nhận (ngừoi nhận không thấy email của người khác cùng được nhận thư)';
$labels['replyto'] = 'Trả lời cho';
$labels['followupto'] = 'Đánh dấu thư cần theo dõi';
$labels['date']    = 'Ngày';
$labels['size']    = 'Dung lượng';
$labels['priority'] = 'Độ ưu tiên';
$labels['organization'] = 'Tổ chức';
$labels['readstatus'] = 'Trạng thái của thư';
$labels['listoptions'] = 'Danh sách lựa chọn';

$labels['mailboxlist'] = 'Các thư mục';
$labels['messagesfromto'] = 'Thư từ $from đến $to trong tổng số $count';
$labels['threadsfromto'] = 'Dòng thư từ $from đến $to của tổng số $count';
$labels['messagenrof'] = 'Thư thứ $nr trong tổng số $count';
$labels['fromtoshort'] = '$from - $to của $count';

$labels['copy']     = 'Sao chép';
$labels['move']     = 'Di Chuyển';
$labels['moveto']   = 'Di chuyển tới...';
$labels['download'] = 'Tải về';
$labels['open']     = 'Open';
$labels['showattachment'] = 'Hiển thị';
$labels['showanyway'] = 'Tiếp tục hiển thị';

$labels['filename'] = 'Tên tập tin';
$labels['filesize'] = 'Kích cỡ tập tin';

$labels['addtoaddressbook'] = 'Thêm vào danh bạ';

// weekdays short
$labels['sun'] = 'Chủ Nhật';
$labels['mon'] = 'Thứ Hai';
$labels['tue'] = 'Thứ Ba';
$labels['wed'] = 'Thứ Tư';
$labels['thu'] = 'Thứ Năm';
$labels['fri'] = 'Thứ Sáu';
$labels['sat'] = 'Thứ Bảy';

// weekdays long
$labels['sunday']    = 'Chủ Nhật';
$labels['monday']    = 'Thứ Hai';
$labels['tuesday']   = 'Thứ Ba';
$labels['wednesday'] = 'Thứ Tư';
$labels['thursday']  = 'Thứ Năm';
$labels['friday']    = 'Thứ Sáu';
$labels['saturday']  = 'Thứ Bảy';

// months short
$labels['jan']	= 'Tháng Một';
$labels['feb']	= 'Tháng Hai';
$labels['mar']	= 'Tháng Ba';
$labels['apr']	= 'Tháng Tư';
$labels['may']	= 'Tháng Năm';
$labels['jun']	= 'Tháng Sáu';
$labels['jul'] 	= 'Tháng Bảy';
$labels['aug']	= 'Tháng Tám';
$labels['sep']	= 'Tháng Chín';
$labels['oct']	= 'Tháng Mười';
$labels['nov']	= 'Tháng Mười Một';
$labels['dec']	= 'Tháng Mười Hai';

// months long
$labels['longjan']	= 'Tháng Một';
$labels['longfeb']	= 'Tháng Hai';
$labels['longmar']	= 'Tháng Ba';
$labels['longapr']	= 'Tháng Tư';
$labels['longmay']	= 'Tháng Năm';
$labels['longjun']	= 'Tháng Sáu';
$labels['longjul']	= 'Tháng Bảy';
$labels['longaug']	= 'Tháng Tám';
$labels['longsep']	= 'Tháng Chín';
$labels['longoct']	= 'Tháng Mười';
$labels['longnov']	= 'Tháng Mười Một';
$labels['longdec']	= 'Tháng Mười Hai';

$labels['today'] = 'Hôm nay';

// toolbar buttons
$labels['refresh']          = 'Nạp lại';
$labels['checkmail']        = 'Kiểm tra thư mới';
$labels['compose']          = 'Soạn thư';
$labels['writenewmessage']  = 'Viết thư mới';
$labels['reply']            = 'Trả lời thư';
$labels['replytomessage']   = 'Trả lời thư người gửi';
$labels['replytoallmessage'] = 'Trả lời lại danh sách hoặc tới tất cả người gửi và người nhận của thư này';
$labels['replyall']         = 'Trả lời tất cả';
$labels['replylist']        = 'Danh sách trả lời';
$labels['forward']          = 'Chuyển tiếp';
$labels['forwardinline']    = 'Chuyển tiếp thư';
$labels['forwardattachment'] = 'Chuyển tiếp theo phương cách đính kèm';
$labels['forwardmessage']   = 'Chuyển tiếp thư';
$labels['deletemessage']    = 'Xóa thư';
$labels['movemessagetotrash'] = 'Chuyển thư vào thùng rác';
$labels['printmessage']     = 'In thư này';
$labels['previousmessage']  = 'Hiển thị thư trước đó';
$labels['firstmessage']     = 'Hiển thị thư đầu tiên';
$labels['nextmessage']      = 'Hiển thị thư tiếp theo';
$labels['lastmessage']      = 'Hiển thị thư cuối';
$labels['backtolist']       = 'Quay lại danh sách thư';
$labels['viewsource']       = 'Hiển thị nguồn';
$labels['mark']             = 'Đánh dấu';
$labels['markmessages']     = 'Đánh dấu các thư';
$labels['markread']         = 'Là đã đọc';
$labels['markunread']       = 'Là chưa đọc';
$labels['markflagged']      = 'Là quan trọng';
$labels['markunflagged']    = 'Là không quan trọng';
$labels['moreactions']      = 'Thêm hành động...';
$labels['more']             = 'Thêm';
$labels['back']             = 'Quay lại';
$labels['options']          = 'Tuỳ chọn';

$labels['select'] = 'Lựa chọn';
$labels['all'] = 'Tất cả';
$labels['none'] = 'Không có';
$labels['currpage'] = 'Trang hiện tại';
$labels['unread'] = 'Chưa đọc';
$labels['flagged'] = 'Đã đánh dấu';
$labels['unanswered'] = 'Chưa trả lời';
$labels['withattachment'] = 'With attachment';
$labels['deleted'] = 'Đã xóa';
$labels['undeleted'] = 'Chưa xóa được';
$labels['invert'] = 'Đảo ngược';
$labels['filter'] = 'Soạn lọc';
$labels['list'] = 'Danh sách';
$labels['threads'] = 'Chủ đề thư';
$labels['expand-all'] = 'Mở rộng tất cả';
$labels['expand-unread'] = 'Mở rộng thư chưa đọc';
$labels['collapse-all'] = 'Đóng hết';
$labels['threaded'] = 'Đã nhóm theo chủ đề thư';

$labels['autoexpand_threads'] = 'Mở rộng các chủ đề thư';
$labels['do_expand'] = 'Tất cả các chủ đề thư';
$labels['expand_only_unread'] = 'Chỉ với những thư chưa đọc';
$labels['fromto'] = 'Từ/Đến';
$labels['flag'] = 'Đánh dấu';
$labels['attachment'] = 'Đính kèm';
$labels['nonesort'] = 'Không có';
$labels['sentdate'] = 'Ngày đã gửi';
$labels['arrival'] = 'Ngày đến';
$labels['asc'] = 'Tăng dần';
$labels['desc'] = 'Giảm dần';
$labels['listcolumns'] = 'Các cột danh sách';
$labels['listsorting'] = 'Cột sắp xếp';
$labels['listorder'] = 'Thứ tự sắp xếp';
$labels['listmode'] = 'Xem dạng danh sách';

$labels['folderactions'] = 'Thao tác với thư mục';
$labels['compact'] = 'Nén';
$labels['empty'] = 'Trống';
$labels['importmessages'] = 'Import messages';

$labels['quota'] = 'Lượng đĩa sử dụng';
$labels['unknown']  = 'Không rõ';
$labels['unlimited']  = 'không giới hạn';

$labels['quicksearch']  = 'Tìm nhanh';
$labels['resetsearch']  = 'Thiết lập lại tìm kiếm';
$labels['searchmod']  = 'Tìm kiếm với từ khóa và ký tự đặc biệt [() : " - ]';
$labels['msgtext']  = 'Toàn bộ thư';
$labels['body']  = 'Nội dung thư';
$labels['type'] = 'Type';

$labels['openinextwin'] = 'Mở trong khung cửa mới';
$labels['emlsave'] = 'Tải về theo định dạng .eml';
$labels['changeformattext'] = 'Display in plain text format';
$labels['changeformathtml'] = 'Display in HTML format';

// message compose
$labels['editasnew']      = 'Sửa như một email mới';
$labels['send']           = 'Gửi';
$labels['sendmessage']    = 'Gửi thư';
$labels['savemessage']    = 'Lưu dạng nháp';
$labels['addattachment']  = 'Kèm theo tập tin';
$labels['charset']        = 'Bộ ký tự';
$labels['editortype']     = 'Loại trình soạn thảo';
$labels['returnreceipt']  = 'Báo nhận';
$labels['dsn']            = 'Thông báo trạng thái gửi thư';
$labels['mailreplyintro'] = 'Vào ngày $date, $sender viết:';
$labels['originalmessage'] = 'Thư gốc';

$labels['editidents']    = 'Chỉnh sửa nhận diện';
$labels['spellcheck']    = 'Đánh vần';
$labels['checkspelling'] = 'Kiểm tra chính tả';
$labels['resumeediting'] = 'Tiếp tục soạn thảo';
$labels['revertto']      = 'Trở lại với';

$labels['attach'] = 'Đính kèm';
$labels['attachments'] = 'Các đính kèm';
$labels['upload'] = 'Tải lên';
$labels['uploadprogress'] = '$percent ($current từ $total)';
$labels['close']  = 'Đóng';
$labels['messageoptions']  = 'Tùy chọn cho thư...';

$labels['low']     = 'Thấp';
$labels['lowest']  = 'Thấp nhất';
$labels['normal']  = 'Bình thường';
$labels['high']    = 'Cao';
$labels['highest'] = 'Cao nhất';

$labels['nosubject']  = '(Không có chủ đề)';
$labels['showimages'] = 'Hiển thị ảnh';
$labels['alwaysshow'] = 'Luôn luôn hiển thị ảnh từ $sender';
$labels['isdraft']    = 'Đây là thư nháp';
$labels['andnmore']   = 'Thêm $nr';
$labels['togglemoreheaders'] = 'Hiển thị chi tiết thông tin thư';
$labels['togglefullheaders'] = 'Mở/đóng chi tiết thông tin thư';

$labels['htmltoggle'] = 'Mã HTML';
$labels['plaintoggle'] = 'Văn bản thô';
$labels['savesentmessagein'] = 'Lưu thư đã gửi trong';
$labels['dontsave'] = 'Không lưu';
$labels['maxuploadsize'] = 'Dung lượng tập tin tối đa cho phép là $size';

$labels['addcc'] = 'Thêm Cc';
$labels['addbcc'] = 'Thêm Bcc';
$labels['addreplyto'] = 'Thêm trả lời tới';
$labels['addfollowupto'] = 'Thêm sự theo dõi tới';

// mdn
$labels['mdnrequest'] = 'Người gửi thư này muốn nhận được thông báo khi bạn đọc thư. Bạn có muốn cho người gửi biết thông báo này không?';
$labels['receiptread'] = 'Biên nhận (đã đọc)';
$labels['yourmessage'] = 'Đây là sự trả lại xác nhận cho thư của bạn';
$labels['receiptnote'] = 'Lưu ý: Biên nhận này chỉ báo rằng thư đã được hiển thị trên máy tính của người nhận. Không bảo đảm rằng người nhận đó đã có đọc hoặc hiểu nội dung thư.';

// address boook
$labels['name']         = 'Tên hiển thị';
$labels['firstname']    = 'Tên Gọi';
$labels['surname']      = 'Tên Họ';
$labels['middlename']   = 'Tên đệm';
$labels['nameprefix']   = 'Tiền tố';
$labels['namesuffix']   = 'Hậu tố';
$labels['nickname']     = 'Biệt danh';
$labels['jobtitle']     = 'Chức danh Công việc';
$labels['department']   = 'Khoa/Ban';
$labels['gender']       = 'Giới tính';
$labels['maidenname']   = 'Tên thời con gái';
$labels['email']        = 'Thư điện tử';
$labels['phone']        = 'Điện thoại';
$labels['address']      = 'Địa chỉ';
$labels['street']       = 'Đường';
$labels['locality']     = 'Thành phố';
$labels['zipcode']      = 'Mã bưu điện';
$labels['region']       = 'Bang/Tỉnh';
$labels['country']      = 'Quốc gia';
$labels['birthday']     = 'Ngày sinh';
$labels['anniversary']  = 'Kỷ niệm';
$labels['website']      = 'Trang Web';
$labels['instantmessenger'] = 'Tin nhắn nhanh';
$labels['notes'] = 'Các ghi chú';
$labels['male']   = 'Nam';
$labels['female'] = 'Nữ';
$labels['manager'] = 'Người quản lý';
$labels['assistant'] = 'Trợ lý';
$labels['spouse'] = 'Vợ/Chồng';
$labels['allfields'] = 'Tất cả các lĩnh vực';
$labels['search'] = 'Tìm kiếm';
$labels['advsearch'] = 'Tìm kiếm chi tiết';
$labels['advanced'] = 'Nâng cao';
$labels['other'] = 'Loại khác';

$labels['typehome']   = 'Thư mục chính';
$labels['typework']   = 'Cơ quan';
$labels['typeother']  = 'Loại khác';
$labels['typemobile']  = 'Số di động';
$labels['typemain']  = 'Chính';
$labels['typehomefax']  = 'Điện thư ở Nhà';
$labels['typeworkfax']  = 'Điện thư cơ quan';
$labels['typecar']  = 'Xe';
$labels['typepager']  = 'Máy nhắn tin';
$labels['typevideo']  = 'Phim';
$labels['typeassistant']  = 'Trợ lý';
$labels['typehomepage']  = 'Trang nhà';
$labels['typeblog'] = 'Trang nhật ký';
$labels['typeprofile'] = 'Lý lịch';

$labels['addfield'] = 'Thêm lĩnh vực...';
$labels['addcontact'] = 'Thêm một liên hệ mới';
$labels['editcontact'] = 'Sửa liên lạc';
$labels['contacts'] = 'Danh bạ';
$labels['contactproperties'] = 'Tính chất của liên hệ';
$labels['personalinfo'] = 'Thông tin cá nhân';

$labels['edit']   = 'Chỉnh sửa';
$labels['cancel'] = 'Huỷ';
$labels['save']   = 'Lưu';
$labels['delete'] = 'Xóa';
$labels['rename'] = 'Đổi tên';
$labels['addphoto'] = 'Thêm';
$labels['replacephoto'] = 'Thay thế';
$labels['uploadphoto'] = 'Tải ảnh lên';

$labels['newcontact']     = 'Tạo danh bạ mới';
$labels['deletecontact']  = 'Xoá các liên lạc đã chọn';
$labels['composeto']      = 'Soạn thư cho';
$labels['contactsfromto'] = 'Liên hệ từ $from - $to / $count';
$labels['print']          = 'In ra';
$labels['export']         = 'Trích xuất';
$labels['exportall']      = 'Xuất tất cả';
$labels['exportsel']      = 'Xuất mục chọn';
$labels['exportvcards']   = 'Tải dữ liệu máy theo định dạng vCard';
$labels['newcontactgroup'] = 'Tạo nhóm liên lạc mới';
$labels['grouprename']    = 'Đổi tên nhóm';
$labels['groupdelete']    = 'Xóa nhóm';
$labels['groupremoveselected'] = 'Xóa bỏ các liên lạc được chọn từ nhóm';

$labels['previouspage']   = 'Hiển thị trang trước';
$labels['firstpage']      = 'Hiển thị trang đầu tiên';
$labels['nextpage']       = 'Hiển thị trang kế tiếp';
$labels['lastpage']       = 'Hiển thị trang cuối';

$labels['group'] = 'Nhóm';
$labels['groups'] = 'Các nhóm';
$labels['listgroup'] = 'List group members';
$labels['personaladrbook'] = 'Các địa chỉ cá nhân';

$labels['searchsave'] = 'Lưu tìm kiếm';
$labels['searchdelete'] = 'Xóa tìm kiếm';

$labels['import'] = 'Nhập';
$labels['importcontacts'] = 'Nhập liên lạc';
$labels['importfromfile'] = 'Nhập từ tập tin:';
$labels['importtarget'] = 'Thêm liên lạc mới vào sổ địa chỉ';
$labels['importreplace'] = 'Thay thế toàn bộ sổ địa chỉ';
$labels['importdesc'] = 'Bạn có thể cập nhật các liên hệ từ một sổ địa chỉ có sẵn.<br />Hiện tại, chúng tôi hỗ trợ nhập địa chỉ từ dạng dữ liệu <a href="http://en.wikipedia.org/wiki/VCard">vCard</a> hoặc CSV (dạng thức dữ liệu ngăn cách bằng dấu phẩy)';
$labels['done'] = 'Hoàn tất';

// settings
$labels['settingsfor'] = 'Thiết lập cho';
$labels['about'] = 'Lời ngõ';
$labels['preferences'] = 'Sở thích';
$labels['userpreferences'] = 'Sở thích người dùng';
$labels['editpreferences'] = 'Chỉnh sửa sở thích';

$labels['identities'] = 'Các nhận diện';
$labels['manageidentities'] = 'Quản lý nhận diện cho trương mục này';
$labels['newidentity'] = 'Nhận diện mới';

$labels['newitem'] = 'Mục mới';
$labels['edititem'] = 'Sửa đổi mục';

$labels['preferhtml'] = 'Hiển thị HTML';
$labels['defaultcharset'] = 'Bộ ký tự mặc định';
$labels['htmlmessage'] = 'Thư theo định dạng HTML';
$labels['messagepart'] = 'Một phần';
$labels['digitalsig'] = 'Chữ ký điện tử';
$labels['dateformat'] = 'Định dạng ngày tháng';
$labels['timeformat'] = 'Định dạng thời gian';
$labels['prettydate'] = 'Ngày tháng đầy đủ';
$labels['setdefault']  = 'Thiết lập mặc định';
$labels['autodetect']  = 'Tự động';
$labels['language']  = 'Ngôn ngữ';
$labels['timezone']  = 'Múi giờ';
$labels['pagesize']  = 'Số dòng trên trang';
$labels['signature'] = 'Chữ ký';
$labels['dstactive']  = 'Giờ mùa hè';
$labels['showinextwin'] = 'Mở thư trong khung mới';
$labels['composeextwin'] = 'Soạn thư trong khung mới';
$labels['htmleditor'] = 'Soạn thư dạng HTML';
$labels['htmlonreply'] = 'Chỉ trả lời lại bằng thư HTML';
$labels['htmlonreplyandforward'] = 'Khi chuyển tiếp hoặc trả lời thư theo định dạng HTML';
$labels['htmlsignature'] = 'Chữ ký HTML';
$labels['showemail'] = 'Show email address with display name';
$labels['previewpane'] = 'Hiển thị ô Xem thử';
$labels['skin'] = 'Bề mặt giao diện';
$labels['logoutclear'] = 'Xóa sạch rác khi thoát';
$labels['logoutcompact'] = 'Nén gọn hộp thư lại khi thoát';
$labels['uisettings'] = 'Giao diện người dùng';
$labels['serversettings'] = 'Thiết lập máy chủ';
$labels['mailboxview'] = 'Trình cảnh hộp thư';
$labels['mdnrequests'] = 'Yêu cầu gửi lại biên nhận';
$labels['askuser'] = 'Hỏi tôi';
$labels['autosend'] = 'Gửi biên nhận';
$labels['autosendknown'] = 'Gửi biên nhận tới liên lạc của tôi, nếu không thì hỏi tôi';
$labels['autosendknownignore'] = 'Gửi biên nhận tới liên lạc của tôi, nếu không thì bỏ qua';
$labels['ignore'] = 'Bỏ qua';
$labels['readwhendeleted'] = 'Đánh dấu thư là đã đọc khi xóa';
$labels['flagfordeletion'] = 'Đánh dấu thư để xóa thay vì xóa liền';
$labels['skipdeleted'] = 'Không hiển thị thư đã xóa';
$labels['deletealways'] = 'Nếu việc chuyển thư vào thùng rác bị lỗi thì xóa luôn.';
$labels['deletejunk'] = 'Trực tiếp xóa các thư rác trong thùng Junk';
$labels['showremoteimages'] = 'Hiển thị ảnh nội tuyến từ xa';
$labels['fromknownsenders'] = 'Từ người gửi đã biết';
$labels['always'] = 'luôn luôn';
$labels['showinlineimages'] = 'Hiển thị ảnh đính kèm phía dưới thư';
$labels['autosavedraft']  = 'Tự động lưu bản nháp';
$labels['everynminutes']  = '$n phút một lần';
$labels['refreshinterval']  = 'Tải dữ liệu mới (ví dụ: kiểm tra thư mới)';
$labels['never']  = 'không bao giờ';
$labels['immediately']  = 'ngay lập tức';
$labels['messagesdisplaying'] = 'Đang hiển thị thư';
$labels['messagescomposition'] = 'Đang viết thư';
$labels['mimeparamfolding'] = 'Tên đính kèm';
$labels['2231folding'] = 'RFC 2231 đầy đủ (Thunderbird)';
$labels['miscfolding'] = 'RFC 2047/2231 (MS Outlook)';
$labels['2047folding'] = 'RFC 2047 đầy đủ (khác)';
$labels['force7bit'] = 'Sử dụng MIME mã hóa cho ký tự 8-bit';
$labels['advancedoptions'] = 'Tùy chọn tính năng cao hơn';
$labels['focusonnewmessage'] = 'Tập trung khung cửa trình duyệt vào thư mới';
$labels['checkallfolders'] = 'Kiểm tra thư mới trong tất cả thư mục';
$labels['displaynext'] = 'Sau khi "xóa/di chuyển" thư thì hiển thị thư kế tiếp';
$labels['defaultfont'] = 'Phông chữ mặc định của thư có mã HTML';
$labels['mainoptions'] = 'Tùy chọn chính';
$labels['browseroptions'] = 'Tùy chọn Trình duyệt';
$labels['section'] = 'Phần';
$labels['maintenance'] = 'Bảo trì';
$labels['newmessage'] = 'Thư mới';
$labels['signatureoptions'] = 'Tuỳ chọn chữ ký';
$labels['whenreplying'] = 'Khi trả lời';
$labels['replyempty'] = 'Không mở/đóng ngoạc nội dung bản thư gốc';
$labels['replytopposting'] = 'Viết nội dung thư mới bên trên nội dung thư cũ';
$labels['replybottomposting'] = 'Viết nội dung thư mới bên dưới nội dung thư cũ';
$labels['replyremovesignature'] = 'Khi trả lời bỏ chữ ký cũ khỏi nội dung thư';
$labels['autoaddsignature'] = 'Tự động thêm chữ ký';
$labels['newmessageonly'] = 'chỉ thư mới';
$labels['replyandforwardonly'] = 'chỉ trả lời và chuyển tiếp thư';
$labels['insertsignature'] = 'Chèn chữ ký';
$labels['previewpanemarkread']  = 'Đánh dẫu thư xem thử là đã đọc';
$labels['afternseconds']  = 'sau $n giây';
$labels['reqmdn'] = 'Luôn luôn yêu cầu biên nhận khi gửi thư';
$labels['reqdsn'] = 'Luôn yêu cầu xác nhận trạng thái thư cho người gửi';
$labels['replysamefolder'] = 'Đưa các thư phản hồi  vào cùng thư mục của thư đang trả lời';
$labels['defaultabook'] = 'Sổ địa chỉ mặc định';
$labels['autocompletesingle'] = 'Bỏ qua địa chỉ email thay thế trong năng tự động gõ';
$labels['listnamedisplay'] = 'Hiện thị danh sách liên lạc như là';
$labels['spellcheckbeforesend'] = 'Kiểm tra chính tả trước khi gửi thư';
$labels['spellcheckoptions'] = 'Tùy chọn kiểm tra chính tả';
$labels['spellcheckignoresyms'] = 'Bỏ qua từ kèm biểu tượng';
$labels['spellcheckignorenums'] = 'Bỏ qua các từ kèm số';
$labels['spellcheckignorecaps'] = 'Bỏ qua các từ được viết hoa';
$labels['addtodict'] = 'Thêm vào từ điển';
$labels['mailtoprotohandler'] = 'Xác định cách xử lý giao thức mailto: liên kết';
$labels['standardwindows'] = 'Handle popups as standard windows';
$labels['forwardmode'] = 'Chuyển tiếp thư';
$labels['inline'] = 'nội tuyến';
$labels['asattachment'] = 'dạng gửi kèm';

$labels['folder']  = 'Thư mục';
$labels['folders']  = 'Các thư mục';
$labels['foldername']  = 'Tên thư mục';
$labels['subscribed']  = 'Đã đăng ký';
$labels['messagecount'] = 'Các tin nhắn';
$labels['create']  = 'Tạo';
$labels['createfolder']  = 'Tạo thư mục mới';
$labels['managefolders']  = 'Quản lý các thư mục';
$labels['specialfolders'] = 'Thư mục đặc biệt';
$labels['properties'] = 'Các thuộc tính';
$labels['folderproperties'] = 'Thuộc tính thư mục';
$labels['parentfolder'] = 'Thư mục cha';
$labels['location'] = 'Địa điểm';
$labels['info'] = 'Thông tin';
$labels['getfoldersize'] = 'Nhấp chuột để xem kích thước thư mục';
$labels['changesubscription'] = 'Nhấp chuột để đổi cách đóng góp';
$labels['foldertype'] = 'Kiểu thư mục';
$labels['personalfolder']  = 'Thư mục cá nhân';
$labels['otherfolder']  = 'Thư mục khác của Người dùng';
$labels['sharedfolder']  = 'Thư mục công khai';

$labels['sortby'] = 'Soạn theo';
$labels['sortasc']  = 'Soạn tăng dần';
$labels['sortdesc'] = 'Soạn giảm dần';
$labels['undo'] = 'Hoàn lại';

$labels['installedplugins'] = 'Các chương trình phụ trợ đã được cài đặt';
$labels['plugin'] = 'Phần bổ sung';
$labels['version'] = 'Phiên bản';
$labels['source'] = 'Nguồn';
$labels['license'] = 'Bản quyền';
$labels['support'] = 'Yêu cầu hỗ trợ';

// units
$labels['B'] = 'B';
$labels['KB'] = 'KB';
$labels['MB'] = 'MB';
$labels['GB'] = 'GB';

// character sets
$labels['unicode'] = 'Unicode';
$labels['english'] = 'Tiếng Anh';
$labels['westerneuropean'] = 'Tiếng Tây Âu';
$labels['easterneuropean'] = 'Tiếng Đông Âu';
$labels['southeasterneuropean'] = 'Tiếng Đông-Nam Âu';
$labels['baltic'] = 'Tiếng Ban-tích (Ấn-Âu)';
$labels['cyrillic'] = 'Tiếng Ki-rin';
$labels['arabic'] = 'Tiếng Ả Rập';
$labels['greek'] = 'Tiếng Hy Lạp';
$labels['hebrew'] = 'Tiếng Do Thái';
$labels['turkish'] = 'Tiếng Thổ Nhĩ Kỳ';
$labels['nordic'] = 'Tiếng Bắc Âu';
$labels['thai'] = 'Tiếng Thái Lan';
$labels['celtic'] = 'Tiếng Xen-tơ';
$labels['vietnamese'] = 'Tiếng Việt';
$labels['japanese'] = 'Tiếng Nhật';
$labels['korean'] = 'Tiếng Hàn';
$labels['chinese'] = 'Tiếng Hoa';

?>
