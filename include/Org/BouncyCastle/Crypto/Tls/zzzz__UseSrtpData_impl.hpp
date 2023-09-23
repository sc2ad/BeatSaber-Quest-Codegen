#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__UseSrtpData_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::UseSrtpData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::UseSrtpData::*)(::ArrayW<int32_t>, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::UseSrtpData::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xf2c0ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::UseSrtpData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::UseSrtpData.get_ProtectionProfiles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (Org::BouncyCastle::Crypto::Tls::UseSrtpData::*)()>(&Org::BouncyCastle::Crypto::Tls::UseSrtpData::get_ProtectionProfiles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf32f54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::UseSrtpData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::UseSrtpData>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::UseSrtpData.get_Mki
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::UseSrtpData::*)()>(&Org::BouncyCastle::Crypto::Tls::UseSrtpData::get_Mki)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf32f5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::UseSrtpData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::UseSrtpData>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Tls::UseSrtpData::__set_mProtectionProfiles(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Tls::UseSrtpData::__get_mProtectionProfiles() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::UseSrtpData::__set_mMki(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::UseSrtpData::__get_mMki() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "protectionProfiles", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "mki", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Tls::UseSrtpData::UseSrtpData(::ArrayW<int32_t> protectionProfiles, ::ArrayW<uint8_t> mki)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UseSrtpData>(protectionProfiles, mki))) {}
 void Org::BouncyCastle::Crypto::Tls::UseSrtpData::_ctor(::ArrayW<int32_t> protectionProfiles, ::ArrayW<uint8_t> mki)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::UseSrtpData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, protectionProfiles, mki);
}
 ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Tls::UseSrtpData::get_ProtectionProfiles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::UseSrtpData>::get(),
                            "get_ProtectionProfiles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::UseSrtpData::get_Mki()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::UseSrtpData>::get(),
                            "get_Mki",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
