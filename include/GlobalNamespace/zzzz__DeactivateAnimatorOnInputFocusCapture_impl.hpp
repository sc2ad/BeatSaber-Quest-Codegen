#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DeactivateAnimatorOnInputFocusCapture_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: GlobalNamespace::DeactivateAnimatorOnInputFocusCapture.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::*)()>(&GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::Start)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1f7033c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DeactivateAnimatorOnInputFocusCapture>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DeactivateAnimatorOnInputFocusCapture.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::*)()>(&GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::OnDestroy)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x1f7058c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DeactivateAnimatorOnInputFocusCapture>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DeactivateAnimatorOnInputFocusCapture.HandleInputFocusCaptured
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::*)()>(&GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::HandleInputFocusCaptured)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1f7054c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DeactivateAnimatorOnInputFocusCapture>::get(),
                            "HandleInputFocusCaptured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DeactivateAnimatorOnInputFocusCapture.HandleInputFocusReleased
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::*)()>(&GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::HandleInputFocusReleased)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1f70730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DeactivateAnimatorOnInputFocusCapture>::get(),
                            "HandleInputFocusReleased",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DeactivateAnimatorOnInputFocusCapture._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::*)()>(&GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f70754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DeactivateAnimatorOnInputFocusCapture>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__set__animator(UnityEngine::Animator value)  {
::cordl_internals::setInstanceField<UnityEngine::Animator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Animator>(value));
}
constexpr UnityEngine::Animator GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__get__animator() const {
return ::cordl_internals::getInstanceField<UnityEngine::Animator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IVRPlatformHelper, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IVRPlatformHelper>(value));
}
constexpr GlobalNamespace::IVRPlatformHelper GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__get__vrPlatformHelper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IVRPlatformHelper, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__set__wasEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::__get__wasEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DeactivateAnimatorOnInputFocusCapture>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DeactivateAnimatorOnInputFocusCapture>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::HandleInputFocusCaptured()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DeactivateAnimatorOnInputFocusCapture>::get(),
                            "HandleInputFocusCaptured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::HandleInputFocusReleased()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DeactivateAnimatorOnInputFocusCapture>::get(),
                            "HandleInputFocusReleased",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::DeactivateAnimatorOnInputFocusCapture GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::New_ctor()  {
GlobalNamespace::DeactivateAnimatorOnInputFocusCapture o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::DeactivateAnimatorOnInputFocusCapture>())};
return o;
}
 void GlobalNamespace::DeactivateAnimatorOnInputFocusCapture::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DeactivateAnimatorOnInputFocusCapture>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
