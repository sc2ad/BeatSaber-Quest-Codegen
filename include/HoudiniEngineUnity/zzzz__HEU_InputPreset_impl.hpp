#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_InputPreset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputAssetPreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputObjectPreset_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HEU_InputPreset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_InputPreset::*)()>(&HoudiniEngineUnity::HEU_InputPreset::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1fdae74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputPreset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_InputPreset::__set__inputObjectType(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType>(value));
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType HoudiniEngineUnity::HEU_InputPreset::__get__inputObjectType() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputNode__InputObjectType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputPreset::__set__inputObjectPresets(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectPreset> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectPreset>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectPreset>>(value));
}
constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectPreset> HoudiniEngineUnity::HEU_InputPreset::__get__inputObjectPresets() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputObjectPreset>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputPreset::__set__inputAssetName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_InputPreset::__get__inputAssetName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputPreset::__set__inputIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_InputPreset::__get__inputIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputPreset::__set__inputName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_InputPreset::__get__inputName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputPreset::__set__keepWorldTransform(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_InputPreset::__get__keepWorldTransform() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputPreset::__set__packGeometryBeforeMerging(bool value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_InputPreset::__get__packGeometryBeforeMerging() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_InputPreset::__set__inputAssetPresets(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputAssetPreset> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputAssetPreset>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputAssetPreset>>(value));
}
constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputAssetPreset> HoudiniEngineUnity::HEU_InputPreset::__get__inputAssetPresets() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_InputAssetPreset>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 HoudiniEngineUnity::HEU_InputPreset::HEU_InputPreset()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HEU_InputPreset>())) {}
 void HoudiniEngineUnity::HEU_InputPreset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_InputPreset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
