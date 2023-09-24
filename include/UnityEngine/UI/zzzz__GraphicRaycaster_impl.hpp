#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_impl.hpp"
#include "UnityEngine/UI/zzzz__GraphicRaycaster_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__GraphicRaycaster_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects::UnityEngine__UI__GraphicRaycaster__BlockingObjects(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects  UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects::None{0};
constexpr UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects  UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects::TwoD{1};
constexpr UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects  UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects::ThreeD{2};
constexpr UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects  UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects::All{3};
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c::*)()>(&UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2be7778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c._Raycast_b__27_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c::*)(UnityEngine::UI::Graphic, UnityEngine::UI::Graphic)>(&UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c::_Raycast_b__27_0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2be7780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c>::get(),
                            "<Raycast>b__27_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Graphic>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Graphic>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c::__set___9(UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c value)  {
::cordl_internals::setStaticField<UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c>::get>(std::forward<UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c>(value));
}
 UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c::__get___9()  {
return ::cordl_internals::getStaticField<UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c>::get>();
}
 void UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c::__set___9__27_0(System::Comparison_1<UnityEngine::UI::Graphic> value)  {
::cordl_internals::setStaticField<System::Comparison_1<UnityEngine::UI::Graphic>, "<>9__27_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c>::get>(std::forward<System::Comparison_1<UnityEngine::UI::Graphic>>(value));
}
 System::Comparison_1<UnityEngine::UI::Graphic> UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c::__get___9__27_0()  {
return ::cordl_internals::getStaticField<System::Comparison_1<UnityEngine::UI::Graphic>, "<>9__27_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c>::get>();
}
 UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c::New_ctor()  {
UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c>())};
return o;
}
 void UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c::_Raycast_b__27_0(UnityEngine::UI::Graphic g1, UnityEngine::UI::Graphic g2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::UnityEngine__UI__GraphicRaycaster____c>::get(),
                            "<Raycast>b__27_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Graphic>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Graphic>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, g1, g2);
}
//  Writing Method size for method: UnityEngine::UI::GraphicRaycaster.get_sortOrderPriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UI::GraphicRaycaster::*)()>(&UnityEngine::UI::GraphicRaycaster::get_sortOrderPriority)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2be6120;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::GraphicRaycaster),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GraphicRaycaster.get_renderOrderPriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UI::GraphicRaycaster::*)()>(&UnityEngine::UI::GraphicRaycaster::get_renderOrderPriority)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2be61fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::GraphicRaycaster),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GraphicRaycaster.get_ignoreReversedGraphics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::GraphicRaycaster::*)()>(&UnityEngine::UI::GraphicRaycaster::get_ignoreReversedGraphics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2be6250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            "get_ignoreReversedGraphics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GraphicRaycaster.set_ignoreReversedGraphics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GraphicRaycaster::*)(bool)>(&UnityEngine::UI::GraphicRaycaster::set_ignoreReversedGraphics)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2be6258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            "set_ignoreReversedGraphics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GraphicRaycaster.get_blockingObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects (UnityEngine::UI::GraphicRaycaster::*)()>(&UnityEngine::UI::GraphicRaycaster::get_blockingObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2be6264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            "get_blockingObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GraphicRaycaster.set_blockingObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GraphicRaycaster::*)(UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects)>(&UnityEngine::UI::GraphicRaycaster::set_blockingObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2be626c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            "set_blockingObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GraphicRaycaster.get_blockingMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::LayerMask (UnityEngine::UI::GraphicRaycaster::*)()>(&UnityEngine::UI::GraphicRaycaster::get_blockingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2be6274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            "get_blockingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GraphicRaycaster.set_blockingMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GraphicRaycaster::*)(UnityEngine::LayerMask)>(&UnityEngine::UI::GraphicRaycaster::set_blockingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2be627c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            "set_blockingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LayerMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GraphicRaycaster._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GraphicRaycaster::*)()>(&UnityEngine::UI::GraphicRaycaster::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2be6284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GraphicRaycaster.get_canvas
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Canvas (UnityEngine::UI::GraphicRaycaster::*)()>(&UnityEngine::UI::GraphicRaycaster::get_canvas)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2be6168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            "get_canvas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GraphicRaycaster.Raycast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GraphicRaycaster::*)(UnityEngine::EventSystems::PointerEventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>)>(&UnityEngine::UI::GraphicRaycaster::Raycast)> {
  constexpr static std::size_t size = 0xc7c;
  constexpr static std::size_t addrs = 0x2be6318;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::GraphicRaycaster),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GraphicRaycaster.get_eventCamera
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Camera (UnityEngine::UI::GraphicRaycaster::*)()>(&UnityEngine::UI::GraphicRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2be75c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::GraphicRaycaster),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::GraphicRaycaster.Raycast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Canvas, UnityEngine::Camera, UnityEngine::Vector2, System::Collections::Generic::IList_1<UnityEngine::UI::Graphic>, System::Collections::Generic::List_1<UnityEngine::UI::Graphic>)>(&UnityEngine::UI::GraphicRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x2be7050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            "Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Canvas>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::UI::Graphic>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::UI::Graphic>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UI::GraphicRaycaster::__set_m_IgnoreReversedGraphics(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::GraphicRaycaster::__get_m_IgnoreReversedGraphics() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::GraphicRaycaster::__set_m_BlockingObjects(UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects>(value));
}
constexpr UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects UnityEngine::UI::GraphicRaycaster::__get_m_BlockingObjects() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::GraphicRaycaster::__set_m_BlockingMask(UnityEngine::LayerMask value)  {
::cordl_internals::setInstanceField<UnityEngine::LayerMask, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::LayerMask>(value));
}
constexpr UnityEngine::LayerMask UnityEngine::UI::GraphicRaycaster::__get_m_BlockingMask() const {
return ::cordl_internals::getInstanceField<UnityEngine::LayerMask, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::GraphicRaycaster::__set_m_Canvas(UnityEngine::Canvas value)  {
::cordl_internals::setInstanceField<UnityEngine::Canvas, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Canvas>(value));
}
constexpr UnityEngine::Canvas UnityEngine::UI::GraphicRaycaster::__get_m_Canvas() const {
return ::cordl_internals::getInstanceField<UnityEngine::Canvas, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::GraphicRaycaster::__set_m_RaycastResults(System::Collections::Generic::List_1<UnityEngine::UI::Graphic> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::UI::Graphic>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::UI::Graphic>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::UI::Graphic> UnityEngine::UI::GraphicRaycaster::__get_m_RaycastResults() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::UI::Graphic>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UI::GraphicRaycaster::__set_s_SortedGraphics(System::Collections::Generic::List_1<UnityEngine::UI::Graphic> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::List_1<UnityEngine::UI::Graphic>, "s_SortedGraphics", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get>(std::forward<System::Collections::Generic::List_1<UnityEngine::UI::Graphic>>(value));
}
 System::Collections::Generic::List_1<UnityEngine::UI::Graphic> UnityEngine::UI::GraphicRaycaster::__get_s_SortedGraphics()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::List_1<UnityEngine::UI::Graphic>, "s_SortedGraphics", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get>();
}
 int32_t UnityEngine::UI::GraphicRaycaster::get_sortOrderPriority()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            "get_sortOrderPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::UI::GraphicRaycaster::get_renderOrderPriority()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            "get_renderOrderPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UI::GraphicRaycaster::get_ignoreReversedGraphics()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            "get_ignoreReversedGraphics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::GraphicRaycaster::set_ignoreReversedGraphics(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            "set_ignoreReversedGraphics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects UnityEngine::UI::GraphicRaycaster::get_blockingObjects()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            "get_blockingObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::GraphicRaycaster::set_blockingObjects(UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            "set_blockingObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__GraphicRaycaster__BlockingObjects>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::LayerMask UnityEngine::UI::GraphicRaycaster::get_blockingMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            "get_blockingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::LayerMask, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::GraphicRaycaster::set_blockingMask(UnityEngine::LayerMask value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            "set_blockingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LayerMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::GraphicRaycaster UnityEngine::UI::GraphicRaycaster::New_ctor()  {
UnityEngine::UI::GraphicRaycaster o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UI::GraphicRaycaster>())};
return o;
}
 void UnityEngine::UI::GraphicRaycaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Canvas UnityEngine::UI::GraphicRaycaster::get_canvas()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            "get_canvas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Canvas, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::GraphicRaycaster::Raycast(UnityEngine::EventSystems::PointerEventData eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult> resultAppendList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            "Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData, resultAppendList);
}
 UnityEngine::Camera UnityEngine::UI::GraphicRaycaster::get_eventCamera()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            "get_eventCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Camera, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::GraphicRaycaster::Raycast(UnityEngine::Canvas canvas, UnityEngine::Camera eventCamera, UnityEngine::Vector2 pointerPosition, System::Collections::Generic::IList_1<UnityEngine::UI::Graphic> foundGraphics, System::Collections::Generic::List_1<UnityEngine::UI::Graphic> results)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::GraphicRaycaster>::get(),
                            "Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Canvas>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IList_1<UnityEngine::UI::Graphic>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::UI::Graphic>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, canvas, eventCamera, pointerPosition, foundGraphics, results);
}
