Pod::Spec.new do |s|
  s.name         = "SKUserDefault"
  s.version      = "1.0.0"
  s.summary      = "NSUserDefult encapsulation"
  s.homepage     = "https://github.com/githubze/SKUserDefault"
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { 'githubze' => '1424395628@qq.com' }
  s.source       = { :git => "https://github.com/githubze/SKUserDefault.git", :tag => s.version.to_s }
  s.ios.deployment_target = '8.0'
  s.source_files = "SKUserDefault/**/*.{h,m}"
  s.requires_arc = true

end