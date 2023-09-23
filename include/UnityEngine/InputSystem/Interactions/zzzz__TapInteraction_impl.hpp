#pragma once
#include "UnityEngine/InputSystem/Interactions/zzzz__TapInteraction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputInteraction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputInteractionContext_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Interactions::TapInteraction.get_durationOrDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::Interactions::TapInteraction::*)()>(&UnityEngine::InputSystem::Interactions::TapInteraction::get_durationOrDefault)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x297a8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Interactions::TapInteraction>::get(),
                            "get_durationOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Interactions::TapInteraction.get_pressPointOrDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::Interactions::TapInteraction::*)()>(&UnityEngine::InputSystem::Interactions::TapInteraction::get_pressPointOrDefault)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x297a928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Interactions::TapInteraction>::get(),
                            "get_pressPointOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Interactions::TapInteraction.get_releasePointOrDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::Interactions::TapInteraction::*)()>(&UnityEngine::InputSystem::Interactions::TapInteraction::get_releasePointOrDefault)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x297a980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Interactions::TapInteraction>::get(),
                            "get_releasePointOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Interactions::TapInteraction.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Interactions::TapInteraction::*)(ByRef<UnityEngine::InputSystem::InputInteractionContext>)>(&UnityEngine::InputSystem::Interactions::TapInteraction::Process)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x297aa08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Interactions::TapInteraction>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputInteractionContext>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Interactions::TapInteraction.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Interactions::TapInteraction::*)()>(&UnityEngine::InputSystem::Interactions::TapInteraction::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x297ab68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Interactions::TapInteraction>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Interactions::TapInteraction._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Interactions::TapInteraction::*)()>(&UnityEngine::InputSystem::Interactions::TapInteraction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x297ab70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Interactions::TapInteraction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::InputSystem::IInputInteraction
constexpr  UnityEngine::InputSystem::Interactions::TapInteraction::operator UnityEngine::InputSystem::IInputInteraction() const noexcept {
return UnityEngine::InputSystem::IInputInteraction(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Interactions::TapInteraction::__set_duration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::Interactions::TapInteraction::__get_duration() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Interactions::TapInteraction::__set_pressPoint(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::Interactions::TapInteraction::__get_pressPoint() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Interactions::TapInteraction::__set_m_TapStartTime(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::InputSystem::Interactions::TapInteraction::__get_m_TapStartTime() const {
return ::cordl_internals::getInstanceField<double_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t UnityEngine::InputSystem::Interactions::TapInteraction::get_durationOrDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Interactions::TapInteraction>::get(),
                            "get_durationOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::InputSystem::Interactions::TapInteraction::get_pressPointOrDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Interactions::TapInteraction>::get(),
                            "get_pressPointOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::InputSystem::Interactions::TapInteraction::get_releasePointOrDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Interactions::TapInteraction>::get(),
                            "get_releasePointOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Interactions::TapInteraction::Process(ByRef<UnityEngine::InputSystem::InputInteractionContext> context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Interactions::TapInteraction>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputInteractionContext>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void UnityEngine::InputSystem::Interactions::TapInteraction::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Interactions::TapInteraction>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::InputSystem::Interactions::TapInteraction::TapInteraction()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TapInteraction>())) {}
 void UnityEngine::InputSystem::Interactions::TapInteraction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Interactions::TapInteraction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
