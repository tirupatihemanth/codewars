execute pathogen#infect()
syntax on
set number
let g:ycm_global_ycm_extra_conf = "~/.vim/.ycm_extra_conf.py"
let g:ycm_key_list_select_completion=[]
let g:ycm_key_list_previous_completion=[]
set tabstop=4
set smartindent
set shiftwidth=4
set expandtab
set smarttab
set showcmd
set showmatch
set hlsearch
set incsearch
set ignorecase
set smartcase
set backspace=2
set autoindent
set ruler
set mouse=a
filetype plugin indent on
syntax enable
set background=dark
colorscheme sean
set t_Co=256
let g:CSApprox_attr_map = {'bold' :'bold', 'italic' : '', 'sp' : ''}
autocmd FileType cpp call IoStream()
fu! IoStream()
    if line("$") == 1
        call append(0, "#include <iostream>")
        call append(1, "#include <vector>")
        call append(2, "#include <string>")
        call append(3, "#include <algorithm>")
        call append(4, "#include <cmath>")
        call append(5, "#include <sstream>")
        call append(6, "#include <map>")
        call append(7, "#include <set>")
        call append(8, "#include <iomanip>")

        call append(10, "")

        call append(11, "#define sz(a) int((a).size())")
        call append(12, "#define pb push_back")
        call append(13, "#define all(c) (c).begin(), (c).end()")
        call append(14, "#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i!=(c).end(); i++")
        call append(15, "#define present(c,x) ((c).find(x)!=(c).end())")
        call append(16, "#define cpresent(c,x) (find(all(c),x) != (c).end()")

        call append(17,"")
        call append(18, "using namespace std;")
        call append(19, "")

        call append(20, "typedef vector<int> vi;")
        call append(21, "typedef vector<vi> vvi;")
        call append(22, "typedef pair<int, int> ii;")

        call append(23, "")
        call append(24, "int main(){")
        call append(25, "")
        call append(26, "    return 0;")
        call append(27, "}")
    endif
endfu
