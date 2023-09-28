fn replace_special_chars(input: &str) -> String {
    let mut output = String::with_capacity(input.len());
    for ch in input.chars() {
        match ch {
            '&' => output.push_str("&amp;"),
            '<' => output.push_str("&lt;"),
            '>' => output.push_str("&gt;"),
            _ => output.push(ch),
        }
    }
    output
}

fn main() {
    let input = "Hello, World & Friends <3 >2!";
    let result = replace_special_chars(&input);

    println!("Original: {}", input);
    println!("Modified: {}", result);
}
