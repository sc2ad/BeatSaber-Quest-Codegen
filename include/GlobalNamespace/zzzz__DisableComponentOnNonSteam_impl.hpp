#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisableComponentOnNonSteam_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
//  Writing Method size for method: GlobalNamespace::DisableComponentOnNonSteam.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisableComponentOnNonSteam::*)()>(&GlobalNamespace::DisableComponentOnNonSteam::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2115aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisableComponentOnNonSteam>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DisableComponentOnNonSteam._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisableComponentOnNonSteam::*)()>(&GlobalNamespace::DisableComponentOnNonSteam::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2115b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisableComponentOnNonSteam>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DisableComponentOnNonSteam::__set__component(UnityEngine::MonoBehaviour value)  {
::cordl_internals::setInstanceField<UnityEngine::MonoBehaviour, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::MonoBehaviour>(value));
}
constexpr UnityEngine::MonoBehaviour GlobalNamespace::DisableComponentOnNonSteam::__get__component() const {
return ::cordl_internals::getInstanceField<UnityEngine::MonoBehaviour, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::DisableComponentOnNonSteam::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisableComponentOnNonSteam>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::DisableComponentOnNonSteam::DisableComponentOnNonSteam()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<DisableComponentOnNonSteam>())) {}
 void GlobalNamespace::DisableComponentOnNonSteam::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DisableComponentOnNonSteam>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
