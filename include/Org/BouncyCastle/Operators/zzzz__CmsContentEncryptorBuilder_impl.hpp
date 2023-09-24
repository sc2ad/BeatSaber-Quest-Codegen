#pragma once
#include "Org/BouncyCastle/Operators/zzzz__CmsContentEncryptorBuilder_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherBuilderWithKey_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__EnvelopedDataHelper_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Operators::CmsContentEncryptorBuilder.GetKeySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::GetKeySize)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xea04e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Operators::CmsContentEncryptorBuilder>::get(),
                            "GetKeySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Operators::CmsContentEncryptorBuilder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier)>(&Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xea0688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Operators::CmsContentEncryptorBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Operators::CmsContentEncryptorBuilder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, int32_t)>(&Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xea06f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Operators::CmsContentEncryptorBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Operators::CmsContentEncryptorBuilder.Build
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherBuilderWithKey (Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::*)()>(&Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::Build)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xea077c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Operators::CmsContentEncryptorBuilder>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__set_KeySizes(System::Collections::IDictionary value)  {
::cordl_internals::setStaticField<System::Collections::IDictionary, "KeySizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Operators::CmsContentEncryptorBuilder>::get>(std::forward<System::Collections::IDictionary>(value));
}
 System::Collections::IDictionary Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__get_KeySizes()  {
return ::cordl_internals::getStaticField<System::Collections::IDictionary, "KeySizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Operators::CmsContentEncryptorBuilder>::get>();
}
constexpr void Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__set_encryptionOID(Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__get_encryptionOID() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::DerObjectIdentifier, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__set_keySize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__get_keySize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__set_helper(Org::BouncyCastle::Cms::EnvelopedDataHelper value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Cms::EnvelopedDataHelper, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Cms::EnvelopedDataHelper>(value));
}
constexpr Org::BouncyCastle::Cms::EnvelopedDataHelper Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::__get_helper() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Cms::EnvelopedDataHelper, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::GetKeySize(Org::BouncyCastle::Asn1::DerObjectIdentifier oid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Operators::CmsContentEncryptorBuilder>::get(),
                            "GetKeySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, oid);
}
 Org::BouncyCastle::Operators::CmsContentEncryptorBuilder Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionOID)  {
Org::BouncyCastle::Operators::CmsContentEncryptorBuilder o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Operators::CmsContentEncryptorBuilder>(encryptionOID))};
return o;
}
 void Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionOID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Operators::CmsContentEncryptorBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, encryptionOID);
}
 Org::BouncyCastle::Operators::CmsContentEncryptorBuilder Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionOID, int32_t keySize)  {
Org::BouncyCastle::Operators::CmsContentEncryptorBuilder o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Operators::CmsContentEncryptorBuilder>(encryptionOID, keySize))};
return o;
}
 void Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionOID, int32_t keySize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Operators::CmsContentEncryptorBuilder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, encryptionOID, keySize);
}
 Org::BouncyCastle::Crypto::ICipherBuilderWithKey Org::BouncyCastle::Operators::CmsContentEncryptorBuilder::Build()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Operators::CmsContentEncryptorBuilder>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::ICipherBuilderWithKey, false>(const_cast<void*>(instance), ___internal_method);
}
