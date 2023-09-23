#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsPskIdentityManager_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager.GetHint
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager::*)()>(&Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager::GetHint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager.GetPsk
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager::GetPsk)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager::GetHint()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager>::get(),
                            "GetHint",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager::GetPsk(::ArrayW<uint8_t> identity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager>::get(),
                            "GetPsk",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, identity);
}
