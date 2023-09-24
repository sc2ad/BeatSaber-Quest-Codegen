#pragma once
#include "Org/BouncyCastle/Crmf/zzzz__DefaultPKMacResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crmf::DefaultPKMacResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crmf::DefaultPKMacResult::*)(Org::BouncyCastle::Crypto::IMac)>(&Org::BouncyCastle::Crmf::DefaultPKMacResult::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1186e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::DefaultPKMacResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IMac>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::DefaultPKMacResult.Collect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crmf::DefaultPKMacResult::*)()>(&Org::BouncyCastle::Crmf::DefaultPKMacResult::Collect)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x11870b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::DefaultPKMacResult>::get(),
                            "Collect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::DefaultPKMacResult.Collect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Crmf::DefaultPKMacResult::*)(::ArrayW<uint8_t>, int32_t)>(&Org::BouncyCastle::Crmf::DefaultPKMacResult::Collect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x11871fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::DefaultPKMacResult>::get(),
                            "Collect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockResult
constexpr  Org::BouncyCastle::Crmf::DefaultPKMacResult::operator Org::BouncyCastle::Crypto::IBlockResult() const noexcept {
return Org::BouncyCastle::Crypto::IBlockResult(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crmf::DefaultPKMacResult::__set_mac(Org::BouncyCastle::Crypto::IMac value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IMac, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IMac>(value));
}
constexpr Org::BouncyCastle::Crypto::IMac Org::BouncyCastle::Crmf::DefaultPKMacResult::__get_mac() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IMac, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crmf::DefaultPKMacResult Org::BouncyCastle::Crmf::DefaultPKMacResult::New_ctor(Org::BouncyCastle::Crypto::IMac mac)  {
Org::BouncyCastle::Crmf::DefaultPKMacResult o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crmf::DefaultPKMacResult>(mac))};
return o;
}
 void Org::BouncyCastle::Crmf::DefaultPKMacResult::_ctor(Org::BouncyCastle::Crypto::IMac mac)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::DefaultPKMacResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IMac>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mac);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crmf::DefaultPKMacResult::Collect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::DefaultPKMacResult>::get(),
                            "Collect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Crmf::DefaultPKMacResult::Collect(::ArrayW<uint8_t> sig, int32_t sigOff)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::DefaultPKMacResult>::get(),
                            "Collect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, sig, sigOff);
}
