cc_binary(
    name = "stellar",
    srcs = ["main.cpp"],
    deps = ["//rocket"]
)

genrule(
    name = "stellar_bundle",
    srcs = ["README.md", ":stellar"],
    outs = ["stellar.tar.gz"],
    cmd = "tar cfz $(OUTS) $(SRCS) --transform 's,^bazel-out/.*/bin/,bin/,'"
)
