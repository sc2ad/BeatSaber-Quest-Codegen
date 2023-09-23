#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__UriSyntaxFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::UriSyntaxFlags::UriSyntaxFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::UriSyntaxFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::UriSyntaxFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::None{0};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::MustHaveAuthority{1};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::OptionalAuthority{2};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::MayHaveUserInfo{4};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::MayHavePort{8};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::MayHavePath{16};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::MayHaveQuery{32};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::MayHaveFragment{64};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::AllowEmptyHost{128};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::AllowUncHost{256};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::AllowDnsHost{512};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::AllowIPv4Host{1024};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::AllowIPv6Host{2048};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::AllowAnInternetHost{3584};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::AllowAnyOtherHost{4096};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::FileLikeUri{8192};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::MailToLikeUri{16384};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::V1_UnknownUri{65536};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::SimpleUserSyntax{131072};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::BuiltInSyntax{262144};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::ParserSchemeOnly{524288};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::AllowDOSPath{1048576};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::PathIsRooted{2097152};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::ConvertPathSlashes{4194304};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::CompressPath{8388608};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::CanonicalizeAsFilePath{16777216};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::UnEscapeDotsAndSlashes{33554432};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::AllowIdn{67108864};
constexpr System::UriSyntaxFlags  System::UriSyntaxFlags::AllowIriParsing{268435456};
