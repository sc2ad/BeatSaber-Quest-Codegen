#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/UI/zzzz__CanvasScaler_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode::UnityEngine__UI__CanvasScaler__ScaleMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode  UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode::ConstantPixelSize{0};
constexpr UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode  UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode::ScaleWithScreenSize{1};
constexpr UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode  UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode::ConstantPhysicalSize{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode::UnityEngine__UI__CanvasScaler__ScreenMatchMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode  UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode::MatchWidthOrHeight{0};
constexpr UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode  UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode::Expand{1};
constexpr UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode  UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode::Shrink{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit::UnityEngine__UI__CanvasScaler__Unit(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit  UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit::Centimeters{0};
constexpr UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit  UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit::Millimeters{1};
constexpr UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit  UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit::Inches{2};
constexpr UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit  UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit::Points{3};
constexpr UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit  UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit::Picas{4};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.get_uiScaleMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode (UnityEngine::UI::CanvasScaler::*)()>(&UnityEngine::UI::CanvasScaler::get_uiScaleMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfae28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "get_uiScaleMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.set_uiScaleMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasScaler::*)(UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode)>(&UnityEngine::UI::CanvasScaler::set_uiScaleMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfae30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "set_uiScaleMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.get_referencePixelsPerUnit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UI::CanvasScaler::*)()>(&UnityEngine::UI::CanvasScaler::get_referencePixelsPerUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfae38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "get_referencePixelsPerUnit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.set_referencePixelsPerUnit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasScaler::*)(float_t)>(&UnityEngine::UI::CanvasScaler::set_referencePixelsPerUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfae40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "set_referencePixelsPerUnit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.get_scaleFactor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UI::CanvasScaler::*)()>(&UnityEngine::UI::CanvasScaler::get_scaleFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfae48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "get_scaleFactor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.set_scaleFactor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasScaler::*)(float_t)>(&UnityEngine::UI::CanvasScaler::set_scaleFactor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bfae50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "set_scaleFactor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.get_referenceResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::UI::CanvasScaler::*)()>(&UnityEngine::UI::CanvasScaler::get_referenceResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfae64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "get_referenceResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.set_referenceResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasScaler::*)(UnityEngine::Vector2)>(&UnityEngine::UI::CanvasScaler::set_referenceResolution)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2bfae6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "set_referenceResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.get_screenMatchMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode (UnityEngine::UI::CanvasScaler::*)()>(&UnityEngine::UI::CanvasScaler::get_screenMatchMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfaed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "get_screenMatchMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.set_screenMatchMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasScaler::*)(UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode)>(&UnityEngine::UI::CanvasScaler::set_screenMatchMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfaed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "set_screenMatchMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.get_matchWidthOrHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UI::CanvasScaler::*)()>(&UnityEngine::UI::CanvasScaler::get_matchWidthOrHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfaee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "get_matchWidthOrHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.set_matchWidthOrHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasScaler::*)(float_t)>(&UnityEngine::UI::CanvasScaler::set_matchWidthOrHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfaee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "set_matchWidthOrHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.get_physicalUnit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit (UnityEngine::UI::CanvasScaler::*)()>(&UnityEngine::UI::CanvasScaler::get_physicalUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfaef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "get_physicalUnit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.set_physicalUnit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasScaler::*)(UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit)>(&UnityEngine::UI::CanvasScaler::set_physicalUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfaef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "set_physicalUnit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.get_fallbackScreenDPI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UI::CanvasScaler::*)()>(&UnityEngine::UI::CanvasScaler::get_fallbackScreenDPI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfaf00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "get_fallbackScreenDPI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.set_fallbackScreenDPI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasScaler::*)(float_t)>(&UnityEngine::UI::CanvasScaler::set_fallbackScreenDPI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfaf08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "set_fallbackScreenDPI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.get_defaultSpriteDPI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UI::CanvasScaler::*)()>(&UnityEngine::UI::CanvasScaler::get_defaultSpriteDPI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfaf10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "get_defaultSpriteDPI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.set_defaultSpriteDPI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasScaler::*)(float_t)>(&UnityEngine::UI::CanvasScaler::set_defaultSpriteDPI)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bfaf18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "set_defaultSpriteDPI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.get_dynamicPixelsPerUnit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::UI::CanvasScaler::*)()>(&UnityEngine::UI::CanvasScaler::get_dynamicPixelsPerUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfaf28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "get_dynamicPixelsPerUnit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.set_dynamicPixelsPerUnit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasScaler::*)(float_t)>(&UnityEngine::UI::CanvasScaler::set_dynamicPixelsPerUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfaf30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "set_dynamicPixelsPerUnit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasScaler::*)()>(&UnityEngine::UI::CanvasScaler::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2bfaf38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasScaler::*)()>(&UnityEngine::UI::CanvasScaler::OnEnable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2bfaf80;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::CanvasScaler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.Canvas_preWillRenderCanvases
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasScaler::*)()>(&UnityEngine::UI::CanvasScaler::Canvas_preWillRenderCanvases)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bfb04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "Canvas_preWillRenderCanvases",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasScaler::*)()>(&UnityEngine::UI::CanvasScaler::OnDisable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2bfb05c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::CanvasScaler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.Handle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasScaler::*)()>(&UnityEngine::UI::CanvasScaler::Handle)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2bfb184;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::CanvasScaler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.HandleWorldCanvas
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasScaler::*)()>(&UnityEngine::UI::CanvasScaler::HandleWorldCanvas)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2bfb280;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::CanvasScaler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.HandleConstantPixelSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasScaler::*)()>(&UnityEngine::UI::CanvasScaler::HandleConstantPixelSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2bfb2a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::CanvasScaler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.HandleScaleWithScreenSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasScaler::*)()>(&UnityEngine::UI::CanvasScaler::HandleScaleWithScreenSize)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2bfb2c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::CanvasScaler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.HandleConstantPhysicalSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasScaler::*)()>(&UnityEngine::UI::CanvasScaler::HandleConstantPhysicalSize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2bfb4f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::CanvasScaler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.SetScaleFactor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasScaler::*)(float_t)>(&UnityEngine::UI::CanvasScaler::SetScaleFactor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2bfb104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "SetScaleFactor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::CanvasScaler.SetReferencePixelsPerUnit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CanvasScaler::*)(float_t)>(&UnityEngine::UI::CanvasScaler::SetReferencePixelsPerUnit)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2bfb144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "SetReferencePixelsPerUnit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UI::CanvasScaler::__set_m_UiScaleMode(UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode>(value));
}
constexpr UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode UnityEngine::UI::CanvasScaler::__get_m_UiScaleMode() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::CanvasScaler::__set_m_ReferencePixelsPerUnit(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UI::CanvasScaler::__get_m_ReferencePixelsPerUnit() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::CanvasScaler::__set_m_ScaleFactor(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UI::CanvasScaler::__get_m_ScaleFactor() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::CanvasScaler::__set_m_ReferenceResolution(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UI::CanvasScaler::__get_m_ReferenceResolution() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::CanvasScaler::__set_m_ScreenMatchMode(UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode>(value));
}
constexpr UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode UnityEngine::UI::CanvasScaler::__get_m_ScreenMatchMode() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::CanvasScaler::__set_m_MatchWidthOrHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UI::CanvasScaler::__get_m_MatchWidthOrHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::CanvasScaler::__set_m_PhysicalUnit(UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit>(value));
}
constexpr UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit UnityEngine::UI::CanvasScaler::__get_m_PhysicalUnit() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::CanvasScaler::__set_m_FallbackScreenDPI(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UI::CanvasScaler::__get_m_FallbackScreenDPI() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::CanvasScaler::__set_m_DefaultSpriteDPI(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UI::CanvasScaler::__get_m_DefaultSpriteDPI() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::CanvasScaler::__set_m_DynamicPixelsPerUnit(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UI::CanvasScaler::__get_m_DynamicPixelsPerUnit() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::CanvasScaler::__set_m_Canvas(UnityEngine::Canvas value)  {
::cordl_internals::setInstanceField<UnityEngine::Canvas, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Canvas>(value));
}
constexpr UnityEngine::Canvas UnityEngine::UI::CanvasScaler::__get_m_Canvas() const {
return ::cordl_internals::getInstanceField<UnityEngine::Canvas, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::CanvasScaler::__set_m_PrevScaleFactor(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UI::CanvasScaler::__get_m_PrevScaleFactor() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::CanvasScaler::__set_m_PrevReferencePixelsPerUnit(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UI::CanvasScaler::__get_m_PrevReferencePixelsPerUnit() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::CanvasScaler::__set_m_PresetInfoIsWorld(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::CanvasScaler::__get_m_PresetInfoIsWorld() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode UnityEngine::UI::CanvasScaler::get_uiScaleMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "get_uiScaleMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::CanvasScaler::set_uiScaleMode(UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "set_uiScaleMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScaleMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t UnityEngine::UI::CanvasScaler::get_referencePixelsPerUnit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "get_referencePixelsPerUnit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::CanvasScaler::set_referencePixelsPerUnit(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "set_referencePixelsPerUnit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t UnityEngine::UI::CanvasScaler::get_scaleFactor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "get_scaleFactor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::CanvasScaler::set_scaleFactor(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "set_scaleFactor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Vector2 UnityEngine::UI::CanvasScaler::get_referenceResolution()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "get_referenceResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::CanvasScaler::set_referenceResolution(UnityEngine::Vector2 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "set_referenceResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode UnityEngine::UI::CanvasScaler::get_screenMatchMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "get_screenMatchMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::CanvasScaler::set_screenMatchMode(UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "set_screenMatchMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__CanvasScaler__ScreenMatchMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t UnityEngine::UI::CanvasScaler::get_matchWidthOrHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "get_matchWidthOrHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::CanvasScaler::set_matchWidthOrHeight(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "set_matchWidthOrHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit UnityEngine::UI::CanvasScaler::get_physicalUnit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "get_physicalUnit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::CanvasScaler::set_physicalUnit(UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "set_physicalUnit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__CanvasScaler__Unit>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t UnityEngine::UI::CanvasScaler::get_fallbackScreenDPI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "get_fallbackScreenDPI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::CanvasScaler::set_fallbackScreenDPI(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "set_fallbackScreenDPI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t UnityEngine::UI::CanvasScaler::get_defaultSpriteDPI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "get_defaultSpriteDPI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::CanvasScaler::set_defaultSpriteDPI(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "set_defaultSpriteDPI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t UnityEngine::UI::CanvasScaler::get_dynamicPixelsPerUnit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "get_dynamicPixelsPerUnit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::CanvasScaler::set_dynamicPixelsPerUnit(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "set_dynamicPixelsPerUnit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 UnityEngine::UI::CanvasScaler::CanvasScaler()  : UnityEngine::EventSystems::UIBehaviour(THROW_UNLESS(::il2cpp_utils::New<CanvasScaler>())) {}
 void UnityEngine::UI::CanvasScaler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::CanvasScaler::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::CanvasScaler::Canvas_preWillRenderCanvases()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "Canvas_preWillRenderCanvases",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::CanvasScaler::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::CanvasScaler::Handle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "Handle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::CanvasScaler::HandleWorldCanvas()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "HandleWorldCanvas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::CanvasScaler::HandleConstantPixelSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "HandleConstantPixelSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::CanvasScaler::HandleScaleWithScreenSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "HandleScaleWithScreenSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::CanvasScaler::HandleConstantPhysicalSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "HandleConstantPhysicalSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::CanvasScaler::SetScaleFactor(float_t scaleFactor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "SetScaleFactor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scaleFactor);
}
 void UnityEngine::UI::CanvasScaler::SetReferencePixelsPerUnit(float_t referencePixelsPerUnit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::CanvasScaler>::get(),
                            "SetReferencePixelsPerUnit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, referencePixelsPerUnit);
}
