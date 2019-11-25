cc_binary(
    name = "stellar",
    srcs = ["main.cpp"],
    deps = ["//rocket"]
)

filegroup(
    name = "docs",
    srcs = ["README.md", "COPYING"],
)

genrule(
    name = "stellar_bundle",
    srcs = [":docs", ":stellar"],
    outs = ["stellar.tar.gz"],
    cmd = "tar cfz $(OUTS) $(SRCS) --transform 's,^bazel-out/.*/bin/,bin/,'"
)
