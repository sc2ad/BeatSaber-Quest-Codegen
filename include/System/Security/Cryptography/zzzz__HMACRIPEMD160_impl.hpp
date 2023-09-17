#pragma once
#include "System/Security/Cryptography/zzzz__HMAC_impl.hpp"
namespace {
#include "System/Security/Cryptography/zzzz__HMACRIPEMD160_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::HMACRIPEMD160._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::HMACRIPEMD160::*)()>(&::System::Security::Cryptography::HMACRIPEMD160::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22f3840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACRIPEMD160>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMACRIPEMD160._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::HMACRIPEMD160::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::HMACRIPEMD160::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x22f3864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACRIPEMD160>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::System::Security::Cryptography::HMACRIPEMD160::HMACRIPEMD160()  : ::System::Security::Cryptography::HMAC(THROW_UNLESS(::il2cpp_utils::New<HMACRIPEMD160>())) {}
 void ::System::Security::Cryptography::HMACRIPEMD160::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACRIPEMD160>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 ::System::Security::Cryptography::HMACRIPEMD160::HMACRIPEMD160(::ArrayW<uint8_t> key)  : ::System::Security::Cryptography::HMAC(THROW_UNLESS(::il2cpp_utils::New<HMACRIPEMD160>(key))) {}
 void ::System::Security::Cryptography::HMACRIPEMD160::_ctor(::ArrayW<uint8_t> key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::HMACRIPEMD160>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key);
}
} // end anonymous namespace
