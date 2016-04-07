Pod::Spec.new do |s|
  s.name             = 'JudoShield'
  s.version          = '1.3.2'
  s.summary          = 'Judo Pay iOS Client SDK'
  s.homepage         = 'http://judopay.com/'
  s.license          = 'MIT'
  s.author           = { "Hamon Ben Riazy" => 'hamon.riazy@judopayments.com' }
  s.source           = { :git => 'https://github.com/JudoPay/JudoShield.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'

  s.requires_arc     = true

  s.vendored_frameworks = "Source/JudoShield.framework"
  s.frameworks = 'CoreTelephony'

end
