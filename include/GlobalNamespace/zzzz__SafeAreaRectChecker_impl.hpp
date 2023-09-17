#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__SafeAreaRectChecker_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__MainCamera_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__SafeAreaRectChecker__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__SafeAreaRectChecker__InitData::*)(bool)>(&::GlobalNamespace::____GlobalNamespace__SafeAreaRectChecker__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2127360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SafeAreaRectChecker__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__SafeAreaRectChecker__InitData::__set_checkingEnabled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__SafeAreaRectChecker__InitData::__get_checkingEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "checkingEnabled", ty: "bool", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__SafeAreaRectChecker__InitData::____GlobalNamespace__SafeAreaRectChecker__InitData(bool checkingEnabled)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__SafeAreaRectChecker__InitData>(checkingEnabled))) {}
 void ::GlobalNamespace::____GlobalNamespace__SafeAreaRectChecker__InitData::_ctor(bool checkingEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__SafeAreaRectChecker__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, checkingEnabled);
}
//  Writing Method size for method: ::GlobalNamespace::SafeAreaRectChecker.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SafeAreaRectChecker::*)()>(&::GlobalNamespace::SafeAreaRectChecker::Start)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21270ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SafeAreaRectChecker>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SafeAreaRectChecker.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SafeAreaRectChecker::*)()>(&::GlobalNamespace::SafeAreaRectChecker::Update)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2127110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SafeAreaRectChecker>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SafeAreaRectChecker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SafeAreaRectChecker::*)()>(&::GlobalNamespace::SafeAreaRectChecker::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21272fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SafeAreaRectChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::SafeAreaRectChecker::__set__minAngleX(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::SafeAreaRectChecker::__get__minAngleX() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SafeAreaRectChecker::__set__maxAngleX(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::SafeAreaRectChecker::__get__maxAngleX() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SafeAreaRectChecker::__set__minAngleY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::SafeAreaRectChecker::__get__minAngleY() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SafeAreaRectChecker::__set__maxAngleY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::SafeAreaRectChecker::__get__maxAngleY() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SafeAreaRectChecker::__set__activeObjectWhenInsideSafeArea(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::GlobalNamespace::SafeAreaRectChecker::__get__activeObjectWhenInsideSafeArea() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SafeAreaRectChecker::__set__activeObjectWhenNotInsideSafeArea(::UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::GameObject>(value));
}
constexpr ::UnityEngine::GameObject ::GlobalNamespace::SafeAreaRectChecker::__get__activeObjectWhenNotInsideSafeArea() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SafeAreaRectChecker::__set__rectTransformToCheck(::UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RectTransform>(value));
}
constexpr ::UnityEngine::RectTransform ::GlobalNamespace::SafeAreaRectChecker::__get__rectTransformToCheck() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SafeAreaRectChecker::__set__corners(::ArrayW<::UnityEngine::Vector3> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector3>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector3> ::GlobalNamespace::SafeAreaRectChecker::__get__corners() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SafeAreaRectChecker::__set__mainCamera(::GlobalNamespace::MainCamera value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainCamera, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MainCamera>(value));
}
constexpr ::GlobalNamespace::MainCamera ::GlobalNamespace::SafeAreaRectChecker::__get__mainCamera() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainCamera, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SafeAreaRectChecker::__set__initData(::GlobalNamespace::____GlobalNamespace__SafeAreaRectChecker__InitData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__SafeAreaRectChecker__InitData, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__SafeAreaRectChecker__InitData>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__SafeAreaRectChecker__InitData ::GlobalNamespace::SafeAreaRectChecker::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__SafeAreaRectChecker__InitData, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::SafeAreaRectChecker::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SafeAreaRectChecker>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::SafeAreaRectChecker::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SafeAreaRectChecker>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::SafeAreaRectChecker::SafeAreaRectChecker()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<SafeAreaRectChecker>())) {}
 void ::GlobalNamespace::SafeAreaRectChecker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SafeAreaRectChecker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
