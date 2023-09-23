#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CountdownElementController_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: GlobalNamespace::CountdownElementController.SetTextAndRunAnimation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CountdownElementController::*)(::StringW)>(&GlobalNamespace::CountdownElementController::SetTextAndRunAnimation)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x214b9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CountdownElementController>::get(),
                            "SetTextAndRunAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CountdownElementController.StopAndHide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CountdownElementController::*)()>(&GlobalNamespace::CountdownElementController::StopAndHide)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x214bb40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CountdownElementController>::get(),
                            "StopAndHide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CountdownElementController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CountdownElementController::*)()>(&GlobalNamespace::CountdownElementController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214bcc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CountdownElementController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::CountdownElementController::__set__text(TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<TMPro::TextMeshProUGUI, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TMPro::TextMeshProUGUI>(value));
}
constexpr TMPro::TextMeshProUGUI GlobalNamespace::CountdownElementController::__get__text() const {
return ::cordl_internals::getInstanceField<TMPro::TextMeshProUGUI, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CountdownElementController::__set__animation(UnityEngine::Animation value)  {
::cordl_internals::setInstanceField<UnityEngine::Animation, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Animation>(value));
}
constexpr UnityEngine::Animation GlobalNamespace::CountdownElementController::__get__animation() const {
return ::cordl_internals::getInstanceField<UnityEngine::Animation, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::CountdownElementController::SetTextAndRunAnimation(::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CountdownElementController>::get(),
                            "SetTextAndRunAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, text);
}
 void GlobalNamespace::CountdownElementController::StopAndHide()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CountdownElementController>::get(),
                            "StopAndHide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::CountdownElementController::CountdownElementController()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<CountdownElementController>())) {}
 void GlobalNamespace::CountdownElementController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CountdownElementController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
