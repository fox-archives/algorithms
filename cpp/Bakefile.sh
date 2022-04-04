# shellcheck shell=bash

task.init() {
	mkdir -p './build' && cd './build'
	conan install ..
}

task.prebuild() {
	mkdir -p './build' && cd './build'
	cmake -G Ninja ../
}

task.build() {
	cd './build'
	cmake --build .
}

task.run() {
	local file="$1"
	bake.assert_not_empty 'file'

	cd './build'
	./"$file"
}