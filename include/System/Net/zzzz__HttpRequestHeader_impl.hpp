#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Net/zzzz__HttpRequestHeader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::HttpRequestHeader::HttpRequestHeader(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::HttpRequestHeader::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::HttpRequestHeader::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::CacheControl{0};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::Connection{1};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::Date{2};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::KeepAlive{3};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::Pragma{4};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::Trailer{5};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::TransferEncoding{6};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::Upgrade{7};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::Via{8};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::Warning{9};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::Allow{10};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::ContentLength{11};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::ContentType{12};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::ContentEncoding{13};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::ContentLanguage{14};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::ContentLocation{15};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::ContentMd5{16};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::ContentRange{17};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::Expires{18};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::LastModified{19};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::Accept{20};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::AcceptCharset{21};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::AcceptEncoding{22};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::AcceptLanguage{23};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::Authorization{24};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::Cookie{25};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::Expect{26};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::From{27};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::Host{28};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::IfMatch{29};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::IfModifiedSince{30};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::IfNoneMatch{31};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::IfRange{32};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::IfUnmodifiedSince{33};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::MaxForwards{34};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::ProxyAuthorization{35};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::Referer{36};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::Range{37};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::Te{38};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::Translate{39};
constexpr ::System::Net::HttpRequestHeader  ::System::Net::HttpRequestHeader::UserAgent{40};
} // end anonymous namespace
