#pragma once
namespace {
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Net/Http/zzzz__HttpMethod_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpRequestHeaders_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)()>(&::System::Net::Http::HttpRequestMessage::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26a203c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)(::System::Net::Http::HttpMethod, ::StringW)>(&::System::Net::Http::HttpRequestMessage::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x26a20d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)(::System::Net::Http::HttpMethod, ::System::Uri)>(&::System::Net::Http::HttpRequestMessage::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x269f6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.get_Content
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::HttpContent (::System::Net::Http::HttpRequestMessage::*)()>(&::System::Net::Http::HttpRequestMessage::get_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a221c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "get_Content",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.set_Content
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)(::System::Net::Http::HttpContent)>(&::System::Net::Http::HttpRequestMessage::set_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a2224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "set_Content",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpContent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.get_Headers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::Headers::HttpRequestHeaders (::System::Net::Http::HttpRequestMessage::*)()>(&::System::Net::Http::HttpRequestMessage::get_Headers)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x269c310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "get_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.get_Method
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::HttpMethod (::System::Net::Http::HttpRequestMessage::*)()>(&::System::Net::Http::HttpRequestMessage::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a228c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "get_Method",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.set_Method
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)(::System::Net::Http::HttpMethod)>(&::System::Net::Http::HttpRequestMessage::set_Method)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26a216c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "set_Method",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpMethod>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.get_RequestUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri (::System::Net::Http::HttpRequestMessage::*)()>(&::System::Net::Http::HttpRequestMessage::get_RequestUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a2294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "get_RequestUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.set_RequestUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)(::System::Uri)>(&::System::Net::Http::HttpRequestMessage::set_RequestUri)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x269cbe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "set_RequestUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.IsAllowedAbsoluteUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Uri)>(&::System::Net::Http::HttpRequestMessage::IsAllowedAbsoluteUri)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x26a229c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "IsAllowedAbsoluteUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version (::System::Net::Http::HttpRequestMessage::*)()>(&::System::Net::Http::HttpRequestMessage::get_Version)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x269c2ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)()>(&::System::Net::Http::HttpRequestMessage::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26a23e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)(bool)>(&::System::Net::Http::HttpRequestMessage::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x26a23f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::Http::HttpRequestMessage),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.SetIsUsed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Http::HttpRequestMessage::*)()>(&::System::Net::Http::HttpRequestMessage::SetIsUsed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x269faa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "SetIsUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::Http::HttpRequestMessage::*)()>(&::System::Net::Http::HttpRequestMessage::ToString)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x26a242c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::Http::HttpRequestMessage),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::System::Net::Http::HttpRequestMessage::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Http::HttpRequestMessage::__set_headers(::System::Net::Http::Headers::HttpRequestHeaders value)  {
::cordl_internals::setInstanceField<::System::Net::Http::Headers::HttpRequestHeaders, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::Http::Headers::HttpRequestHeaders>(value));
}
constexpr ::System::Net::Http::Headers::HttpRequestHeaders ::System::Net::Http::HttpRequestMessage::__get_headers() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::Headers::HttpRequestHeaders, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Http::HttpRequestMessage::__set_method(::System::Net::Http::HttpMethod value)  {
::cordl_internals::setInstanceField<::System::Net::Http::HttpMethod, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::Http::HttpMethod>(value));
}
constexpr ::System::Net::Http::HttpMethod ::System::Net::Http::HttpRequestMessage::__get_method() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::HttpMethod, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Http::HttpRequestMessage::__set_version(::System::Version value)  {
::cordl_internals::setInstanceField<::System::Version, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Version>(value));
}
constexpr ::System::Version ::System::Net::Http::HttpRequestMessage::__get_version() const {
return ::cordl_internals::getInstanceField<::System::Version, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Http::HttpRequestMessage::__set_uri(::System::Uri value)  {
::cordl_internals::setInstanceField<::System::Uri, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Uri>(value));
}
constexpr ::System::Uri ::System::Net::Http::HttpRequestMessage::__get_uri() const {
return ::cordl_internals::getInstanceField<::System::Uri, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Http::HttpRequestMessage::__set_is_used(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::Http::HttpRequestMessage::__get_is_used() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Http::HttpRequestMessage::__set_disposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Net::Http::HttpRequestMessage::__get_disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::Http::HttpRequestMessage::__set__Content_k__BackingField(::System::Net::Http::HttpContent value)  {
::cordl_internals::setInstanceField<::System::Net::Http::HttpContent, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::Http::HttpContent>(value));
}
constexpr ::System::Net::Http::HttpContent ::System::Net::Http::HttpRequestMessage::__get__Content_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Net::Http::HttpContent, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Net::Http::HttpRequestMessage::HttpRequestMessage()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HttpRequestMessage>())) {}
 void ::System::Net::Http::HttpRequestMessage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "method", ty: "::System::Net::Http::HttpMethod", modifiers: "", def_value: None }, CppParam { name: "requestUri", ty: "::StringW", modifiers: "", def_value: None }]
 ::System::Net::Http::HttpRequestMessage::HttpRequestMessage(::System::Net::Http::HttpMethod method, ::StringW requestUri)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HttpRequestMessage>(method, requestUri))) {}
 void ::System::Net::Http::HttpRequestMessage::_ctor(::System::Net::Http::HttpMethod method, ::StringW requestUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, method, requestUri);
}
// Ctor Parameters [CppParam { name: "method", ty: "::System::Net::Http::HttpMethod", modifiers: "", def_value: None }, CppParam { name: "requestUri", ty: "::System::Uri", modifiers: "", def_value: None }]
 ::System::Net::Http::HttpRequestMessage::HttpRequestMessage(::System::Net::Http::HttpMethod method, ::System::Uri requestUri)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HttpRequestMessage>(method, requestUri))) {}
 void ::System::Net::Http::HttpRequestMessage::_ctor(::System::Net::Http::HttpMethod method, ::System::Uri requestUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, method, requestUri);
}
 ::System::Net::Http::HttpContent ::System::Net::Http::HttpRequestMessage::get_Content()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "get_Content",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpContent, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::Http::HttpRequestMessage::set_Content(::System::Net::Http::HttpContent value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "set_Content",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpContent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Net::Http::Headers::HttpRequestHeaders ::System::Net::Http::HttpRequestMessage::get_Headers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "get_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::HttpRequestHeaders, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Net::Http::HttpMethod ::System::Net::Http::HttpRequestMessage::get_Method()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "get_Method",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpMethod, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::Http::HttpRequestMessage::set_Method(::System::Net::Http::HttpMethod value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "set_Method",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpMethod>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Uri ::System::Net::Http::HttpRequestMessage::get_RequestUri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "get_RequestUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::Http::HttpRequestMessage::set_RequestUri(::System::Uri value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "set_RequestUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::System::Net::Http::HttpRequestMessage::IsAllowedAbsoluteUri(::System::Uri uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "IsAllowedAbsoluteUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, uri);
}
 ::System::Version ::System::Net::Http::HttpRequestMessage::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Version, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::Http::HttpRequestMessage::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Net::Http::HttpRequestMessage::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 bool ::System::Net::Http::HttpRequestMessage::SetIsUsed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "SetIsUsed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Net::Http::HttpRequestMessage::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
