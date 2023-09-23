#pragma once
#include "Org/BouncyCastle/Crypto/Modes/Gcm/zzzz__IGcmMultiplier_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier.MultiplyH
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier::MultiplyH)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier::Init(::ArrayW<uint8_t> H)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, H);
}
 void Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier::MultiplyH(::ArrayW<uint8_t> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier>::get(),
                            "MultiplyH",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, x);
}
