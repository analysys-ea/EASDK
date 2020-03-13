Pod::Spec.new do |spec|

  spec.name         = "EASDK"
  spec.version      = "1.1.0"
  spec.summary      = "方舟易达SDK"
  spec.description  = "⾃动化运营平台，通过EA产品帮助客户建⽴起与用户互动的各种桥梁，实现自动化、个性化的触达⽤户，进⽽促进用户增长。"
  spec.homepage     = "https://github.com/analysys-ea/EASDK"
  spec.license      = { :type => "MIT", :file => "README.md" }
  spec.author       = { "analysys" => "shadeless@126.com" }
  spec.platform     = :ios, "8.0"
  spec.source       = { :git => "https://github.com/analysys-ea/EASDK.git", :tag => spec.version }
  spec.vendored_frameworks = "EASDK.framework"
  spec.requires_arc = true

end
