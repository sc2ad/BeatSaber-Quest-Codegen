#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UI/zzzz__Navigation_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UI::UnityEngine__UI__Navigation__Mode::UnityEngine__UI__Navigation__Mode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UI::UnityEngine__UI__Navigation__Mode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::UnityEngine__UI__Navigation__Mode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UI::UnityEngine__UI__Navigation__Mode  UnityEngine::UI::UnityEngine__UI__Navigation__Mode::None{0};
constexpr UnityEngine::UI::UnityEngine__UI__Navigation__Mode  UnityEngine::UI::UnityEngine__UI__Navigation__Mode::Horizontal{1};
constexpr UnityEngine::UI::UnityEngine__UI__Navigation__Mode  UnityEngine::UI::UnityEngine__UI__Navigation__Mode::Vertical{2};
constexpr UnityEngine::UI::UnityEngine__UI__Navigation__Mode  UnityEngine::UI::UnityEngine__UI__Navigation__Mode::Automatic{3};
constexpr UnityEngine::UI::UnityEngine__UI__Navigation__Mode  UnityEngine::UI::UnityEngine__UI__Navigation__Mode::Explicit{4};
//  Writing Method size for method: UnityEngine::UI::Navigation.get_mode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::UnityEngine__UI__Navigation__Mode (UnityEngine::UI::Navigation::*)()>(&UnityEngine::UI::Navigation::get_mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c04e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "get_mode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Navigation.set_mode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Navigation::*)(UnityEngine::UI::UnityEngine__UI__Navigation__Mode)>(&UnityEngine::UI::Navigation::set_mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c04e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "set_mode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__Navigation__Mode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Navigation.get_wrapAround
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::Navigation::*)()>(&UnityEngine::UI::Navigation::get_wrapAround)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c04e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "get_wrapAround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Navigation.set_wrapAround
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Navigation::*)(bool)>(&UnityEngine::UI::Navigation::set_wrapAround)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c04e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "set_wrapAround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Navigation.get_selectOnUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Selectable (UnityEngine::UI::Navigation::*)()>(&UnityEngine::UI::Navigation::get_selectOnUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c04e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "get_selectOnUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Navigation.set_selectOnUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Navigation::*)(UnityEngine::UI::Selectable)>(&UnityEngine::UI::Navigation::set_selectOnUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c04e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "set_selectOnUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Selectable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Navigation.get_selectOnDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Selectable (UnityEngine::UI::Navigation::*)()>(&UnityEngine::UI::Navigation::get_selectOnDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c04ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "get_selectOnDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Navigation.set_selectOnDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Navigation::*)(UnityEngine::UI::Selectable)>(&UnityEngine::UI::Navigation::set_selectOnDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c04ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "set_selectOnDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Selectable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Navigation.get_selectOnLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Selectable (UnityEngine::UI::Navigation::*)()>(&UnityEngine::UI::Navigation::get_selectOnLeft)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c04eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "get_selectOnLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Navigation.set_selectOnLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Navigation::*)(UnityEngine::UI::Selectable)>(&UnityEngine::UI::Navigation::set_selectOnLeft)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c04eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "set_selectOnLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Selectable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Navigation.get_selectOnRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Selectable (UnityEngine::UI::Navigation::*)()>(&UnityEngine::UI::Navigation::get_selectOnRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c04ec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "get_selectOnRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Navigation.set_selectOnRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Navigation::*)(UnityEngine::UI::Selectable)>(&UnityEngine::UI::Navigation::set_selectOnRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c04ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "set_selectOnRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Selectable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Navigation.get_defaultNavigation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Navigation (*)()>(&UnityEngine::UI::Navigation::get_defaultNavigation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c04ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "get_defaultNavigation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Navigation.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::Navigation::*)(UnityEngine::UI::Navigation)>(&UnityEngine::UI::Navigation::Equals)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2c04ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Navigation>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IEquatable_1<UnityEngine::UI::Navigation>
constexpr  UnityEngine::UI::Navigation::operator System::IEquatable_1<UnityEngine::UI::Navigation>() const {
return System::IEquatable_1<UnityEngine::UI::Navigation>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Mode", ty: "UnityEngine::UI::UnityEngine__UI__Navigation__Mode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_WrapAround", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SelectOnUp", ty: "UnityEngine::UI::Selectable", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_SelectOnDown", ty: "UnityEngine::UI::Selectable", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_SelectOnLeft", ty: "UnityEngine::UI::Selectable", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_SelectOnRight", ty: "UnityEngine::UI::Selectable", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::UI::Navigation::Navigation(UnityEngine::UI::UnityEngine__UI__Navigation__Mode m_Mode, bool m_WrapAround, UnityEngine::UI::Selectable m_SelectOnUp, UnityEngine::UI::Selectable m_SelectOnDown, UnityEngine::UI::Selectable m_SelectOnLeft, UnityEngine::UI::Selectable m_SelectOnRight) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Mode = m_Mode;
this->m_WrapAround = m_WrapAround;
this->m_SelectOnUp = m_SelectOnUp;
this->m_SelectOnDown = m_SelectOnDown;
this->m_SelectOnLeft = m_SelectOnLeft;
this->m_SelectOnRight = m_SelectOnRight;
}
constexpr void UnityEngine::UI::Navigation::__set_m_Mode(UnityEngine::UI::UnityEngine__UI__Navigation__Mode value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::UnityEngine__UI__Navigation__Mode, 0x0>(this->__instance, std::forward<UnityEngine::UI::UnityEngine__UI__Navigation__Mode>(value));
}
constexpr UnityEngine::UI::UnityEngine__UI__Navigation__Mode UnityEngine::UI::Navigation::__get_m_Mode() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::UnityEngine__UI__Navigation__Mode, 0x0>(this->__instance);
}
constexpr void UnityEngine::UI::Navigation::__set_m_WrapAround(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::Navigation::__get_m_WrapAround() const {
return ::cordl_internals::getInstanceField<bool, 0x4>(this->__instance);
}
constexpr void UnityEngine::UI::Navigation::__set_m_SelectOnUp(UnityEngine::UI::Selectable value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Selectable, 0x8>(this->__instance, std::forward<UnityEngine::UI::Selectable>(value));
}
constexpr UnityEngine::UI::Selectable UnityEngine::UI::Navigation::__get_m_SelectOnUp() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Selectable, 0x8>(this->__instance);
}
constexpr void UnityEngine::UI::Navigation::__set_m_SelectOnDown(UnityEngine::UI::Selectable value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Selectable, 0x10>(this->__instance, std::forward<UnityEngine::UI::Selectable>(value));
}
constexpr UnityEngine::UI::Selectable UnityEngine::UI::Navigation::__get_m_SelectOnDown() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Selectable, 0x10>(this->__instance);
}
constexpr void UnityEngine::UI::Navigation::__set_m_SelectOnLeft(UnityEngine::UI::Selectable value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Selectable, 0x18>(this->__instance, std::forward<UnityEngine::UI::Selectable>(value));
}
constexpr UnityEngine::UI::Selectable UnityEngine::UI::Navigation::__get_m_SelectOnLeft() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Selectable, 0x18>(this->__instance);
}
constexpr void UnityEngine::UI::Navigation::__set_m_SelectOnRight(UnityEngine::UI::Selectable value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Selectable, 0x20>(this->__instance, std::forward<UnityEngine::UI::Selectable>(value));
}
constexpr UnityEngine::UI::Selectable UnityEngine::UI::Navigation::__get_m_SelectOnRight() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Selectable, 0x20>(this->__instance);
}
 UnityEngine::UI::UnityEngine__UI__Navigation__Mode UnityEngine::UI::Navigation::get_mode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "get_mode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::UnityEngine__UI__Navigation__Mode, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::UI::Navigation::set_mode(UnityEngine::UI::UnityEngine__UI__Navigation__Mode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "set_mode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__Navigation__Mode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::UI::Navigation::get_wrapAround()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "get_wrapAround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::UI::Navigation::set_wrapAround(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "set_wrapAround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::UI::Selectable UnityEngine::UI::Navigation::get_selectOnUp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "get_selectOnUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::Selectable, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::UI::Navigation::set_selectOnUp(UnityEngine::UI::Selectable value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "set_selectOnUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Selectable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::UI::Selectable UnityEngine::UI::Navigation::get_selectOnDown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "get_selectOnDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::Selectable, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::UI::Navigation::set_selectOnDown(UnityEngine::UI::Selectable value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "set_selectOnDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Selectable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::UI::Selectable UnityEngine::UI::Navigation::get_selectOnLeft()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "get_selectOnLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::Selectable, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::UI::Navigation::set_selectOnLeft(UnityEngine::UI::Selectable value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "set_selectOnLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Selectable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::UI::Selectable UnityEngine::UI::Navigation::get_selectOnRight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "get_selectOnRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::Selectable, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::UI::Navigation::set_selectOnRight(UnityEngine::UI::Selectable value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "set_selectOnRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Selectable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::UI::Navigation UnityEngine::UI::Navigation::get_defaultNavigation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "get_defaultNavigation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::Navigation, false>(nullptr, ___internal_method);
}
 bool UnityEngine::UI::Navigation::Equals(UnityEngine::UI::Navigation other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Navigation>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Navigation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
