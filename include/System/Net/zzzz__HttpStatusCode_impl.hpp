#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::HttpStatusCode::HttpStatusCode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Net::HttpStatusCode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::HttpStatusCode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::Continue{100};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::SwitchingProtocols{101};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::Processing{102};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::EarlyHints{103};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::OK{200};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::Created{201};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::Accepted{202};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::NonAuthoritativeInformation{203};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::NoContent{204};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::ResetContent{205};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::PartialContent{206};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::MultiStatus{207};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::AlreadyReported{208};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::IMUsed{226};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::MultipleChoices{300};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::Ambiguous{300};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::MovedPermanently{301};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::Moved{301};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::Found{302};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::Redirect{302};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::SeeOther{303};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::RedirectMethod{303};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::NotModified{304};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::UseProxy{305};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::Unused{306};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::TemporaryRedirect{307};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::RedirectKeepVerb{307};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::PermanentRedirect{308};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::BadRequest{400};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::Unauthorized{401};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::PaymentRequired{402};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::Forbidden{403};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::NotFound{404};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::MethodNotAllowed{405};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::NotAcceptable{406};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::ProxyAuthenticationRequired{407};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::RequestTimeout{408};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::Conflict{409};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::Gone{410};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::LengthRequired{411};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::PreconditionFailed{412};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::RequestEntityTooLarge{413};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::RequestUriTooLong{414};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::UnsupportedMediaType{415};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::RequestedRangeNotSatisfiable{416};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::ExpectationFailed{417};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::MisdirectedRequest{421};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::UnprocessableEntity{422};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::Locked{423};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::FailedDependency{424};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::UpgradeRequired{426};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::PreconditionRequired{428};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::TooManyRequests{429};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::RequestHeaderFieldsTooLarge{431};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::UnavailableForLegalReasons{451};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::InternalServerError{500};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::NotImplemented{501};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::BadGateway{502};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::ServiceUnavailable{503};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::GatewayTimeout{504};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::HttpVersionNotSupported{505};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::VariantAlsoNegotiates{506};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::InsufficientStorage{507};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::LoopDetected{508};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::NotExtended{510};
constexpr ::System::Net::HttpStatusCode  ::System::Net::HttpStatusCode::NetworkAuthenticationRequired{511};
} // end anonymous namespace
