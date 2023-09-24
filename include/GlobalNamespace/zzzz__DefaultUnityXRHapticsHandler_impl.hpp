#pragma once
#include "GlobalNamespace/zzzz__DefaultUnityXRHapticsHandler_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "GlobalNamespace/zzzz__IUnityXRHapticsHandler_def.hpp"
//  Writing Method size for method: GlobalNamespace::DefaultUnityXRHapticsHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DefaultUnityXRHapticsHandler::*)(UnityEngine::XR::XRNode)>(&GlobalNamespace::DefaultUnityXRHapticsHandler::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1f84ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DefaultUnityXRHapticsHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DefaultUnityXRHapticsHandler.Destroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DefaultUnityXRHapticsHandler::*)()>(&GlobalNamespace::DefaultUnityXRHapticsHandler::Destroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1f84efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DefaultUnityXRHapticsHandler>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DefaultUnityXRHapticsHandler.TriggerHapticPulse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DefaultUnityXRHapticsHandler::*)(float_t, float_t)>(&GlobalNamespace::DefaultUnityXRHapticsHandler::TriggerHapticPulse)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1f84f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DefaultUnityXRHapticsHandler>::get(),
                            "TriggerHapticPulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DefaultUnityXRHapticsHandler.StopHaptics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DefaultUnityXRHapticsHandler::*)()>(&GlobalNamespace::DefaultUnityXRHapticsHandler::StopHaptics)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1f84f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DefaultUnityXRHapticsHandler>::get(),
                            "StopHaptics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DefaultUnityXRHapticsHandler.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DefaultUnityXRHapticsHandler::*)()>(&GlobalNamespace::DefaultUnityXRHapticsHandler::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1f84f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DefaultUnityXRHapticsHandler>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IUnityXRHapticsHandler
constexpr  GlobalNamespace::DefaultUnityXRHapticsHandler::operator GlobalNamespace::IUnityXRHapticsHandler() const noexcept {
return GlobalNamespace::IUnityXRHapticsHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::DefaultUnityXRHapticsHandler::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::DefaultUnityXRHapticsHandler::__set__node(UnityEngine::XR::XRNode value)  {
::cordl_internals::setInstanceField<UnityEngine::XR::XRNode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::XR::XRNode>(value));
}
constexpr UnityEngine::XR::XRNode GlobalNamespace::DefaultUnityXRHapticsHandler::__get__node() const {
return ::cordl_internals::getInstanceField<UnityEngine::XR::XRNode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::DefaultUnityXRHapticsHandler GlobalNamespace::DefaultUnityXRHapticsHandler::New_ctor(UnityEngine::XR::XRNode node)  {
GlobalNamespace::DefaultUnityXRHapticsHandler o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::DefaultUnityXRHapticsHandler>(node))};
return o;
}
 void GlobalNamespace::DefaultUnityXRHapticsHandler::_ctor(UnityEngine::XR::XRNode node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DefaultUnityXRHapticsHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::XRNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node);
}
 void GlobalNamespace::DefaultUnityXRHapticsHandler::Destroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DefaultUnityXRHapticsHandler>::get(),
                            "Destroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::DefaultUnityXRHapticsHandler::TriggerHapticPulse(float_t strength, float_t duration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DefaultUnityXRHapticsHandler>::get(),
                            "TriggerHapticPulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, strength, duration);
}
 void GlobalNamespace::DefaultUnityXRHapticsHandler::StopHaptics()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DefaultUnityXRHapticsHandler>::get(),
                            "StopHaptics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::DefaultUnityXRHapticsHandler::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DefaultUnityXRHapticsHandler>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
