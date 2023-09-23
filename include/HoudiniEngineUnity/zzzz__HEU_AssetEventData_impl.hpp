#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_AssetEventData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetEventType_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HEU_AssetEventData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_AssetEventData::*)(HoudiniEngineUnity::HEU_HoudiniAsset, bool, System::Collections::Generic::List_1<UnityEngine::GameObject>)>(&HoudiniEngineUnity::HEU_AssetEventData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1fda9c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetEventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::GameObject>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_AssetEventData::__set_Asset(HoudiniEngineUnity::HEU_HoudiniAsset value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HEU_HoudiniAsset, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HEU_HoudiniAsset>(value));
}
constexpr HoudiniEngineUnity::HEU_HoudiniAsset HoudiniEngineUnity::HEU_AssetEventData::__get_Asset() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HEU_HoudiniAsset, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_AssetEventData::__set_CookSuccess(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_AssetEventData::__get_CookSuccess() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_AssetEventData::__set_OutputObjects(System::Collections::Generic::List_1<UnityEngine::GameObject> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::GameObject>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::GameObject>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::GameObject> HoudiniEngineUnity::HEU_AssetEventData::__get_OutputObjects() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::GameObject>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_AssetEventData::__set_EventType(HoudiniEngineUnity::HEU_AssetEventType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HEU_AssetEventType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HEU_AssetEventType>(value));
}
constexpr HoudiniEngineUnity::HEU_AssetEventType HoudiniEngineUnity::HEU_AssetEventData::__get_EventType() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HEU_AssetEventType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "asset", ty: "HoudiniEngineUnity::HEU_HoudiniAsset", modifiers: "", def_value: None }, CppParam { name: "successful", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "outputObjects", ty: "System::Collections::Generic::List_1<UnityEngine::GameObject>", modifiers: "", def_value: None }]
 HoudiniEngineUnity::HEU_AssetEventData::HEU_AssetEventData(HoudiniEngineUnity::HEU_HoudiniAsset asset, bool successful, System::Collections::Generic::List_1<UnityEngine::GameObject> outputObjects)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HEU_AssetEventData>(asset, successful, outputObjects))) {}
 void HoudiniEngineUnity::HEU_AssetEventData::_ctor(HoudiniEngineUnity::HEU_HoudiniAsset asset, bool successful, System::Collections::Generic::List_1<UnityEngine::GameObject> outputObjects)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AssetEventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::GameObject>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asset, successful, outputObjects);
}
