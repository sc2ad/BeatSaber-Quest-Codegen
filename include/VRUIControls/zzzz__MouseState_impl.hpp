#pragma once
namespace {
#include "VRUIControls/zzzz__MouseState_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "VRUIControls/zzzz__ButtonState_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
//  Writing Method size for method: ::VRUIControls::MouseState.AnyPressesThisFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VRUIControls::MouseState::*)()>(&::VRUIControls::MouseState::AnyPressesThisFrame)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2d3ace0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseState>::get(),
                            "AnyPressesThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::MouseState.AnyReleasesThisFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VRUIControls::MouseState::*)()>(&::VRUIControls::MouseState::AnyReleasesThisFrame)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2d3ad84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseState>::get(),
                            "AnyReleasesThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::MouseState.GetButtonState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VRUIControls::ButtonState (::VRUIControls::MouseState::*)(::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__InputButton)>(&::VRUIControls::MouseState::GetButtonState)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2d3ae2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseState>::get(),
                            "GetButtonState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__InputButton>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::MouseState.SetButtonState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::MouseState::*)(::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__InputButton, ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__FramePressState, ::UnityEngine::EventSystems::PointerEventData)>(&::VRUIControls::MouseState::SetButtonState)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2d3afc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseState>::get(),
                            "SetButtonState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__InputButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__FramePressState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::MouseState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::MouseState::*)()>(&::VRUIControls::MouseState::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d3b000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::VRUIControls::MouseState::__set__trackedButtons(::System::Collections::Generic::List_1<::VRUIControls::ButtonState> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::VRUIControls::ButtonState>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::VRUIControls::ButtonState>>(value));
}
constexpr ::System::Collections::Generic::List_1<::VRUIControls::ButtonState> ::VRUIControls::MouseState::__get__trackedButtons() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::VRUIControls::ButtonState>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool ::VRUIControls::MouseState::AnyPressesThisFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseState>::get(),
                            "AnyPressesThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::VRUIControls::MouseState::AnyReleasesThisFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseState>::get(),
                            "AnyReleasesThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::VRUIControls::ButtonState ::VRUIControls::MouseState::GetButtonState(::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__InputButton button)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseState>::get(),
                            "GetButtonState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__InputButton>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::VRUIControls::ButtonState, false>(const_cast<void*>(instance), ___internal_method, button);
}
 void ::VRUIControls::MouseState::SetButtonState(::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__InputButton button, ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__FramePressState stateForMouseButton, ::UnityEngine::EventSystems::PointerEventData data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseState>::get(),
                            "SetButtonState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__InputButton>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__FramePressState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, button, stateForMouseButton, data);
}
// Ctor Parameters []
 ::VRUIControls::MouseState::MouseState()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MouseState>())) {}
 void ::VRUIControls::MouseState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
