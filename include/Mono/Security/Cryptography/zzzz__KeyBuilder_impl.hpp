#pragma once
namespace {
#include "Mono/Security/Cryptography/zzzz__KeyBuilder_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyBuilder.get_Rng
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RandomNumberGenerator (*)()>(&::Mono::Security::Cryptography::KeyBuilder::get_Rng)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2297190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::KeyBuilder>::get(),
                            "get_Rng",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::KeyBuilder.Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(int32_t)>(&::Mono::Security::Cryptography::KeyBuilder::Key)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x22961e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::KeyBuilder>::get(),
                            "Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::Mono::Security::Cryptography::KeyBuilder::__set_rng(::System::Security::Cryptography::RandomNumberGenerator value)  {
::cordl_internals::setStaticField<::System::Security::Cryptography::RandomNumberGenerator, "rng", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::KeyBuilder>::get>(std::forward<::System::Security::Cryptography::RandomNumberGenerator>(value));
}
 ::System::Security::Cryptography::RandomNumberGenerator ::Mono::Security::Cryptography::KeyBuilder::__get_rng()  {
return ::cordl_internals::getStaticField<::System::Security::Cryptography::RandomNumberGenerator, "rng", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::KeyBuilder>::get>();
}
 ::System::Security::Cryptography::RandomNumberGenerator ::Mono::Security::Cryptography::KeyBuilder::get_Rng()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::KeyBuilder>::get(),
                            "get_Rng",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RandomNumberGenerator, false>(nullptr, ___internal_method);
}
 ::ArrayW<uint8_t> ::Mono::Security::Cryptography::KeyBuilder::Key(int32_t size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Cryptography::KeyBuilder>::get(),
                            "Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, size);
}
} // end anonymous namespace
