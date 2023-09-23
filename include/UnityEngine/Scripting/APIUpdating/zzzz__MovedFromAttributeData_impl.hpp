#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/Scripting/APIUpdating/zzzz__MovedFromAttributeData_def.hpp"
//  Writing Method size for method: UnityEngine::Scripting::APIUpdating::MovedFromAttributeData.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::*)(bool, ::StringW, ::StringW, ::StringW)>(&UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::Set)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2b71b58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Scripting::APIUpdating::MovedFromAttributeData>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "className", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "nameSpace", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "assembly", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "classHasChanged", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "nameSpaceHasChanged", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "assemblyHasChanged", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "autoUdpateAPI", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::MovedFromAttributeData(::StringW className, ::StringW nameSpace, ::StringW assembly, bool classHasChanged, bool nameSpaceHasChanged, bool assemblyHasChanged, bool autoUdpateAPI) noexcept : ::bs_hook::ValueTypeWrapper() {this->className = className;
this->nameSpace = nameSpace;
this->assembly = assembly;
this->classHasChanged = classHasChanged;
this->nameSpaceHasChanged = nameSpaceHasChanged;
this->assemblyHasChanged = assemblyHasChanged;
this->autoUdpateAPI = autoUdpateAPI;
}
constexpr void UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::__set_className(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::__get_className() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::__set_nameSpace(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::__get_nameSpace() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::__set_assembly(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::__get_assembly() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::__set_classHasChanged(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::__get_classHasChanged() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->__instance);
}
constexpr void UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::__set_nameSpaceHasChanged(bool value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::__get_nameSpaceHasChanged() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this->__instance);
}
constexpr void UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::__set_assemblyHasChanged(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1a>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::__get_assemblyHasChanged() const {
return ::cordl_internals::getInstanceField<bool, 0x1a>(this->__instance);
}
constexpr void UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::__set_autoUdpateAPI(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1b>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::__get_autoUdpateAPI() const {
return ::cordl_internals::getInstanceField<bool, 0x1b>(this->__instance);
}
/// @param sourceNamespace: ::StringW (default: csnull)
/// @param sourceAssembly: ::StringW (default: csnull)
/// @param sourceClassName: ::StringW (default: csnull)
 void UnityEngine::Scripting::APIUpdating::MovedFromAttributeData::Set(bool autoUpdateAPI, ::StringW sourceNamespace, ::StringW sourceAssembly, ::StringW sourceClassName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Scripting::APIUpdating::MovedFromAttributeData>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, autoUpdateAPI, sourceNamespace, sourceAssembly, sourceClassName);
}
