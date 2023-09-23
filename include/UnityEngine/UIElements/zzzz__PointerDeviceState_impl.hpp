#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDeviceState_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag::UnityEngine__UIElements__PointerDeviceState__LocationFlag(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag  UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag::None{0};
constexpr UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag  UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag::OutsidePanel{1};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation.get_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::get_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cd3324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation>::get(),
                            "get_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation.set_Position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::*)(UnityEngine::Vector2)>(&UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::set_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cd332c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation>::get(),
                            "set_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation.get_Panel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::IPanel (UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::get_Panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cd3334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation>::get(),
                            "get_Panel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation.set_Panel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::*)(UnityEngine::UIElements::IPanel)>(&UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::set_Panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cd333c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation>::get(),
                            "set_Panel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation.get_Flags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag (UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::*)()>(&UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cd3344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation>::get(),
                            "get_Flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation.set_Flags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::*)(UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag)>(&UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::set_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cd334c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation>::get(),
                            "set_Flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation.SetLocation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::*)(UnityEngine::Vector2, UnityEngine::UIElements::IPanel)>(&UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::SetLocation)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2cd2adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation>::get(),
                            "SetLocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_Position_k__BackingField", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Panel_k__BackingField", ty: "UnityEngine::UIElements::IPanel", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_Flags_k__BackingField", ty: "UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::UnityEngine__UIElements__PointerDeviceState__PointerLocation(UnityEngine::Vector2 _Position_k__BackingField, UnityEngine::UIElements::IPanel _Panel_k__BackingField, UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag _Flags_k__BackingField) noexcept : ::bs_hook::ValueTypeWrapper() {this->_Position_k__BackingField = _Position_k__BackingField;
this->_Panel_k__BackingField = _Panel_k__BackingField;
this->_Flags_k__BackingField = _Flags_k__BackingField;
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::__set__Position_k__BackingField(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x0>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::__get__Position_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::__set__Panel_k__BackingField(UnityEngine::UIElements::IPanel value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::IPanel, 0x8>(this->__instance, std::forward<UnityEngine::UIElements::IPanel>(value));
}
constexpr UnityEngine::UIElements::IPanel UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::__get__Panel_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::IPanel, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::__set__Flags_k__BackingField(UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag value)  {
::cordl_internals::setInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag, 0x10>(this->__instance, std::forward<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag>(value));
}
constexpr UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::__get__Flags_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag, 0x10>(this->__instance);
}
 UnityEngine::Vector2 UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::get_Position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation>::get(),
                            "get_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::set_Position(UnityEngine::Vector2 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation>::get(),
                            "set_Position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::UIElements::IPanel UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::get_Panel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation>::get(),
                            "get_Panel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::IPanel, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::set_Panel(UnityEngine::UIElements::IPanel value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation>::get(),
                            "set_Panel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::get_Flags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation>::get(),
                            "get_Flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::set_Flags(UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation>::get(),
                            "set_Flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation::SetLocation(UnityEngine::Vector2 position, UnityEngine::UIElements::IPanel panel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation>::get(),
                            "SetLocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, position, panel);
}
//  Writing Method size for method: UnityEngine::UIElements::PointerDeviceState.RemovePanelData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UIElements::IPanel)>(&UnityEngine::UIElements::PointerDeviceState::RemovePanelData)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2cd2900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "RemovePanelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PointerDeviceState.SavePointerPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, UnityEngine::Vector2, UnityEngine::UIElements::IPanel, UnityEngine::UIElements::ContextType)>(&UnityEngine::UIElements::PointerDeviceState::SavePointerPosition)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2cd2be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "SavePointerPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ContextType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PointerDeviceState.PressButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t)>(&UnityEngine::UIElements::PointerDeviceState::PressButton)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2cd2c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "PressButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PointerDeviceState.ReleaseButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t)>(&UnityEngine::UIElements::PointerDeviceState::ReleaseButton)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2cd2d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "ReleaseButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PointerDeviceState.ReleaseAllButtons
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&UnityEngine::UIElements::PointerDeviceState::ReleaseAllButtons)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2cd2e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "ReleaseAllButtons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PointerDeviceState.GetPointerPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(int32_t, UnityEngine::UIElements::ContextType)>(&UnityEngine::UIElements::PointerDeviceState::GetPointerPosition)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2cd1e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "GetPointerPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ContextType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PointerDeviceState.GetPanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::IPanel (*)(int32_t, UnityEngine::UIElements::ContextType)>(&UnityEngine::UIElements::PointerDeviceState::GetPanel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2cd2ec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "GetPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ContextType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PointerDeviceState.HasFlagFast
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag, UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag)>(&UnityEngine::UIElements::PointerDeviceState::HasFlagFast)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cd2f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "HasFlagFast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PointerDeviceState.HasLocationFlag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, UnityEngine::UIElements::ContextType, UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag)>(&UnityEngine::UIElements::PointerDeviceState::HasLocationFlag)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2cd2f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "HasLocationFlag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ContextType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PointerDeviceState.GetPressedButtons
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&UnityEngine::UIElements::PointerDeviceState::GetPressedButtons)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2cd2fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "GetPressedButtons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PointerDeviceState.HasAdditionalPressedButtons
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, int32_t)>(&UnityEngine::UIElements::PointerDeviceState::HasAdditionalPressedButtons)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2cd3060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "HasAdditionalPressedButtons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PointerDeviceState.SetPlayerPanelWithSoftPointerCapture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, UnityEngine::UIElements::IPanel)>(&UnityEngine::UIElements::PointerDeviceState::SetPlayerPanelWithSoftPointerCapture)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2cd30f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "SetPlayerPanelWithSoftPointerCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::PointerDeviceState.GetPlayerPanelWithSoftPointerCapture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::IPanel (*)(int32_t)>(&UnityEngine::UIElements::PointerDeviceState::GetPlayerPanelWithSoftPointerCapture)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2cd31a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "GetPlayerPanelWithSoftPointerCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::UIElements::PointerDeviceState::__set_s_PlayerPointerLocations(::ArrayW<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation> value)  {
::cordl_internals::setStaticField<::ArrayW<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation>, "s_PlayerPointerLocations", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get>(std::forward<::ArrayW<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation>>(value));
}
 ::ArrayW<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation> UnityEngine::UIElements::PointerDeviceState::__get_s_PlayerPointerLocations()  {
return ::cordl_internals::getStaticField<::ArrayW<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__PointerLocation>, "s_PlayerPointerLocations", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get>();
}
 void UnityEngine::UIElements::PointerDeviceState::__set_s_PressedButtons(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_PressedButtons", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> UnityEngine::UIElements::PointerDeviceState::__get_s_PressedButtons()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_PressedButtons", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get>();
}
 void UnityEngine::UIElements::PointerDeviceState::__set_s_PlayerPanelWithSoftPointerCapture(::ArrayW<UnityEngine::UIElements::IPanel> value)  {
::cordl_internals::setStaticField<::ArrayW<UnityEngine::UIElements::IPanel>, "s_PlayerPanelWithSoftPointerCapture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get>(std::forward<::ArrayW<UnityEngine::UIElements::IPanel>>(value));
}
 ::ArrayW<UnityEngine::UIElements::IPanel> UnityEngine::UIElements::PointerDeviceState::__get_s_PlayerPanelWithSoftPointerCapture()  {
return ::cordl_internals::getStaticField<::ArrayW<UnityEngine::UIElements::IPanel>, "s_PlayerPanelWithSoftPointerCapture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get>();
}
 void UnityEngine::UIElements::PointerDeviceState::RemovePanelData(UnityEngine::UIElements::IPanel panel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "RemovePanelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, panel);
}
 void UnityEngine::UIElements::PointerDeviceState::SavePointerPosition(int32_t pointerId, UnityEngine::Vector2 position, UnityEngine::UIElements::IPanel panel, UnityEngine::UIElements::ContextType contextType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "SavePointerPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ContextType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pointerId, position, panel, contextType);
}
 void UnityEngine::UIElements::PointerDeviceState::PressButton(int32_t pointerId, int32_t buttonId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "PressButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pointerId, buttonId);
}
 void UnityEngine::UIElements::PointerDeviceState::ReleaseButton(int32_t pointerId, int32_t buttonId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "ReleaseButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pointerId, buttonId);
}
 void UnityEngine::UIElements::PointerDeviceState::ReleaseAllButtons(int32_t pointerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "ReleaseAllButtons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pointerId);
}
 UnityEngine::Vector2 UnityEngine::UIElements::PointerDeviceState::GetPointerPosition(int32_t pointerId, UnityEngine::UIElements::ContextType contextType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "GetPointerPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ContextType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(nullptr, ___internal_method, pointerId, contextType);
}
 UnityEngine::UIElements::IPanel UnityEngine::UIElements::PointerDeviceState::GetPanel(int32_t pointerId, UnityEngine::UIElements::ContextType contextType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "GetPanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ContextType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::IPanel, false>(nullptr, ___internal_method, pointerId, contextType);
}
 bool UnityEngine::UIElements::PointerDeviceState::HasFlagFast(UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag flagSet, UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag flag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "HasFlagFast",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, flagSet, flag);
}
 bool UnityEngine::UIElements::PointerDeviceState::HasLocationFlag(int32_t pointerId, UnityEngine::UIElements::ContextType contextType, UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag flag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "HasLocationFlag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::ContextType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UnityEngine__UIElements__PointerDeviceState__LocationFlag>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pointerId, contextType, flag);
}
 int32_t UnityEngine::UIElements::PointerDeviceState::GetPressedButtons(int32_t pointerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "GetPressedButtons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, pointerId);
}
 bool UnityEngine::UIElements::PointerDeviceState::HasAdditionalPressedButtons(int32_t pointerId, int32_t exceptButtonId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "HasAdditionalPressedButtons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pointerId, exceptButtonId);
}
 void UnityEngine::UIElements::PointerDeviceState::SetPlayerPanelWithSoftPointerCapture(int32_t pointerId, UnityEngine::UIElements::IPanel panel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "SetPlayerPanelWithSoftPointerCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::IPanel>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pointerId, panel);
}
 UnityEngine::UIElements::IPanel UnityEngine::UIElements::PointerDeviceState::GetPlayerPanelWithSoftPointerCapture(int32_t pointerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::PointerDeviceState>::get(),
                            "GetPlayerPanelWithSoftPointerCapture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::IPanel, false>(nullptr, ___internal_method, pointerId);
}
