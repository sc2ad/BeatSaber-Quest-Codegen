#pragma once
#include "System/Runtime/Remoting/zzzz__TypeEntry_impl.hpp"
#include "System/Runtime/Remoting/zzzz__WellKnownServiceTypeEntry_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Remoting/zzzz__WellKnownObjectMode_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::WellKnownServiceTypeEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::WellKnownServiceTypeEntry::*)(::StringW, ::StringW, ::StringW, System::Runtime::Remoting::WellKnownObjectMode)>(&System::Runtime::Remoting::WellKnownServiceTypeEntry::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x23297f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::WellKnownServiceTypeEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::WellKnownObjectMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::WellKnownServiceTypeEntry.get_Mode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::WellKnownObjectMode (System::Runtime::Remoting::WellKnownServiceTypeEntry::*)()>(&System::Runtime::Remoting::WellKnownServiceTypeEntry::get_Mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2329934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::WellKnownServiceTypeEntry>::get(),
                            "get_Mode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::WellKnownServiceTypeEntry.get_ObjectType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (System::Runtime::Remoting::WellKnownServiceTypeEntry::*)()>(&System::Runtime::Remoting::WellKnownServiceTypeEntry::get_ObjectType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x232993c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::WellKnownServiceTypeEntry>::get(),
                            "get_ObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::WellKnownServiceTypeEntry.get_ObjectUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::WellKnownServiceTypeEntry::*)()>(&System::Runtime::Remoting::WellKnownServiceTypeEntry::get_ObjectUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2329944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::WellKnownServiceTypeEntry>::get(),
                            "get_ObjectUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::WellKnownServiceTypeEntry.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::WellKnownServiceTypeEntry::*)()>(&System::Runtime::Remoting::WellKnownServiceTypeEntry::ToString)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x232994c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::WellKnownServiceTypeEntry),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::WellKnownServiceTypeEntry>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Remoting::WellKnownServiceTypeEntry::__set_obj_type(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type System::Runtime::Remoting::WellKnownServiceTypeEntry::__get_obj_type() const {
return ::cordl_internals::getInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::WellKnownServiceTypeEntry::__set_obj_uri(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Runtime::Remoting::WellKnownServiceTypeEntry::__get_obj_uri() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::WellKnownServiceTypeEntry::__set_obj_mode(System::Runtime::Remoting::WellKnownObjectMode value)  {
::cordl_internals::setInstanceField<System::Runtime::Remoting::WellKnownObjectMode, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::Remoting::WellKnownObjectMode>(value));
}
constexpr System::Runtime::Remoting::WellKnownObjectMode System::Runtime::Remoting::WellKnownServiceTypeEntry::__get_obj_mode() const {
return ::cordl_internals::getInstanceField<System::Runtime::Remoting::WellKnownObjectMode, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "typeName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assemblyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "objectUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "System::Runtime::Remoting::WellKnownObjectMode", modifiers: "", def_value: None }]
 System::Runtime::Remoting::WellKnownServiceTypeEntry::WellKnownServiceTypeEntry(::StringW typeName, ::StringW assemblyName, ::StringW objectUri, System::Runtime::Remoting::WellKnownObjectMode mode)  : System::Runtime::Remoting::TypeEntry(THROW_UNLESS(::il2cpp_utils::New<WellKnownServiceTypeEntry>(typeName, assemblyName, objectUri, mode))) {}
 void System::Runtime::Remoting::WellKnownServiceTypeEntry::_ctor(::StringW typeName, ::StringW assemblyName, ::StringW objectUri, System::Runtime::Remoting::WellKnownObjectMode mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::WellKnownServiceTypeEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::WellKnownObjectMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, typeName, assemblyName, objectUri, mode);
}
 System::Runtime::Remoting::WellKnownObjectMode System::Runtime::Remoting::WellKnownServiceTypeEntry::get_Mode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::WellKnownServiceTypeEntry>::get(),
                            "get_Mode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::WellKnownObjectMode, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type System::Runtime::Remoting::WellKnownServiceTypeEntry::get_ObjectType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::WellKnownServiceTypeEntry>::get(),
                            "get_ObjectType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Runtime::Remoting::WellKnownServiceTypeEntry::get_ObjectUri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::WellKnownServiceTypeEntry>::get(),
                            "get_ObjectUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Runtime::Remoting::WellKnownServiceTypeEntry::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::WellKnownServiceTypeEntry>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
