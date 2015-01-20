Pod::Spec.new do |s|
  s.name         = "AADatePicker"
  s.version      = "0.0.1"
  s.license      =  { :type => 'MIT', :file => 'LICENSE' }
  s.authors       = { "Askar Mustafin" => "mustafinaskar@gmail.com" }
  s.summary      = "Custom AADatePicker"
  s.homepage     = "https://github.com/Asich/AADatePicker"
  
# Source Info
  s.platform     = :ios, '7.0'
  s.source       = { :git => "https://github.com/Asich/AADatePicker.git", :tag => "0.0.1" }
  s.source_files = 'AADatePicker/AADatePicker.{h,m}'
  s.resources    = 'AADatePicker/AADatePicker.bundle'
  s.requires_arc = true
end
