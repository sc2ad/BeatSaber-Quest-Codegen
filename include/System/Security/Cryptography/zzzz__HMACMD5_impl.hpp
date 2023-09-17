#pragma once
#include "System/Security/Cryptography/zzzz__HMAC_impl.hpp"
namespace {
#include "System/Security/Cryptography/zzzz__HMACMD5_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::HMACMD5._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::HMACMD5::*)()>(&::System::Security::Cryptography::HMACMD5::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22f3754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACMD5>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMACMD5._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::HMACMD5::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::HMACMD5::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x22f3778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACMD5>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::System::Security::Cryptography::HMACMD5::HMACMD5()  : ::System::Security::Cryptography::HMAC(THROW_UNLESS(::il2cpp_utils::New<HMACMD5>())) {}
 void ::System::Security::Cryptography::HMACMD5::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACMD5>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 ::System::Security::Cryptography::HMACMD5::HMACMD5(::ArrayW<uint8_t> key)  : ::System::Security::Cryptography::HMAC(THROW_UNLESS(::il2cpp_utils::New<HMACMD5>(key))) {}
 void ::System::Security::Cryptography::HMACMD5::_ctor(::ArrayW<uint8_t> key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACMD5>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key);
}
} // end anonymous namespace