#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__ScreenBackButtonAnimationController_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType  ::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType::FadeIn{0};
constexpr ::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType  ::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType::FadeOut{1};
constexpr ::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType  ::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType::MoveIn{2};
constexpr ::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType  ::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType::MoveOut{3};
constexpr ::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType  ::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType::MoveIn2{4};
constexpr ::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType  ::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType::MoveOut2{5};
//  Writing Method size for method: ::GlobalNamespace::ScreenBackButtonAnimationController.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenBackButtonAnimationController::*)()>(&::GlobalNamespace::ScreenBackButtonAnimationController::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1fa34e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenBackButtonAnimationController>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenBackButtonAnimationController.StartAnimation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenBackButtonAnimationController::*)(::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType)>(&::GlobalNamespace::ScreenBackButtonAnimationController::StartAnimation)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1fa3504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenBackButtonAnimationController>::get(),
                            "StartAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenBackButtonAnimationController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenBackButtonAnimationController::*)()>(&::GlobalNamespace::ScreenBackButtonAnimationController::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1fa3574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenBackButtonAnimationController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::ScreenBackButtonAnimationController::__set__animator(::UnityEngine::Animator value)  {
::cordl_internals::setInstanceField<::UnityEngine::Animator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Animator>(value));
}
constexpr ::UnityEngine::Animator ::GlobalNamespace::ScreenBackButtonAnimationController::__get__animator() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Animator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ScreenBackButtonAnimationController::__set__animationHashes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType,int32_t> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType,int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType,int32_t>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType,int32_t> ::GlobalNamespace::ScreenBackButtonAnimationController::__get__animationHashes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType,int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::ScreenBackButtonAnimationController::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenBackButtonAnimationController>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::ScreenBackButtonAnimationController::StartAnimation(::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType animationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenBackButtonAnimationController>::get(),
                            "StartAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__ScreenBackButtonAnimationController__AnimationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, animationType);
}
// Ctor Parameters []
 ::GlobalNamespace::ScreenBackButtonAnimationController::ScreenBackButtonAnimationController()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ScreenBackButtonAnimationController>())) {}
 void ::GlobalNamespace::ScreenBackButtonAnimationController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenBackButtonAnimationController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
