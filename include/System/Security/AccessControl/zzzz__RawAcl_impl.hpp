#pragma once
#include "System/Security/AccessControl/zzzz__GenericAcl_impl.hpp"
#include "System/Security/AccessControl/zzzz__RawAcl_def.hpp"
#include "System/Security/AccessControl/zzzz__GenericAce_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: System::Security::AccessControl::RawAcl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::RawAcl::*)(uint8_t, int32_t)>(&System::Security::AccessControl::RawAcl::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x231601c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::RawAcl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::RawAcl.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Security::AccessControl::RawAcl::*)()>(&System::Security::AccessControl::RawAcl::get_Count)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2319788;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::AccessControl::RawAcl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::RawAcl>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::RawAcl.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::AccessControl::GenericAce (System::Security::AccessControl::RawAcl::*)(int32_t)>(&System::Security::AccessControl::RawAcl::get_Item)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23197d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::AccessControl::RawAcl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::RawAcl>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::RawAcl.set_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::RawAcl::*)(int32_t, System::Security::AccessControl::GenericAce)>(&System::Security::AccessControl::RawAcl::set_Item)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2319828;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::AccessControl::RawAcl),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::RawAcl>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::RawAcl.InsertAce
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::RawAcl::*)(int32_t, System::Security::AccessControl::GenericAce)>(&System::Security::AccessControl::RawAcl::InsertAce)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23176f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::RawAcl>::get(),
                            "InsertAce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::GenericAce>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::AccessControl::RawAcl.RemoveAce
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::AccessControl::RawAcl::*)(int32_t)>(&System::Security::AccessControl::RawAcl::RemoveAce)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2317144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::RawAcl>::get(),
                            "RemoveAce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::AccessControl::RawAcl::__set_revision(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t System::Security::AccessControl::RawAcl::__get_revision() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::AccessControl::RawAcl::__set_list(System::Collections::Generic::List_1<System::Security::AccessControl::GenericAce> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::Security::AccessControl::GenericAce>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::Security::AccessControl::GenericAce>>(value));
}
constexpr System::Collections::Generic::List_1<System::Security::AccessControl::GenericAce> System::Security::AccessControl::RawAcl::__get_list() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::Security::AccessControl::GenericAce>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "revision", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
 System::Security::AccessControl::RawAcl::RawAcl(uint8_t revision, int32_t capacity)  : System::Security::AccessControl::GenericAcl(THROW_UNLESS(::il2cpp_utils::New<RawAcl>(revision, capacity))) {}
 void System::Security::AccessControl::RawAcl::_ctor(uint8_t revision, int32_t capacity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::RawAcl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, revision, capacity);
}
 int32_t System::Security::AccessControl::RawAcl::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::RawAcl>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::AccessControl::GenericAce System::Security::AccessControl::RawAcl::get_Item(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::RawAcl>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::AccessControl::GenericAce, false>(const_cast<void*>(instance), ___internal_method, index);
}
 void System::Security::AccessControl::RawAcl::set_Item(int32_t index, System::Security::AccessControl::GenericAce value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::RawAcl>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::GenericAce>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index, value);
}
 void System::Security::AccessControl::RawAcl::InsertAce(int32_t index, System::Security::AccessControl::GenericAce ace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::RawAcl>::get(),
                            "InsertAce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::AccessControl::GenericAce>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index, ace);
}
 void System::Security::AccessControl::RawAcl::RemoveAce(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::AccessControl::RawAcl>::get(),
                            "RemoveAce",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, index);
}
