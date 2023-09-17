#pragma once
namespace {
#include "Org/BouncyCastle/Cms/zzzz__OriginatorInfoGenerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorInfo_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInfoGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::OriginatorInfoGenerator::*)(::Org::BouncyCastle::X509::X509Certificate)>(&::Org::BouncyCastle::Cms::OriginatorInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x117b774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInfoGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInfoGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::OriginatorInfoGenerator::*)(::Org::BouncyCastle::X509::Store::IX509Store)>(&::Org::BouncyCastle::Cms::OriginatorInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x117b884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInfoGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInfoGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::OriginatorInfoGenerator::*)(::Org::BouncyCastle::X509::Store::IX509Store, ::Org::BouncyCastle::X509::Store::IX509Store)>(&::Org::BouncyCastle::Cms::OriginatorInfoGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x117b8b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInfoGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInfoGenerator.Generate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo (::Org::BouncyCastle::Cms::OriginatorInfoGenerator::*)()>(&::Org::BouncyCastle::Cms::OriginatorInfoGenerator::Generate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x117b900;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Cms::OriginatorInfoGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInfoGenerator>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Cms::OriginatorInfoGenerator::__set_origCerts(::System::Collections::IList value)  {
::cordl_internals::setInstanceField<::System::Collections::IList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::IList>(value));
}
constexpr ::System::Collections::IList ::Org::BouncyCastle::Cms::OriginatorInfoGenerator::__get_origCerts() const {
return ::cordl_internals::getInstanceField<::System::Collections::IList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Cms::OriginatorInfoGenerator::__set_origCrls(::System::Collections::IList value)  {
::cordl_internals::setInstanceField<::System::Collections::IList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::IList>(value));
}
constexpr ::System::Collections::IList ::Org::BouncyCastle::Cms::OriginatorInfoGenerator::__get_origCrls() const {
return ::cordl_internals::getInstanceField<::System::Collections::IList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "origCert", ty: "::Org::BouncyCastle::X509::X509Certificate", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Cms::OriginatorInfoGenerator::OriginatorInfoGenerator(::Org::BouncyCastle::X509::X509Certificate origCert)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OriginatorInfoGenerator>(origCert))) {}
 void ::Org::BouncyCastle::Cms::OriginatorInfoGenerator::_ctor(::Org::BouncyCastle::X509::X509Certificate origCert)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInfoGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, origCert);
}
// Ctor Parameters [CppParam { name: "origCerts", ty: "::Org::BouncyCastle::X509::Store::IX509Store", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Cms::OriginatorInfoGenerator::OriginatorInfoGenerator(::Org::BouncyCastle::X509::Store::IX509Store origCerts)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OriginatorInfoGenerator>(origCerts))) {}
 void ::Org::BouncyCastle::Cms::OriginatorInfoGenerator::_ctor(::Org::BouncyCastle::X509::Store::IX509Store origCerts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInfoGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, origCerts);
}
// Ctor Parameters [CppParam { name: "origCerts", ty: "::Org::BouncyCastle::X509::Store::IX509Store", modifiers: "", def_value: None }, CppParam { name: "origCrls", ty: "::Org::BouncyCastle::X509::Store::IX509Store", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Cms::OriginatorInfoGenerator::OriginatorInfoGenerator(::Org::BouncyCastle::X509::Store::IX509Store origCerts, ::Org::BouncyCastle::X509::Store::IX509Store origCrls)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OriginatorInfoGenerator>(origCerts, origCrls))) {}
 void ::Org::BouncyCastle::Cms::OriginatorInfoGenerator::_ctor(::Org::BouncyCastle::X509::Store::IX509Store origCerts, ::Org::BouncyCastle::X509::Store::IX509Store origCrls)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInfoGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::Store::IX509Store>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, origCerts, origCrls);
}
 ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo ::Org::BouncyCastle::Cms::OriginatorInfoGenerator::Generate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInfoGenerator>::get(),
                            "Generate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
