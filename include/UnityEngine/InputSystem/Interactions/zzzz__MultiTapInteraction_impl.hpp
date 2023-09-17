#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/Interactions/zzzz__MultiTapInteraction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputInteraction_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputInteractionContext_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputInteraction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase  ::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase::None{0};
constexpr ::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase  ::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase::WaitingForNextRelease{1};
constexpr ::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase  ::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase::WaitingForNextPress{2};
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::MultiTapInteraction.get_tapTimeOrDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Interactions::MultiTapInteraction::*)()>(&::UnityEngine::InputSystem::Interactions::MultiTapInteraction::get_tapTimeOrDefault)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2979d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction>::get(),
                            "get_tapTimeOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::MultiTapInteraction.get_tapDelayOrDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Interactions::MultiTapInteraction::*)()>(&::UnityEngine::InputSystem::Interactions::MultiTapInteraction::get_tapDelayOrDefault)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2979dd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction>::get(),
                            "get_tapDelayOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::MultiTapInteraction.get_pressPointOrDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Interactions::MultiTapInteraction::*)()>(&::UnityEngine::InputSystem::Interactions::MultiTapInteraction::get_pressPointOrDefault)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2979e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction>::get(),
                            "get_pressPointOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::MultiTapInteraction.get_releasePointOrDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Interactions::MultiTapInteraction::*)()>(&::UnityEngine::InputSystem::Interactions::MultiTapInteraction::get_releasePointOrDefault)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2979ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction>::get(),
                            "get_releasePointOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::MultiTapInteraction.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Interactions::MultiTapInteraction::*)(ByRef<::UnityEngine::InputSystem::InputInteractionContext>)>(&::UnityEngine::InputSystem::Interactions::MultiTapInteraction::Process)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2979f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputInteractionContext>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::MultiTapInteraction.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Interactions::MultiTapInteraction::*)()>(&::UnityEngine::InputSystem::Interactions::MultiTapInteraction::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x297a1a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::MultiTapInteraction._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Interactions::MultiTapInteraction::*)()>(&::UnityEngine::InputSystem::Interactions::MultiTapInteraction::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x297a1b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::InputSystem::IInputInteraction_1<float_t>
constexpr  ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::operator ::UnityEngine::InputSystem::IInputInteraction_1<float_t>() const noexcept {
return ::UnityEngine::InputSystem::IInputInteraction_1<float_t>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::InputSystem::IInputInteraction
constexpr  ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::operator ::UnityEngine::InputSystem::IInputInteraction() const noexcept {
return ::UnityEngine::InputSystem::IInputInteraction(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::__set_tapTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::__get_tapTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::__set_tapDelay(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::__get_tapDelay() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::__set_tapCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::__get_tapCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::__set_pressPoint(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::__get_pressPoint() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::__set_m_CurrentTapPhase(::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase>(value));
}
constexpr ::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::__get_m_CurrentTapPhase() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::__set_m_CurrentTapCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::__get_m_CurrentTapCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::__set_m_CurrentTapStartTime(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::__get_m_CurrentTapStartTime() const {
return ::cordl_internals::getInstanceField<double_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::__set_m_LastTapReleaseTime(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::__get_m_LastTapReleaseTime() const {
return ::cordl_internals::getInstanceField<double_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::get_tapTimeOrDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction>::get(),
                            "get_tapTimeOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::get_tapDelayOrDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction>::get(),
                            "get_tapDelayOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::get_pressPointOrDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction>::get(),
                            "get_pressPointOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::get_releasePointOrDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction>::get(),
                            "get_releasePointOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext> context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputInteractionContext>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::MultiTapInteraction()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MultiTapInteraction>())) {}
 void ::UnityEngine::InputSystem::Interactions::MultiTapInteraction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::MultiTapInteraction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
