#pragma once
#include "Org/BouncyCastle/Crmf/zzzz__PKMacFactory_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PbmParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCalculator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMacFactory_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crmf::PKMacFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crmf::PKMacFactory::*)(::ArrayW<uint8_t>, Org::BouncyCastle::Asn1::Cmp::PbmParameter)>(&Org::BouncyCastle::Crmf::PKMacFactory::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1186e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::PKMacFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::PbmParameter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::PKMacFactory.get_AlgorithmDetails
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Org::BouncyCastle::Crmf::PKMacFactory::*)()>(&Org::BouncyCastle::Crmf::PKMacFactory::get_AlgorithmDetails)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1186ea4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crmf::PKMacFactory),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::PKMacFactory>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crmf::PKMacFactory.CreateCalculator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IStreamCalculator (Org::BouncyCastle::Crmf::PKMacFactory::*)()>(&Org::BouncyCastle::Crmf::PKMacFactory::CreateCalculator)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x1186f40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crmf::PKMacFactory),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::PKMacFactory>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Crypto::IMacFactory
constexpr  Org::BouncyCastle::Crmf::PKMacFactory::operator Org::BouncyCastle::Crypto::IMacFactory() const noexcept {
return Org::BouncyCastle::Crypto::IMacFactory(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crmf::PKMacFactory::__set_parameters(Org::BouncyCastle::Asn1::Cmp::PbmParameter value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Cmp::PbmParameter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Cmp::PbmParameter>(value));
}
constexpr Org::BouncyCastle::Asn1::Cmp::PbmParameter Org::BouncyCastle::Crmf::PKMacFactory::__get_parameters() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Cmp::PbmParameter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crmf::PKMacFactory::__set_key(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crmf::PKMacFactory::__get_key() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Crmf::PKMacFactory Org::BouncyCastle::Crmf::PKMacFactory::New_ctor(::ArrayW<uint8_t> key, Org::BouncyCastle::Asn1::Cmp::PbmParameter parameters)  {
Org::BouncyCastle::Crmf::PKMacFactory o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Crmf::PKMacFactory>(key, parameters))};
return o;
}
 void Org::BouncyCastle::Crmf::PKMacFactory::_ctor(::ArrayW<uint8_t> key, Org::BouncyCastle::Asn1::Cmp::PbmParameter parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::PKMacFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Cmp::PbmParameter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, parameters);
}
 ::bs_hook::Il2CppWrapperType Org::BouncyCastle::Crmf::PKMacFactory::get_AlgorithmDetails()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::PKMacFactory>::get(),
                            "get_AlgorithmDetails",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Crypto::IStreamCalculator Org::BouncyCastle::Crmf::PKMacFactory::CreateCalculator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crmf::PKMacFactory>::get(),
                            "CreateCalculator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IStreamCalculator, false>(const_cast<void*>(instance), ___internal_method);
}
