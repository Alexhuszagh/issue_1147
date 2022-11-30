use std::env;
use std::path::PathBuf;

fn main() {
    let mut builder = bindgen::Builder::default();
    if cfg!(feature = "cpp") {
        builder = builder.clang_arg("-x").clang_arg("c++");
    }
    let bindings = builder
        .clang_arg("-I./test")
        .header("test.h")
        .generate()
        .expect("Unable to generate bindings");

    let out_path = PathBuf::from(env::var("OUT_DIR").unwrap());
    bindings
        .write_to_file(out_path.join("bindings.rs"))
        .expect("Couldn't write bindings!");
}
