#pragma once
namespace {
#include "UnityEngine/InputSystem/Interactions/zzzz__SlowTapInteraction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputInteraction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputInteractionContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::SlowTapInteraction.get_durationOrDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Interactions::SlowTapInteraction::*)()>(&::UnityEngine::InputSystem::Interactions::SlowTapInteraction::get_durationOrDefault)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x297a678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::SlowTapInteraction>::get(),
                            "get_durationOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::SlowTapInteraction.get_pressPointOrDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Interactions::SlowTapInteraction::*)()>(&::UnityEngine::InputSystem::Interactions::SlowTapInteraction::get_pressPointOrDefault)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x297a6e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::SlowTapInteraction>::get(),
                            "get_pressPointOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::SlowTapInteraction.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Interactions::SlowTapInteraction::*)(ByRef<::UnityEngine::InputSystem::InputInteractionContext>)>(&::UnityEngine::InputSystem::Interactions::SlowTapInteraction::Process)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x297a740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::SlowTapInteraction>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputInteractionContext>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::SlowTapInteraction.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Interactions::SlowTapInteraction::*)()>(&::UnityEngine::InputSystem::Interactions::SlowTapInteraction::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x297a8a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::SlowTapInteraction>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Interactions::SlowTapInteraction._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Interactions::SlowTapInteraction::*)()>(&::UnityEngine::InputSystem::Interactions::SlowTapInteraction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x297a8b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::SlowTapInteraction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::InputSystem::IInputInteraction
constexpr  ::UnityEngine::InputSystem::Interactions::SlowTapInteraction::operator ::UnityEngine::InputSystem::IInputInteraction() const noexcept {
return ::UnityEngine::InputSystem::IInputInteraction(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Interactions::SlowTapInteraction::__set_duration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::InputSystem::Interactions::SlowTapInteraction::__get_duration() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Interactions::SlowTapInteraction::__set_pressPoint(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::InputSystem::Interactions::SlowTapInteraction::__get_pressPoint() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::Interactions::SlowTapInteraction::__set_m_SlowTapStartTime(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t ::UnityEngine::InputSystem::Interactions::SlowTapInteraction::__get_m_SlowTapStartTime() const {
return ::cordl_internals::getInstanceField<double_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t ::UnityEngine::InputSystem::Interactions::SlowTapInteraction::get_durationOrDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::SlowTapInteraction>::get(),
                            "get_durationOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::UnityEngine::InputSystem::Interactions::SlowTapInteraction::get_pressPointOrDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::SlowTapInteraction>::get(),
                            "get_pressPointOrDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::Interactions::SlowTapInteraction::Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext> context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::SlowTapInteraction>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputInteractionContext>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void ::UnityEngine::InputSystem::Interactions::SlowTapInteraction::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::SlowTapInteraction>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::UnityEngine::InputSystem::Interactions::SlowTapInteraction::SlowTapInteraction()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SlowTapInteraction>())) {}
 void ::UnityEngine::InputSystem::Interactions::SlowTapInteraction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Interactions::SlowTapInteraction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
