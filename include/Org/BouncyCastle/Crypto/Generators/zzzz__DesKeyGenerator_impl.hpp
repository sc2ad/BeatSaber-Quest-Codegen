#pragma once
#include "Org/BouncyCastle/Crypto/zzzz__CipherKeyGenerator_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__DesKeyGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::DesKeyGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Generators::DesKeyGenerator::*)()>(&Org::BouncyCastle::Crypto::Generators::DesKeyGenerator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe6ac44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DesKeyGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::DesKeyGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Generators::DesKeyGenerator::*)(int32_t)>(&Org::BouncyCastle::Crypto::Generators::DesKeyGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe6ac54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DesKeyGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::DesKeyGenerator.engineInit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Generators::DesKeyGenerator::*)(Org::BouncyCastle::Crypto::KeyGenerationParameters)>(&Org::BouncyCastle::Crypto::Generators::DesKeyGenerator::engineInit)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xe6ac58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Generators::DesKeyGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DesKeyGenerator>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Generators::DesKeyGenerator.engineGenerateKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Generators::DesKeyGenerator::*)()>(&Org::BouncyCastle::Crypto::Generators::DesKeyGenerator::engineGenerateKey)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe6ad54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Generators::DesKeyGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DesKeyGenerator>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 Org::BouncyCastle::Crypto::Generators::DesKeyGenerator::DesKeyGenerator()  : Org::BouncyCastle::Crypto::CipherKeyGenerator(THROW_UNLESS(::il2cpp_utils::New<DesKeyGenerator>())) {}
 void Org::BouncyCastle::Crypto::Generators::DesKeyGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DesKeyGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "defaultStrength", ty: "int32_t", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Generators::DesKeyGenerator::DesKeyGenerator(int32_t defaultStrength)  : Org::BouncyCastle::Crypto::CipherKeyGenerator(THROW_UNLESS(::il2cpp_utils::New<DesKeyGenerator>(defaultStrength))) {}
 void Org::BouncyCastle::Crypto::Generators::DesKeyGenerator::_ctor(int32_t defaultStrength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DesKeyGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, defaultStrength);
}
 void Org::BouncyCastle::Crypto::Generators::DesKeyGenerator::engineInit(Org::BouncyCastle::Crypto::KeyGenerationParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DesKeyGenerator>::get(),
                            "engineInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::KeyGenerationParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameters);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Generators::DesKeyGenerator::engineGenerateKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Generators::DesKeyGenerator>::get(),
                            "engineGenerateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
