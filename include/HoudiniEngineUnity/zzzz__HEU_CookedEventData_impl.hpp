#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_AssetEventData_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_CookedEventData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HEU_CookedEventData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_CookedEventData::*)(HoudiniEngineUnity::HEU_HoudiniAsset, bool, System::Collections::Generic::List_1<UnityEngine::GameObject>)>(&HoudiniEngineUnity::HEU_CookedEventData::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1fdaa50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_CookedEventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::GameObject>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "asset", ty: "HoudiniEngineUnity::HEU_HoudiniAsset", modifiers: "", def_value: None }, CppParam { name: "successful", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "outputObjects", ty: "System::Collections::Generic::List_1<UnityEngine::GameObject>", modifiers: "", def_value: None }]
 HoudiniEngineUnity::HEU_CookedEventData::HEU_CookedEventData(HoudiniEngineUnity::HEU_HoudiniAsset asset, bool successful, System::Collections::Generic::List_1<UnityEngine::GameObject> outputObjects)  : HoudiniEngineUnity::HEU_AssetEventData(THROW_UNLESS(::il2cpp_utils::New<HEU_CookedEventData>(asset, successful, outputObjects))) {}
 void HoudiniEngineUnity::HEU_CookedEventData::_ctor(HoudiniEngineUnity::HEU_HoudiniAsset asset, bool successful, System::Collections::Generic::List_1<UnityEngine::GameObject> outputObjects)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_CookedEventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_HoudiniAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::GameObject>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asset, successful, outputObjects);
}
