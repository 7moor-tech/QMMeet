
Pod::Spec.new do |s|
  s.name             = 'QMMeet'
  s.version          = '1.0.0'
  s.summary          = 'An online video call'

  s.description      = 'An online video call'

  s.homepage         = 'https://github.com/7moor-tech/QMMeet'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'VE66' => '942914231@qq.com' }
  s.source           = { :git => 'https://github.com/7moor-tech/QMMeet.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '11.0'

  s.vendored_frameworks  = "QMLineSDK.framework"
  s.pod_target_xcconfig = {'VALID_ARCHS'=>'arm64'}

  # s.dependency 'AFNetworking', '~> 2.3'


end
