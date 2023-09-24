#pragma once
#include "Org/BouncyCastle/Crypto/Engines/zzzz__VmpcEngine_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__VmpcKsa3Engine_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine.get_AlgorithmName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe68670;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine.InitKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::InitKey)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0xe686b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe68954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::StringW Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::get_AlgorithmName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine>::get(),
                            "get_AlgorithmName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::InitKey(::ArrayW<uint8_t> keyBytes, ::ArrayW<uint8_t> ivBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine>::get(),
                            "InitKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, keyBytes, ivBytes);
}
 Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::New_ctor()  {
Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine>())};
return o;
}
 void Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Engines::VmpcKsa3Engine>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
