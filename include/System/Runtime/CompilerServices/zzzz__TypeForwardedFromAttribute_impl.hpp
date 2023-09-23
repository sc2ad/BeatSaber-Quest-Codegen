#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TypeForwardedFromAttribute_def.hpp"
//  Writing Method size for method: System::Runtime::CompilerServices::TypeForwardedFromAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::TypeForwardedFromAttribute::*)(::StringW)>(&System::Runtime::CompilerServices::TypeForwardedFromAttribute::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x236e450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TypeForwardedFromAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::CompilerServices::TypeForwardedFromAttribute.get_AssemblyFullName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::CompilerServices::TypeForwardedFromAttribute::*)()>(&System::Runtime::CompilerServices::TypeForwardedFromAttribute::get_AssemblyFullName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236e4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TypeForwardedFromAttribute>::get(),
                            "get_AssemblyFullName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::CompilerServices::TypeForwardedFromAttribute::__set__AssemblyFullName_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Runtime::CompilerServices::TypeForwardedFromAttribute::__get__AssemblyFullName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "assemblyFullName", ty: "::StringW", modifiers: "", def_value: None }]
 System::Runtime::CompilerServices::TypeForwardedFromAttribute::TypeForwardedFromAttribute(::StringW assemblyFullName)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<TypeForwardedFromAttribute>(assemblyFullName))) {}
 void System::Runtime::CompilerServices::TypeForwardedFromAttribute::_ctor(::StringW assemblyFullName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TypeForwardedFromAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, assemblyFullName);
}
 ::StringW System::Runtime::CompilerServices::TypeForwardedFromAttribute::get_AssemblyFullName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::TypeForwardedFromAttribute>::get(),
                            "get_AssemblyFullName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
