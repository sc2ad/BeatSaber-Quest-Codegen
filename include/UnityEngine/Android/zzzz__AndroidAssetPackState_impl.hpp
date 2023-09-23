#pragma once
#include "UnityEngine/Android/zzzz__AndroidAssetPackState_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackError_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackStatus_def.hpp"
//  Writing Method size for method: UnityEngine::Android::AndroidAssetPackState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Android::AndroidAssetPackState::*)(::StringW, UnityEngine::Android::AndroidAssetPackStatus, UnityEngine::Android::AndroidAssetPackError)>(&UnityEngine::Android::AndroidAssetPackState::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b16e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::AndroidAssetPackState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Android::AndroidAssetPackStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Android::AndroidAssetPackError>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Android::AndroidAssetPackState::__set__name_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::Android::AndroidAssetPackState::__get__name_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Android::AndroidAssetPackState::__set__status_k__BackingField(UnityEngine::Android::AndroidAssetPackStatus value)  {
::cordl_internals::setInstanceField<UnityEngine::Android::AndroidAssetPackStatus, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Android::AndroidAssetPackStatus>(value));
}
constexpr UnityEngine::Android::AndroidAssetPackStatus UnityEngine::Android::AndroidAssetPackState::__get__status_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Android::AndroidAssetPackStatus, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Android::AndroidAssetPackState::__set__error_k__BackingField(UnityEngine::Android::AndroidAssetPackError value)  {
::cordl_internals::setInstanceField<UnityEngine::Android::AndroidAssetPackError, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Android::AndroidAssetPackError>(value));
}
constexpr UnityEngine::Android::AndroidAssetPackError UnityEngine::Android::AndroidAssetPackState::__get__error_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Android::AndroidAssetPackError, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "status", ty: "UnityEngine::Android::AndroidAssetPackStatus", modifiers: "", def_value: None }, CppParam { name: "error", ty: "UnityEngine::Android::AndroidAssetPackError", modifiers: "", def_value: None }]
 UnityEngine::Android::AndroidAssetPackState::AndroidAssetPackState(::StringW name, UnityEngine::Android::AndroidAssetPackStatus status, UnityEngine::Android::AndroidAssetPackError error)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AndroidAssetPackState>(name, status, error))) {}
 void UnityEngine::Android::AndroidAssetPackState::_ctor(::StringW name, UnityEngine::Android::AndroidAssetPackStatus status, UnityEngine::Android::AndroidAssetPackError error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::AndroidAssetPackState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Android::AndroidAssetPackStatus>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Android::AndroidAssetPackError>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, status, error);
}
