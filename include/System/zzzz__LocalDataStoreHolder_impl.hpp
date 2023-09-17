#pragma once
namespace {
#include "System/zzzz__LocalDataStoreHolder_def.hpp"
#include "System/zzzz__LocalDataStore_def.hpp"
//  Writing Method size for method: ::System::LocalDataStoreHolder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStoreHolder::*)(::System::LocalDataStore)>(&::System::LocalDataStoreHolder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x246971c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreHolder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStore>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreHolder.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStoreHolder::*)()>(&::System::LocalDataStoreHolder::Finalize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2469744;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::LocalDataStoreHolder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreHolder>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreHolder.get_Store
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStore (::System::LocalDataStoreHolder::*)()>(&::System::LocalDataStoreHolder::get_Store)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24697fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreHolder>::get(),
                            "get_Store",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::LocalDataStoreHolder::__set_m_Store(::System::LocalDataStore value)  {
::cordl_internals::setInstanceField<::System::LocalDataStore, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::LocalDataStore>(value));
}
constexpr ::System::LocalDataStore ::System::LocalDataStoreHolder::__get_m_Store() const {
return ::cordl_internals::getInstanceField<::System::LocalDataStore, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "store", ty: "::System::LocalDataStore", modifiers: "", def_value: None }]
 ::System::LocalDataStoreHolder::LocalDataStoreHolder(::System::LocalDataStore store)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LocalDataStoreHolder>(store))) {}
 void ::System::LocalDataStoreHolder::_ctor(::System::LocalDataStore store)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreHolder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStore>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, store);
}
 void ::System::LocalDataStoreHolder::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreHolder>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::LocalDataStore ::System::LocalDataStoreHolder::get_Store()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreHolder>::get(),
                            "get_Store",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::LocalDataStore, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
