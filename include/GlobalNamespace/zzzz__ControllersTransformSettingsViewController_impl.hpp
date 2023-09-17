#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__ControllersTransformSettingsViewController_def.hpp"
#include "GlobalNamespace/zzzz__Vector3SO_def.hpp"
#include "HMUI/zzzz__RangeValuesTextSlider_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ControllersTransformSettingsViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ControllersTransformSettingsViewController::*)(bool, bool, bool)>(&::GlobalNamespace::ControllersTransformSettingsViewController::DidActivate)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x2157608;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::ControllersTransformSettingsViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ControllersTransformSettingsViewController>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllersTransformSettingsViewController.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ControllersTransformSettingsViewController::*)(bool, bool)>(&::GlobalNamespace::ControllersTransformSettingsViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2157b78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::ControllersTransformSettingsViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ControllersTransformSettingsViewController>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllersTransformSettingsViewController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ControllersTransformSettingsViewController::*)()>(&::GlobalNamespace::ControllersTransformSettingsViewController::OnDestroy)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x2157c24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::ControllersTransformSettingsViewController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ControllersTransformSettingsViewController>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllersTransformSettingsViewController.HandlePositionSliderValueDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ControllersTransformSettingsViewController::*)(::HMUI::RangeValuesTextSlider, float_t)>(&::GlobalNamespace::ControllersTransformSettingsViewController::HandlePositionSliderValueDidChange)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2157f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ControllersTransformSettingsViewController>::get(),
                            "HandlePositionSliderValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::RangeValuesTextSlider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllersTransformSettingsViewController.HandleRotationSliderValueDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ControllersTransformSettingsViewController::*)(::HMUI::RangeValuesTextSlider, float_t)>(&::GlobalNamespace::ControllersTransformSettingsViewController::HandleRotationSliderValueDidChange)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x215807c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ControllersTransformSettingsViewController>::get(),
                            "HandleRotationSliderValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::RangeValuesTextSlider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllersTransformSettingsViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ControllersTransformSettingsViewController::*)()>(&::GlobalNamespace::ControllersTransformSettingsViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2158194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ControllersTransformSettingsViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::ControllersTransformSettingsViewController::__set__controllerPosition(::GlobalNamespace::Vector3SO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3SO, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::Vector3SO>(value));
}
constexpr ::GlobalNamespace::Vector3SO ::GlobalNamespace::ControllersTransformSettingsViewController::__get__controllerPosition() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ControllersTransformSettingsViewController::__set__controllerRotation(::GlobalNamespace::Vector3SO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3SO, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::Vector3SO>(value));
}
constexpr ::GlobalNamespace::Vector3SO ::GlobalNamespace::ControllersTransformSettingsViewController::__get__controllerRotation() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3SO, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ControllersTransformSettingsViewController::__set__posXSlider(::HMUI::RangeValuesTextSlider value)  {
::cordl_internals::setInstanceField<::HMUI::RangeValuesTextSlider, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::RangeValuesTextSlider>(value));
}
constexpr ::HMUI::RangeValuesTextSlider ::GlobalNamespace::ControllersTransformSettingsViewController::__get__posXSlider() const {
return ::cordl_internals::getInstanceField<::HMUI::RangeValuesTextSlider, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ControllersTransformSettingsViewController::__set__posYSlider(::HMUI::RangeValuesTextSlider value)  {
::cordl_internals::setInstanceField<::HMUI::RangeValuesTextSlider, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::RangeValuesTextSlider>(value));
}
constexpr ::HMUI::RangeValuesTextSlider ::GlobalNamespace::ControllersTransformSettingsViewController::__get__posYSlider() const {
return ::cordl_internals::getInstanceField<::HMUI::RangeValuesTextSlider, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ControllersTransformSettingsViewController::__set__posZSlider(::HMUI::RangeValuesTextSlider value)  {
::cordl_internals::setInstanceField<::HMUI::RangeValuesTextSlider, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::RangeValuesTextSlider>(value));
}
constexpr ::HMUI::RangeValuesTextSlider ::GlobalNamespace::ControllersTransformSettingsViewController::__get__posZSlider() const {
return ::cordl_internals::getInstanceField<::HMUI::RangeValuesTextSlider, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ControllersTransformSettingsViewController::__set__rotXSlider(::HMUI::RangeValuesTextSlider value)  {
::cordl_internals::setInstanceField<::HMUI::RangeValuesTextSlider, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::RangeValuesTextSlider>(value));
}
constexpr ::HMUI::RangeValuesTextSlider ::GlobalNamespace::ControllersTransformSettingsViewController::__get__rotXSlider() const {
return ::cordl_internals::getInstanceField<::HMUI::RangeValuesTextSlider, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ControllersTransformSettingsViewController::__set__rotYSlider(::HMUI::RangeValuesTextSlider value)  {
::cordl_internals::setInstanceField<::HMUI::RangeValuesTextSlider, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::RangeValuesTextSlider>(value));
}
constexpr ::HMUI::RangeValuesTextSlider ::GlobalNamespace::ControllersTransformSettingsViewController::__get__rotYSlider() const {
return ::cordl_internals::getInstanceField<::HMUI::RangeValuesTextSlider, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ControllersTransformSettingsViewController::__set__rotZSlider(::HMUI::RangeValuesTextSlider value)  {
::cordl_internals::setInstanceField<::HMUI::RangeValuesTextSlider, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::RangeValuesTextSlider>(value));
}
constexpr ::HMUI::RangeValuesTextSlider ::GlobalNamespace::ControllersTransformSettingsViewController::__get__rotZSlider() const {
return ::cordl_internals::getInstanceField<::HMUI::RangeValuesTextSlider, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ControllersTransformSettingsViewController::__set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IVRPlatformHelper, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::IVRPlatformHelper>(value));
}
constexpr ::GlobalNamespace::IVRPlatformHelper ::GlobalNamespace::ControllersTransformSettingsViewController::__get__vrPlatformHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::ControllersTransformSettingsViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ControllersTransformSettingsViewController>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
 void ::GlobalNamespace::ControllersTransformSettingsViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ControllersTransformSettingsViewController>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
 void ::GlobalNamespace::ControllersTransformSettingsViewController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ControllersTransformSettingsViewController>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::ControllersTransformSettingsViewController::HandlePositionSliderValueDidChange(::HMUI::RangeValuesTextSlider slider, float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ControllersTransformSettingsViewController>::get(),
                            "HandlePositionSliderValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::RangeValuesTextSlider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, slider, value);
}
 void ::GlobalNamespace::ControllersTransformSettingsViewController::HandleRotationSliderValueDidChange(::HMUI::RangeValuesTextSlider slider, float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ControllersTransformSettingsViewController>::get(),
                            "HandleRotationSliderValueDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::RangeValuesTextSlider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, slider, value);
}
// Ctor Parameters []
 ::GlobalNamespace::ControllersTransformSettingsViewController::ControllersTransformSettingsViewController()  : ::HMUI::ViewController(THROW_UNLESS(::il2cpp_utils::New<ControllersTransformSettingsViewController>())) {}
 void ::GlobalNamespace::ControllersTransformSettingsViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ControllersTransformSettingsViewController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
