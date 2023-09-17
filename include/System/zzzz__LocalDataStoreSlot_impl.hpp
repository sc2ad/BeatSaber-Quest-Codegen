#pragma once
namespace {
#include "System/zzzz__LocalDataStoreSlot_def.hpp"
#include "System/zzzz__LocalDataStoreMgr_def.hpp"
//  Writing Method size for method: ::System::LocalDataStoreSlot._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStoreSlot::*)(::System::LocalDataStoreMgr, int32_t, int64_t)>(&::System::LocalDataStoreSlot::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2469f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreSlot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStoreMgr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreSlot.get_Manager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::LocalDataStoreMgr (::System::LocalDataStoreSlot::*)()>(&::System::LocalDataStoreSlot::get_Manager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2469f40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreSlot>::get(),
                            "get_Manager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreSlot.get_Slot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::LocalDataStoreSlot::*)()>(&::System::LocalDataStoreSlot::get_Slot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2469f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreSlot>::get(),
                            "get_Slot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreSlot.get_Cookie
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::LocalDataStoreSlot::*)()>(&::System::LocalDataStoreSlot::get_Cookie)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2469f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreSlot>::get(),
                            "get_Cookie",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::LocalDataStoreSlot.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::LocalDataStoreSlot::*)()>(&::System::LocalDataStoreSlot::Finalize)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2469f58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::LocalDataStoreSlot),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreSlot>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::LocalDataStoreSlot::__set_m_mgr(::System::LocalDataStoreMgr value)  {
::cordl_internals::setInstanceField<::System::LocalDataStoreMgr, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::LocalDataStoreMgr>(value));
}
constexpr ::System::LocalDataStoreMgr ::System::LocalDataStoreSlot::__get_m_mgr() const {
return ::cordl_internals::getInstanceField<::System::LocalDataStoreMgr, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::LocalDataStoreSlot::__set_m_slot(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::LocalDataStoreSlot::__get_m_slot() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::LocalDataStoreSlot::__set_m_cookie(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::System::LocalDataStoreSlot::__get_m_cookie() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "mgr", ty: "::System::LocalDataStoreMgr", modifiers: "", def_value: None }, CppParam { name: "slot", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cookie", ty: "int64_t", modifiers: "", def_value: None }]
 ::System::LocalDataStoreSlot::LocalDataStoreSlot(::System::LocalDataStoreMgr mgr, int32_t slot, int64_t cookie)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LocalDataStoreSlot>(mgr, slot, cookie))) {}
 void ::System::LocalDataStoreSlot::_ctor(::System::LocalDataStoreMgr mgr, int32_t slot, int64_t cookie)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreSlot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::LocalDataStoreMgr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mgr, slot, cookie);
}
 ::System::LocalDataStoreMgr ::System::LocalDataStoreSlot::get_Manager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreSlot>::get(),
                            "get_Manager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::LocalDataStoreMgr, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::System::LocalDataStoreSlot::get_Slot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreSlot>::get(),
                            "get_Slot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t ::System::LocalDataStoreSlot::get_Cookie()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreSlot>::get(),
                            "get_Cookie",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::LocalDataStoreSlot::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::LocalDataStoreSlot>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
