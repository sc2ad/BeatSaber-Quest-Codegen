#pragma once
#include "UnityEngine/_Scripting/APIUpdating/zzzz__APIUpdaterRuntimeHelpers_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers.GetMovedFromAttributeDataForType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type, ByRef<::StringW>, ByRef<::StringW>, ByRef<::StringW>)>(&UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::GetMovedFromAttributeDataForType)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2b6e208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers>::get(),
                            "GetMovedFromAttributeDataForType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers.GetObsoleteTypeRedirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type, ByRef<::StringW>, ByRef<::StringW>, ByRef<::StringW>)>(&UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::GetObsoleteTypeRedirection)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x2b6e348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers>::get(),
                            "GetObsoleteTypeRedirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
 bool UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::GetMovedFromAttributeDataForType(System::Type sourceType, ByRef<::StringW> assembly, ByRef<::StringW> nsp, ByRef<::StringW> klass)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers>::get(),
                            "GetMovedFromAttributeDataForType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sourceType, assembly, nsp, klass);
}
 bool UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers::GetObsoleteTypeRedirection(System::Type sourceType, ByRef<::StringW> assemblyName, ByRef<::StringW> nsp, ByRef<::StringW> className)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers>::get(),
                            "GetObsoleteTypeRedirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sourceType, assemblyName, nsp, className);
}
