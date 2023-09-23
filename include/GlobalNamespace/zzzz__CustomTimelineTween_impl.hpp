#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CustomTimelineTween_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: GlobalNamespace::CustomTimelineTween.OnValidate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomTimelineTween::*)()>(&GlobalNamespace::CustomTimelineTween::OnValidate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x21b1dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomTimelineTween>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CustomTimelineTween._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomTimelineTween::*)()>(&GlobalNamespace::CustomTimelineTween::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21b1e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomTimelineTween>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::CustomTimelineTween::__set_transforms(::ArrayW<UnityEngine::Transform> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Transform>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Transform>>(value));
}
constexpr ::ArrayW<UnityEngine::Transform> GlobalNamespace::CustomTimelineTween::__get_transforms() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Transform>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CustomTimelineTween::__set_startPositions(::ArrayW<UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Vector3>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Vector3>>(value));
}
constexpr ::ArrayW<UnityEngine::Vector3> GlobalNamespace::CustomTimelineTween::__get_startPositions() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Vector3>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::CustomTimelineTween::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomTimelineTween>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::CustomTimelineTween::CustomTimelineTween()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<CustomTimelineTween>())) {}
 void GlobalNamespace::CustomTimelineTween::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CustomTimelineTween>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
