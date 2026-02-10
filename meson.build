project('basicstring', 'c')

src = files(
    'src/basicstring.c'
)
inc = include_directories('inc')
staticlib = static_library('basicstring', src, include_directories : inc)
subdir('tests')