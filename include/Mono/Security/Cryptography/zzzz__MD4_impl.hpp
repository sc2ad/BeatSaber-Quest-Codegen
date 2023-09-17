#pragma once
#include "System/Security/Cryptography/zzzz__HashAlgorithm_impl.hpp"
namespace {
#include "Mono/Security/Cryptography/zzzz__MD4_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::MD4._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Cryptography::MD4::*)()>(&::Mono::Security::Cryptography::MD4::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22b38d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::MD4>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::MD4.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Cryptography::MD4 (*)()>(&::Mono::Security::Cryptography::MD4::Create)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22b38f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::MD4>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::Mono::Security::Cryptography::MD4::MD4()  : ::System::Security::Cryptography::HashAlgorithm(THROW_UNLESS(::il2cpp_utils::New<MD4>())) {}
 void ::Mono::Security::Cryptography::MD4::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::MD4>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Mono::Security::Cryptography::MD4 ::Mono::Security::Cryptography::MD4::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::MD4>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::Cryptography::MD4, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
