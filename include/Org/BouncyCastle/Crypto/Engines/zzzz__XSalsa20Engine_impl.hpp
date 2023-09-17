#pragma once
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Salsa20Engine_impl.hpp"
namespace {
#include "Org/BouncyCastle/Crypto/Engines/zzzz__XSalsa20Engine_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine.get_AlgorithmName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe68968;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine.get_NonceSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::get_NonceSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe689a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine.SetKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::SetKey)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xe689b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::*)()>(&::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe68c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::StringW ::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::get_AlgorithmName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine>::get(),
                            "get_AlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::get_NonceSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine>::get(),
                            "get_NonceSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::SetKey(::ArrayW<uint8_t> keyBytes, ::ArrayW<uint8_t> ivBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine>::get(),
                            "SetKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyBytes, ivBytes);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::XSalsa20Engine()  : ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine(THROW_UNLESS(::il2cpp_utils::New<XSalsa20Engine>())) {}
 void ::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
