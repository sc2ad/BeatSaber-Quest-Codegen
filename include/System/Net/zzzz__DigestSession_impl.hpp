#pragma once
namespace {
#include "System/Net/zzzz__DigestSession_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "System/Net/zzzz__DigestHeaderParser_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/zzzz__Authorization_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
//  Writing Method size for method: ::System::Net::DigestSession._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x282b69c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.get_Algorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::get_Algorithm)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x282b70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "get_Algorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.get_Realm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::get_Realm)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x282b724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "get_Realm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.get_Nonce
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::get_Nonce)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x282b73c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "get_Nonce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.get_Opaque
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::get_Opaque)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x282b754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "get_Opaque",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.get_QOP
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::get_QOP)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x282b76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "get_QOP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.get_CNonce
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::get_CNonce)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x282b784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "get_CNonce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::DigestSession::*)(::StringW)>(&::System::Net::DigestSession::Parse)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x282b878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.HashToHexString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::DigestSession::*)(::StringW)>(&::System::Net::DigestSession::HashToHexString)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x282b958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "HashToHexString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.HA1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::DigestSession::*)(::StringW, ::StringW)>(&::System::Net::DigestSession::HA1)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x282baa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "HA1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.HA2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::DigestSession::*)(::System::Net::HttpWebRequest)>(&::System::Net::DigestSession::HA2)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x282bbcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "HA2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.Response
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::DigestSession::*)(::StringW, ::StringW, ::System::Net::HttpWebRequest)>(&::System::Net::DigestSession::Response)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x282bc9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "Response",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.Authenticate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Authorization (::System::Net::DigestSession::*)(::System::Net::WebRequest, ::System::Net::ICredentials)>(&::System::Net::DigestSession::Authenticate)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x282bdfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "Authenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DigestSession.get_LastUse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Net::DigestSession::*)()>(&::System::Net::DigestSession::get_LastUse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x282c3dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "get_LastUse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::System::Net::DigestSession::__set_rng(::System::Security::Cryptography::RandomNumberGenerator value)  {
::cordl_internals::setStaticField<::System::Security::Cryptography::RandomNumberGenerator, "rng", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get>(std::forward<::System::Security::Cryptography::RandomNumberGenerator>(value));
}
 ::System::Security::Cryptography::RandomNumberGenerator ::System::Net::DigestSession::__get_rng()  {
return ::cordl_internals::getStaticField<::System::Security::Cryptography::RandomNumberGenerator, "rng", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get>();
}
constexpr void ::System::Net::DigestSession::__set_lastUse(::System::DateTime value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime ::System::Net::DigestSession::__get_lastUse() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::DigestSession::__set__nc(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Net::DigestSession::__get__nc() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::DigestSession::__set_hash(::System::Security::Cryptography::HashAlgorithm value)  {
::cordl_internals::setInstanceField<::System::Security::Cryptography::HashAlgorithm, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Security::Cryptography::HashAlgorithm>(value));
}
constexpr ::System::Security::Cryptography::HashAlgorithm ::System::Net::DigestSession::__get_hash() const {
return ::cordl_internals::getInstanceField<::System::Security::Cryptography::HashAlgorithm, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::DigestSession::__set_parser(::System::Net::DigestHeaderParser value)  {
::cordl_internals::setInstanceField<::System::Net::DigestHeaderParser, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Net::DigestHeaderParser>(value));
}
constexpr ::System::Net::DigestHeaderParser ::System::Net::DigestSession::__get_parser() const {
return ::cordl_internals::getInstanceField<::System::Net::DigestHeaderParser, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::DigestSession::__set__cnonce(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Net::DigestSession::__get__cnonce() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Net::DigestSession::DigestSession()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DigestSession>())) {}
 void ::System::Net::DigestSession::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Net::DigestSession::get_Algorithm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "get_Algorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Net::DigestSession::get_Realm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "get_Realm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Net::DigestSession::get_Nonce()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "get_Nonce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Net::DigestSession::get_Opaque()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "get_Opaque",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Net::DigestSession::get_QOP()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "get_QOP",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Net::DigestSession::get_CNonce()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "get_CNonce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Net::DigestSession::Parse(::StringW challenge)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, challenge);
}
 ::StringW ::System::Net::DigestSession::HashToHexString(::StringW toBeHashed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "HashToHexString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, toBeHashed);
}
 ::StringW ::System::Net::DigestSession::HA1(::StringW username, ::StringW password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "HA1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, username, password);
}
 ::StringW ::System::Net::DigestSession::HA2(::System::Net::HttpWebRequest webRequest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "HA2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, webRequest);
}
 ::StringW ::System::Net::DigestSession::Response(::StringW username, ::StringW password, ::System::Net::HttpWebRequest webRequest)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "Response",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpWebRequest>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, username, password, webRequest);
}
 ::System::Net::Authorization ::System::Net::DigestSession::Authenticate(::System::Net::WebRequest webRequest, ::System::Net::ICredentials credentials)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "Authenticate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebRequest>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Authorization, false>(const_cast<void*>(instance), ___internal_method, webRequest, credentials);
}
 ::System::DateTime ::System::Net::DigestSession::get_LastUse()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::DigestSession>::get(),
                            "get_LastUse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
