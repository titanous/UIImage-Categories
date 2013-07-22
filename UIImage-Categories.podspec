Pod::Spec.new do |s|
  s.name         = "UIImage-Categories"
  s.version      = "0.1.0"
  s.summary      = "A fork of Trevor Harmon's UIImage category methods."
  s.homepage     = "http://vocaro.com/trevor/blog/2009/10/12/resize-a-uiimage-the-right-way/"
  s.author       = 'Trevor Harmon'
  s.license      = { :type => 'Custom', :text => 'All code presented here is free for both personal and commercial use, with or without modification. No warranty is expressed or implied.' }
  s.source       = { :git => "https://github.com/titanous/UIImage-Categories.git", :tag => '0.1.0' }
  s.platform     = :ios
  s.source_files = '*.{h,m}'
  s.framework  = 'CoreGraphics'
end
