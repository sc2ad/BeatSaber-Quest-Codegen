#pragma once
#include "Org/BouncyCastle/Crypto/Generators/zzzz__DesKeyGenerator_impl.hpp"
namespace {
#include "Org/BouncyCastle/Crypto/Generators/zzzz__DesEdeKeyGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::*)()>(&::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe6ae08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe6ae18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator.engineInit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::*)(::Org::BouncyCastle::Crypto::KeyGenerationParameters)>(&::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::engineInit)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xe6ae1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator.engineGenerateKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::*)()>(&::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::engineGenerateKey)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xe6b04c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::DesEdeKeyGenerator()  : ::Org::BouncyCastle::Crypto::Generators::DesKeyGenerator(THROW_UNLESS(::il2cpp_utils::New<DesEdeKeyGenerator>())) {}
 void ::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "defaultStrength", ty: "int32_t", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::DesEdeKeyGenerator(int32_t defaultStrength)  : ::Org::BouncyCastle::Crypto::Generators::DesKeyGenerator(THROW_UNLESS(::il2cpp_utils::New<DesEdeKeyGenerator>(defaultStrength))) {}
 void ::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::_ctor(int32_t defaultStrength)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, defaultStrength);
}
 void ::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::engineInit(::Org::BouncyCastle::Crypto::KeyGenerationParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator>::get(),
                            "engineInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::KeyGenerationParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameters);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator::engineGenerateKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DesEdeKeyGenerator>::get(),
                            "engineGenerateKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
