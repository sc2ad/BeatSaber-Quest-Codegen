#pragma once
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpResponseHeaders_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
//  Writing Method size for method: System::Net::Http::HttpResponseMessage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpResponseMessage::*)(System::Net::HttpStatusCode)>(&System::Net::Http::HttpResponseMessage::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x269c95c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpStatusCode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpResponseMessage.get_Content
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Http::HttpContent (System::Net::Http::HttpResponseMessage::*)()>(&System::Net::Http::HttpResponseMessage::get_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a26f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "get_Content",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpResponseMessage.set_Content
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpResponseMessage::*)(System::Net::Http::HttpContent)>(&System::Net::Http::HttpResponseMessage::set_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a2700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "set_Content",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::HttpContent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpResponseMessage.get_Headers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Http::Headers::HttpResponseHeaders (System::Net::Http::HttpResponseMessage::*)()>(&System::Net::Http::HttpResponseMessage::get_Headers)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x269cac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "get_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpResponseMessage.get_IsSuccessStatusCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Http::HttpResponseMessage::*)()>(&System::Net::Http::HttpResponseMessage::get_IsSuccessStatusCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26a2768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "get_IsSuccessStatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpResponseMessage.get_ReasonPhrase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::HttpResponseMessage::*)()>(&System::Net::Http::HttpResponseMessage::get_ReasonPhrase)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x26a277c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "get_ReasonPhrase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpResponseMessage.set_ReasonPhrase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpResponseMessage::*)(::StringW)>(&System::Net::Http::HttpResponseMessage::set_ReasonPhrase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a2798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "set_ReasonPhrase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpResponseMessage.set_RequestMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpResponseMessage::*)(System::Net::Http::HttpRequestMessage)>(&System::Net::Http::HttpResponseMessage::set_RequestMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a27a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "set_RequestMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::HttpRequestMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpResponseMessage.get_StatusCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::HttpStatusCode (System::Net::Http::HttpResponseMessage::*)()>(&System::Net::Http::HttpResponseMessage::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26a27a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "get_StatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpResponseMessage.set_StatusCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpResponseMessage::*)(System::Net::HttpStatusCode)>(&System::Net::Http::HttpResponseMessage::set_StatusCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x26a26a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "set_StatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpStatusCode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpResponseMessage.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Version (System::Net::Http::HttpResponseMessage::*)()>(&System::Net::Http::HttpResponseMessage::get_Version)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26a27b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpResponseMessage.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpResponseMessage::*)()>(&System::Net::Http::HttpResponseMessage::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26a2814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpResponseMessage.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::HttpResponseMessage::*)(bool)>(&System::Net::Http::HttpResponseMessage::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x26a2824;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Http::HttpResponseMessage),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpResponseMessage.EnsureSuccessStatusCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Http::HttpResponseMessage (System::Net::Http::HttpResponseMessage::*)()>(&System::Net::Http::HttpResponseMessage::EnsureSuccessStatusCode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26a0b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "EnsureSuccessStatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::HttpResponseMessage.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::HttpResponseMessage::*)()>(&System::Net::Http::HttpResponseMessage::ToString)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x26a2858;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Http::HttpResponseMessage),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  System::Net::Http::HttpResponseMessage::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Http::HttpResponseMessage::__set_headers(System::Net::Http::Headers::HttpResponseHeaders value)  {
::cordl_internals::setInstanceField<System::Net::Http::Headers::HttpResponseHeaders, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Http::Headers::HttpResponseHeaders>(value));
}
constexpr System::Net::Http::Headers::HttpResponseHeaders System::Net::Http::HttpResponseMessage::__get_headers() const {
return ::cordl_internals::getInstanceField<System::Net::Http::Headers::HttpResponseHeaders, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Http::HttpResponseMessage::__set_reasonPhrase(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Net::Http::HttpResponseMessage::__get_reasonPhrase() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Http::HttpResponseMessage::__set_statusCode(System::Net::HttpStatusCode value)  {
::cordl_internals::setInstanceField<System::Net::HttpStatusCode, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::HttpStatusCode>(value));
}
constexpr System::Net::HttpStatusCode System::Net::Http::HttpResponseMessage::__get_statusCode() const {
return ::cordl_internals::getInstanceField<System::Net::HttpStatusCode, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Http::HttpResponseMessage::__set_version(System::Version value)  {
::cordl_internals::setInstanceField<System::Version, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Version>(value));
}
constexpr System::Version System::Net::Http::HttpResponseMessage::__get_version() const {
return ::cordl_internals::getInstanceField<System::Version, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Http::HttpResponseMessage::__set_disposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Net::Http::HttpResponseMessage::__get_disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Http::HttpResponseMessage::__set__Content_k__BackingField(System::Net::Http::HttpContent value)  {
::cordl_internals::setInstanceField<System::Net::Http::HttpContent, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Http::HttpContent>(value));
}
constexpr System::Net::Http::HttpContent System::Net::Http::HttpResponseMessage::__get__Content_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Net::Http::HttpContent, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Net::Http::HttpResponseMessage::__set__RequestMessage_k__BackingField(System::Net::Http::HttpRequestMessage value)  {
::cordl_internals::setInstanceField<System::Net::Http::HttpRequestMessage, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Net::Http::HttpRequestMessage>(value));
}
constexpr System::Net::Http::HttpRequestMessage System::Net::Http::HttpResponseMessage::__get__RequestMessage_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Net::Http::HttpRequestMessage, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Net::Http::HttpResponseMessage System::Net::Http::HttpResponseMessage::New_ctor(System::Net::HttpStatusCode statusCode)  {
System::Net::Http::HttpResponseMessage o{THROW_UNLESS(::il2cpp_utils::New<System::Net::Http::HttpResponseMessage>(statusCode))};
return o;
}
 void System::Net::Http::HttpResponseMessage::_ctor(System::Net::HttpStatusCode statusCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpStatusCode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, statusCode);
}
 System::Net::Http::HttpContent System::Net::Http::HttpResponseMessage::get_Content()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "get_Content",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Http::HttpContent, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Http::HttpResponseMessage::set_Content(System::Net::Http::HttpContent value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "set_Content",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::HttpContent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Net::Http::Headers::HttpResponseHeaders System::Net::Http::HttpResponseMessage::get_Headers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "get_Headers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Http::Headers::HttpResponseHeaders, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Net::Http::HttpResponseMessage::get_IsSuccessStatusCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "get_IsSuccessStatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Net::Http::HttpResponseMessage::get_ReasonPhrase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "get_ReasonPhrase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Http::HttpResponseMessage::set_ReasonPhrase(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "set_ReasonPhrase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void System::Net::Http::HttpResponseMessage::set_RequestMessage(System::Net::Http::HttpRequestMessage value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "set_RequestMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::HttpRequestMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Net::HttpStatusCode System::Net::Http::HttpResponseMessage::get_StatusCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "get_StatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::HttpStatusCode, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Http::HttpResponseMessage::set_StatusCode(System::Net::HttpStatusCode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "set_StatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::HttpStatusCode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Version System::Net::Http::HttpResponseMessage::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Version, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Http::HttpResponseMessage::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Net::Http::HttpResponseMessage::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 System::Net::Http::HttpResponseMessage System::Net::Http::HttpResponseMessage::EnsureSuccessStatusCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "EnsureSuccessStatusCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Http::HttpResponseMessage, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Net::Http::HttpResponseMessage::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::HttpResponseMessage>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
