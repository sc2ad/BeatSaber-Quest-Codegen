#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/zzzz__ResolveEventArgs_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
//  Writing Method size for method: System::ResolveEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ResolveEventArgs::*)(::StringW)>(&System::ResolveEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2451ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ResolveEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ResolveEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ResolveEventArgs::*)(::StringW, System::Reflection::Assembly)>(&System::ResolveEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2451f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ResolveEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::ResolveEventArgs::__set__Name_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::ResolveEventArgs::__get__Name_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ResolveEventArgs::__set__RequestingAssembly_k__BackingField(System::Reflection::Assembly value)  {
::cordl_internals::setInstanceField<System::Reflection::Assembly, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Reflection::Assembly>(value));
}
constexpr System::Reflection::Assembly System::ResolveEventArgs::__get__RequestingAssembly_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Reflection::Assembly, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::ResolveEventArgs System::ResolveEventArgs::New_ctor(::StringW name)  {
System::ResolveEventArgs o{THROW_UNLESS(::il2cpp_utils::New<System::ResolveEventArgs>(name))};
return o;
}
 void System::ResolveEventArgs::_ctor(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ResolveEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name);
}
 System::ResolveEventArgs System::ResolveEventArgs::New_ctor(::StringW name, System::Reflection::Assembly requestingAssembly)  {
System::ResolveEventArgs o{THROW_UNLESS(::il2cpp_utils::New<System::ResolveEventArgs>(name, requestingAssembly))};
return o;
}
 void System::ResolveEventArgs::_ctor(::StringW name, System::Reflection::Assembly requestingAssembly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ResolveEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, requestingAssembly);
}
