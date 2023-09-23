#pragma once
#include "System/Collections/zzzz__CollectionBase_impl.hpp"
#include "Mono/Security/X509/zzzz__X509ExtensionCollection_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
//  Writing Method size for method: Mono::Security::X509::X509ExtensionCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::X509ExtensionCollection::*)()>(&Mono::Security::X509::X509ExtensionCollection::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x228fdd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509ExtensionCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::X509::X509ExtensionCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::X509ExtensionCollection::*)(Mono::Security::ASN1)>(&Mono::Security::X509::X509ExtensionCollection::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x228bb04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509ExtensionCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::ASN1>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::X509::X509ExtensionCollection.IndexOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Security::X509::X509ExtensionCollection::*)(::StringW)>(&Mono::Security::X509::X509ExtensionCollection::IndexOf)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x228fde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509ExtensionCollection>::get(),
                            "IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::X509::X509ExtensionCollection.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (Mono::Security::X509::X509ExtensionCollection::*)()>(&Mono::Security::X509::X509ExtensionCollection::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x228ff1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509ExtensionCollection>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::X509::X509ExtensionCollection.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509Extension (Mono::Security::X509::X509ExtensionCollection::*)(::StringW)>(&Mono::Security::X509::X509ExtensionCollection::get_Item)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x228f464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509ExtensionCollection>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  Mono::Security::X509::X509ExtensionCollection::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::X509::X509ExtensionCollection::__set_readOnly(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Mono::Security::X509::X509ExtensionCollection::__get_readOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Mono::Security::X509::X509ExtensionCollection::X509ExtensionCollection()  : System::Collections::CollectionBase(THROW_UNLESS(::il2cpp_utils::New<X509ExtensionCollection>())) {}
 void Mono::Security::X509::X509ExtensionCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509ExtensionCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "asn1", ty: "Mono::Security::ASN1", modifiers: "", def_value: None }]
 Mono::Security::X509::X509ExtensionCollection::X509ExtensionCollection(Mono::Security::ASN1 asn1)  : System::Collections::CollectionBase(THROW_UNLESS(::il2cpp_utils::New<X509ExtensionCollection>(asn1))) {}
 void Mono::Security::X509::X509ExtensionCollection::_ctor(Mono::Security::ASN1 asn1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509ExtensionCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::ASN1>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asn1);
}
 int32_t Mono::Security::X509::X509ExtensionCollection::IndexOf(::StringW oid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509ExtensionCollection>::get(),
                            "IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, oid);
}
 System::Collections::IEnumerator Mono::Security::X509::X509ExtensionCollection::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509ExtensionCollection>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 Mono::Security::X509::X509Extension Mono::Security::X509::X509ExtensionCollection::get_Item(::StringW oid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::X509::X509ExtensionCollection>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Security::X509::X509Extension, false>(const_cast<void*>(instance), ___internal_method, oid);
}
