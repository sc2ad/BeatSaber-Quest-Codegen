#pragma once
#include "Org/BouncyCastle/X509/Store/zzzz__X509CollectionStoreParameters_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509StoreParameters_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::X509::Store::X509CollectionStoreParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::*)(System::Collections::ICollection)>(&Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x10e6960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Store::X509CollectionStoreParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::Store::X509CollectionStoreParameters.GetCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection (Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::*)()>(&Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::GetCollection)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x10e6a1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Store::X509CollectionStoreParameters>::get(),
                            "GetCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::Store::X509CollectionStoreParameters.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::*)()>(&Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::ToString)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x10e6a74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::X509::Store::X509CollectionStoreParameters),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Store::X509CollectionStoreParameters>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::X509::Store::IX509StoreParameters
constexpr  Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::operator Org::BouncyCastle::X509::Store::IX509StoreParameters() const noexcept {
return Org::BouncyCastle::X509::Store::IX509StoreParameters(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::__set_collection(System::Collections::IList value)  {
::cordl_internals::setInstanceField<System::Collections::IList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IList>(value));
}
constexpr System::Collections::IList Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::__get_collection() const {
return ::cordl_internals::getInstanceField<System::Collections::IList, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "collection", ty: "System::Collections::ICollection", modifiers: "", def_value: None }]
 Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::X509CollectionStoreParameters(System::Collections::ICollection collection)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<X509CollectionStoreParameters>(collection))) {}
 void Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::_ctor(System::Collections::ICollection collection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Store::X509CollectionStoreParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, collection);
}
 System::Collections::ICollection Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::GetCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Store::X509CollectionStoreParameters>::get(),
                            "GetCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW Org::BouncyCastle::X509::Store::X509CollectionStoreParameters::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Store::X509CollectionStoreParameters>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
