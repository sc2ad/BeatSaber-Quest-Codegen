#pragma once
#include "System/zzzz__LocalDataStore_def.hpp"
#include "System/zzzz__LocalDataStoreSlot_def.hpp"
#include "System/zzzz__LocalDataStoreElement_def.hpp"
#include "System/zzzz__LocalDataStoreMgr_def.hpp"
//  Writing Method size for method: System::LocalDataStore._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::LocalDataStore::*)(System::LocalDataStoreMgr, int32_t)>(&System::LocalDataStore::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2469844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LocalDataStore>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::LocalDataStoreMgr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::LocalDataStore.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::LocalDataStore::*)()>(&System::LocalDataStore::Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24697e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LocalDataStore>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::LocalDataStore.GetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::LocalDataStore::*)(System::LocalDataStoreSlot)>(&System::LocalDataStore::GetData)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x24699b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LocalDataStore>::get(),
                            "GetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::LocalDataStoreSlot>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::LocalDataStore.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::LocalDataStore::*)(System::LocalDataStoreSlot, ::bs_hook::Il2CppWrapperType)>(&System::LocalDataStore::SetData)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2469b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LocalDataStore>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::LocalDataStoreSlot>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::LocalDataStore.FreeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::LocalDataStore::*)(int32_t, int64_t)>(&System::LocalDataStore::FreeData)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2469e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LocalDataStore>::get(),
                            "FreeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::LocalDataStore.PopulateElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::LocalDataStoreElement (System::LocalDataStore::*)(System::LocalDataStoreSlot)>(&System::LocalDataStore::PopulateElement)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x2469bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LocalDataStore>::get(),
                            "PopulateElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::LocalDataStoreSlot>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::LocalDataStore::__set_m_DataTable(::ArrayW<System::LocalDataStoreElement> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::LocalDataStoreElement>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::LocalDataStoreElement>>(value));
}
constexpr ::ArrayW<System::LocalDataStoreElement> System::LocalDataStore::__get_m_DataTable() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::LocalDataStoreElement>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::LocalDataStore::__set_m_Manager(System::LocalDataStoreMgr value)  {
::cordl_internals::setInstanceField<System::LocalDataStoreMgr, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::LocalDataStoreMgr>(value));
}
constexpr System::LocalDataStoreMgr System::LocalDataStore::__get_m_Manager() const {
return ::cordl_internals::getInstanceField<System::LocalDataStoreMgr, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::LocalDataStore System::LocalDataStore::New_ctor(System::LocalDataStoreMgr mgr, int32_t InitialCapacity)  {
System::LocalDataStore o{THROW_UNLESS(::il2cpp_utils::New<System::LocalDataStore>(mgr, InitialCapacity))};
return o;
}
 void System::LocalDataStore::_ctor(System::LocalDataStoreMgr mgr, int32_t InitialCapacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LocalDataStore>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::LocalDataStoreMgr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mgr, InitialCapacity);
}
 void System::LocalDataStore::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LocalDataStore>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType System::LocalDataStore::GetData(System::LocalDataStoreSlot slot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LocalDataStore>::get(),
                            "GetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::LocalDataStoreSlot>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, slot);
}
 void System::LocalDataStore::SetData(System::LocalDataStoreSlot slot, ::bs_hook::Il2CppWrapperType data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LocalDataStore>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::LocalDataStoreSlot>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, slot, data);
}
 void System::LocalDataStore::FreeData(int32_t slot, int64_t cookie)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LocalDataStore>::get(),
                            "FreeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, slot, cookie);
}
 System::LocalDataStoreElement System::LocalDataStore::PopulateElement(System::LocalDataStoreSlot slot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::LocalDataStore>::get(),
                            "PopulateElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::LocalDataStoreSlot>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::LocalDataStoreElement, false>(const_cast<void*>(instance), ___internal_method, slot);
}
