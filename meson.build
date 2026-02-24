project(
    'basicstring',
    'c',
    version : '0.0.1'
)

src = files('src/basicstring.c')
inc = include_directories('inc')
static_library('basicstring', src, include_directories: inc)
dynamiclib = library('basicstring', src, include_directories: inc)
subdir('tests')