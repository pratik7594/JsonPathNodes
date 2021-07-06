Pod::Spec.new do |s|
s.name             = 'JsonPathNodes'  
s.version          = '0.0.2'  
s.summary          = 'Custom pod creation for JsonPath iOS' 
s.description      = <<-DESC
TODO:
    This implementation is a tight adaptation of Jayway JsonPath. It respects the original structure and naming, as much as possible. The changes are mainly to be more Objective-C stylized (named parameters, use NSError instead of try-catch-exception, etc.).

    This tight adaptation was done for different reasons:

    If I wanted to structure something from my own view, I would have started from scratch, and I wouldn't have done it at all : this is a big bunch of code, tests and reflexion to do, more than I want to give to that.
    The Jayway JsonPath project have a pretty good and complete implementation (with some cleaning here and there to do, which are already documented by original developers). It's a good reference, from my point of view.
    I want to facilitate cherry-picking updates from Jayway JsonPath to include them right here.
    This code is currently based on commit c187488.
                       DESC

s.homepage         = 'https://github.com/pratik7594/JsonPathNodes' 
s.author           = { 'Pratik' => 'pratik7594@gmail.com' } 
s.source           = { :git => 'https://github.com/pratik7594/JsonPathNodes.git', :tag => s.version.to_s } 
s.ios.deployment_target = '9.0'
s.source_files = 'JsonPathNodes/**/*.{h,m}'
end