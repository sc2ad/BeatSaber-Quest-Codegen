#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutHapticEffect_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__NoteCutHapticEffect__Type::GlobalNamespace__NoteCutHapticEffect__Type(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__NoteCutHapticEffect__Type::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__NoteCutHapticEffect__Type::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__NoteCutHapticEffect__Type  GlobalNamespace::GlobalNamespace__NoteCutHapticEffect__Type::Normal{0};
constexpr GlobalNamespace::GlobalNamespace__NoteCutHapticEffect__Type  GlobalNamespace::GlobalNamespace__NoteCutHapticEffect__Type::ShortNormal{1};
constexpr GlobalNamespace::GlobalNamespace__NoteCutHapticEffect__Type  GlobalNamespace::GlobalNamespace__NoteCutHapticEffect__Type::ShortWeak{2};
constexpr GlobalNamespace::GlobalNamespace__NoteCutHapticEffect__Type  GlobalNamespace::GlobalNamespace__NoteCutHapticEffect__Type::Bomb{3};
constexpr GlobalNamespace::GlobalNamespace__NoteCutHapticEffect__Type  GlobalNamespace::GlobalNamespace__NoteCutHapticEffect__Type::BadCut{4};
//  Writing Method size for method: GlobalNamespace::NoteCutHapticEffect.HitNote
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutHapticEffect::*)(GlobalNamespace::SaberType, GlobalNamespace::GlobalNamespace__NoteCutHapticEffect__Type)>(&GlobalNamespace::NoteCutHapticEffect::HitNote)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2252700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutHapticEffect>::get(),
                            "HitNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SaberType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteCutHapticEffect__Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::NoteCutHapticEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutHapticEffect::*)()>(&GlobalNamespace::NoteCutHapticEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2252788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutHapticEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::NoteCutHapticEffect::__set__normalPreset(Libraries::HM::HMLib::VR::HapticPresetSO value)  {
::cordl_internals::setInstanceField<Libraries::HM::HMLib::VR::HapticPresetSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Libraries::HM::HMLib::VR::HapticPresetSO>(value));
}
constexpr Libraries::HM::HMLib::VR::HapticPresetSO GlobalNamespace::NoteCutHapticEffect::__get__normalPreset() const {
return ::cordl_internals::getInstanceField<Libraries::HM::HMLib::VR::HapticPresetSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__set__shortNormalPreset(Libraries::HM::HMLib::VR::HapticPresetSO value)  {
::cordl_internals::setInstanceField<Libraries::HM::HMLib::VR::HapticPresetSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Libraries::HM::HMLib::VR::HapticPresetSO>(value));
}
constexpr Libraries::HM::HMLib::VR::HapticPresetSO GlobalNamespace::NoteCutHapticEffect::__get__shortNormalPreset() const {
return ::cordl_internals::getInstanceField<Libraries::HM::HMLib::VR::HapticPresetSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__set__shortWeakPreset(Libraries::HM::HMLib::VR::HapticPresetSO value)  {
::cordl_internals::setInstanceField<Libraries::HM::HMLib::VR::HapticPresetSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Libraries::HM::HMLib::VR::HapticPresetSO>(value));
}
constexpr Libraries::HM::HMLib::VR::HapticPresetSO GlobalNamespace::NoteCutHapticEffect::__get__shortWeakPreset() const {
return ::cordl_internals::getInstanceField<Libraries::HM::HMLib::VR::HapticPresetSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__set__bombPreset(Libraries::HM::HMLib::VR::HapticPresetSO value)  {
::cordl_internals::setInstanceField<Libraries::HM::HMLib::VR::HapticPresetSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Libraries::HM::HMLib::VR::HapticPresetSO>(value));
}
constexpr Libraries::HM::HMLib::VR::HapticPresetSO GlobalNamespace::NoteCutHapticEffect::__get__bombPreset() const {
return ::cordl_internals::getInstanceField<Libraries::HM::HMLib::VR::HapticPresetSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__set__badCutPreset(Libraries::HM::HMLib::VR::HapticPresetSO value)  {
::cordl_internals::setInstanceField<Libraries::HM::HMLib::VR::HapticPresetSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Libraries::HM::HMLib::VR::HapticPresetSO>(value));
}
constexpr Libraries::HM::HMLib::VR::HapticPresetSO GlobalNamespace::NoteCutHapticEffect::__get__badCutPreset() const {
return ::cordl_internals::getInstanceField<Libraries::HM::HMLib::VR::HapticPresetSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__set__hapticFeedbackManager(GlobalNamespace::HapticFeedbackManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::HapticFeedbackManager, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::HapticFeedbackManager>(value));
}
constexpr GlobalNamespace::HapticFeedbackManager GlobalNamespace::NoteCutHapticEffect::__get__hapticFeedbackManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::HapticFeedbackManager, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::NoteCutHapticEffect::HitNote(GlobalNamespace::SaberType saberType, GlobalNamespace::GlobalNamespace__NoteCutHapticEffect__Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutHapticEffect>::get(),
                            "HitNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SaberType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__NoteCutHapticEffect__Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saberType, type);
}
// Ctor Parameters []
 GlobalNamespace::NoteCutHapticEffect::NoteCutHapticEffect()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<NoteCutHapticEffect>())) {}
 void GlobalNamespace::NoteCutHapticEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::NoteCutHapticEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
