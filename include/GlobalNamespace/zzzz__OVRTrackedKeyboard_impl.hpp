#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTrackedKeyboard_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "GlobalNamespace/zzzz__OVRKeyboard_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "GlobalNamespace/zzzz__OVRTrackedKeyboard_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughLayer_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "GlobalNamespace/zzzz__OVRTextureQualityFiltering_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState::Uninitialized{0};
constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState::NoTrackableKeyboard{1};
constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState::Offline{2};
constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState::StartedNotTracked{3};
constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState::Stale{4};
constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState::Valid{5};
constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState::Error{6};
constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState::ErrorExtensionFailed{7};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation::PreferOpaque{0};
constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation::PreferKeyLabels{1};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::*)(::StringW, GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState, bool)>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2614a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "ActiveKeyboardName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "State", ty: "GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState", modifiers: "", def_value: Some("{}") }, CppParam { name: "TrackingTimeout", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent(::StringW ActiveKeyboardName, GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState State, bool TrackingTimeout) noexcept : ::bs_hook::ValueTypeWrapper() {this->ActiveKeyboardName = ActiveKeyboardName;
this->State = State;
this->TrackingTimeout = TrackingTimeout;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::__set_ActiveKeyboardName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::__get_ActiveKeyboardName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::__set_State(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState, 0x8>(this->__instance, std::forward<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::__get_State() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::__set_TrackingTimeout(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::__get_TrackingTimeout() const {
return ::cordl_internals::getInstanceField<bool, 0xc>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent::_ctor(::StringW keyboardModel, GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState state, bool timeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, keyboardModel, state, timeout);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent::*)(bool)>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2614a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "IsEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent(bool IsEnabled) noexcept : ::bs_hook::ValueTypeWrapper() {this->IsEnabled = IsEnabled;
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent::__set_IsEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent::__get_IsEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent::_ctor(bool isEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, isEnabled);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2614a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2614ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::MoveNext)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2614ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2614bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2614bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2614c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::operator System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::__set___4__this(GlobalNamespace::OVRTrackedKeyboard value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRTrackedKeyboard, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRTrackedKeyboard>(value));
}
constexpr GlobalNamespace::OVRTrackedKeyboard GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRTrackedKeyboard, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88 GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2614c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2614c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::MoveNext)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2614c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2614dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2614db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2614df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::operator System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__set___4__this(GlobalNamespace::OVRTrackedKeyboard value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRTrackedKeyboard, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRTrackedKeyboard>(value));
}
constexpr GlobalNamespace::OVRTrackedKeyboard GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRTrackedKeyboard, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89 GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2614dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2614e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::MoveNext)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x2614e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2615300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2615308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2615348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::operator System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__set___4__this(GlobalNamespace::OVRTrackedKeyboard value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRTrackedKeyboard, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRTrackedKeyboard>(value));
}
constexpr GlobalNamespace::OVRTrackedKeyboard GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRTrackedKeyboard, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__set__keyboardInfo_5__2(GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::__get__keyboardInfo_5__2() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95 GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2615350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2615378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::MoveNext)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x261537c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261561c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2615624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2615664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::operator System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__set___4__this(GlobalNamespace::OVRTrackedKeyboard value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRTrackedKeyboard, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRTrackedKeyboard>(value));
}
constexpr GlobalNamespace::OVRTrackedKeyboard GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRTrackedKeyboard, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96 GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x261566c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2615694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::MoveNext)> {
  constexpr static std::size_t size = 0x98c;
  constexpr static std::size_t addrs = 0x2615698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2616024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x261602c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261606c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::operator System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept {
return System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__set___2__current(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__get___2__current() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__set___4__this(GlobalNamespace::OVRTrackedKeyboard value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRTrackedKeyboard, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRTrackedKeyboard>(value));
}
constexpr GlobalNamespace::OVRTrackedKeyboard GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRTrackedKeyboard, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98 GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::New_ctor(int32_t __1__state)  {
GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98>(__1__state))};
return o;
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c::*)()>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26160d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c.__ctor_b__113_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c::*)(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent)>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c::__ctor_b__113_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26160e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c>::get(),
                            "<.ctor>b__113_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c.__ctor_b__113_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c::*)(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent)>(&GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c::__ctor_b__113_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26160e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c>::get(),
                            "<.ctor>b__113_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c::__set___9(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c>::get>(std::forward<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c>(value));
}
 GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c::__set___9__113_0(System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent> value)  {
::cordl_internals::setStaticField<System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>, "<>9__113_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c>::get>(std::forward<System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>>(value));
}
 System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent> GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c::__get___9__113_0()  {
return ::cordl_internals::getStaticField<System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>, "<>9__113_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c::__set___9__113_1(System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent> value)  {
::cordl_internals::setStaticField<System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>, "<>9__113_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c>::get>(std::forward<System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>>(value));
}
 System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent> GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c::__get___9__113_1()  {
return ::cordl_internals::getStaticField<System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>, "<>9__113_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c>::get>();
}
 GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c::New_ctor()  {
GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c::__ctor_b__113_0(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent _p0_)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c>::get(),
                            "<.ctor>b__113_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, _p0_);
}
 void GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c::__ctor_b__113_1(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent _p0_)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c>::get(),
                            "<.ctor>b__113_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, _p0_);
}
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.get_CurrentKeyboardAngleFromUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::get_CurrentKeyboardAngleFromUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2612c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_CurrentKeyboardAngleFromUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.set_CurrentKeyboardAngleFromUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)(float_t)>(&GlobalNamespace::OVRTrackedKeyboard::set_CurrentKeyboardAngleFromUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2612c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_CurrentKeyboardAngleFromUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.get_TrackingState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::get_TrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2612ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_TrackingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.set_TrackingState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState)>(&GlobalNamespace::OVRTrackedKeyboard::set_TrackingState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2612ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_TrackingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.get_ActiveKeyboardInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::get_ActiveKeyboardInfo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2612cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_ActiveKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.set_ActiveKeyboardInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)(GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo)>(&GlobalNamespace::OVRTrackedKeyboard::set_ActiveKeyboardInfo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2612cc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_ActiveKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.get_SystemKeyboardInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::get_SystemKeyboardInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2612cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_SystemKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.set_SystemKeyboardInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)(GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo)>(&GlobalNamespace::OVRTrackedKeyboard::set_SystemKeyboardInfo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2612cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_SystemKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.get_Presentation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::get_Presentation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2612d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_Presentation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.set_Presentation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation)>(&GlobalNamespace::OVRTrackedKeyboard::set_Presentation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2612d10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_Presentation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.get_TrackingEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::get_TrackingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2612f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_TrackingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.set_TrackingEnabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&GlobalNamespace::OVRTrackedKeyboard::set_TrackingEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2612fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_TrackingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.get_ConnectionRequired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::get_ConnectionRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2612fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_ConnectionRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.set_ConnectionRequired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&GlobalNamespace::OVRTrackedKeyboard::set_ConnectionRequired)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2612fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_ConnectionRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.get_ShowUntracked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::get_ShowUntracked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2612fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_ShowUntracked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.set_ShowUntracked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&GlobalNamespace::OVRTrackedKeyboard::set_ShowUntracked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2612fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_ShowUntracked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.get_RemoteKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::get_RemoteKeyboard)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2612fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_RemoteKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.set_RemoteKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&GlobalNamespace::OVRTrackedKeyboard::set_RemoteKeyboard)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2612fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_RemoteKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.get_KeyboardQueryFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::get_KeyboardQueryFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2613000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_KeyboardQueryFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.set_KeyboardQueryFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)(GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags)>(&GlobalNamespace::OVRTrackedKeyboard::set_KeyboardQueryFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2613008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_KeyboardQueryFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.get_PassthroughOverlay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVROverlay (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::get_PassthroughOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2613010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_PassthroughOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.set_PassthroughOverlay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)(GlobalNamespace::OVROverlay)>(&GlobalNamespace::OVRTrackedKeyboard::set_PassthroughOverlay)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2613018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_PassthroughOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVROverlay>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::Start)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x261301c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.InitializeHandPresenceData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::InitializeHandPresenceData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2613084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "InitializeHandPresenceData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.RegisterPassthroughMeshToSDK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::RegisterPassthroughMeshToSDK)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x26130ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "RegisterPassthroughMeshToSDK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.GetDistanceToKeyboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::OVRTrackedKeyboard::*)(UnityEngine::Vector3)>(&GlobalNamespace::OVRTrackedKeyboard::GetDistanceToKeyboard)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2613184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "GetDistanceToKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.LaunchLocalKeyboardSelectionDialog
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::LaunchLocalKeyboardSelectionDialog)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2613310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "LaunchLocalKeyboardSelectionDialog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.LaunchRemoteKeyboardSelectionDialog
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::LaunchRemoteKeyboardSelectionDialog)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26136dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "LaunchRemoteKeyboardSelectionDialog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.KeyboardTrackerIsRunning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::KeyboardTrackerIsRunning)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x261371c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "KeyboardTrackerIsRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.UpdateTrackingStateCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::UpdateTrackingStateCoroutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2613730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "UpdateTrackingStateCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.StartKeyboardTrackingCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::StartKeyboardTrackingCoroutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2613798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "StartKeyboardTrackingCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.StopKeyboardTrackingInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::StopKeyboardTrackingInternal)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2613800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "StopKeyboardTrackingInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.UpdateKeyboardPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::UpdateKeyboardPose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2613b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "UpdateKeyboardPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.UpdateSkippedPoseTimer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::UpdateSkippedPoseTimer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2613b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "UpdateSkippedPoseTimer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.LoadKeyboardMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::LoadKeyboardMesh)> {
  constexpr static std::size_t size = 0x648;
  constexpr static std::size_t addrs = 0x2613bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "LoadKeyboardMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.UpdateTextureQuality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::UpdateTextureQuality)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x26144b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "UpdateTextureQuality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.UpdatePresentation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&GlobalNamespace::OVRTrackedKeyboard::UpdatePresentation)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2612da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "UpdatePresentation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.LoadRuntimeKeyboardMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::LoadRuntimeKeyboardMesh)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2614204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "LoadRuntimeKeyboardMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.UpdateKeyboardVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::UpdateKeyboardVisibility)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x26145e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "UpdateKeyboardVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.SetKeyboardState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState)>(&GlobalNamespace::OVRTrackedKeyboard::SetKeyboardState)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x26139f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "SetKeyboardState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.GetKeyboardVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::GetKeyboardVisibility)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2612d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "GetKeyboardVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.InitializeKeyboardInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::InitializeKeyboardInfo)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2613ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "InitializeKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.LaunchOverlayIntent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)(::StringW)>(&GlobalNamespace::OVRTrackedKeyboard::LaunchOverlayIntent)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x2613350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "LaunchOverlayIntent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::Dispose)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x261474c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard.DispatchVisibilityEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)(bool)>(&GlobalNamespace::OVRTrackedKeyboard::DispatchVisibilityEvent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x26146fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "DispatchVisibilityEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRTrackedKeyboard._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTrackedKeyboard::*)()>(&GlobalNamespace::OVRTrackedKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2614860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::OVRTrackedKeyboard::__set_underlayScaleMultX_(float_t value)  {
::cordl_internals::setStaticField<float_t, "underlayScaleMultX_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get>(std::forward<float_t>(value));
}
 float_t GlobalNamespace::OVRTrackedKeyboard::__get_underlayScaleMultX_()  {
return ::cordl_internals::getStaticField<float_t, "underlayScaleMultX_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get>();
}
 void GlobalNamespace::OVRTrackedKeyboard::__set_underlayScaleConstY_(float_t value)  {
::cordl_internals::setStaticField<float_t, "underlayScaleConstY_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get>(std::forward<float_t>(value));
}
 float_t GlobalNamespace::OVRTrackedKeyboard::__get_underlayScaleConstY_()  {
return ::cordl_internals::getStaticField<float_t, "underlayScaleConstY_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get>();
}
 void GlobalNamespace::OVRTrackedKeyboard::__set_underlayScaleMultZ_(float_t value)  {
::cordl_internals::setStaticField<float_t, "underlayScaleMultZ_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get>(std::forward<float_t>(value));
}
 float_t GlobalNamespace::OVRTrackedKeyboard::__get_underlayScaleMultZ_()  {
return ::cordl_internals::getStaticField<float_t, "underlayScaleMultZ_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get>();
}
 void GlobalNamespace::OVRTrackedKeyboard::__set_underlayOffset_(UnityEngine::Vector3 value)  {
::cordl_internals::setStaticField<UnityEngine::Vector3, "underlayOffset_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get>(std::forward<UnityEngine::Vector3>(value));
}
 UnityEngine::Vector3 GlobalNamespace::OVRTrackedKeyboard::__get_underlayOffset_()  {
return ::cordl_internals::getStaticField<UnityEngine::Vector3, "underlayOffset_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get>();
}
 void GlobalNamespace::OVRTrackedKeyboard::__set_boundingBoxAboveKeyboardY_(float_t value)  {
::cordl_internals::setStaticField<float_t, "boundingBoxAboveKeyboardY_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get>(std::forward<float_t>(value));
}
 float_t GlobalNamespace::OVRTrackedKeyboard::__get_boundingBoxAboveKeyboardY_()  {
return ::cordl_internals::getStaticField<float_t, "boundingBoxAboveKeyboardY_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get>();
}
 void GlobalNamespace::OVRTrackedKeyboard::__set_initialHorizontalDistanceKeyboard_(float_t value)  {
::cordl_internals::setStaticField<float_t, "initialHorizontalDistanceKeyboard_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get>(std::forward<float_t>(value));
}
 float_t GlobalNamespace::OVRTrackedKeyboard::__get_initialHorizontalDistanceKeyboard_()  {
return ::cordl_internals::getStaticField<float_t, "initialHorizontalDistanceKeyboard_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get>();
}
 void GlobalNamespace::OVRTrackedKeyboard::__set_initialVerticalDistanceKeyboard_(float_t value)  {
::cordl_internals::setStaticField<float_t, "initialVerticalDistanceKeyboard_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get>(std::forward<float_t>(value));
}
 float_t GlobalNamespace::OVRTrackedKeyboard::__get_initialVerticalDistanceKeyboard_()  {
return ::cordl_internals::getStaticField<float_t, "initialVerticalDistanceKeyboard_", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get>();
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set__CurrentKeyboardAngleFromUp_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRTrackedKeyboard::__get__CurrentKeyboardAngleFromUp_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set__TrackingState_k__BackingField(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState GlobalNamespace::OVRTrackedKeyboard::__get__TrackingState_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set__ActiveKeyboardInfo_k__BackingField(GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo GlobalNamespace::OVRTrackedKeyboard::__get__ActiveKeyboardInfo_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set__SystemKeyboardInfo_k__BackingField(GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo GlobalNamespace::OVRTrackedKeyboard::__get__SystemKeyboardInfo_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_trackingEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRTrackedKeyboard::__get_trackingEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_connectionRequired(bool value)  {
::cordl_internals::setInstanceField<bool, 0x71>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRTrackedKeyboard::__get_connectionRequired() const {
return ::cordl_internals::getInstanceField<bool, 0x71>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_showUntracked(bool value)  {
::cordl_internals::setInstanceField<bool, 0x72>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRTrackedKeyboard::__get_showUntracked() const {
return ::cordl_internals::getInstanceField<bool, 0x72>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_keyboardQueryFlags(GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags GlobalNamespace::OVRTrackedKeyboard::__get_keyboardQueryFlags() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_presentation(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation GlobalNamespace::OVRTrackedKeyboard::__get_presentation() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_textureFiltering(GlobalNamespace::OVRTextureQualityFiltering value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRTextureQualityFiltering, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRTextureQualityFiltering>(value));
}
constexpr GlobalNamespace::OVRTextureQualityFiltering GlobalNamespace::OVRTrackedKeyboard::__get_textureFiltering() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRTextureQualityFiltering, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_mipmapBias(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRTrackedKeyboard::__get_mipmapBias() const {
return ::cordl_internals::getInstanceField<float_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_PassthroughBorderMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRTrackedKeyboard::__get_PassthroughBorderMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_keyboardModelShader(UnityEngine::Shader value)  {
::cordl_internals::setInstanceField<UnityEngine::Shader, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Shader>(value));
}
constexpr UnityEngine::Shader GlobalNamespace::OVRTrackedKeyboard::__get_keyboardModelShader() const {
return ::cordl_internals::getInstanceField<UnityEngine::Shader, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_keyboardModelAlphaBlendShader(UnityEngine::Shader value)  {
::cordl_internals::setInstanceField<UnityEngine::Shader, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Shader>(value));
}
constexpr UnityEngine::Shader GlobalNamespace::OVRTrackedKeyboard::__get_keyboardModelAlphaBlendShader() const {
return ::cordl_internals::getInstanceField<UnityEngine::Shader, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_currentKeyboardPresentationStyles(GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles>(value));
}
constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles GlobalNamespace::OVRTrackedKeyboard::__get_currentKeyboardPresentationStyles() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_projectedPassthroughOpaque_(GlobalNamespace::OVROverlay value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVROverlay, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVROverlay>(value));
}
constexpr GlobalNamespace::OVROverlay GlobalNamespace::OVRTrackedKeyboard::__get_projectedPassthroughOpaque_() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVROverlay, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_activeKeyboardRenderers_(::ArrayW<UnityEngine::MeshRenderer> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::MeshRenderer>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::MeshRenderer>>(value));
}
constexpr ::ArrayW<UnityEngine::MeshRenderer> GlobalNamespace::OVRTrackedKeyboard::__get_activeKeyboardRenderers_() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::MeshRenderer>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_activeKeyboardMesh_(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::OVRTrackedKeyboard::__get_activeKeyboardMesh_() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_keyboardMeshNodes_(::ArrayW<UnityEngine::GameObject> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::GameObject>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::GameObject>>(value));
}
constexpr ::ArrayW<UnityEngine::GameObject> GlobalNamespace::OVRTrackedKeyboard::__get_keyboardMeshNodes_() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::GameObject>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_activeKeyboardMeshRenderer_(UnityEngine::MeshRenderer value)  {
::cordl_internals::setInstanceField<UnityEngine::MeshRenderer, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::MeshRenderer>(value));
}
constexpr UnityEngine::MeshRenderer GlobalNamespace::OVRTrackedKeyboard::__get_activeKeyboardMeshRenderer_() const {
return ::cordl_internals::getInstanceField<UnityEngine::MeshRenderer, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_passthroughQuad_(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::OVRTrackedKeyboard::__get_passthroughQuad_() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_opaqueShader_(UnityEngine::Shader value)  {
::cordl_internals::setInstanceField<UnityEngine::Shader, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Shader>(value));
}
constexpr UnityEngine::Shader GlobalNamespace::OVRTrackedKeyboard::__get_opaqueShader_() const {
return ::cordl_internals::getInstanceField<UnityEngine::Shader, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_dynamicQualityTexture_(UnityEngine::Texture2D value)  {
::cordl_internals::setInstanceField<UnityEngine::Texture2D, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Texture2D>(value));
}
constexpr UnityEngine::Texture2D GlobalNamespace::OVRTrackedKeyboard::__get_dynamicQualityTexture_() const {
return ::cordl_internals::getInstanceField<UnityEngine::Texture2D, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_untrackedPosition_(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 GlobalNamespace::OVRTrackedKeyboard::__get_untrackedPosition_() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_KeyLabelModeShader(UnityEngine::Shader value)  {
::cordl_internals::setInstanceField<UnityEngine::Shader, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Shader>(value));
}
constexpr UnityEngine::Shader GlobalNamespace::OVRTrackedKeyboard::__get_KeyLabelModeShader() const {
return ::cordl_internals::getInstanceField<UnityEngine::Shader, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_PassthroughShader(UnityEngine::Shader value)  {
::cordl_internals::setInstanceField<UnityEngine::Shader, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Shader>(value));
}
constexpr UnityEngine::Shader GlobalNamespace::OVRTrackedKeyboard::__get_PassthroughShader() const {
return ::cordl_internals::getInstanceField<UnityEngine::Shader, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_projectedPassthroughRoot(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::OVRTrackedKeyboard::__get_projectedPassthroughRoot() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_projectedPassthroughMesh(UnityEngine::MeshFilter value)  {
::cordl_internals::setInstanceField<UnityEngine::MeshFilter, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::MeshFilter>(value));
}
constexpr UnityEngine::MeshFilter GlobalNamespace::OVRTrackedKeyboard::__get_projectedPassthroughMesh() const {
return ::cordl_internals::getInstanceField<UnityEngine::MeshFilter, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_ProjectedPassthroughKeyLabel(GlobalNamespace::OVRPassthroughLayer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRPassthroughLayer, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRPassthroughLayer>(value));
}
constexpr GlobalNamespace::OVRPassthroughLayer GlobalNamespace::OVRTrackedKeyboard::__get_ProjectedPassthroughKeyLabel() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRPassthroughLayer, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_TrackedKeyboardActiveChanged(System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>>(value));
}
constexpr System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent> GlobalNamespace::OVRTrackedKeyboard::__get_TrackedKeyboardActiveChanged() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_TrackedKeyboardVisibilityChanged(System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent> value)  {
::cordl_internals::setInstanceField<System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>>(value));
}
constexpr System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent> GlobalNamespace::OVRTrackedKeyboard::__get_TrackedKeyboardVisibilityChanged() const {
return ::cordl_internals::getInstanceField<System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_ActiveKeyboardTransform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::OVRTrackedKeyboard::__get_ActiveKeyboardTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_HandsOverKeyboard(bool value)  {
::cordl_internals::setInstanceField<bool, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRTrackedKeyboard::__get_HandsOverKeyboard() const {
return ::cordl_internals::getInstanceField<bool, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_cameraRig_(GlobalNamespace::OVRCameraRig value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRCameraRig, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::OVRCameraRig>(value));
}
constexpr GlobalNamespace::OVRCameraRig GlobalNamespace::OVRTrackedKeyboard::__get_cameraRig_() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRCameraRig, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_updateKeyboardRoutine_(UnityEngine::Coroutine value)  {
::cordl_internals::setInstanceField<UnityEngine::Coroutine, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Coroutine>(value));
}
constexpr UnityEngine::Coroutine GlobalNamespace::OVRTrackedKeyboard::__get_updateKeyboardRoutine_() const {
return ::cordl_internals::getInstanceField<UnityEngine::Coroutine, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_keyboardBoundingBox_(UnityEngine::BoxCollider value)  {
::cordl_internals::setInstanceField<UnityEngine::BoxCollider, 0x148>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::BoxCollider>(value));
}
constexpr UnityEngine::BoxCollider GlobalNamespace::OVRTrackedKeyboard::__get_keyboardBoundingBox_() const {
return ::cordl_internals::getInstanceField<UnityEngine::BoxCollider, 0x148>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_staleTimeoutCounter_(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x150>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRTrackedKeyboard::__get_staleTimeoutCounter_() const {
return ::cordl_internals::getInstanceField<float_t, 0x150>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_reacquisitionTimer_(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x154>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRTrackedKeyboard::__get_reacquisitionTimer_() const {
return ::cordl_internals::getInstanceField<float_t, 0x154>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_sendFilteredPoseEventTimer_(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x158>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRTrackedKeyboard::__get_sendFilteredPoseEventTimer_() const {
return ::cordl_internals::getInstanceField<float_t, 0x158>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_skippedPoseCount_(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x15c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVRTrackedKeyboard::__get_skippedPoseCount_() const {
return ::cordl_internals::getInstanceField<int32_t, 0x15c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_EWAPosition(System::Nullable_1<UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<UnityEngine::Vector3>, 0x160>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Nullable_1<UnityEngine::Vector3>>(value));
}
constexpr System::Nullable_1<UnityEngine::Vector3> GlobalNamespace::OVRTrackedKeyboard::__get_EWAPosition() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<UnityEngine::Vector3>, 0x160>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_EWARotation(System::Nullable_1<UnityEngine::Quaternion> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<UnityEngine::Quaternion>, 0x170>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Nullable_1<UnityEngine::Quaternion>>(value));
}
constexpr System::Nullable_1<UnityEngine::Quaternion> GlobalNamespace::OVRTrackedKeyboard::__get_EWARotation() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<UnityEngine::Quaternion>, 0x170>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_HAND_HEIGHT_TUNING(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x184>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::OVRTrackedKeyboard::__get_HAND_HEIGHT_TUNING() const {
return ::cordl_internals::getInstanceField<float_t, 0x184>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::OVRTrackedKeyboard::__set_UseHeuristicRollback(bool value)  {
::cordl_internals::setInstanceField<bool, 0x188>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::OVRTrackedKeyboard::__get_UseHeuristicRollback() const {
return ::cordl_internals::getInstanceField<bool, 0x188>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t GlobalNamespace::OVRTrackedKeyboard::get_CurrentKeyboardAngleFromUp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_CurrentKeyboardAngleFromUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::set_CurrentKeyboardAngleFromUp(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_CurrentKeyboardAngleFromUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState GlobalNamespace::OVRTrackedKeyboard::get_TrackingState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_TrackingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::set_TrackingState(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_TrackingState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo GlobalNamespace::OVRTrackedKeyboard::get_ActiveKeyboardInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_ActiveKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::set_ActiveKeyboardInfo(GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_ActiveKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo GlobalNamespace::OVRTrackedKeyboard::get_SystemKeyboardInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_SystemKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::set_SystemKeyboardInfo(GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_SystemKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation GlobalNamespace::OVRTrackedKeyboard::get_Presentation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_Presentation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::set_Presentation(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_Presentation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::OVRTrackedKeyboard::get_TrackingEnabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_TrackingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::set_TrackingEnabled(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_TrackingEnabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::OVRTrackedKeyboard::get_ConnectionRequired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_ConnectionRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::set_ConnectionRequired(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_ConnectionRequired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::OVRTrackedKeyboard::get_ShowUntracked()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_ShowUntracked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::set_ShowUntracked(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_ShowUntracked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool GlobalNamespace::OVRTrackedKeyboard::get_RemoteKeyboard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_RemoteKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::set_RemoteKeyboard(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_RemoteKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags GlobalNamespace::OVRTrackedKeyboard::get_KeyboardQueryFlags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_KeyboardQueryFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::set_KeyboardQueryFlags(GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_KeyboardQueryFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::OVROverlay GlobalNamespace::OVRTrackedKeyboard::get_PassthroughOverlay()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "get_PassthroughOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::OVROverlay, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::set_PassthroughOverlay(GlobalNamespace::OVROverlay value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "set_PassthroughOverlay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVROverlay>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::IEnumerator GlobalNamespace::OVRTrackedKeyboard::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::OVRTrackedKeyboard::InitializeHandPresenceData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "InitializeHandPresenceData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::RegisterPassthroughMeshToSDK()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "RegisterPassthroughMeshToSDK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::OVRTrackedKeyboard::GetDistanceToKeyboard(UnityEngine::Vector3 point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "GetDistanceToKeyboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, point);
}
 void GlobalNamespace::OVRTrackedKeyboard::LaunchLocalKeyboardSelectionDialog()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "LaunchLocalKeyboardSelectionDialog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::LaunchRemoteKeyboardSelectionDialog()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "LaunchRemoteKeyboardSelectionDialog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::OVRTrackedKeyboard::KeyboardTrackerIsRunning()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "KeyboardTrackerIsRunning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::OVRTrackedKeyboard::UpdateTrackingStateCoroutine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "UpdateTrackingStateCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::OVRTrackedKeyboard::StartKeyboardTrackingCoroutine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "StartKeyboardTrackingCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::StopKeyboardTrackingInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "StopKeyboardTrackingInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::OVRTrackedKeyboard::UpdateKeyboardPose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "UpdateKeyboardPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::UpdateSkippedPoseTimer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "UpdateSkippedPoseTimer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::LoadKeyboardMesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "LoadKeyboardMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::UpdateTextureQuality()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "UpdateTextureQuality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::UpdatePresentation(bool isVisible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "UpdatePresentation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isVisible);
}
 UnityEngine::GameObject GlobalNamespace::OVRTrackedKeyboard::LoadRuntimeKeyboardMesh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "LoadRuntimeKeyboardMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::UpdateKeyboardVisibility()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "UpdateKeyboardVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::SetKeyboardState(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "SetKeyboardState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state);
}
 bool GlobalNamespace::OVRTrackedKeyboard::GetKeyboardVisibility()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "GetKeyboardVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::InitializeKeyboardInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "InitializeKeyboardInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::LaunchOverlayIntent(::StringW dataUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "LaunchOverlayIntent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dataUri);
}
 void GlobalNamespace::OVRTrackedKeyboard::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::OVRTrackedKeyboard::DispatchVisibilityEvent(bool timeOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            "DispatchVisibilityEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timeOut);
}
 GlobalNamespace::OVRTrackedKeyboard GlobalNamespace::OVRTrackedKeyboard::New_ctor()  {
GlobalNamespace::OVRTrackedKeyboard o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::OVRTrackedKeyboard>())};
return o;
}
 void GlobalNamespace::OVRTrackedKeyboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRTrackedKeyboard>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
