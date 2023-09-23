#pragma once
#include "Org/BouncyCastle/X509/Store/zzzz__X509CollectionStore_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::X509::Store::X509CollectionStore._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::X509::Store::X509CollectionStore::*)(System::Collections::ICollection)>(&Org::BouncyCastle::X509::Store::X509CollectionStore::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x10e64a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Store::X509CollectionStore>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::X509::Store::X509CollectionStore.GetMatches
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ICollection (Org::BouncyCastle::X509::Store::X509CollectionStore::*)(Org::BouncyCastle::X509::Store::IX509Selector)>(&Org::BouncyCastle::X509::Store::X509CollectionStore::GetMatches)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x10e6518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Store::X509CollectionStore>::get(),
                            "GetMatches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::Store::IX509Selector>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::X509::Store::IX509Store
constexpr  Org::BouncyCastle::X509::Store::X509CollectionStore::operator Org::BouncyCastle::X509::Store::IX509Store() const noexcept {
return Org::BouncyCastle::X509::Store::IX509Store(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::X509::Store::X509CollectionStore::__set__local(System::Collections::ICollection value)  {
::cordl_internals::setInstanceField<System::Collections::ICollection, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::ICollection>(value));
}
constexpr System::Collections::ICollection Org::BouncyCastle::X509::Store::X509CollectionStore::__get__local() const {
return ::cordl_internals::getInstanceField<System::Collections::ICollection, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "collection", ty: "System::Collections::ICollection", modifiers: "", def_value: None }]
 Org::BouncyCastle::X509::Store::X509CollectionStore::X509CollectionStore(System::Collections::ICollection collection)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<X509CollectionStore>(collection))) {}
 void Org::BouncyCastle::X509::Store::X509CollectionStore::_ctor(System::Collections::ICollection collection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Store::X509CollectionStore>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::ICollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, collection);
}
 System::Collections::ICollection Org::BouncyCastle::X509::Store::X509CollectionStore::GetMatches(Org::BouncyCastle::X509::Store::IX509Selector selector)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::X509::Store::X509CollectionStore>::get(),
                            "GetMatches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::X509::Store::IX509Selector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::ICollection, false>(const_cast<void*>(instance), ___internal_method, selector);
}
