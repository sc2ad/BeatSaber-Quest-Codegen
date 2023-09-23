#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: Libraries::HM::HMLib::VR::HapticPresetSO.CopyFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Libraries::HM::HMLib::VR::HapticPresetSO::*)(Libraries::HM::HMLib::VR::HapticPresetSO)>(&Libraries::HM::HMLib::VR::HapticPresetSO::CopyFrom)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1f8f268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Libraries::HM::HMLib::VR::HapticPresetSO>::get(),
                            "CopyFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Libraries::HM::HMLib::VR::HapticPresetSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Libraries::HM::HMLib::VR::HapticPresetSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Libraries::HM::HMLib::VR::HapticPresetSO::*)()>(&Libraries::HM::HMLib::VR::HapticPresetSO::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1f8f2a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Libraries::HM::HMLib::VR::HapticPresetSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Libraries::HM::HMLib::VR::HapticPresetSO::__set__duration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t Libraries::HM::HMLib::VR::HapticPresetSO::__get__duration() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Libraries::HM::HMLib::VR::HapticPresetSO::__set__strength(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t Libraries::HM::HMLib::VR::HapticPresetSO::__get__strength() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Libraries::HM::HMLib::VR::HapticPresetSO::__set__frequency(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t Libraries::HM::HMLib::VR::HapticPresetSO::__get__frequency() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Libraries::HM::HMLib::VR::HapticPresetSO::__set__continuous(bool value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Libraries::HM::HMLib::VR::HapticPresetSO::__get__continuous() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Libraries::HM::HMLib::VR::HapticPresetSO::__set__useAdvancedHapticsOnSupportedPlatforms(bool value)  {
::cordl_internals::setInstanceField<bool, 0x25>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Libraries::HM::HMLib::VR::HapticPresetSO::__get__useAdvancedHapticsOnSupportedPlatforms() const {
return ::cordl_internals::getInstanceField<bool, 0x25>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Libraries::HM::HMLib::VR::HapticPresetSO::__set__ps5HapticsClip(UnityEngine::AudioClip value)  {
::cordl_internals::setInstanceField<UnityEngine::AudioClip, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AudioClip>(value));
}
constexpr UnityEngine::AudioClip Libraries::HM::HMLib::VR::HapticPresetSO::__get__ps5HapticsClip() const {
return ::cordl_internals::getInstanceField<UnityEngine::AudioClip, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Libraries::HM::HMLib::VR::HapticPresetSO::CopyFrom(Libraries::HM::HMLib::VR::HapticPresetSO hapticPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Libraries::HM::HMLib::VR::HapticPresetSO>::get(),
                            "CopyFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Libraries::HM::HMLib::VR::HapticPresetSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hapticPreset);
}
// Ctor Parameters []
 Libraries::HM::HMLib::VR::HapticPresetSO::HapticPresetSO()  : UnityEngine::ScriptableObject(THROW_UNLESS(::il2cpp_utils::New<HapticPresetSO>())) {}
 void Libraries::HM::HMLib::VR::HapticPresetSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Libraries::HM::HMLib::VR::HapticPresetSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
