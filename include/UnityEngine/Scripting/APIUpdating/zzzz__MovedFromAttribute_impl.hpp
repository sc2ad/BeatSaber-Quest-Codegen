#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Scripting/APIUpdating/zzzz__MovedFromAttribute_def.hpp"
#include "UnityEngine/Scripting/APIUpdating/zzzz__MovedFromAttributeData_def.hpp"
//  Writing Method size for method: UnityEngine::Scripting::APIUpdating::MovedFromAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Scripting::APIUpdating::MovedFromAttribute::*)(bool, ::StringW, ::StringW, ::StringW)>(&UnityEngine::Scripting::APIUpdating::MovedFromAttribute::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b71b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Scripting::APIUpdating::MovedFromAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Scripting::APIUpdating::MovedFromAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Scripting::APIUpdating::MovedFromAttribute::*)(::StringW)>(&UnityEngine::Scripting::APIUpdating::MovedFromAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b71bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Scripting::APIUpdating::MovedFromAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Scripting::APIUpdating::MovedFromAttribute::__set_data(UnityEngine::Scripting::APIUpdating::MovedFromAttributeData value)  {
::cordl_internals::setInstanceField<UnityEngine::Scripting::APIUpdating::MovedFromAttributeData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Scripting::APIUpdating::MovedFromAttributeData>(value));
}
constexpr UnityEngine::Scripting::APIUpdating::MovedFromAttributeData UnityEngine::Scripting::APIUpdating::MovedFromAttribute::__get_data() const {
return ::cordl_internals::getInstanceField<UnityEngine::Scripting::APIUpdating::MovedFromAttributeData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "autoUpdateAPI", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "sourceNamespace", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "sourceAssembly", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "sourceClassName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
 UnityEngine::Scripting::APIUpdating::MovedFromAttribute::MovedFromAttribute(bool autoUpdateAPI, ::StringW sourceNamespace, ::StringW sourceAssembly, ::StringW sourceClassName)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<MovedFromAttribute>(autoUpdateAPI, sourceNamespace, sourceAssembly, sourceClassName))) {}
/// @param sourceNamespace: ::StringW (default: csnull)
/// @param sourceAssembly: ::StringW (default: csnull)
/// @param sourceClassName: ::StringW (default: csnull)
 void UnityEngine::Scripting::APIUpdating::MovedFromAttribute::_ctor(bool autoUpdateAPI, ::StringW sourceNamespace, ::StringW sourceAssembly, ::StringW sourceClassName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Scripting::APIUpdating::MovedFromAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, autoUpdateAPI, sourceNamespace, sourceAssembly, sourceClassName);
}
// Ctor Parameters [CppParam { name: "sourceNamespace", ty: "::StringW", modifiers: "", def_value: None }]
 UnityEngine::Scripting::APIUpdating::MovedFromAttribute::MovedFromAttribute(::StringW sourceNamespace)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<MovedFromAttribute>(sourceNamespace))) {}
 void UnityEngine::Scripting::APIUpdating::MovedFromAttribute::_ctor(::StringW sourceNamespace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Scripting::APIUpdating::MovedFromAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sourceNamespace);
}
