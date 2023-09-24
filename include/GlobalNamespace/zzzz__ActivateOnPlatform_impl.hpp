#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ActivateOnPlatform_def.hpp"
#include "GlobalNamespace/zzzz__VRPlatformSDK_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
//  Writing Method size for method: GlobalNamespace::ActivateOnPlatform.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ActivateOnPlatform::*)()>(&GlobalNamespace::ActivateOnPlatform::Awake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1f701dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ActivateOnPlatform>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ActivateOnPlatform._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ActivateOnPlatform::*)()>(&GlobalNamespace::ActivateOnPlatform::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f702ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ActivateOnPlatform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ActivateOnPlatform::__set__vrPlatformSdk(GlobalNamespace::VRPlatformSDK value)  {
::cordl_internals::setInstanceField<GlobalNamespace::VRPlatformSDK, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::VRPlatformSDK>(value));
}
constexpr GlobalNamespace::VRPlatformSDK GlobalNamespace::ActivateOnPlatform::__get__vrPlatformSdk() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::VRPlatformSDK, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ActivateOnPlatform::__set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IVRPlatformHelper, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IVRPlatformHelper>(value));
}
constexpr GlobalNamespace::IVRPlatformHelper GlobalNamespace::ActivateOnPlatform::__get__vrPlatformHelper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IVRPlatformHelper, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::ActivateOnPlatform::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ActivateOnPlatform>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::ActivateOnPlatform GlobalNamespace::ActivateOnPlatform::New_ctor()  {
GlobalNamespace::ActivateOnPlatform o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::ActivateOnPlatform>())};
return o;
}
 void GlobalNamespace::ActivateOnPlatform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ActivateOnPlatform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
