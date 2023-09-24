#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidSensorState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidSensorState_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer::UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer(float_t FixedElementField) noexcept : ::bs_hook::ValueTypeWrapper() {this->FixedElementField = FixedElementField;
}
constexpr void UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer::__set_FixedElementField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer::__get_FixedElementField() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
//  Writing Method size for method: UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState.WithData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState (UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::*)(::ArrayW<float_t>)>(&UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::WithData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x295443c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>::get(),
                            "WithData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState.get_format
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::*)()>(&UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::get_format)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x295450c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::operator UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const {
return UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "data", ty: "UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::AndroidSensorState(UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer data) noexcept : ::bs_hook::ValueTypeWrapper() {this->data = data;
}
 void UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::__set_kFormat(UnityEngine::InputSystem::Utilities::FourCC value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::Utilities::FourCC, "kFormat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>::get>(std::forward<UnityEngine::InputSystem::Utilities::FourCC>(value));
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::__get_kFormat()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::Utilities::FourCC, "kFormat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>::get>();
}
constexpr void UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::__set_data(UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer>(value));
}
constexpr UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::__get_data() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Android::LowLevel::UnityEngine__InputSystem__Android__LowLevel__AndroidSensorState___data_e__FixedBuffer, 0x0>(this->__instance);
}
 UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::WithData(::ArrayW<float_t> data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>::get(),
                            "WithData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, data);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::get_format()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
