#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__ScrollView_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__Scroller_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollViewMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__DetachFromPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollerVisibility_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCancelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleResolvedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__WheelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduledItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureOutEvent_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFloatAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::*)(::UnityEngine::UIElements::VisualElement, ::UnityEngine::UIElements::IUxmlAttributes, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x2caffe0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x2cb0370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__set_m_ScrollViewMode(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode> value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode>>(value));
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode> ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__get_m_ScrollViewMode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode>, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__set_m_NestedInteractionKind(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind> value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind>>(value));
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind> ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__get_m_NestedInteractionKind() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind>, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__set_m_ShowHorizontal(::UnityEngine::UIElements::UxmlBoolAttributeDescription value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlBoolAttributeDescription>(value));
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__get_m_ShowHorizontal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__set_m_ShowVertical(::UnityEngine::UIElements::UxmlBoolAttributeDescription value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlBoolAttributeDescription>(value));
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__get_m_ShowVertical() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlBoolAttributeDescription, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__set_m_HorizontalScrollerVisibility(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility> value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>>(value));
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility> ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__get_m_HorizontalScrollerVisibility() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__set_m_VerticalScrollerVisibility(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility> value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>>(value));
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility> ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__get_m_VerticalScrollerVisibility() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__set_m_HorizontalPageSize(::UnityEngine::UIElements::UxmlFloatAttributeDescription value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlFloatAttributeDescription, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlFloatAttributeDescription>(value));
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__get_m_HorizontalPageSize() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlFloatAttributeDescription, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__set_m_VerticalPageSize(::UnityEngine::UIElements::UxmlFloatAttributeDescription value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlFloatAttributeDescription, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlFloatAttributeDescription>(value));
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__get_m_VerticalPageSize() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlFloatAttributeDescription, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__set_m_TouchScrollBehavior(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior> value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior>>(value));
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior> ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__get_m_TouchScrollBehavior() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__set_m_ScrollDecelerationRate(::UnityEngine::UIElements::UxmlFloatAttributeDescription value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlFloatAttributeDescription, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlFloatAttributeDescription>(value));
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__get_m_ScrollDecelerationRate() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlFloatAttributeDescription, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__set_m_Elasticity(::UnityEngine::UIElements::UxmlFloatAttributeDescription value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UxmlFloatAttributeDescription, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::UxmlFloatAttributeDescription>(value));
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::__get_m_Elasticity() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UxmlFloatAttributeDescription, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::Init(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ve, bag, cc);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::____UnityEngine__UIElements__ScrollView__UxmlTraits()  : ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__UxmlTraits(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__UIElements__ScrollView__UxmlTraits>())) {}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_horizontalScrollerVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ScrollerVisibility (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_horizontalScrollerVisibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ca9df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_horizontalScrollerVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_horizontalScrollerVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::ScrollerVisibility)>(&::UnityEngine::UIElements::ScrollView::set_horizontalScrollerVisibility)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2ca9e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_horizontalScrollerVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ScrollerVisibility>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_verticalScrollerVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ScrollerVisibility (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_verticalScrollerVisibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2caa424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_verticalScrollerVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_verticalScrollerVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::ScrollerVisibility)>(&::UnityEngine::UIElements::ScrollView::set_verticalScrollerVisibility)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2caa42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_verticalScrollerVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ScrollerVisibility>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_showHorizontal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(bool)>(&::UnityEngine::UIElements::ScrollView::set_showHorizontal)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2caa4bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_showHorizontal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_showVertical
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(bool)>(&::UnityEngine::UIElements::ScrollView::set_showVertical)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2caa4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_showVertical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_needsHorizontal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_needsHorizontal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2ca9e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_needsHorizontal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_needsVertical
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_needsVertical)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2ca9ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_needsVertical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_isVerticalScrollDisplayed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_isVerticalScrollDisplayed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2caa5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_isVerticalScrollDisplayed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_isHorizontalScrollDisplayed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_isHorizontalScrollDisplayed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2caa6bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_isHorizontalScrollDisplayed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_scrollOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_scrollOffset)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2caa77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_scrollOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_scrollOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::ScrollView::set_scrollOffset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2caa7c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_scrollOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_horizontalPageSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(float_t)>(&::UnityEngine::UIElements::ScrollView::set_horizontalPageSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2caaab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_horizontalPageSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_verticalPageSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(float_t)>(&::UnityEngine::UIElements::ScrollView::set_verticalPageSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2caacc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_verticalPageSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_scrollableWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_scrollableWidth)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2caa4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_scrollableWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_scrollableHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_scrollableHeight)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2caa578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_scrollableHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_hasInertia
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_hasInertia)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2caaed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_hasInertia",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_scrollDecelerationRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_scrollDecelerationRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2caaee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_scrollDecelerationRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_scrollDecelerationRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(float_t)>(&::UnityEngine::UIElements::ScrollView::set_scrollDecelerationRate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2caaef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_scrollDecelerationRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_elasticity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_elasticity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2caaf00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_elasticity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_elasticity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(float_t)>(&::UnityEngine::UIElements::ScrollView::set_elasticity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2caaf08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_elasticity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_touchScrollBehavior
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_touchScrollBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2caaf18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_touchScrollBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_touchScrollBehavior
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior)>(&::UnityEngine::UIElements::ScrollView::set_touchScrollBehavior)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2caaf20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_touchScrollBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_nestedInteractionKind
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_nestedInteractionKind)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2caafb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_nestedInteractionKind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_nestedInteractionKind
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind)>(&::UnityEngine::UIElements::ScrollView::set_nestedInteractionKind)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2caafc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_nestedInteractionKind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnHorizontalScrollDragElementChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::GeometryChangedEvent)>(&::UnityEngine::UIElements::ScrollView::OnHorizontalScrollDragElementChanged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2caafc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnHorizontalScrollDragElementChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnVerticalScrollDragElementChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::GeometryChangedEvent)>(&::UnityEngine::UIElements::ScrollView::OnVerticalScrollDragElementChanged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2cab05c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnVerticalScrollDragElementChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.UpdateHorizontalSliderPageSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::UpdateHorizontalSliderPageSize)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2caaab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "UpdateHorizontalSliderPageSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.UpdateVerticalSliderPageSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::UpdateVerticalSliderPageSize)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2caaccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "UpdateVerticalSliderPageSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.UpdateContentViewTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::UpdateContentViewTransform)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x2caa848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "UpdateContentViewTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.ScrollTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::VisualElement)>(&::UnityEngine::UIElements::ScrollView::ScrollTo)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2cab0f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "ScrollTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.GetXDeltaOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::VisualElement)>(&::UnityEngine::UIElements::ScrollView::GetXDeltaOffset)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x2cab4f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "GetXDeltaOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.GetYDeltaOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::VisualElement)>(&::UnityEngine::UIElements::ScrollView::GetYDeltaOffset)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x2cab278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "GetYDeltaOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.GetDeltaDistance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::ScrollView::*)(float_t, float_t, float_t, float_t)>(&::UnityEngine::UIElements::ScrollView::GetDeltaDistance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2cab768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "GetDeltaDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_contentViewport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_contentViewport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cab7b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_contentViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_contentViewport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::VisualElement)>(&::UnityEngine::UIElements::ScrollView::set_contentViewport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cab7c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_contentViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_horizontalScroller
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Scroller (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_horizontalScroller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cab7c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_horizontalScroller",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_horizontalScroller
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::Scroller)>(&::UnityEngine::UIElements::ScrollView::set_horizontalScroller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cab7d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_horizontalScroller",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scroller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_verticalScroller
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Scroller (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_verticalScroller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cab7d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_verticalScroller",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_verticalScroller
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::Scroller)>(&::UnityEngine::UIElements::ScrollView::set_verticalScroller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cab7e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_verticalScroller",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scroller>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_contentContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_contentContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cab7e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::ScrollView),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                                  95
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cab7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::ScrollViewMode)>(&::UnityEngine::UIElements::ScrollView::_ctor)> {
  constexpr static std::size_t size = 0xa00;
  constexpr static std::size_t addrs = 0x2cab7f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ScrollViewMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.get_mode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ScrollViewMode (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::get_mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cac360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_mode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.set_mode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::ScrollViewMode)>(&::UnityEngine::UIElements::ScrollView::set_mode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2cac368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_mode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ScrollViewMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.SetScrollViewMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::ScrollViewMode)>(&::UnityEngine::UIElements::ScrollView::SetScrollViewMode)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2cac1f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "SetScrollViewMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ScrollViewMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnAttachToPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::AttachToPanelEvent)>(&::UnityEngine::UIElements::ScrollView::OnAttachToPanel)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x2cac37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnAttachToPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnDetachFromPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::DetachFromPanelEvent)>(&::UnityEngine::UIElements::ScrollView::OnDetachFromPanel)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x2cac8f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnDetachFromPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnPointerCapture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::PointerCaptureEvent)>(&::UnityEngine::UIElements::ScrollView::OnPointerCapture)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2cacd54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnPointerCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerCaptureEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnPointerCaptureOut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::PointerCaptureOutEvent)>(&::UnityEngine::UIElements::ScrollView::OnPointerCaptureOut)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2cace50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnPointerCaptureOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerCaptureOutEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnGeometryChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::GeometryChangedEvent)>(&::UnityEngine::UIElements::ScrollView::OnGeometryChanged)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2cad1dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnGeometryChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.ComputeElasticOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t, float_t, float_t, float_t, float_t)>(&::UnityEngine::UIElements::ScrollView::ComputeElasticOffset)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2cad330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "ComputeElasticOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.ComputeInitialSpringBackVelocity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::ComputeInitialSpringBackVelocity)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2cad41c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "ComputeInitialSpringBackVelocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.SpringBack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::SpringBack)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2cad518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "SpringBack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.ApplyScrollInertia
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::ApplyScrollInertia)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2cad6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "ApplyScrollInertia",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.PostPointerUpAnimation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::PostPointerUpAnimation)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2cad85c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "PostPointerUpAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnPointerDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::PointerDownEvent)>(&::UnityEngine::UIElements::ScrollView::OnPointerDown)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2cad9ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDownEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnPointerMove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::PointerMoveEvent)>(&::UnityEngine::UIElements::ScrollView::OnPointerMove)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2cadd20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnPointerMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerMoveEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnPointerCancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::PointerCancelEvent)>(&::UnityEngine::UIElements::ScrollView::OnPointerCancel)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2cae308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnPointerCancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerCancelEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnPointerUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::PointerUpEvent)>(&::UnityEngine::UIElements::ScrollView::OnPointerUp)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2cae368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnPointerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerUpEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.InitTouchScrolling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::ScrollView::InitTouchScrolling)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2cadbe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "InitTouchScrolling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.ComputeTouchScrolling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollingResult (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::ScrollView::ComputeTouchScrolling)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x2cadf1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "ComputeTouchScrolling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.ApplyTouchScrolling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::ScrollView::ApplyTouchScrolling)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x2cae410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "ApplyTouchScrolling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.ReleaseScrolling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::ScrollView::*)(int32_t, ::UnityEngine::UIElements::IEventHandler)>(&::UnityEngine::UIElements::ScrollView::ReleaseScrolling)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x2cacf10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "ReleaseScrolling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.AdjustScrollers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::AdjustScrollers)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2cae624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "AdjustScrollers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.UpdateScrollers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(bool, bool)>(&::UnityEngine::UIElements::ScrollView::UpdateScrollers)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x2ca9f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "UpdateScrollers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnScrollersGeometryChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::GeometryChangedEvent)>(&::UnityEngine::UIElements::ScrollView::OnScrollersGeometryChanged)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2cae7c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnScrollersGeometryChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnScrollWheel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::WheelEvent)>(&::UnityEngine::UIElements::ScrollView::OnScrollWheel)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x2cae970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnScrollWheel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::WheelEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.OnRootCustomStyleResolved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(::UnityEngine::UIElements::CustomStyleResolvedEvent)>(&::UnityEngine::UIElements::ScrollView::OnRootCustomStyleResolved)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2caecfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnRootCustomStyleResolved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CustomStyleResolvedEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.ReadSingleLineHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)()>(&::UnityEngine::UIElements::ScrollView::ReadSingleLineHeight)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2cac7e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "ReadSingleLineHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.__ctor_b__103_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(float_t)>(&::UnityEngine::UIElements::ScrollView::__ctor_b__103_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2caef38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "<.ctor>b__103_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ScrollView.__ctor_b__103_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ScrollView::*)(float_t)>(&::UnityEngine::UIElements::ScrollView::__ctor_b__103_1)> {
  constexpr static std::size_t size = 0x1030;
  constexpr static std::size_t addrs = 0x2caef68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "<.ctor>b__103_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_HorizontalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ScrollerVisibility, 0x3b0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::ScrollerVisibility>(value));
}
constexpr ::UnityEngine::UIElements::ScrollerVisibility ::UnityEngine::UIElements::ScrollView::__get_m_HorizontalScrollerVisibility() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ScrollerVisibility, 0x3b0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_VerticalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ScrollerVisibility, 0x3b4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::ScrollerVisibility>(value));
}
constexpr ::UnityEngine::UIElements::ScrollerVisibility ::UnityEngine::UIElements::ScrollView::__get_m_VerticalScrollerVisibility() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ScrollerVisibility, 0x3b4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_AttachedRootVisualContainer(::UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement, 0x3b8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::VisualElement>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement ::UnityEngine::UIElements::ScrollView::__get_m_AttachedRootVisualContainer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement, 0x3b8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_SingleLineHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::UIElements::ScrollView::__get_m_SingleLineHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_HorizontalPageSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::UIElements::ScrollView::__get_m_HorizontalPageSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_VerticalPageSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::UIElements::ScrollView::__get_m_VerticalPageSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::UIElements::ScrollView::__set_k_DefaultScrollDecelerationRate(float_t value)  {
::cordl_internals::setStaticField<float_t, "k_DefaultScrollDecelerationRate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>(std::forward<float_t>(value));
}
 float_t ::UnityEngine::UIElements::ScrollView::__get_k_DefaultScrollDecelerationRate()  {
return ::cordl_internals::getStaticField<float_t, "k_DefaultScrollDecelerationRate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>();
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_ScrollDecelerationRate(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3cc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::UIElements::ScrollView::__get_m_ScrollDecelerationRate() const {
return ::cordl_internals::getInstanceField<float_t, 0x3cc>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::UIElements::ScrollView::__set_k_DefaultElasticity(float_t value)  {
::cordl_internals::setStaticField<float_t, "k_DefaultElasticity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>(std::forward<float_t>(value));
}
 float_t ::UnityEngine::UIElements::ScrollView::__get_k_DefaultElasticity()  {
return ::cordl_internals::getStaticField<float_t, "k_DefaultElasticity", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>();
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_Elasticity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3d0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::UIElements::ScrollView::__get_m_Elasticity() const {
return ::cordl_internals::getInstanceField<float_t, 0x3d0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_TouchScrollBehavior(::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior, 0x3d4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior>(value));
}
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior ::UnityEngine::UIElements::ScrollView::__get_m_TouchScrollBehavior() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior, 0x3d4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_NestedInteractionKind(::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind, 0x3d8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind>(value));
}
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind ::UnityEngine::UIElements::ScrollView::__get_m_NestedInteractionKind() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind, 0x3d8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set__contentViewport_k__BackingField(::UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement, 0x3e0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::VisualElement>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement ::UnityEngine::UIElements::ScrollView::__get__contentViewport_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement, 0x3e0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set__horizontalScroller_k__BackingField(::UnityEngine::UIElements::Scroller value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::Scroller, 0x3e8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::Scroller>(value));
}
constexpr ::UnityEngine::UIElements::Scroller ::UnityEngine::UIElements::ScrollView::__get__horizontalScroller_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::Scroller, 0x3e8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set__verticalScroller_k__BackingField(::UnityEngine::UIElements::Scroller value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::Scroller, 0x3f0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::Scroller>(value));
}
constexpr ::UnityEngine::UIElements::Scroller ::UnityEngine::UIElements::ScrollView::__get__verticalScroller_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::Scroller, 0x3f0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_ContentContainer(::UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement, 0x3f8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::VisualElement>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement ::UnityEngine::UIElements::ScrollView::__get_m_ContentContainer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement, 0x3f8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_ContentAndVerticalScrollContainer(::UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement, 0x400>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::VisualElement>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement ::UnityEngine::UIElements::ScrollView::__get_m_ContentAndVerticalScrollContainer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement, 0x400>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::UIElements::ScrollView::__set_ussClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::ScrollView::__get_ussClassName()  {
return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>();
}
 void ::UnityEngine::UIElements::ScrollView::__set_viewportUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "viewportUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::ScrollView::__get_viewportUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "viewportUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>();
}
 void ::UnityEngine::UIElements::ScrollView::__set_contentAndVerticalScrollUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "contentAndVerticalScrollUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::ScrollView::__get_contentAndVerticalScrollUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "contentAndVerticalScrollUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>();
}
 void ::UnityEngine::UIElements::ScrollView::__set_contentUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "contentUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::ScrollView::__get_contentUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "contentUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>();
}
 void ::UnityEngine::UIElements::ScrollView::__set_hScrollerUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "hScrollerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::ScrollView::__get_hScrollerUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "hScrollerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>();
}
 void ::UnityEngine::UIElements::ScrollView::__set_vScrollerUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "vScrollerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::ScrollView::__get_vScrollerUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "vScrollerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>();
}
 void ::UnityEngine::UIElements::ScrollView::__set_horizontalVariantUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "horizontalVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::ScrollView::__get_horizontalVariantUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "horizontalVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>();
}
 void ::UnityEngine::UIElements::ScrollView::__set_verticalVariantUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "verticalVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::ScrollView::__get_verticalVariantUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "verticalVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>();
}
 void ::UnityEngine::UIElements::ScrollView::__set_verticalHorizontalVariantUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "verticalHorizontalVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::ScrollView::__get_verticalHorizontalVariantUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "verticalHorizontalVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>();
}
 void ::UnityEngine::UIElements::ScrollView::__set_scrollVariantUssClassName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "scrollVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::UIElements::ScrollView::__get_scrollVariantUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "scrollVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get>();
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_Mode(::UnityEngine::UIElements::ScrollViewMode value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ScrollViewMode, 0x408>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::ScrollViewMode>(value));
}
constexpr ::UnityEngine::UIElements::ScrollViewMode ::UnityEngine::UIElements::ScrollView::__get_m_Mode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ScrollViewMode, 0x408>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_ScrollingPointerId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::ScrollView::__get_m_ScrollingPointerId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_StartPosition(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x410>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::UnityEngine::UIElements::ScrollView::__get_m_StartPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x410>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_PointerStartPosition(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x418>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::UnityEngine::UIElements::ScrollView::__get_m_PointerStartPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x418>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_Velocity(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x420>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::UnityEngine::UIElements::ScrollView::__get_m_Velocity() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x420>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_SpringBackVelocity(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x428>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::UnityEngine::UIElements::ScrollView::__get_m_SpringBackVelocity() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x428>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_LowBounds(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x430>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::UnityEngine::UIElements::ScrollView::__get_m_LowBounds() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x430>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_HighBounds(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x438>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::UnityEngine::UIElements::ScrollView::__get_m_HighBounds() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x438>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_LastVelocityLerpTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x440>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::UIElements::ScrollView::__get_m_LastVelocityLerpTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x440>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_StartedMoving(bool value)  {
::cordl_internals::setInstanceField<bool, 0x444>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::ScrollView::__get_m_StartedMoving() const {
return ::cordl_internals::getInstanceField<bool, 0x444>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_TouchStoppedVelocity(bool value)  {
::cordl_internals::setInstanceField<bool, 0x445>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UIElements::ScrollView::__get_m_TouchStoppedVelocity() const {
return ::cordl_internals::getInstanceField<bool, 0x445>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_CapturedTarget(::UnityEngine::UIElements::VisualElement value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement, 0x448>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::VisualElement>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement ::UnityEngine::UIElements::ScrollView::__get_m_CapturedTarget() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement, 0x448>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_CapturedTargetPointerMoveCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent> value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent>, 0x450>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent>>(value));
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent> ::UnityEngine::UIElements::ScrollView::__get_m_CapturedTargetPointerMoveCallback() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent>, 0x450>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_CapturedTargetPointerUpCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent> value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent>, 0x458>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent>>(value));
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent> ::UnityEngine::UIElements::ScrollView::__get_m_CapturedTargetPointerUpCallback() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent>, 0x458>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::ScrollView::__set_m_PostPointerUpAnimation(::UnityEngine::UIElements::IVisualElementScheduledItem value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::IVisualElementScheduledItem, 0x460>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::IVisualElementScheduledItem>(value));
}
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem ::UnityEngine::UIElements::ScrollView::__get_m_PostPointerUpAnimation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::IVisualElementScheduledItem, 0x460>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::UIElements::ScrollerVisibility ::UnityEngine::UIElements::ScrollView::get_horizontalScrollerVisibility()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_horizontalScrollerVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ScrollerVisibility, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::ScrollView::set_horizontalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_horizontalScrollerVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ScrollerVisibility>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::UIElements::ScrollerVisibility ::UnityEngine::UIElements::ScrollView::get_verticalScrollerVisibility()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_verticalScrollerVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ScrollerVisibility, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::ScrollView::set_verticalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_verticalScrollerVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ScrollerVisibility>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::UIElements::ScrollView::set_showHorizontal(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_showHorizontal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::UIElements::ScrollView::set_showVertical(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_showVertical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool ::UnityEngine::UIElements::ScrollView::get_needsHorizontal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_needsHorizontal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::UIElements::ScrollView::get_needsVertical()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_needsVertical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::UIElements::ScrollView::get_isVerticalScrollDisplayed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_isVerticalScrollDisplayed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::UIElements::ScrollView::get_isHorizontalScrollDisplayed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_isHorizontalScrollDisplayed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Vector2 ::UnityEngine::UIElements::ScrollView::get_scrollOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_scrollOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::ScrollView::set_scrollOffset(::UnityEngine::Vector2 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_scrollOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::UIElements::ScrollView::set_horizontalPageSize(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_horizontalPageSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::UIElements::ScrollView::set_verticalPageSize(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_verticalPageSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::UnityEngine::UIElements::ScrollView::get_scrollableWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_scrollableWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::UnityEngine::UIElements::ScrollView::get_scrollableHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_scrollableHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::UnityEngine::UIElements::ScrollView::get_hasInertia()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_hasInertia",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::UnityEngine::UIElements::ScrollView::get_scrollDecelerationRate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_scrollDecelerationRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::ScrollView::set_scrollDecelerationRate(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_scrollDecelerationRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t ::UnityEngine::UIElements::ScrollView::get_elasticity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_elasticity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::ScrollView::set_elasticity(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_elasticity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior ::UnityEngine::UIElements::ScrollView::get_touchScrollBehavior()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_touchScrollBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::ScrollView::set_touchScrollBehavior(::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_touchScrollBehavior",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind ::UnityEngine::UIElements::ScrollView::get_nestedInteractionKind()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_nestedInteractionKind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::ScrollView::set_nestedInteractionKind(::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_nestedInteractionKind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::UIElements::ScrollView::OnHorizontalScrollDragElementChanged(::UnityEngine::UIElements::GeometryChangedEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnHorizontalScrollDragElementChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::ScrollView::OnVerticalScrollDragElementChanged(::UnityEngine::UIElements::GeometryChangedEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnVerticalScrollDragElementChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::ScrollView::UpdateHorizontalSliderPageSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "UpdateHorizontalSliderPageSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::ScrollView::UpdateVerticalSliderPageSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "UpdateVerticalSliderPageSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::ScrollView::UpdateContentViewTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "UpdateContentViewTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::ScrollView::ScrollTo(::UnityEngine::UIElements::VisualElement child)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "ScrollTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, child);
}
 float_t ::UnityEngine::UIElements::ScrollView::GetXDeltaOffset(::UnityEngine::UIElements::VisualElement child)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "GetXDeltaOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, child);
}
 float_t ::UnityEngine::UIElements::ScrollView::GetYDeltaOffset(::UnityEngine::UIElements::VisualElement child)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "GetYDeltaOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, child);
}
 float_t ::UnityEngine::UIElements::ScrollView::GetDeltaDistance(float_t viewMin, float_t viewMax, float_t childBoundaryMin, float_t childBoundaryMax)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "GetDeltaDistance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, viewMin, viewMax, childBoundaryMin, childBoundaryMax);
}
 ::UnityEngine::UIElements::VisualElement ::UnityEngine::UIElements::ScrollView::get_contentViewport()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_contentViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::ScrollView::set_contentViewport(::UnityEngine::UIElements::VisualElement value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_contentViewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::UIElements::Scroller ::UnityEngine::UIElements::ScrollView::get_horizontalScroller()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_horizontalScroller",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Scroller, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::ScrollView::set_horizontalScroller(::UnityEngine::UIElements::Scroller value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_horizontalScroller",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scroller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::UIElements::Scroller ::UnityEngine::UIElements::ScrollView::get_verticalScroller()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_verticalScroller",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Scroller, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::ScrollView::set_verticalScroller(::UnityEngine::UIElements::Scroller value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_verticalScroller",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Scroller>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::UIElements::VisualElement ::UnityEngine::UIElements::ScrollView::get_contentContainer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_contentContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::ScrollView::ScrollView()  : ::UnityEngine::UIElements::VisualElement(THROW_UNLESS(::il2cpp_utils::New<ScrollView>())) {}
 void ::UnityEngine::UIElements::ScrollView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "scrollViewMode", ty: "::UnityEngine::UIElements::ScrollViewMode", modifiers: "", def_value: None }]
 ::UnityEngine::UIElements::ScrollView::ScrollView(::UnityEngine::UIElements::ScrollViewMode scrollViewMode)  : ::UnityEngine::UIElements::VisualElement(THROW_UNLESS(::il2cpp_utils::New<ScrollView>(scrollViewMode))) {}
 void ::UnityEngine::UIElements::ScrollView::_ctor(::UnityEngine::UIElements::ScrollViewMode scrollViewMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ScrollViewMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, scrollViewMode);
}
 ::UnityEngine::UIElements::ScrollViewMode ::UnityEngine::UIElements::ScrollView::get_mode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "get_mode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ScrollViewMode, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::ScrollView::set_mode(::UnityEngine::UIElements::ScrollViewMode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "set_mode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ScrollViewMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::UIElements::ScrollView::SetScrollViewMode(::UnityEngine::UIElements::ScrollViewMode mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "SetScrollViewMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ScrollViewMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mode);
}
 void ::UnityEngine::UIElements::ScrollView::OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnAttachToPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::ScrollView::OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnDetachFromPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::ScrollView::OnPointerCapture(::UnityEngine::UIElements::PointerCaptureEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnPointerCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerCaptureEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::ScrollView::OnPointerCaptureOut(::UnityEngine::UIElements::PointerCaptureOutEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnPointerCaptureOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerCaptureOutEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::ScrollView::OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnGeometryChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 float_t ::UnityEngine::UIElements::ScrollView::ComputeElasticOffset(float_t deltaPointer, float_t initialScrollOffset, float_t lowLimit, float_t hardLowLimit, float_t highLimit, float_t hardHighLimit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "ComputeElasticOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, deltaPointer, initialScrollOffset, lowLimit, hardLowLimit, highLimit, hardHighLimit);
}
 void ::UnityEngine::UIElements::ScrollView::ComputeInitialSpringBackVelocity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "ComputeInitialSpringBackVelocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::ScrollView::SpringBack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "SpringBack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::ScrollView::ApplyScrollInertia()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "ApplyScrollInertia",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::ScrollView::PostPointerUpAnimation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "PostPointerUpAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::ScrollView::OnPointerDown(::UnityEngine::UIElements::PointerDownEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDownEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::ScrollView::OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnPointerMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerMoveEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::ScrollView::OnPointerCancel(::UnityEngine::UIElements::PointerCancelEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnPointerCancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerCancelEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::ScrollView::OnPointerUp(::UnityEngine::UIElements::PointerUpEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnPointerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerUpEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::ScrollView::InitTouchScrolling(::UnityEngine::Vector2 position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "InitTouchScrolling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, position);
}
 ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollingResult ::UnityEngine::UIElements::ScrollView::ComputeTouchScrolling(::UnityEngine::Vector2 position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "ComputeTouchScrolling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollingResult, false>(const_cast<void*>(instance), ___internal_method, position);
}
 bool ::UnityEngine::UIElements::ScrollView::ApplyTouchScrolling(::UnityEngine::Vector2 newScrollOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "ApplyTouchScrolling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, newScrollOffset);
}
 bool ::UnityEngine::UIElements::ScrollView::ReleaseScrolling(int32_t pointerId, ::UnityEngine::UIElements::IEventHandler target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "ReleaseScrolling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IEventHandler>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pointerId, target);
}
 void ::UnityEngine::UIElements::ScrollView::AdjustScrollers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "AdjustScrollers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::ScrollView::UpdateScrollers(bool displayHorizontal, bool displayVertical)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "UpdateScrollers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, displayHorizontal, displayVertical);
}
 void ::UnityEngine::UIElements::ScrollView::OnScrollersGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnScrollersGeometryChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::ScrollView::OnScrollWheel(::UnityEngine::UIElements::WheelEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnScrollWheel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::WheelEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::ScrollView::OnRootCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "OnRootCustomStyleResolved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CustomStyleResolvedEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, evt);
}
 void ::UnityEngine::UIElements::ScrollView::ReadSingleLineHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "ReadSingleLineHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::ScrollView::__ctor_b__103_0(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "<.ctor>b__103_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::UIElements::ScrollView::__ctor_b__103_1(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ScrollView>::get(),
                            "<.ctor>b__103_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
//  Writing Method size for method: ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlFactory._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlFactory::*)()>(&::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2caff98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlFactory::____UnityEngine__UIElements__ScrollView__UxmlFactory()  : ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ScrollView,::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits>(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__UIElements__ScrollView__UxmlFactory>())) {}
 void ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlFactory>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior  ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior::Unrestricted{0};
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior  ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior::Elastic{1};
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior  ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior::Clamped{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind::____UnityEngine__UIElements__ScrollView__NestedInteractionKind(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind  ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind::Default{0};
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind  ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind::StopScrolling{1};
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind  ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind::ForwardScrolling{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollingResult::____UnityEngine__UIElements__ScrollView__TouchScrollingResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollingResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollingResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollingResult  ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollingResult::Apply{0};
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollingResult  ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollingResult::Forward{1};
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollingResult  ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollingResult::Block{2};
} // end anonymous namespace
