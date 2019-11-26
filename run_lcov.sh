#!/bin/bash
# Based on: http://www.robertwloch.net/2013/06/generating-lcov-coverage-with-qtcreator/
#           https://github.com/rowlo/processCoverage/blob/master/processCoverage.sh

main_dir=lcov_build

mkdir $main_dir &>/dev/null

cd $main_dir
cmake -DPROFILE=1 ..
gmake -j `nproc`

rv=$?
if [ $rv -ne 0 ]; then
    echo "Compilation error detected (return=$rv) !"
    exit $rv;
fi

cd ..
./$main_dir/tests/tests

cd $main_dir
lcov -d . -c -o ./coverage.info
lcov --list-full-path -e ./coverage.info *.cpp -o ./coverage-stripped.info

mkdir ./out &>/dev/null

genhtml --legend --demangle-cpp -o ./out/ ./coverage-stripped.info

lcov -d . -z

cd ..

echo Now you can see results by run command: firefox $main_dir/out/index.html

