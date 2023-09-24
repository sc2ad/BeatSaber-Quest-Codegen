#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NameAndParameters_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NamedValue_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlAttribute_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags  GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags::isModifyingExistingControl{1};
constexpr GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags  GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags::IsNoisy{2};
constexpr GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags  GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags::IsSynthetic{4};
constexpr GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags  GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags::IsFirstDefinedInThisLayout{8};
constexpr GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags  GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags::DontReset{16};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_name)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296cdcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cdd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_layout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_layout)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296cde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_layout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_layout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_layout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cdec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_layout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_variants
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_variants)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296cdf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_variants",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_variants
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_variants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296ce00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_variants",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_useStateFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_useStateFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296ce08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_useStateFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_useStateFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_useStateFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296ce10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_useStateFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_displayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296ce18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_displayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_displayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296ce20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_displayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_shortDisplayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_shortDisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296ce28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_shortDisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_shortDisplayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_shortDisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296ce30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_shortDisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_usages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_usages)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296ce38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_usages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_usages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString>)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_usages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296ce44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_usages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_aliases
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_aliases)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296ce4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_aliases",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_aliases
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString>)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_aliases)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296ce58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_aliases",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_parameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_parameters)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296ce60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_parameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue>)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296ce6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_processors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters> (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_processors)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296ce74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_processors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_processors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters>)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_processors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296ce80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_processors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_offset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296ce88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_offset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_offset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(uint32_t)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296ce90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_offset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_bit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_bit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296ce98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_bit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_bit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(uint32_t)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_bit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_bit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_sizeInBits
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_sizeInBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_sizeInBits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_sizeInBits
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(uint32_t)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_sizeInBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296ceb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_sizeInBits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_format
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296ceb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_format
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(UnityEngine::InputSystem::Utilities::FourCC)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::FourCC>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_flags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_flags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296ced0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_arraySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_arraySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296ced8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_arraySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_arraySize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(int32_t)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_arraySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_arraySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_defaultState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::PrimitiveValue (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_defaultState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296cee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_defaultState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_defaultState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(UnityEngine::InputSystem::Utilities::PrimitiveValue)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_defaultState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_defaultState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::PrimitiveValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_minValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::PrimitiveValue (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_minValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296cefc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_minValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_minValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(UnityEngine::InputSystem::Utilities::PrimitiveValue)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_minValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cf08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_minValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::PrimitiveValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_maxValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::PrimitiveValue (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_maxValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296cf10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_maxValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_maxValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(UnityEngine::InputSystem::Utilities::PrimitiveValue)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_maxValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cf1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_maxValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::PrimitiveValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_isModifyingExistingControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_isModifyingExistingControl)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296cf24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_isModifyingExistingControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_isModifyingExistingControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(bool)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_isModifyingExistingControl)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x296acd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_isModifyingExistingControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_isNoisy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_isNoisy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296cf30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_isNoisy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_isNoisy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(bool)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_isNoisy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x296ad0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_isNoisy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_isSynthetic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_isSynthetic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296cf3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_isSynthetic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_isSynthetic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(bool)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_isSynthetic)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x296ad44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_isSynthetic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_dontReset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_dontReset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296cf48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_dontReset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_dontReset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(bool)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_dontReset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x296ad28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_dontReset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_isFirstDefinedInThisLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_isFirstDefinedInThisLayout)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296cf54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_isFirstDefinedInThisLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.set_isFirstDefinedInThisLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(bool)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_isFirstDefinedInThisLayout)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x296acf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_isFirstDefinedInThisLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.get_isArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_isArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29685c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_isArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem.Merge
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::*)(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::Merge)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x296c574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "Merge",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}") }, CppParam { name: "_layout_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}") }, CppParam { name: "_variants_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}") }, CppParam { name: "_useStateFrom_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_displayName_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_shortDisplayName_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_usages_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_aliases_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_parameters_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_processors_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_offset_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_bit_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_sizeInBits_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_format_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: Some("{}") }, CppParam { name: "_flags_k__BackingField", ty: "GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags", modifiers: "", def_value: Some("{}") }, CppParam { name: "_arraySize_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_defaultState_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: Some("{}") }, CppParam { name: "_minValue_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: Some("{}") }, CppParam { name: "_maxValue_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem(UnityEngine::InputSystem::Utilities::InternedString _name_k__BackingField, UnityEngine::InputSystem::Utilities::InternedString _layout_k__BackingField, UnityEngine::InputSystem::Utilities::InternedString _variants_k__BackingField, ::StringW _useStateFrom_k__BackingField, ::StringW _displayName_k__BackingField, ::StringW _shortDisplayName_k__BackingField, UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> _usages_k__BackingField, UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> _aliases_k__BackingField, UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> _parameters_k__BackingField, UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters> _processors_k__BackingField, uint32_t _offset_k__BackingField, uint32_t _bit_k__BackingField, uint32_t _sizeInBits_k__BackingField, UnityEngine::InputSystem::Utilities::FourCC _format_k__BackingField, GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags _flags_k__BackingField, int32_t _arraySize_k__BackingField, UnityEngine::InputSystem::Utilities::PrimitiveValue _defaultState_k__BackingField, UnityEngine::InputSystem::Utilities::PrimitiveValue _minValue_k__BackingField, UnityEngine::InputSystem::Utilities::PrimitiveValue _maxValue_k__BackingField) noexcept : ::bs_hook::ValueTypeWrapper() {this->_name_k__BackingField = _name_k__BackingField;
this->_layout_k__BackingField = _layout_k__BackingField;
this->_variants_k__BackingField = _variants_k__BackingField;
this->_useStateFrom_k__BackingField = _useStateFrom_k__BackingField;
this->_displayName_k__BackingField = _displayName_k__BackingField;
this->_shortDisplayName_k__BackingField = _shortDisplayName_k__BackingField;
this->_usages_k__BackingField = _usages_k__BackingField;
this->_aliases_k__BackingField = _aliases_k__BackingField;
this->_parameters_k__BackingField = _parameters_k__BackingField;
this->_processors_k__BackingField = _processors_k__BackingField;
this->_offset_k__BackingField = _offset_k__BackingField;
this->_bit_k__BackingField = _bit_k__BackingField;
this->_sizeInBits_k__BackingField = _sizeInBits_k__BackingField;
this->_format_k__BackingField = _format_k__BackingField;
this->_flags_k__BackingField = _flags_k__BackingField;
this->_arraySize_k__BackingField = _arraySize_k__BackingField;
this->_defaultState_k__BackingField = _defaultState_k__BackingField;
this->_minValue_k__BackingField = _minValue_k__BackingField;
this->_maxValue_k__BackingField = _maxValue_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__set__name_k__BackingField(UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::InternedString>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__get__name_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__set__layout_k__BackingField(UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x10>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::InternedString>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__get__layout_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__set__variants_k__BackingField(UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x20>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::InternedString>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__get__variants_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x20>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__set__useStateFrom_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__get__useStateFrom_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__set__displayName_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__get__displayName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__set__shortDisplayName_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__get__shortDisplayName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__set__usages_k__BackingField(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString>, 0x48>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__get__usages_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString>, 0x48>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__set__aliases_k__BackingField(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString>, 0x58>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__get__aliases_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString>, 0x58>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__set__parameters_k__BackingField(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue>, 0x68>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__get__parameters_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue>, 0x68>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__set__processors_k__BackingField(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters>, 0x78>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__get__processors_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters>, 0x78>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__set__offset_k__BackingField(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x88>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__get__offset_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x88>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__set__bit_k__BackingField(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8c>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__get__bit_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8c>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__set__sizeInBits_k__BackingField(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x90>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__get__sizeInBits_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x90>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__set__format_k__BackingField(UnityEngine::InputSystem::Utilities::FourCC value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::FourCC, 0x94>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::FourCC>(value));
}
constexpr UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__get__format_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::FourCC, 0x94>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__set__flags_k__BackingField(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags value)  {
::cordl_internals::setInstanceField<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags, 0x98>(this->__instance, std::forward<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags>(value));
}
constexpr GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__get__flags_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags, 0x98>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__set__arraySize_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x9c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__get__arraySize_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x9c>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__set__defaultState_k__BackingField(UnityEngine::InputSystem::Utilities::PrimitiveValue value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::PrimitiveValue, 0xa0>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::PrimitiveValue>(value));
}
constexpr UnityEngine::InputSystem::Utilities::PrimitiveValue UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__get__defaultState_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::PrimitiveValue, 0xa0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__set__minValue_k__BackingField(UnityEngine::InputSystem::Utilities::PrimitiveValue value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::PrimitiveValue, 0xb0>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::PrimitiveValue>(value));
}
constexpr UnityEngine::InputSystem::Utilities::PrimitiveValue UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__get__minValue_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::PrimitiveValue, 0xb0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__set__maxValue_k__BackingField(UnityEngine::InputSystem::Utilities::PrimitiveValue value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::PrimitiveValue, 0xc0>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::PrimitiveValue>(value));
}
constexpr UnityEngine::InputSystem::Utilities::PrimitiveValue UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::__get__maxValue_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::PrimitiveValue, 0xc0>(this->__instance);
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_name(UnityEngine::InputSystem::Utilities::InternedString value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_layout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_layout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_layout(UnityEngine::InputSystem::Utilities::InternedString value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_layout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_variants()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_variants",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_variants(UnityEngine::InputSystem::Utilities::InternedString value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_variants",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_useStateFrom()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_useStateFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_useStateFrom(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_useStateFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_displayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_displayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_displayName(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_displayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_shortDisplayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_shortDisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_shortDisplayName(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_shortDisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_usages()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_usages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_usages(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_usages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_aliases()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_aliases",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_aliases(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_aliases",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_parameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_parameters(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_parameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_processors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_processors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_processors(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_processors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 uint32_t UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_offset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_offset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_offset(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_offset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 uint32_t UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_bit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_bit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_bit(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_bit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 uint32_t UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_sizeInBits()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_sizeInBits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_sizeInBits(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_sizeInBits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_format()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_format(UnityEngine::InputSystem::Utilities::FourCC value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::FourCC>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_flags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_flags(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_arraySize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_arraySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_arraySize(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_arraySize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::Utilities::PrimitiveValue UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_defaultState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_defaultState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::PrimitiveValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_defaultState(UnityEngine::InputSystem::Utilities::PrimitiveValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_defaultState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::PrimitiveValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::Utilities::PrimitiveValue UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_minValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_minValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::PrimitiveValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_minValue(UnityEngine::InputSystem::Utilities::PrimitiveValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_minValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::PrimitiveValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::Utilities::PrimitiveValue UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_maxValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_maxValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::PrimitiveValue, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_maxValue(UnityEngine::InputSystem::Utilities::PrimitiveValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_maxValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::PrimitiveValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_isModifyingExistingControl()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_isModifyingExistingControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_isModifyingExistingControl(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_isModifyingExistingControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_isNoisy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_isNoisy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_isNoisy(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_isNoisy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_isSynthetic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_isSynthetic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_isSynthetic(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_isSynthetic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_dontReset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_dontReset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_dontReset(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_dontReset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_isFirstDefinedInThisLayout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_isFirstDefinedInThisLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::set_isFirstDefinedInThisLayout(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "set_isFirstDefinedInThisLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::get_isArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "get_isArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem::Merge(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get(),
                            "Merge",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c::*)()>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296df14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c._WithUsages_b__14_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c::*)(::StringW)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c::_WithUsages_b__14_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x296df1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c>::get(),
                            "<WithUsages>b__14_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c::__set___9(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c>::get>(std::forward<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c>(value));
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c>::get>();
}
 void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c::__set___9__14_0(System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> value)  {
::cordl_internals::setStaticField<System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString>, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c>::get>(std::forward<System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString>>(value));
}
 System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c::__get___9__14_0()  {
return ::cordl_internals::getStaticField<System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString>, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c>::get>();
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c::New_ctor()  {
GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c>())};
return o;
}
 void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::InternedString GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c::_WithUsages_b__14_0(::StringW x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c>::get(),
                            "<WithUsages>b__14_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder.WithDisplayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::*)(::StringW)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithDisplayName)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x296d4fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithDisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder.WithLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::*)(::StringW)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithLayout)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x296d544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder.WithFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::*)(UnityEngine::InputSystem::Utilities::FourCC)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithFormat)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x296d630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::FourCC>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder.WithFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::*)(::StringW)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithFormat)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x296d678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder.WithByteOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::*)(uint32_t)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithByteOffset)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x296d6ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithByteOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder.WithBitOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::*)(uint32_t)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithBitOffset)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x296d6f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithBitOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder.IsSynthetic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::*)(bool)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::IsSynthetic)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x296d73c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "IsSynthetic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder.IsNoisy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::*)(bool)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::IsNoisy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x296d798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "IsNoisy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder.DontReset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::*)(bool)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::DontReset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x296d7f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "DontReset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder.WithSizeInBits
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::*)(uint32_t)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithSizeInBits)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x296d850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithSizeInBits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder.WithRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::*)(float_t, float_t)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithRange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x296d898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder.WithUsages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::*)(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithUsages)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x296d934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder.WithUsages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::*)(System::Collections::Generic::IEnumerable_1<::StringW>)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithUsages)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x296db08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder.WithUsages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::*)(::ArrayW<::StringW>)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithUsages)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x296dc2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder.WithParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::*)(::StringW)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithParameters)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x296dc30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder.WithProcessors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::*)(::StringW)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithProcessors)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x296dce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithProcessors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder.WithDefaultState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::*)(UnityEngine::InputSystem::Utilities::PrimitiveValue)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithDefaultState)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x296ddbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithDefaultState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::PrimitiveValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder.UsingStateFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::*)(::StringW)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::UsingStateFrom)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x296de04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "UsingStateFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder.AsArrayOfControlsWithSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::*)(int32_t)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::AsArrayOfControlsWithSize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x296de68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "AsArrayOfControlsWithSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "builder", ty: "UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder", modifiers: "", def_value: Some("csnull") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder builder, int32_t index) noexcept : ::bs_hook::ValueTypeWrapper() {this->builder = builder;
this->index = index;
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::__set_builder(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>(value));
}
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::__get_builder() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithDisplayName(::StringW displayName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithDisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, displayName);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithLayout(::StringW layout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, layout);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithFormat(UnityEngine::InputSystem::Utilities::FourCC format)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::FourCC>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, format);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithFormat(::StringW format)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, format);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithByteOffset(uint32_t offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithByteOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, offset);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithBitOffset(uint32_t bit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithBitOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, bit);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::IsSynthetic(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "IsSynthetic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::IsNoisy(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "IsNoisy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::DontReset(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "DontReset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithSizeInBits(uint32_t sizeInBits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithSizeInBits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, sizeInBits);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithRange(float_t minValue, float_t maxValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, minValue, maxValue);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithUsages(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> usages)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, usages);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithUsages(System::Collections::Generic::IEnumerable_1<::StringW> usages)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IEnumerable_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, usages);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithUsages(::ArrayW<::StringW> usages)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, usages);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithParameters(::StringW parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, parameters);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithProcessors(::StringW processors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithProcessors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, processors);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::WithDefaultState(UnityEngine::InputSystem::Utilities::PrimitiveValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "WithDefaultState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::PrimitiveValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::UsingStateFrom(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "UsingStateFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, path);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder::AsArrayOfControlsWithSize(int32_t arraySize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder>::get(),
                            "AsArrayOfControlsWithSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, arraySize);
}
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.get_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cf60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.set_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cf68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "set_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.get_displayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cf70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "get_displayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.set_displayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cf78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "set_displayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.get_type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cf80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.set_type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)(System::Type)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::set_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cf88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "set_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.get_stateFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::get_stateFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cf90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "get_stateFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.set_stateFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)(UnityEngine::InputSystem::Utilities::FourCC)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::set_stateFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cf98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "set_stateFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::FourCC>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.get_stateSizeInBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::get_stateSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cfa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "get_stateSizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.set_stateSizeInBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)(int32_t)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::set_stateSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cfa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "set_stateSizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.get_extendsLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::get_extendsLayout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cfb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "get_extendsLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.set_extendsLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::set_extendsLayout)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x296cfb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "set_extendsLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.get_updateBeforeRender
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<bool> (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::get_updateBeforeRender)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cfec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "get_updateBeforeRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.set_updateBeforeRender
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)(System::Nullable_1<bool>)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::set_updateBeforeRender)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296cff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "set_updateBeforeRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.get_controls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::get_controls)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x296cffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "get_controls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.AddControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::AddControl)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x296d064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "AddControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.WithName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::WithName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296d234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "WithName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.WithDisplayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::WithDisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296d23c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "WithDisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.WithFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)(UnityEngine::InputSystem::Utilities::FourCC)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::WithFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296d244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "WithFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::FourCC>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.WithFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::WithFormat)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x296d24c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "WithFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.WithSizeInBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)(int32_t)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::WithSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296d280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "WithSizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.Extend
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::Extend)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x296d288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "Extend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder.Build
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::InputControlLayout (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::Build)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x296d2c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296d4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::__set__name_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::__get__name_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::__set__displayName_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::__get__displayName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::__set__type_k__BackingField(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::__get__type_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::__set__stateFormat_k__BackingField(UnityEngine::InputSystem::Utilities::FourCC value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::FourCC, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::FourCC>(value));
}
constexpr UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::__get__stateFormat_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::FourCC, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::__set__stateSizeInBytes_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::__get__stateSizeInBytes_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::__set_m_ExtendsLayout(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::__get_m_ExtendsLayout() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::__set__updateBeforeRender_k__BackingField(System::Nullable_1<bool> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<bool>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Nullable_1<bool>>(value));
}
constexpr System::Nullable_1<bool> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::__get__updateBeforeRender_k__BackingField() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<bool>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::__set_m_ControlCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::__get_m_ControlCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::__set_m_Controls(::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::__get_m_Controls() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::get_name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::set_name(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "set_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::get_displayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "get_displayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::set_displayName(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "set_displayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Type UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::get_type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::set_type(System::Type value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "set_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::get_stateFormat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "get_stateFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::set_stateFormat(UnityEngine::InputSystem::Utilities::FourCC value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "set_stateFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::FourCC>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::get_stateSizeInBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "get_stateSizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::set_stateSizeInBytes(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "set_stateSizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::get_extendsLayout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "get_extendsLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::set_extendsLayout(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "set_extendsLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Nullable_1<bool> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::get_updateBeforeRender()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "get_updateBeforeRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<bool>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::set_updateBeforeRender(System::Nullable_1<bool> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "set_updateBeforeRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::get_controls()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "get_controls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::AddControl(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "AddControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder, false>(const_cast<void*>(instance), ___internal_method, name);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::WithName(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "WithName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder, false>(const_cast<void*>(instance), ___internal_method, name);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::WithDisplayName(::StringW displayName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "WithDisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder, false>(const_cast<void*>(instance), ___internal_method, displayName);
}
template<typename T>
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::WithType()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                        "WithType",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::WithFormat(UnityEngine::InputSystem::Utilities::FourCC format)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "WithFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::FourCC>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder, false>(const_cast<void*>(instance), ___internal_method, format);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::WithFormat(::StringW format)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "WithFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder, false>(const_cast<void*>(instance), ___internal_method, format);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::WithSizeInBytes(int32_t sizeInBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "WithSizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder, false>(const_cast<void*>(instance), ___internal_method, sizeInBytes);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::Extend(::StringW baseLayoutName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "Extend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder, false>(const_cast<void*>(instance), ___internal_method, baseLayoutName);
}
 UnityEngine::InputSystem::Layouts::InputControlLayout UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::Build()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::InputControlLayout, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::New_ctor()  {
UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>())};
return o;
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags  UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags::IsGenericTypeOfDevice{1};
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags  UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags::HideInUI{2};
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags  UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags::IsOverride{4};
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags  UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags::CanRunInBackground{8};
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags  UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags::CanRunInBackgroundIsSet{16};
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags  UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags::IsNoisy{32};
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "extend", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "extendMultiple", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "device", ty: "UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly(::StringW name, ::StringW extend, ::ArrayW<::StringW> extendMultiple, UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson device) noexcept : ::bs_hook::ValueTypeWrapper() {this->name = name;
this->extend = extend;
this->extendMultiple = extendMultiple;
this->device = device;
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly::__set_extend(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly::__get_extend() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly::__set_extendMultiple(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x10>(this->__instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly::__get_extendMultiple() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly::__set_device(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson, 0x18>(this->__instance, std::forward<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson>(value));
}
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly::__get_device() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson, 0x18>(this->__instance);
}
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c::*)()>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296ed14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c._ToLayout_b__14_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c::*)(::StringW)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c::_ToLayout_b__14_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x296ed1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c>::get(),
                            "<ToLayout>b__14_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c._FromLayout_b__15_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c::_FromLayout_b__15_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x296ed44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c>::get(),
                            "<FromLayout>b__15_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c._FromLayout_b__15_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c::_FromLayout_b__15_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x296ed68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c>::get(),
                            "<FromLayout>b__15_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c::__set___9(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c>::get>(std::forward<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c>(value));
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c>::get>();
}
 void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c::__set___9__14_0(System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> value)  {
::cordl_internals::setStaticField<System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString>, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c>::get>(std::forward<System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString>>(value));
}
 System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c::__get___9__14_0()  {
return ::cordl_internals::getStaticField<System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString>, "<>9__14_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c>::get>();
}
 void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c::__set___9__15_0(System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>, "<>9__15_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c>::get>(std::forward<System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>>(value));
}
 System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c::__get___9__15_0()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>, "<>9__15_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c>::get>();
}
 void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c::__set___9__15_1(System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>, "<>9__15_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c>::get>(std::forward<System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>>(value));
}
 System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c::__get___9__15_1()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>, "<>9__15_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c>::get>();
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c::New_ctor()  {
GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c>())};
return o;
}
 void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::InternedString GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c::_ToLayout_b__14_0(::StringW x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c>::get(),
                            "<ToLayout>b__14_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::StringW GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c::_FromLayout_b__15_0(UnityEngine::InputSystem::Utilities::InternedString x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c>::get(),
                            "<FromLayout>b__15_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::StringW GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c::_FromLayout_b__15_1(UnityEngine::InputSystem::Utilities::InternedString x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c>::get(),
                            "<FromLayout>b__15_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson.ToLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::InputControlLayout (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::ToLayout)> {
  constexpr static std::size_t size = 0xa2c;
  constexpr static std::size_t addrs = 0x2969018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson>::get(),
                            "ToLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson.FromLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson (*)(UnityEngine::InputSystem::Layouts::InputControlLayout)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::FromLayout)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x2968c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson>::get(),
                            "FromLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputControlLayout>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "extend", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "extendMultiple", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "format", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "beforeRender", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "runInBackground", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "commonUsages", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "description", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "variant", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "isGenericTypeOfDevice", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "hideInUI", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "controls", ty: "::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson>", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson(::StringW name, ::StringW extend, ::ArrayW<::StringW> extendMultiple, ::StringW format, ::StringW beforeRender, ::StringW runInBackground, ::ArrayW<::StringW> commonUsages, ::StringW displayName, ::StringW description, ::StringW type, ::StringW variant, bool isGenericTypeOfDevice, bool hideInUI, ::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson> controls) noexcept : ::bs_hook::ValueTypeWrapper() {this->name = name;
this->extend = extend;
this->extendMultiple = extendMultiple;
this->format = format;
this->beforeRender = beforeRender;
this->runInBackground = runInBackground;
this->commonUsages = commonUsages;
this->displayName = displayName;
this->description = description;
this->type = type;
this->variant = variant;
this->isGenericTypeOfDevice = isGenericTypeOfDevice;
this->hideInUI = hideInUI;
this->controls = controls;
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__set_extend(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__get_extend() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__set_extendMultiple(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x10>(this->__instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__get_extendMultiple() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__set_format(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__get_format() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__set_beforeRender(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__get_beforeRender() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__set_runInBackground(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__get_runInBackground() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__set_commonUsages(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x30>(this->__instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__get_commonUsages() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x30>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__set_displayName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__get_displayName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__set_description(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__get_description() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__set_type(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__get_type() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__set_variant(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__get_variant() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__set_isGenericTypeOfDevice(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__get_isGenericTypeOfDevice() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__set_hideInUI(bool value)  {
::cordl_internals::setInstanceField<bool, 0x59>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__get_hideInUI() const {
return ::cordl_internals::getInstanceField<bool, 0x59>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__set_controls(::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson>, 0x60>(this->__instance, std::forward<::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::__get_controls() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson>, 0x60>(this->__instance);
}
 UnityEngine::InputSystem::Layouts::InputControlLayout UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::ToLayout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson>::get(),
                            "ToLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::InputControlLayout, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson::FromLayout(UnityEngine::InputSystem::Layouts::InputControlLayout layout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson>::get(),
                            "FromLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputControlLayout>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson, false>(nullptr, ___internal_method, layout);
}
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::*)()>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x296ee10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c._ToLayout_b__24_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::*)(::StringW)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::_ToLayout_b__24_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x296ee18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get(),
                            "<ToLayout>b__24_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c._ToLayout_b__24_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::*)(::StringW)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::_ToLayout_b__24_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x296ee40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get(),
                            "<ToLayout>b__24_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c._FromControlItems_b__25_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::*)(UnityEngine::InputSystem::Utilities::NamedValue)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::_FromControlItems_b__25_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296ee68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get(),
                            "<FromControlItems>b__25_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::NamedValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c._FromControlItems_b__25_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::*)(UnityEngine::InputSystem::Utilities::NameAndParameters)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::_FromControlItems_b__25_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296ee74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get(),
                            "<FromControlItems>b__25_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::NameAndParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c._FromControlItems_b__25_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::_FromControlItems_b__25_2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x296ee80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get(),
                            "<FromControlItems>b__25_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c._FromControlItems_b__25_3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::_FromControlItems_b__25_3)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x296eea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get(),
                            "<FromControlItems>b__25_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::__set___9(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get>(std::forward<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>(value));
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get>();
}
 void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::__set___9__24_0(System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> value)  {
::cordl_internals::setStaticField<System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString>, "<>9__24_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get>(std::forward<System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString>>(value));
}
 System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::__get___9__24_0()  {
return ::cordl_internals::getStaticField<System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString>, "<>9__24_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get>();
}
 void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::__set___9__24_1(System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> value)  {
::cordl_internals::setStaticField<System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString>, "<>9__24_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get>(std::forward<System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString>>(value));
}
 System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::__get___9__24_1()  {
return ::cordl_internals::getStaticField<System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString>, "<>9__24_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get>();
}
 void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::__set___9__25_0(System::Func_2<UnityEngine::InputSystem::Utilities::NamedValue,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::InputSystem::Utilities::NamedValue,::StringW>, "<>9__25_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get>(std::forward<System::Func_2<UnityEngine::InputSystem::Utilities::NamedValue,::StringW>>(value));
}
 System::Func_2<UnityEngine::InputSystem::Utilities::NamedValue,::StringW> GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::__get___9__25_0()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::InputSystem::Utilities::NamedValue,::StringW>, "<>9__25_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get>();
}
 void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::__set___9__25_1(System::Func_2<UnityEngine::InputSystem::Utilities::NameAndParameters,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::InputSystem::Utilities::NameAndParameters,::StringW>, "<>9__25_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get>(std::forward<System::Func_2<UnityEngine::InputSystem::Utilities::NameAndParameters,::StringW>>(value));
}
 System::Func_2<UnityEngine::InputSystem::Utilities::NameAndParameters,::StringW> GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::__get___9__25_1()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::InputSystem::Utilities::NameAndParameters,::StringW>, "<>9__25_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get>();
}
 void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::__set___9__25_2(System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>, "<>9__25_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get>(std::forward<System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>>(value));
}
 System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::__get___9__25_2()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>, "<>9__25_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get>();
}
 void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::__set___9__25_3(System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>, "<>9__25_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get>(std::forward<System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>>(value));
}
 System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::__get___9__25_3()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>, "<>9__25_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get>();
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::New_ctor()  {
GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>())};
return o;
}
 void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::InternedString GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::_ToLayout_b__24_0(::StringW x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get(),
                            "<ToLayout>b__24_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(instance), ___internal_method, x);
}
 UnityEngine::InputSystem::Utilities::InternedString GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::_ToLayout_b__24_1(::StringW x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get(),
                            "<ToLayout>b__24_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::StringW GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::_FromControlItems_b__25_0(UnityEngine::InputSystem::Utilities::NamedValue x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get(),
                            "<FromControlItems>b__25_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::NamedValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::StringW GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::_FromControlItems_b__25_1(UnityEngine::InputSystem::Utilities::NameAndParameters x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get(),
                            "<FromControlItems>b__25_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::NameAndParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::StringW GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::_FromControlItems_b__25_2(UnityEngine::InputSystem::Utilities::InternedString x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get(),
                            "<FromControlItems>b__25_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::StringW GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c::_FromControlItems_b__25_3(UnityEngine::InputSystem::Utilities::InternedString x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c>::get(),
                            "<FromControlItems>b__25_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296ed8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson.ToLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::ToLayout)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0x296df44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson>::get(),
                            "ToLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson.FromControlItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson> (*)(::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::FromControlItems)> {
  constexpr static std::size_t size = 0x6f4;
  constexpr static std::size_t addrs = 0x296e5bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson>::get(),
                            "FromControlItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_layout(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_layout() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_variants(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_variants() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_usage(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_usage() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_alias(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_alias() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_useStateFrom(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_useStateFrom() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_offset(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_offset() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_bit(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_bit() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_sizeInBits(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_sizeInBits() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_format(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_format() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_arraySize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_arraySize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_usages(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_usages() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_aliases(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_aliases() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_parameters(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_parameters() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_processors(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_processors() const {
return ::cordl_internals::getInstanceField<::StringW, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_displayName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_displayName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_shortDisplayName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_shortDisplayName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_noisy(bool value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_noisy() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_dontReset(bool value)  {
::cordl_internals::setInstanceField<bool, 0x91>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_dontReset() const {
return ::cordl_internals::getInstanceField<bool, 0x91>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_synthetic(bool value)  {
::cordl_internals::setInstanceField<bool, 0x92>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_synthetic() const {
return ::cordl_internals::getInstanceField<bool, 0x92>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_defaultState(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_defaultState() const {
return ::cordl_internals::getInstanceField<::StringW, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_minValue(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_minValue() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__set_maxValue(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::__get_maxValue() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::New_ctor()  {
UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson>())};
return o;
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::ToLayout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson>::get(),
                            "ToLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson::FromControlItems(::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> items)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson>::get(),
                            "FromControlItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson>, false>(nullptr, ___internal_method, items);
}
// Ctor Parameters [CppParam { name: "layoutName", ty: "UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceMatcher", ty: "UnityEngine::InputSystem::Layouts::InputDeviceMatcher", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher(UnityEngine::InputSystem::Utilities::InternedString layoutName, UnityEngine::InputSystem::Layouts::InputDeviceMatcher deviceMatcher) noexcept : ::bs_hook::ValueTypeWrapper() {this->layoutName = layoutName;
this->deviceMatcher = deviceMatcher;
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher::__set_layoutName(UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::InternedString>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InternedString GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher::__get_layoutName() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher::__set_deviceMatcher(UnityEngine::InputSystem::Layouts::InputDeviceMatcher value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Layouts::InputDeviceMatcher, 0x10>(this->__instance, std::forward<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>(value));
}
constexpr UnityEngine::InputSystem::Layouts::InputDeviceMatcher GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher::__get_deviceMatcher() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Layouts::InputDeviceMatcher, 0x10>(this->__instance);
}
// Ctor Parameters [CppParam { name: "factoryMethod", ty: "System::Func_1<UnityEngine::InputSystem::InputDevice>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "metadata", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout(System::Func_1<UnityEngine::InputSystem::InputDevice> factoryMethod, ::StringW metadata) noexcept : ::bs_hook::ValueTypeWrapper() {this->factoryMethod = factoryMethod;
this->metadata = metadata;
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout::__set_factoryMethod(System::Func_1<UnityEngine::InputSystem::InputDevice> value)  {
::cordl_internals::setInstanceField<System::Func_1<UnityEngine::InputSystem::InputDevice>, 0x0>(this->__instance, std::forward<System::Func_1<UnityEngine::InputSystem::InputDevice>>(value));
}
constexpr System::Func_1<UnityEngine::InputSystem::InputDevice> GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout::__get_factoryMethod() const {
return ::cordl_internals::getInstanceField<System::Func_1<UnityEngine::InputSystem::InputDevice>, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout::__set_metadata(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout::__get_metadata() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::*)(int32_t)>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2970468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::*)()>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29706e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::*)()>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::MoveNext)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x29706ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::*)()>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29707a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.Utilities.InternedString>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::*)()>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x29707b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::*)()>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x29707f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_InternedString__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Utilities::InternedString> (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::*)()>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_InternedString__GetEnumerator)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2970850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.Utilities.InternedString>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::*)()>(&GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x297091c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString>
constexpr  GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::operator System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString>() const noexcept {
return System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Utilities::InternedString>
constexpr  GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::operator System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Utilities::InternedString>() const noexcept {
return System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Utilities::InternedString>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::__set___2__current(UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::InternedString>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InternedString GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::__get___2__current() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::__set_includeSelf(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::__get_includeSelf() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::__set___3__includeSelf(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::__get___3__includeSelf() const {
return ::cordl_internals::getInstanceField<bool, 0x2d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::__set_layout(UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::InternedString>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InternedString GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::__get_layout() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::__set___3__layout(UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::InternedString>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InternedString GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::__get___3__layout() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::__set___4__this(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>(value));
}
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::__get___4__this() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::__set___3____4__this(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>(value));
}
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::__get___3____4__this() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::New_ctor(int32_t __1__state)  {
GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24>(__1__state))};
return o;
}
 void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::InternedString GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.Utilities.InternedString>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Utilities::InternedString> GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_InternedString__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.Utilities.InternedString>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Utilities::InternedString>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection.Allocate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::Allocate)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x296eec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "Allocate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection.TryFindLayoutForType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::*)(System::Type)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::TryFindLayoutForType)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x296ad60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "TryFindLayoutForType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection.TryFindMatchingLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::*)(UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::TryFindMatchingLayout)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x296f118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "TryFindMatchingLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection.HasLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::HasLayout)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x296af10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "HasLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection.TryLoadLayoutInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::InputControlLayout (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::TryLoadLayoutInternal)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x296f620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "TryLoadLayoutInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection.TryLoadLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::InputControlLayout (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::*)(UnityEngine::InputSystem::Utilities::InternedString, System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Layouts::InputControlLayout>)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::TryLoadLayout)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x296f814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "TryLoadLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Layouts::InputControlLayout>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection.GetBaseLayoutName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::GetBaseLayoutName)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x296fc5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "GetBaseLayoutName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection.GetRootLayoutName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::GetRootLayoutName)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x296fce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "GetRootLayoutName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection.ComputeDistanceInInheritanceHierarchy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::*)(UnityEngine::InputSystem::Utilities::InternedString, UnityEngine::InputSystem::Utilities::InternedString, ByRef<int32_t>)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::ComputeDistanceInInheritanceHierarchy)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x296fd7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "ComputeDistanceInInheritanceHierarchy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection.FindLayoutThatIntroducesControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::*)(UnityEngine::InputSystem::InputControl, UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::FindLayoutThatIntroducesControl)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x296feb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "FindLayoutThatIntroducesControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection.GetControlTypeForLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::GetControlTypeForLayout)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x29700d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "GetControlTypeForLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection.ValueTypeIsAssignableFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::*)(UnityEngine::InputSystem::Utilities::InternedString, System::Type)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::ValueTypeIsAssignableFrom)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x297022c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "ValueTypeIsAssignableFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection.IsGeneratedLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::IsGeneratedLayout)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2970354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "IsGeneratedLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection.GetBaseLayouts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString> (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::*)(UnityEngine::InputSystem::Utilities::InternedString, bool)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::GetBaseLayouts)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x29703bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "GetBaseLayouts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection.IsBasedOn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::*)(UnityEngine::InputSystem::Utilities::InternedString, UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::IsBasedOn)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x297049c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "IsBasedOn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection.AddMatcher
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::*)(UnityEngine::InputSystem::Utilities::InternedString, UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::AddMatcher)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x297054c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "AddMatcher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "layoutTypes", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Type>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "layoutStrings", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "layoutBuilders", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout>>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "baseLayoutTable", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "layoutOverrides", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "layoutOverrideNames", ty: "System::Collections::Generic::HashSet_1<UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "precompiledLayouts", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "layoutMatchers", ty: "System::Collections::Generic::List_1<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher>", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection(System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Type> layoutTypes, System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> layoutStrings, System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout>> layoutBuilders, System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString> baseLayoutTable, System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>> layoutOverrides, System::Collections::Generic::HashSet_1<UnityEngine::InputSystem::Utilities::InternedString> layoutOverrideNames, System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout> precompiledLayouts, System::Collections::Generic::List_1<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher> layoutMatchers) noexcept : ::bs_hook::ValueTypeWrapper() {this->layoutTypes = layoutTypes;
this->layoutStrings = layoutStrings;
this->layoutBuilders = layoutBuilders;
this->baseLayoutTable = baseLayoutTable;
this->layoutOverrides = layoutOverrides;
this->layoutOverrideNames = layoutOverrideNames;
this->precompiledLayouts = precompiledLayouts;
this->layoutMatchers = layoutMatchers;
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::__set_layoutTypes(System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Type> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Type>, 0x0>(this->__instance, std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Type>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Type> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::__get_layoutTypes() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Type>, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::__set_layoutStrings(System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>, 0x8>(this->__instance, std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::__get_layoutStrings() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::__set_layoutBuilders(System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout>>, 0x10>(this->__instance, std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout>> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::__get_layoutBuilders() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout>>, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::__set_baseLayoutTable(System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>, 0x18>(this->__instance, std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::__get_baseLayoutTable() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::__set_layoutOverrides(System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>>, 0x20>(this->__instance, std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::__get_layoutOverrides() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>>, 0x20>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::__set_layoutOverrideNames(System::Collections::Generic::HashSet_1<UnityEngine::InputSystem::Utilities::InternedString> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<UnityEngine::InputSystem::Utilities::InternedString>, 0x28>(this->__instance, std::forward<System::Collections::Generic::HashSet_1<UnityEngine::InputSystem::Utilities::InternedString>>(value));
}
constexpr System::Collections::Generic::HashSet_1<UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::__get_layoutOverrideNames() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<UnityEngine::InputSystem::Utilities::InternedString>, 0x28>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::__set_precompiledLayouts(System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>, 0x30>(this->__instance, std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::__get_precompiledLayouts() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>, 0x30>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::__set_layoutMatchers(System::Collections::Generic::List_1<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher>, 0x38>(this->__instance, std::forward<System::Collections::Generic::List_1<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher>>(value));
}
constexpr System::Collections::Generic::List_1<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::__get_layoutMatchers() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher>, 0x38>(this->__instance);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::Allocate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "Allocate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::TryFindLayoutForType(System::Type layoutType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "TryFindLayoutForType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, layoutType);
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::TryFindMatchingLayout(UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "TryFindMatchingLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, deviceDescription);
}
 bool UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::HasLayout(UnityEngine::InputSystem::Utilities::InternedString name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "HasLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, name);
}
 UnityEngine::InputSystem::Layouts::InputControlLayout UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::TryLoadLayoutInternal(UnityEngine::InputSystem::Utilities::InternedString name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "TryLoadLayoutInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::InputControlLayout, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, name);
}
/// @param table: System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Layouts::InputControlLayout> (default: csnull)
 UnityEngine::InputSystem::Layouts::InputControlLayout UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::TryLoadLayout(UnityEngine::InputSystem::Utilities::InternedString name, System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Layouts::InputControlLayout> table)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "TryLoadLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Layouts::InputControlLayout>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::InputControlLayout, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, name, table);
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::GetBaseLayoutName(UnityEngine::InputSystem::Utilities::InternedString layoutName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "GetBaseLayoutName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, layoutName);
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::GetRootLayoutName(UnityEngine::InputSystem::Utilities::InternedString layoutName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "GetRootLayoutName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, layoutName);
}
 bool UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::ComputeDistanceInInheritanceHierarchy(UnityEngine::InputSystem::Utilities::InternedString firstLayout, UnityEngine::InputSystem::Utilities::InternedString secondLayout, ByRef<int32_t> distance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "ComputeDistanceInInheritanceHierarchy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, firstLayout, secondLayout, distance);
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::FindLayoutThatIntroducesControl(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache cache)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "FindLayoutThatIntroducesControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, control, cache);
}
 System::Type UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::GetControlTypeForLayout(UnityEngine::InputSystem::Utilities::InternedString layoutName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "GetControlTypeForLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, layoutName);
}
 bool UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::ValueTypeIsAssignableFrom(UnityEngine::InputSystem::Utilities::InternedString layoutName, System::Type valueType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "ValueTypeIsAssignableFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, layoutName, valueType);
}
 bool UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::IsGeneratedLayout(UnityEngine::InputSystem::Utilities::InternedString layout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "IsGeneratedLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, layout);
}
/// @param includeSelf: bool (default: true)
 System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::GetBaseLayouts(UnityEngine::InputSystem::Utilities::InternedString layout, bool includeSelf)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "GetBaseLayouts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, layout, includeSelf);
}
 bool UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::IsBasedOn(UnityEngine::InputSystem::Utilities::InternedString parentLayout, UnityEngine::InputSystem::Utilities::InternedString childLayout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "IsBasedOn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, parentLayout, childLayout);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection::AddMatcher(UnityEngine::InputSystem::Utilities::InternedString layout, UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>::get(),
                            "AddMatcher",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, layout, matcher);
}
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException.get_layout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::get_layout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2970920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException>::get(),
                            "get_layout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2970928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::*)(::StringW, ::StringW)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2970980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x296fba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::*)(::StringW, System::Exception)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x29709f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::*)(System::Runtime::Serialization::SerializationInfo, System::Runtime::Serialization::StreamingContext)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2970a64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::__set__layout_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::__get__layout_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::get_layout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException>::get(),
                            "get_layout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::New_ctor()  {
UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException>())};
return o;
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::New_ctor(::StringW name, ::StringW message)  {
UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException>(name, message))};
return o;
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::_ctor(::StringW name, ::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, message);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::New_ctor(::StringW name)  {
UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException>(name))};
return o;
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::_ctor(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::New_ctor(::StringW message, System::Exception innerException)  {
UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException>(message, innerException))};
return o;
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::_ctor(::StringW message, System::Exception innerException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message, innerException);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException>(info, context))};
return o;
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException::_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::SerializationInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, info, context);
}
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2970ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache.FindOrLoadLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::InputControlLayout (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache::*)(::StringW, bool)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache::FindOrLoadLayout)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x296ffac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache>::get(),
                            "FindOrLoadLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "table", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Layouts::InputControlLayout>", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache(System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Layouts::InputControlLayout> table) noexcept : ::bs_hook::ValueTypeWrapper() {this->table = table;
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache::__set_table(System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Layouts::InputControlLayout> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Layouts::InputControlLayout>, 0x0>(this->__instance, std::forward<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Layouts::InputControlLayout>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Layouts::InputControlLayout> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache::__get_table() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Layouts::InputControlLayout>, 0x0>(this->__instance);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
/// @param throwIfNotFound: bool (default: true)
 UnityEngine::InputSystem::Layouts::InputControlLayout UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache::FindOrLoadLayout(::StringW name, bool throwIfNotFound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache>::get(),
                            "FindOrLoadLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::InputControlLayout, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, name, throwIfNotFound);
}
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance::Dispose)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2970aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance::operator System::IDisposable() const {
return System::IDisposable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "valid", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance(bool valid) noexcept : ::bs_hook::ValueTypeWrapper() {this->valid = valid;
}
constexpr void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance::__set_valid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance::__get_valid() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c::*)()>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2970be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c._FromType_b__52_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c::_FromType_b__52_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2970bf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c>::get(),
                            "<FromType>b__52_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c._CreateControlItemFromMember_b__75_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c::_CreateControlItemFromMember_b__75_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2970c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c>::get(),
                            "<CreateControlItemFromMember>b__75_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c._CreateControlItemFromMember_b__75_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c::_CreateControlItemFromMember_b__75_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2970c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c>::get(),
                            "<CreateControlItemFromMember>b__75_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c::__set___9(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c>::get>(std::forward<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c>(value));
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c::__get___9()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c>::get>();
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c::__set___9__52_0(System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> value)  {
::cordl_internals::setStaticField<System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString>, "<>9__52_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c>::get>(std::forward<System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString>>(value));
}
 System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c::__get___9__52_0()  {
return ::cordl_internals::getStaticField<System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString>, "<>9__52_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c>::get>();
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c::__set___9__75_0(System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> value)  {
::cordl_internals::setStaticField<System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString>, "<>9__75_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c>::get>(std::forward<System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString>>(value));
}
 System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c::__get___9__75_0()  {
return ::cordl_internals::getStaticField<System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString>, "<>9__75_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c>::get>();
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c::__set___9__75_1(System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> value)  {
::cordl_internals::setStaticField<System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString>, "<>9__75_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c>::get>(std::forward<System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString>>(value));
}
 System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c::__get___9__75_1()  {
return ::cordl_internals::getStaticField<System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString>, "<>9__75_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c>::get>();
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c::New_ctor()  {
UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c>())};
return o;
}
 void UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c::_FromType_b__52_0(::StringW x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c>::get(),
                            "<FromType>b__52_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(instance), ___internal_method, x);
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c::_CreateControlItemFromMember_b__75_0(::StringW x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c>::get(),
                            "<CreateControlItemFromMember>b__75_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(instance), ___internal_method, x);
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c::_CreateControlItemFromMember_b__75_1(::StringW x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c>::get(),
                            "<CreateControlItemFromMember>b__75_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(instance), ___internal_method, x);
}
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.get_DefaultVariant
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::get_DefaultVariant)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2967ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_DefaultVariant",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.get_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::get_name)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2967b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.get_displayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::get_displayName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2967b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_displayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.get_type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2967b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.get_variants
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::InternedString (UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::get_variants)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2967b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_variants",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.get_stateFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::get_stateFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2967b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_stateFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.get_stateSizeInBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::get_stateSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2967b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_stateSizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.get_baseLayouts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString> (UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::get_baseLayouts)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2967b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_baseLayouts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.get_appliedOverrides
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString> (UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::get_appliedOverrides)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2967be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_appliedOverrides",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.get_commonUsages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> (UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::get_commonUsages)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2967c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_commonUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.get_controls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> (UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::get_controls)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2967ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_controls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.get_updateBeforeRender
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::get_updateBeforeRender)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2967d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_updateBeforeRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.get_isDeviceLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::get_isDeviceLayout)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2967d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_isDeviceLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.get_isControlLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::get_isControlLayout)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2967dd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_isControlLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.get_isOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::get_isOverride)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2967df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_isOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.set_isOverride
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayout::*)(bool)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::set_isOverride)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2967dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "set_isOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.get_isGenericTypeOfDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::get_isGenericTypeOfDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2967e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_isGenericTypeOfDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.set_isGenericTypeOfDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayout::*)(bool)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::set_isGenericTypeOfDevice)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2967e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "set_isGenericTypeOfDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.get_hideInUI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::get_hideInUI)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2967e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_hideInUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.set_hideInUI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayout::*)(bool)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::set_hideInUI)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2967e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "set_hideInUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.get_isNoisy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::get_isNoisy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2967e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_isNoisy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.set_isNoisy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayout::*)(bool)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::set_isNoisy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2967e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "set_isNoisy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.get_canRunInBackground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<bool> (UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::get_canRunInBackground)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2967e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_canRunInBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.set_canRunInBackground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayout::*)(System::Nullable_1<bool>)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::set_canRunInBackground)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2967ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "set_canRunInBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem (UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::get_Item)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2967f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.FindControl
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> (UnityEngine::InputSystem::Layouts::InputControlLayout::*)(UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::FindControl)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2968118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "FindControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.FindControlIncludingArrayElements
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> (UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::StringW, ByRef<int32_t>)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::FindControlIncludingArrayElements)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x29682b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "FindControlIncludingArrayElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.GetValueType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::GetValueType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x29685d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "GetValueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.FromType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::InputControlLayout (*)(::StringW, System::Type)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::FromType)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x2968664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "FromType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.ToJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputControlLayout::*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::ToJson)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2968bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.FromJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::InputControlLayout (*)(::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::FromJson)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2968f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "FromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayout::*)(::StringW, System::Type)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2968b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.AddControlItems
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Type, System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>, ::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItems)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2968afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "AddControlItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.AddControlItemsFromFields
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Type, System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>, ::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromFields)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2969a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "AddControlItemsFromFields",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.AddControlItemsFromProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Type, System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>, ::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromProperties)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2969ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "AddControlItemsFromProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.AddControlItemsFromMembers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<System::Reflection::MemberInfo>, System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>, ::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromMembers)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x2969b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "AddControlItemsFromMembers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::MemberInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.AddControlItemsFromMember
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Reflection::MemberInfo, ::ArrayW<UnityEngine::InputSystem::Layouts::InputControlAttribute>, System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromMember)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x296a098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "AddControlItemsFromMember",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::InputSystem::Layouts::InputControlAttribute>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.CreateControlItemFromMember
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem (*)(System::Reflection::MemberInfo, UnityEngine::InputSystem::Layouts::InputControlAttribute)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::CreateControlItemFromMember)> {
  constexpr static std::size_t size = 0x814;
  constexpr static std::size_t addrs = 0x296a308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "CreateControlItemFromMember",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputControlAttribute>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.InferLayoutFromValueType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Type)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::InferLayoutFromValueType)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x296ab1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "InferLayoutFromValueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.MergeLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Layouts::InputControlLayout::*)(UnityEngine::InputSystem::Layouts::InputControlLayout)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::MergeLayout)> {
  constexpr static std::size_t size = 0x117c;
  constexpr static std::size_t addrs = 0x296afec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "MergeLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputControlLayout>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.CreateLookupTableForControls
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> (*)(::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>, System::Collections::Generic::List_1<::StringW>)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::CreateLookupTableForControls)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x296c168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "CreateLookupTableForControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.VariantsMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::Utilities::InternedString, UnityEngine::InputSystem::Utilities::InternedString)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::VariantsMatch)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x296ca40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "VariantsMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.VariantsMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::VariantsMatch)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x296c914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "VariantsMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.ParseHeaderFieldsFromJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<UnityEngine::InputSystem::Utilities::InternedString>, ByRef<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString>>, ByRef<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::ParseHeaderFieldsFromJson)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x296caa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "ParseHeaderFieldsFromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::InternedString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.get_cache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<ByRef<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache> (*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::get_cache)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x296cc20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_cache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout.CacheRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance (*)()>(&UnityEngine::InputSystem::Layouts::InputControlLayout::CacheRef)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x296cc78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "CacheRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Layouts::InputControlLayout._MergeLayout_b__77_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputControlLayout::*)(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem)>(&UnityEngine::InputSystem::Layouts::InputControlLayout::_MergeLayout_b__77_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x296cd58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "<MergeLayout>b__77_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_s_DefaultVariant(UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::Utilities::InternedString, "s_DefaultVariant", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get>(std::forward<UnityEngine::InputSystem::Utilities::InternedString>(value));
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout::__get_s_DefaultVariant()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::Utilities::InternedString, "s_DefaultVariant", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get>();
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_Name(UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::InternedString>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_Name() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_Type(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_Type() const {
return ::cordl_internals::getInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_Variants(UnityEngine::InputSystem::Utilities::InternedString value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::InternedString>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_Variants() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InternedString, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_StateFormat(UnityEngine::InputSystem::Utilities::FourCC value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::FourCC, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::FourCC>(value));
}
constexpr UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_StateFormat() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::FourCC, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_StateSizeInBytes(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_StateSizeInBytes() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_UpdateBeforeRender(System::Nullable_1<bool> value)  {
::cordl_internals::setInstanceField<System::Nullable_1<bool>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Nullable_1<bool>>(value));
}
constexpr System::Nullable_1<bool> UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_UpdateBeforeRender() const {
return ::cordl_internals::getInstanceField<System::Nullable_1<bool>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_BaseLayouts(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_BaseLayouts() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_AppliedOverrides(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString> value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString>>(value));
}
constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_AppliedOverrides() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString>, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_CommonUsages(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_CommonUsages() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_Controls(::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>(value));
}
constexpr ::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_Controls() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_DisplayName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_DisplayName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_Description(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_Description() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_m_Flags(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags>(value));
}
constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags UnityEngine::InputSystem::Layouts::InputControlLayout::__get_m_Flags() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_s_Layouts(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection, "s_Layouts", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get>(std::forward<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection>(value));
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection UnityEngine::InputSystem::Layouts::InputControlLayout::__get_s_Layouts()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection, "s_Layouts", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get>();
}
 void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_s_CacheInstance(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache value)  {
::cordl_internals::setStaticField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache, "s_CacheInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get>(std::forward<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache>(value));
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache UnityEngine::InputSystem::Layouts::InputControlLayout::__get_s_CacheInstance()  {
return ::cordl_internals::getStaticField<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache, "s_CacheInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get>();
}
 void UnityEngine::InputSystem::Layouts::InputControlLayout::__set_s_CacheInstanceRef(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_CacheInstanceRef", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::InputSystem::Layouts::InputControlLayout::__get_s_CacheInstanceRef()  {
return ::cordl_internals::getStaticField<int32_t, "s_CacheInstanceRef", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get>();
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout::get_DefaultVariant()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_DefaultVariant",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(nullptr, ___internal_method);
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout::get_name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout::get_displayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_displayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type UnityEngine::InputSystem::Layouts::InputControlLayout::get_type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::InternedString UnityEngine::InputSystem::Layouts::InputControlLayout::get_variants()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_variants",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::InternedString, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Layouts::InputControlLayout::get_stateFormat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_stateFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::InputSystem::Layouts::InputControlLayout::get_stateSizeInBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_stateSizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::Layouts::InputControlLayout::get_baseLayouts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_baseLayouts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::Layouts::InputControlLayout::get_appliedOverrides()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_appliedOverrides",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString>, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> UnityEngine::InputSystem::Layouts::InputControlLayout::get_commonUsages()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_commonUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString>, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> UnityEngine::InputSystem::Layouts::InputControlLayout::get_controls()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_controls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_updateBeforeRender()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_updateBeforeRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_isDeviceLayout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_isDeviceLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_isControlLayout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_isControlLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_isOverride()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_isOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::InputControlLayout::set_isOverride(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "set_isOverride",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_isGenericTypeOfDevice()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_isGenericTypeOfDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::InputControlLayout::set_isGenericTypeOfDevice(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "set_isGenericTypeOfDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_hideInUI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_hideInUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::InputControlLayout::set_hideInUI(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "set_hideInUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::InputSystem::Layouts::InputControlLayout::get_isNoisy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_isNoisy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::InputControlLayout::set_isNoisy(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "set_isNoisy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Nullable_1<bool> UnityEngine::InputSystem::Layouts::InputControlLayout::get_canRunInBackground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_canRunInBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<bool>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::Layouts::InputControlLayout::set_canRunInBackground(System::Nullable_1<bool> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "set_canRunInBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem UnityEngine::InputSystem::Layouts::InputControlLayout::get_Item(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem, false>(const_cast<void*>(instance), ___internal_method, path);
}
 System::Nullable_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> UnityEngine::InputSystem::Layouts::InputControlLayout::FindControl(UnityEngine::InputSystem::Utilities::InternedString path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "FindControl",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>, false>(const_cast<void*>(instance), ___internal_method, path);
}
 System::Nullable_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> UnityEngine::InputSystem::Layouts::InputControlLayout::FindControlIncludingArrayElements(::StringW path, ByRef<int32_t> arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "FindControlIncludingArrayElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Nullable_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>, false>(const_cast<void*>(instance), ___internal_method, path, arrayIndex);
}
 System::Type UnityEngine::InputSystem::Layouts::InputControlLayout::GetValueType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "GetValueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Layouts::InputControlLayout UnityEngine::InputSystem::Layouts::InputControlLayout::FromType(::StringW name, System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "FromType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::InputControlLayout, false>(nullptr, ___internal_method, name, type);
}
 ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout::ToJson()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::Layouts::InputControlLayout UnityEngine::InputSystem::Layouts::InputControlLayout::FromJson(::StringW json)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "FromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::InputControlLayout, false>(nullptr, ___internal_method, json);
}
 UnityEngine::InputSystem::Layouts::InputControlLayout UnityEngine::InputSystem::Layouts::InputControlLayout::New_ctor(::StringW name, System::Type type)  {
UnityEngine::InputSystem::Layouts::InputControlLayout o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::InputSystem::Layouts::InputControlLayout>(name, type))};
return o;
}
 void UnityEngine::InputSystem::Layouts::InputControlLayout::_ctor(::StringW name, System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, name, type);
}
 void UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItems(System::Type type, System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> controlLayouts, ::StringW layoutName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "AddControlItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, controlLayouts, layoutName);
}
 void UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromFields(System::Type type, System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> controlLayouts, ::StringW layoutName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "AddControlItemsFromFields",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, controlLayouts, layoutName);
}
 void UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromProperties(System::Type type, System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> controlLayouts, ::StringW layoutName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "AddControlItemsFromProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, controlLayouts, layoutName);
}
 void UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromMembers(::ArrayW<System::Reflection::MemberInfo> members, System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> controlItems, ::StringW layoutName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "AddControlItemsFromMembers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Reflection::MemberInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, members, controlItems, layoutName);
}
 void UnityEngine::InputSystem::Layouts::InputControlLayout::AddControlItemsFromMember(System::Reflection::MemberInfo member, ::ArrayW<UnityEngine::InputSystem::Layouts::InputControlAttribute> attributes, System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> controlItems)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "AddControlItemsFromMember",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::InputSystem::Layouts::InputControlAttribute>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, member, attributes, controlItems);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem UnityEngine::InputSystem::Layouts::InputControlLayout::CreateControlItemFromMember(System::Reflection::MemberInfo member, UnityEngine::InputSystem::Layouts::InputControlAttribute attribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "CreateControlItemFromMember",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputControlAttribute>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem, false>(nullptr, ___internal_method, member, attribute);
}
 ::StringW UnityEngine::InputSystem::Layouts::InputControlLayout::InferLayoutFromValueType(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "InferLayoutFromValueType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, type);
}
 void UnityEngine::InputSystem::Layouts::InputControlLayout::MergeLayout(UnityEngine::InputSystem::Layouts::InputControlLayout other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "MergeLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::InputControlLayout>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, other);
}
/// @param variants: System::Collections::Generic::List_1<::StringW> (default: csnull)
 System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> UnityEngine::InputSystem::Layouts::InputControlLayout::CreateLookupTableForControls(::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> controlItems, System::Collections::Generic::List_1<::StringW> variants)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "CreateLookupTableForControls",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>, false>(nullptr, ___internal_method, controlItems, variants);
}
 bool UnityEngine::InputSystem::Layouts::InputControlLayout::VariantsMatch(UnityEngine::InputSystem::Utilities::InternedString expected, UnityEngine::InputSystem::Utilities::InternedString actual)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "VariantsMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::InternedString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, expected, actual);
}
 bool UnityEngine::InputSystem::Layouts::InputControlLayout::VariantsMatch(::StringW expected, ::StringW actual)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "VariantsMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, expected, actual);
}
 void UnityEngine::InputSystem::Layouts::InputControlLayout::ParseHeaderFieldsFromJson(::StringW json, ByRef<UnityEngine::InputSystem::Utilities::InternedString> name, ByRef<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString>> baseLayouts, ByRef<UnityEngine::InputSystem::Layouts::InputDeviceMatcher> deviceMatcher)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "ParseHeaderFieldsFromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::InternedString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, json, name, baseLayouts, deviceMatcher);
}
 ByRef<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache> UnityEngine::InputSystem::Layouts::InputControlLayout::get_cache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "get_cache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<ByRef<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache>, false>(nullptr, ___internal_method);
}
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance UnityEngine::InputSystem::Layouts::InputControlLayout::CacheRef()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "CacheRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance, false>(nullptr, ___internal_method);
}
 bool UnityEngine::InputSystem::Layouts::InputControlLayout::_MergeLayout_b__77_0(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Layouts::InputControlLayout>::get(),
                            "<MergeLayout>b__77_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, x);
}
