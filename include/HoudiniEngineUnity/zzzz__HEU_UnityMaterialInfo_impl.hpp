#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_UnityMaterialInfo_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HEU_UnityMaterialInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_UnityMaterialInfo::*)(::StringW, ::StringW, int32_t)>(&HoudiniEngineUnity::HEU_UnityMaterialInfo::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2030150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_UnityMaterialInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_UnityMaterialInfo::__set__unityMaterialPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_UnityMaterialInfo::__get__unityMaterialPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_UnityMaterialInfo::__set__substancePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_UnityMaterialInfo::__get__substancePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_UnityMaterialInfo::__set__substanceIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_UnityMaterialInfo::__get__substanceIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "unityMaterialPath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "substancePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "substanceIndex", ty: "int32_t", modifiers: "", def_value: None }]
 HoudiniEngineUnity::HEU_UnityMaterialInfo::HEU_UnityMaterialInfo(::StringW unityMaterialPath, ::StringW substancePath, int32_t substanceIndex)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HEU_UnityMaterialInfo>(unityMaterialPath, substancePath, substanceIndex))) {}
 void HoudiniEngineUnity::HEU_UnityMaterialInfo::_ctor(::StringW unityMaterialPath, ::StringW substancePath, int32_t substanceIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_UnityMaterialInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, unityMaterialPath, substancePath, substanceIndex);
}
