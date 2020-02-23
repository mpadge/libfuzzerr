# libfuzzerr

<!-- badges: start -->

[![Travis build
status](https://travis-ci.org/mpadge/libfuzzerr.svg?branch=master)](https://travis-ci.org/mpadge/libfuzzerr)
[![Project Status:
Concept](https://www.repostatus.org/badges/latest/concept.svg)](https://www.repostatus.org/#concept)
[![R build
status](https://github.com/mpadge/libfuzzerr/workflows/R-CMD-check/badge.svg)](https://github.com/mpadge/libfuzzerr/actions)
<!-- badges: end -->

Experiments in using [llvm’s
LibFuzzer](https://llvm.org/docs/LibFuzzer.html) on the `src` code of an
R package, with insprition duly taken from google’s [tutorial on
LibFuzzer](https://github.com/google/fuzzing/blob/master/tutorial/libFuzzerTutorial.md).
This generally requires the latest version of
[`libclang++`](http://releases.llvm.org/9.0.0/tools/clang/docs/ReleaseNotes.html),
and so is probably best all done within some kind of container.
