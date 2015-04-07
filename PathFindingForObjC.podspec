Pod::Spec.new do |s|
  s.name     = 'PathFindingForObjC'
  s.version  = '1.0'
  s.license  = 'MIT'
  s.homepage = 'https://github.com/wbcyclist/PathFindingForObjC'
  s.author   = { 'Jasio Woo' => 'wbcyclist@gmail.com' }
  s.summary  = 'A Comprehensive PathFinding Library for Objective-C'
  s.screenshots = [ "https://raw.githubusercontent.com/wbcyclist/PathFindingForObjC/master/demo/PathFinding_ScreenShot.png" ]
  s.source   = { :git => 'https://github.com/wbcyclist/PathFindingForObjC.git', :tag => s.version, :submodules => true }
  s.requires_arc = true
  s.ios.deployment_target = '8.0'
  s.osx.deployment_target = '10.9'
  s.frameworks = 'Foundation'

  s.source_files = 'PathFindingForObjC/*.{h,m}'
  s.subspec 'core' do |ss|
    ss.source_files = 'PathFindingForObjC/core/**/*.{h,m}'
  end
  s.subspec 'finders' do |ss|
    ss.source_files = 'PathFindingForObjC/finders/**/*.{h,m}'
  end
  s.subspec 'fieldGrid' do |ss|
    ss.source_files = 'PathFindingForObjC/fieldGrid/**/*.{h,m}'
  end

end