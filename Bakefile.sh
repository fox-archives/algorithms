# shellcheck shell=bash

task.build-gen() {
	mkdir -p './build' && cd './build'
	cmake -G Ninja ../
}

task.build() {
	cd './build'
	cmake --build .
}