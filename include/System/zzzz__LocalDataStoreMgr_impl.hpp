#pragma once
namespace {
#include "System/zzzz__LocalDataStoreMgr_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__LocalDataStoreHolder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__LocalDataStore_def.hpp"
#include "System/zzzz__LocalDataStoreSlot_def.hpp"
//  Writing Method size for method: ::System::LocalDataStoreMgr.CreateLocalDataStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStoreHolder (::System::LocalDataStoreMgr::*)()>(&::System::LocalDataStoreMgr::CreateLocalDataStore)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x246a19c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr>::get(),
                            "CreateLocalDataStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.DeleteLocalDataStore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStoreMgr::*)(::System::LocalDataStore)>(&::System::LocalDataStoreMgr::DeleteLocalDataStore)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x24698b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr>::get(),
                            "DeleteLocalDataStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStore>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.AllocateDataSlot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStoreSlot (::System::LocalDataStoreMgr::*)()>(&::System::LocalDataStoreMgr::AllocateDataSlot)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x246a35c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr>::get(),
                            "AllocateDataSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.AllocateNamedDataSlot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStoreSlot (::System::LocalDataStoreMgr::*)(::StringW)>(&::System::LocalDataStoreMgr::AllocateNamedDataSlot)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x246a5ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr>::get(),
                            "AllocateNamedDataSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.GetNamedDataSlot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStoreSlot (::System::LocalDataStoreMgr::*)(::StringW)>(&::System::LocalDataStoreMgr::GetNamedDataSlot)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x246a6c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr>::get(),
                            "GetNamedDataSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.FreeNamedDataSlot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStoreMgr::*)(::StringW)>(&::System::LocalDataStoreMgr::FreeNamedDataSlot)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x246a7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr>::get(),
                            "FreeNamedDataSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.FreeDataSlot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStoreMgr::*)(int32_t, int64_t)>(&::System::LocalDataStoreMgr::FreeDataSlot)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x246a004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr>::get(),
                            "FreeDataSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.ValidateSlot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStoreMgr::*)(::System::LocalDataStoreSlot)>(&::System::LocalDataStoreMgr::ValidateSlot)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2469a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr>::get(),
                            "ValidateSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStoreSlot>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr.GetSlotTableLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::LocalDataStoreMgr::*)()>(&::System::LocalDataStoreMgr::GetSlotTableLength)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2469ee4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr>::get(),
                            "GetSlotTableLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreMgr._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStoreMgr::*)()>(&::System::LocalDataStoreMgr::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x246a8e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::LocalDataStoreMgr::__set_m_SlotInfoTable(::ArrayW<bool> value)  {
::cordl_internals::setInstanceField<::ArrayW<bool>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<bool>>(value));
}
constexpr ::ArrayW<bool> ::System::LocalDataStoreMgr::__get_m_SlotInfoTable() const {
return ::cordl_internals::getInstanceField<::ArrayW<bool>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::LocalDataStoreMgr::__set_m_FirstAvailableSlot(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::LocalDataStoreMgr::__get_m_FirstAvailableSlot() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::LocalDataStoreMgr::__set_m_ManagedLocalDataStores(::System::Collections::Generic::List_1<::System::LocalDataStore> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::LocalDataStore>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::System::LocalDataStore>>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::LocalDataStore> ::System::LocalDataStoreMgr::__get_m_ManagedLocalDataStores() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::LocalDataStore>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::LocalDataStoreMgr::__set_m_KeyToSlotMap(::System::Collections::Generic::Dictionary_2<::StringW,::System::LocalDataStoreSlot> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::LocalDataStoreSlot>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::LocalDataStoreSlot>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::LocalDataStoreSlot> ::System::LocalDataStoreMgr::__get_m_KeyToSlotMap() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::LocalDataStoreSlot>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::LocalDataStoreMgr::__set_m_CookieGenerator(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::System::LocalDataStoreMgr::__get_m_CookieGenerator() const {
return ::cordl_internals::getInstanceField<int64_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::LocalDataStoreHolder ::System::LocalDataStoreMgr::CreateLocalDataStore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr>::get(),
                            "CreateLocalDataStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreHolder, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::LocalDataStoreMgr::DeleteLocalDataStore(::System::LocalDataStore store)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr>::get(),
                            "DeleteLocalDataStore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStore>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, store);
}
 ::System::LocalDataStoreSlot ::System::LocalDataStoreMgr::AllocateDataSlot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr>::get(),
                            "AllocateDataSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreSlot, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::LocalDataStoreSlot ::System::LocalDataStoreMgr::AllocateNamedDataSlot(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr>::get(),
                            "AllocateNamedDataSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreSlot, false>(const_cast<void*>(instance), ___internal_method, name);
}
 ::System::LocalDataStoreSlot ::System::LocalDataStoreMgr::GetNamedDataSlot(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr>::get(),
                            "GetNamedDataSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreSlot, false>(const_cast<void*>(instance), ___internal_method, name);
}
 void ::System::LocalDataStoreMgr::FreeNamedDataSlot(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr>::get(),
                            "FreeNamedDataSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name);
}
 void ::System::LocalDataStoreMgr::FreeDataSlot(int32_t slot, int64_t cookie)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr>::get(),
                            "FreeDataSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, slot, cookie);
}
 void ::System::LocalDataStoreMgr::ValidateSlot(::System::LocalDataStoreSlot slot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr>::get(),
                            "ValidateSlot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStoreSlot>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, slot);
}
 int32_t ::System::LocalDataStoreMgr::GetSlotTableLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr>::get(),
                            "GetSlotTableLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::System::LocalDataStoreMgr::LocalDataStoreMgr()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LocalDataStoreMgr>())) {}
 void ::System::LocalDataStoreMgr::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreMgr>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
