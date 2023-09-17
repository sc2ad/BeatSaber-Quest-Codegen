#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
namespace {
#include "UnityEngine/UI/zzzz__AspectRatioFitter_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutSelfController_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutController_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode::____UnityEngine__UI__AspectRatioFitter__AspectMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode  ::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode::None{0};
constexpr ::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode  ::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode::WidthControlsHeight{1};
constexpr ::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode  ::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode::HeightControlsWidth{2};
constexpr ::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode  ::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode::FitInParent{3};
constexpr ::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode  ::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode::EnvelopeParent{4};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.get_aspectMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::get_aspectMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfa078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "get_aspectMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.set_aspectMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)(::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode)>(&::UnityEngine::UI::AspectRatioFitter::set_aspectMode)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2bfa080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "set_aspectMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.get_aspectRatio
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::get_aspectRatio)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfa0f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "get_aspectRatio",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.set_aspectRatio
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)(float_t)>(&::UnityEngine::UI::AspectRatioFitter::set_aspectRatio)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2bfa100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "set_aspectRatio",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.get_rectTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::get_rectTransform)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2bfa174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "get_rectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bfa208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::OnEnable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2bfa218;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::AspectRatioFitter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2bfa2b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::AspectRatioFitter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::OnDisable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2bfa3f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::AspectRatioFitter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.OnTransformParentChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::OnTransformParentChanged)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2bfa85c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::AspectRatioFitter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::Update)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2bfa8f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::AspectRatioFitter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.OnRectTransformDimensionsChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::OnRectTransformDimensionsChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2bfa908;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::AspectRatioFitter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.UpdateRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::UpdateRect)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2bfa90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "UpdateRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.GetSizeDeltaToProduceSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::AspectRatioFitter::*)(float_t, int32_t)>(&::UnityEngine::UI::AspectRatioFitter::GetSizeDeltaToProduceSize)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2bfad20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "GetSizeDeltaToProduceSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.GetParentSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::GetParentSize)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2bfac10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "GetParentSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.SetLayoutHorizontal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::SetLayoutHorizontal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2bfae18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::AspectRatioFitter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.SetLayoutVertical
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::SetLayoutVertical)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2bfae1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UI::AspectRatioFitter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.SetDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::SetDirty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2bfa0f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "SetDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.IsComponentValidOnObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::IsComponentValidOnObject)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2bfa300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "IsComponentValidOnObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.IsAspectModeValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::IsAspectModeValid)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2bfa3cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "IsAspectModeValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.DoesParentExists
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::DoesParentExists)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bfae20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "DoesParentExists",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::UI::ILayoutSelfController
constexpr  ::UnityEngine::UI::AspectRatioFitter::operator ::UnityEngine::UI::ILayoutSelfController() const noexcept {
return ::UnityEngine::UI::ILayoutSelfController(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::UnityEngine::UI::ILayoutController
constexpr  ::UnityEngine::UI::AspectRatioFitter::operator ::UnityEngine::UI::ILayoutController() const noexcept {
return ::UnityEngine::UI::ILayoutController(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UI::AspectRatioFitter::__set_m_AspectMode(::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode>(value));
}
constexpr ::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode ::UnityEngine::UI::AspectRatioFitter::__get_m_AspectMode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UI::AspectRatioFitter::__set_m_AspectRatio(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::UI::AspectRatioFitter::__get_m_AspectRatio() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UI::AspectRatioFitter::__set_m_Rect(::UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::RectTransform>(value));
}
constexpr ::UnityEngine::RectTransform ::UnityEngine::UI::AspectRatioFitter::__get_m_Rect() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UI::AspectRatioFitter::__set_m_DelayedSetDirty(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UI::AspectRatioFitter::__get_m_DelayedSetDirty() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UI::AspectRatioFitter::__set_m_DoesParentExist(bool value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UI::AspectRatioFitter::__get_m_DoesParentExist() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UI::AspectRatioFitter::__set_m_Tracker(::UnityEngine::DrivenRectTransformTracker value)  {
::cordl_internals::setInstanceField<::UnityEngine::DrivenRectTransformTracker, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::DrivenRectTransformTracker>(value));
}
constexpr ::UnityEngine::DrivenRectTransformTracker ::UnityEngine::UI::AspectRatioFitter::__get_m_Tracker() const {
return ::cordl_internals::getInstanceField<::UnityEngine::DrivenRectTransformTracker, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode ::UnityEngine::UI::AspectRatioFitter::get_aspectMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "get_aspectMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::AspectRatioFitter::set_aspectMode(::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "set_aspectMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::____UnityEngine__UI__AspectRatioFitter__AspectMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::UnityEngine::UI::AspectRatioFitter::get_aspectRatio()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "get_aspectRatio",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::AspectRatioFitter::set_aspectRatio(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "set_aspectRatio",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::RectTransform ::UnityEngine::UI::AspectRatioFitter::get_rectTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "get_rectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::UnityEngine::UI::AspectRatioFitter::AspectRatioFitter()  : ::UnityEngine::EventSystems::UIBehaviour(THROW_UNLESS(::il2cpp_utils::New<AspectRatioFitter>())) {}
 void ::UnityEngine::UI::AspectRatioFitter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::AspectRatioFitter::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::AspectRatioFitter::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::AspectRatioFitter::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::AspectRatioFitter::OnTransformParentChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "OnTransformParentChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::AspectRatioFitter::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::AspectRatioFitter::OnRectTransformDimensionsChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "OnRectTransformDimensionsChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::AspectRatioFitter::UpdateRect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "UpdateRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::UnityEngine::UI::AspectRatioFitter::GetSizeDeltaToProduceSize(float_t size, int32_t axis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "GetSizeDeltaToProduceSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, size, axis);
}
 ::UnityEngine::Vector2 ::UnityEngine::UI::AspectRatioFitter::GetParentSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "GetParentSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::AspectRatioFitter::SetLayoutHorizontal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "SetLayoutHorizontal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::AspectRatioFitter::SetLayoutVertical()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "SetLayoutVertical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UI::AspectRatioFitter::SetDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "SetDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::UI::AspectRatioFitter::IsComponentValidOnObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "IsComponentValidOnObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::UI::AspectRatioFitter::IsAspectModeValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "IsAspectModeValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::UI::AspectRatioFitter::DoesParentExists()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter>::get(),
                            "DoesParentExists",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
