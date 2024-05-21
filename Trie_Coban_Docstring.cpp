    /*
            Hàm tạo nút mới 

            Thông tin : 
                nodes[].child : Mô tả các cạnh của nút
                nodes[].exist : Số lượng các tiền tốt kết thúc ở nút hiện tại
                nodes[].cnt : Số lượng tiền tố đi qua nút hiện tại

            Thực hiện : 
                Khởi tạo cách cạnh rỗng 
                Khởi tạo các biến số lượng kết thúc và tiền tố bằng 0 

            Trả về nút hiện tại 

        */

    /*
        Hàm thêm một xâu vào trie 

        Thông tin 
            nodes[].child[] : Mô tả các cạnh của nút
            nodes[].exist : Số lượng các tiền tốt kết thúc ở nút hiện tại
            nodes[].cnt : Số lượng tiền tố đi qua nút hiện tại

        Thực hiện 
            Đi lần lượt các cạnh trên trie theo các kí tự của xâu
            Nếu cạnh ương ưng chưa tồn tại thì thực hiện tạo đỉnh mới
            Gọi hàm new_node() lưu cạnh vào đỉnh vừa mới được tạo
            Tăng biến đếm tiền tố các đỉnh đã đi qua
            Tăng biến biến đếm kết thúc ở đỉnh kết thúc 
    */

   /*
        Hàm thực hiện xóa xâu

        Thông tin 
            nodes[].child[] : Mô tả các cạnh của nút
            nodes[].exist : Số lượng các tiền tốt kết thúc ở nút hiện tại
            nodes[].cnt : Số lượng tiền tố đi qua nút hiện tại

        Thực hiện
            Đi lần lượt theo các chữ cái của xâu, nếu chưa đến đỉnh cuối cùng thì gọi đệ quy xuống dưới
            Nếu đỉnh con tương ứng bị xóa thì ta sẽ xóa cạnh
            Nếu đỉnh tương ứng với xâu s bị xóa thì giảm biến nodes[].exist
            Nếu đỉnh đang xét không phải là gốc thì giảm biến cnt của đỉnh đi 1, kiểm tra xem đỉnh có bị xóa hay không (khi biến nodes[].cnt == 0)

        Trả về xem đỉnh có bị xóa hay không
    */

    /*
        Hàm xóa một đỉnh 
        Thực hiện
            Gọi hàm kiểm tra xem xâu có trong trie hay không
            Nếu xâu tồn tại gọi hàm thực hiện xóa xâu
    */

    /*
        Hàm kiếm tra xem xâu có trong trie hay không

        Thông tin 
            nodes[].child[] : Mô tả các cạnh của nút
            nodes[].exist : Số lượng các tiền tốt kết thúc ở nút hiện tại

        Thực hiện
            Đi lần lượt các cạnh trên trie theo các kí tự của xâu
            Nếu phát hiện có một cạnh không tồn tại trả về false
            Khi đi hết thì dùng biến nodes[pos].exist xem có bao nhiêu xâu kết thúc ở đỉnh cuối cùng

        Trả về node[p].exist != 0
    */