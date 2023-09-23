#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__VisibleToOtherModulesAttribute_def.hpp"
//  Writing Method size for method: UnityEngine::Bindings::VisibleToOtherModulesAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::VisibleToOtherModulesAttribute::*)()>(&UnityEngine::Bindings::VisibleToOtherModulesAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba105c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Bindings::VisibleToOtherModulesAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Bindings::VisibleToOtherModulesAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::VisibleToOtherModulesAttribute::*)(::ArrayW<::StringW>)>(&UnityEngine::Bindings::VisibleToOtherModulesAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba1064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Bindings::VisibleToOtherModulesAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 UnityEngine::Bindings::VisibleToOtherModulesAttribute::VisibleToOtherModulesAttribute()  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<VisibleToOtherModulesAttribute>())) {}
 void UnityEngine::Bindings::VisibleToOtherModulesAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Bindings::VisibleToOtherModulesAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "modules", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
 UnityEngine::Bindings::VisibleToOtherModulesAttribute::VisibleToOtherModulesAttribute(::ArrayW<::StringW> modules)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<VisibleToOtherModulesAttribute>(modules))) {}
 void UnityEngine::Bindings::VisibleToOtherModulesAttribute::_ctor(::ArrayW<::StringW> modules)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Bindings::VisibleToOtherModulesAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, modules);
}
