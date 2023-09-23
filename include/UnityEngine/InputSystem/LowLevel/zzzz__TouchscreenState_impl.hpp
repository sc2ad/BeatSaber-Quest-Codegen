#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchscreenState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer::UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer(uint8_t FixedElementField) noexcept : ::bs_hook::ValueTypeWrapper() {this->FixedElementField = FixedElementField;
}
constexpr void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer::__set_FixedElementField(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer::__get_FixedElementField() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer::UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer(uint8_t FixedElementField) noexcept : ::bs_hook::ValueTypeWrapper() {this->FixedElementField = FixedElementField;
}
constexpr void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer::__set_FixedElementField(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer::__get_FixedElementField() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::TouchscreenState.get_Format
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (*)()>(&UnityEngine::InputSystem::LowLevel::TouchscreenState::get_Format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x29567f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                            "get_Format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::TouchscreenState.get_primaryTouch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (UnityEngine::InputSystem::LowLevel::TouchscreenState::*)()>(&UnityEngine::InputSystem::LowLevel::TouchscreenState::get_primaryTouch)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2956824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                            "get_primaryTouch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::TouchscreenState.get_touches
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (UnityEngine::InputSystem::LowLevel::TouchscreenState::*)()>(&UnityEngine::InputSystem::LowLevel::TouchscreenState::get_touches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2956828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                            "get_touches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::TouchscreenState.get_format
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::LowLevel::TouchscreenState::*)()>(&UnityEngine::InputSystem::LowLevel::TouchscreenState::get_format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2956830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo
constexpr  UnityEngine::InputSystem::LowLevel::TouchscreenState::operator UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo() const {
return UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "primaryTouchData", ty: "UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "touchData", ty: "UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::LowLevel::TouchscreenState::TouchscreenState(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer primaryTouchData, UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer touchData) noexcept : ::bs_hook::ValueTypeWrapper() {this->primaryTouchData = primaryTouchData;
this->touchData = touchData;
}
constexpr void UnityEngine::InputSystem::LowLevel::TouchscreenState::__set_primaryTouchData(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer UnityEngine::InputSystem::LowLevel::TouchscreenState::__get_primaryTouchData() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__TouchscreenState___primaryTouchData_e__FixedBuffer, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::TouchscreenState::__set_touchData(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer, 0x38>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer UnityEngine::InputSystem::LowLevel::TouchscreenState::__get_touchData() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__TouchscreenState___touchData_e__FixedBuffer, 0x38>(this->__instance);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::TouchscreenState::get_Format()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                            "get_Format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
 void* UnityEngine::InputSystem::LowLevel::TouchscreenState::get_primaryTouch()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                            "get_primaryTouch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void* UnityEngine::InputSystem::LowLevel::TouchscreenState::get_touches()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                            "get_touches",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::TouchscreenState::get_format()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::TouchscreenState>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
