-- Map 'Tab' to go to the next buffer
vim.api.nvim_set_keymap("n", "<S-Tab>", ":bnext<CR>", { noremap = true, silent = true })

-- Map 'Shift-Tab' to go to the previous buffer
vim.api.nvim_set_keymap("n", "<Tab>", ":bprevious<CR>", { noremap = true, silent = true })

vim.api.nvim_set_keymap("n", "<A-Up>", ":m .-1<CR>==", { noremap = true, silent = true })
vim.api.nvim_set_keymap("n", "<A-Down>", ":m .+1<CR>==", { noremap = true, silent = true })

vim.api.nvim_set_keymap("x", "<A-Up>", [[:m '<-2<CR>gv=gv]], { noremap = true, silent = true })
vim.api.nvim_set_keymap("x", "<A-Down>", [[:m '>+1<CR>gv=gv]], { noremap = true, silent = true })

vim.api.nvim_set_keymap("n", "'", "<cmd>Telescope marks<cr>", { noremap = true, silent = true })
vim.api.nvim_set_keymap("n", "?", "<cmd>Telescope marks<cr>", { noremap = true, silent = true })
