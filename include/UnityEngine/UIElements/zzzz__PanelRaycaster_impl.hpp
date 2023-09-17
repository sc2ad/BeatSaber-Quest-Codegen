#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__PanelRaycaster_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/UIElements/zzzz__IRuntimePanelComponent_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
// Ctor Parameters [CppParam { name: "f", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "i", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__PanelRaycaster__FloatIntBits::____UnityEngine__UIElements__PanelRaycaster__FloatIntBits(float_t f, int32_t i) noexcept : ::bs_hook::ValueTypeWrapper() {this->f = f;
this->i = i;
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__PanelRaycaster__FloatIntBits::__set_f(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::UIElements::____UnityEngine__UIElements__PanelRaycaster__FloatIntBits::__get_f() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__PanelRaycaster__FloatIntBits::__set_i(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::____UnityEngine__UIElements__PanelRaycaster__FloatIntBits::__get_i() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.get_panel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IPanel (::UnityEngine::UIElements::PanelRaycaster::*)()>(&::UnityEngine::UIElements::PanelRaycaster::get_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1ba5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                            "get_panel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.set_panel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelRaycaster::*)(::UnityEngine::UIElements::IPanel)>(&::UnityEngine::UIElements::PanelRaycaster::set_panel)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2c1ba64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                            "set_panel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.RegisterCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelRaycaster::*)()>(&::UnityEngine::UIElements::PanelRaycaster::RegisterCallbacks)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2c1bba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                            "RegisterCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.UnregisterCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelRaycaster::*)()>(&::UnityEngine::UIElements::PanelRaycaster::UnregisterCallbacks)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2c1bb08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                            "UnregisterCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.OnPanelDestroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelRaycaster::*)()>(&::UnityEngine::UIElements::PanelRaycaster::OnPanelDestroyed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1bc38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                            "OnPanelDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.get_selectableGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject (::UnityEngine::UIElements::PanelRaycaster::*)()>(&::UnityEngine::UIElements::PanelRaycaster::get_selectableGameObject)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c1bc40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                            "get_selectableGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.get_sortOrderPriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::PanelRaycaster::*)()>(&::UnityEngine::UIElements::PanelRaycaster::get_sortOrderPriority)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2c1bc58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::PanelRaycaster),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.get_renderOrderPriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::PanelRaycaster::*)()>(&::UnityEngine::UIElements::PanelRaycaster::get_renderOrderPriority)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c1bc8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::PanelRaycaster),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.Raycast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelRaycaster::*)(::UnityEngine::EventSystems::PointerEventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>)>(&::UnityEngine::UIElements::PanelRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x2c1bcac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::PanelRaycaster),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.get_eventCamera
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Camera (::UnityEngine::UIElements::PanelRaycaster::*)()>(&::UnityEngine::UIElements::PanelRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1c1a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::UIElements::PanelRaycaster),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster.ConvertFloatBitsToInt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(float_t)>(&::UnityEngine::UIElements::PanelRaycaster::ConvertFloatBitsToInt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1bca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                            "ConvertFloatBitsToInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelRaycaster._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelRaycaster::*)()>(&::UnityEngine::UIElements::PanelRaycaster::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1c1a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::UIElements::IRuntimePanelComponent
constexpr  ::UnityEngine::UIElements::PanelRaycaster::operator ::UnityEngine::UIElements::IRuntimePanelComponent() const noexcept {
return ::UnityEngine::UIElements::IRuntimePanelComponent(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::PanelRaycaster::__set_m_Panel(::UnityEngine::UIElements::BaseRuntimePanel value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::BaseRuntimePanel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::BaseRuntimePanel>(value));
}
constexpr ::UnityEngine::UIElements::BaseRuntimePanel ::UnityEngine::UIElements::PanelRaycaster::__get_m_Panel() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::BaseRuntimePanel, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::UIElements::IPanel ::UnityEngine::UIElements::PanelRaycaster::get_panel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                            "get_panel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPanel, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::PanelRaycaster::set_panel(::UnityEngine::UIElements::IPanel value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                            "set_panel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::UIElements::PanelRaycaster::RegisterCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                            "RegisterCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::PanelRaycaster::UnregisterCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                            "UnregisterCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::PanelRaycaster::OnPanelDestroyed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                            "OnPanelDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::GameObject ::UnityEngine::UIElements::PanelRaycaster::get_selectableGameObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                            "get_selectableGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::UIElements::PanelRaycaster::get_sortOrderPriority()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                            "get_sortOrderPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::UIElements::PanelRaycaster::get_renderOrderPriority()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                            "get_renderOrderPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::UIElements::PanelRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult> resultAppendList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                            "Raycast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData, resultAppendList);
}
 ::UnityEngine::Camera ::UnityEngine::UIElements::PanelRaycaster::get_eventCamera()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                            "get_eventCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Camera, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::UnityEngine::UIElements::PanelRaycaster::ConvertFloatBitsToInt(float_t f)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                            "ConvertFloatBitsToInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, f);
}
// Ctor Parameters []
 ::UnityEngine::UIElements::PanelRaycaster::PanelRaycaster()  : ::UnityEngine::EventSystems::BaseRaycaster(THROW_UNLESS(::il2cpp_utils::New<PanelRaycaster>())) {}
 void ::UnityEngine::UIElements::PanelRaycaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelRaycaster>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
