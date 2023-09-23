#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONArray_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNodeType_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONContainerType_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONTextMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__RectOffset_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::OVRSimpleJSON__JSONNode__Enumerator__Type::OVRSimpleJSON__JSONNode__Enumerator__Type(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::OVRSimpleJSON__JSONNode__Enumerator__Type::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::OVRSimpleJSON__JSONNode__Enumerator__Type::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::OVRSimpleJSON__JSONNode__Enumerator__Type  GlobalNamespace::OVRSimpleJSON__JSONNode__Enumerator__Type::None{0};
constexpr GlobalNamespace::OVRSimpleJSON__JSONNode__Enumerator__Type  GlobalNamespace::OVRSimpleJSON__JSONNode__Enumerator__Type::Array{1};
constexpr GlobalNamespace::OVRSimpleJSON__JSONNode__Enumerator__Type  GlobalNamespace::OVRSimpleJSON__JSONNode__Enumerator__Type::Object{2};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator.get_IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x263d588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator>::get(),
                            "get_IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::*)(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode>)>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x263d598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::*)(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,OVRSimpleJSON::JSONNode>)>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x263d5c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,OVRSimpleJSON::JSONNode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode> (OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::get_Current)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x263d5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x263d6b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "type", ty: "GlobalNamespace::OVRSimpleJSON__JSONNode__Enumerator__Type", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Object", ty: "System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,OVRSimpleJSON::JSONNode>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Array", ty: "System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode>", modifiers: "", def_value: Some("{}") }]
constexpr OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::OVRSimpleJSON__JSONNode__Enumerator(GlobalNamespace::OVRSimpleJSON__JSONNode__Enumerator__Type type, System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,OVRSimpleJSON::JSONNode> m_Object, System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode> m_Array) noexcept : ::bs_hook::ValueTypeWrapper() {this->type = type;
this->m_Object = m_Object;
this->m_Array = m_Array;
}
constexpr void OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::__set_type(GlobalNamespace::OVRSimpleJSON__JSONNode__Enumerator__Type value)  {
::cordl_internals::setInstanceField<GlobalNamespace::OVRSimpleJSON__JSONNode__Enumerator__Type, 0x0>(this->__instance, std::forward<GlobalNamespace::OVRSimpleJSON__JSONNode__Enumerator__Type>(value));
}
constexpr GlobalNamespace::OVRSimpleJSON__JSONNode__Enumerator__Type OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::__get_type() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::OVRSimpleJSON__JSONNode__Enumerator__Type, 0x0>(this->__instance);
}
constexpr void OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::__set_m_Object(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,OVRSimpleJSON::JSONNode> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,OVRSimpleJSON::JSONNode>, 0x8>(this->__instance, std::forward<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,OVRSimpleJSON::JSONNode>>(value));
}
constexpr System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,OVRSimpleJSON::JSONNode> OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::__get_m_Object() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,OVRSimpleJSON::JSONNode>, 0x8>(this->__instance);
}
constexpr void OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::__set_m_Array(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode>, 0x30>(this->__instance, std::forward<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode>>(value));
}
constexpr System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode> OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::__get_m_Array() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode>, 0x30>(this->__instance);
}
 bool OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator>::get(),
                            "get_IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::_ctor(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode> aArrayEnum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, aArrayEnum);
}
 void OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::_ctor(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,OVRSimpleJSON::JSONNode> aDictEnum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,OVRSimpleJSON::JSONNode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, aDictEnum);
}
 System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode> OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode>, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator::*)(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode>)>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x263d748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator::*)(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,OVRSimpleJSON::JSONNode>)>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x263d788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,OVRSimpleJSON::JSONNode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator::*)(OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator)>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x263d7f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x263d80c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x263d850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator (OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x263d854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator", modifiers: "", def_value: Some("{}") }]
constexpr OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator::OVRSimpleJSON__JSONNode__ValueEnumerator(OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator m_Enumerator) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Enumerator = m_Enumerator;
}
constexpr void OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator::__set_m_Enumerator(OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator value)  {
::cordl_internals::setInstanceField<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator, 0x0>(this->__instance, std::forward<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator>(value));
}
constexpr OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator::__get_m_Enumerator() const {
return ::cordl_internals::getInstanceField<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator, 0x0>(this->__instance);
}
 void OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator::_ctor(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode> aArrayEnum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, aArrayEnum);
}
 void OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator::_ctor(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,OVRSimpleJSON::JSONNode> aDictEnum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,OVRSimpleJSON::JSONNode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, aDictEnum);
}
 void OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator::_ctor(OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator aEnumerator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, aEnumerator);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator::*)(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode>)>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x263d864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator::*)(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,OVRSimpleJSON::JSONNode>)>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x263d8a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,OVRSimpleJSON::JSONNode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator::*)(OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator)>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x263d914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x263d928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x263d964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator (OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x263d968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator", modifiers: "", def_value: Some("{}") }]
constexpr OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator::OVRSimpleJSON__JSONNode__KeyEnumerator(OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator m_Enumerator) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Enumerator = m_Enumerator;
}
constexpr void OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator::__set_m_Enumerator(OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator value)  {
::cordl_internals::setInstanceField<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator, 0x0>(this->__instance, std::forward<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator>(value));
}
constexpr OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator::__get_m_Enumerator() const {
return ::cordl_internals::getInstanceField<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator, 0x0>(this->__instance);
}
 void OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator::_ctor(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode> aArrayEnum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<OVRSimpleJSON::JSONNode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, aArrayEnum);
}
 void OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator::_ctor(System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,OVRSimpleJSON::JSONNode> aDictEnum)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::System__Collections__Generic__Dictionary_2__Enumerator<::StringW,OVRSimpleJSON::JSONNode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, aDictEnum);
}
 void OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator::_ctor(OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator aEnumerator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, aEnumerator);
}
 ::StringW OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::*)(OVRSimpleJSON::JSONNode)>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x263d978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode> (OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263d9fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x263da04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263da68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x263da70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode>> (OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x263da84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::Reset)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x263dae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x263db54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode>>
constexpr  OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::operator System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode>>() const noexcept {
return System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode>>
constexpr  OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::operator System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode>>() const noexcept {
return System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode>>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::__set_m_Node(OVRSimpleJSON::JSONNode value)  {
::cordl_internals::setInstanceField<OVRSimpleJSON::JSONNode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<OVRSimpleJSON::JSONNode>(value));
}
constexpr OVRSimpleJSON::JSONNode OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::__get_m_Node() const {
return ::cordl_internals::getInstanceField<OVRSimpleJSON::JSONNode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::__set_m_Enumerator(OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator value)  {
::cordl_internals::setInstanceField<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator>(value));
}
constexpr OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::__get_m_Enumerator() const {
return ::cordl_internals::getInstanceField<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "aNode", ty: "OVRSimpleJSON::JSONNode", modifiers: "", def_value: None }]
 OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::OVRSimpleJSON__JSONNode__LinqEnumerator(OVRSimpleJSON::JSONNode aNode)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OVRSimpleJSON__JSONNode__LinqEnumerator>(aNode))) {}
 void OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::_ctor(OVRSimpleJSON::JSONNode aNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, aNode);
}
 System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode> OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode>> OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode>>, false>(const_cast<void*>(instance), ___internal_method);
}
 void OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode__LinqEnumerator>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::*)(int32_t)>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x263dbb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x263dbec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::MoveNext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x263dbf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40.System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263dc08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40>::get(),
                            "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x263dc10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263dc50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40.System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode> (OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x263dc58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40>::get(),
                            "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x263dcf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode>
constexpr  OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::operator System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode>() const noexcept {
return System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode>
constexpr  OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::operator System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode>() const noexcept {
return System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::__set___2__current(OVRSimpleJSON::JSONNode value)  {
::cordl_internals::setInstanceField<OVRSimpleJSON::JSONNode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<OVRSimpleJSON::JSONNode>(value));
}
constexpr OVRSimpleJSON::JSONNode OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::__get___2__current() const {
return ::cordl_internals::getInstanceField<OVRSimpleJSON::JSONNode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::OVRSimpleJSON__JSONNode___get_Children_d__40(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OVRSimpleJSON__JSONNode___get_Children_d__40>(__1__state))) {}
 void OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40>::get(),
                            "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(const_cast<void*>(instance), ___internal_method);
}
 void OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode> OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40>::get(),
                            "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_Children_d__40>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::*)(int32_t)>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x263dcf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x263dd28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x263dde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x263e2c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42.__m__Finally2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::__m__Finally2)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x263e218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42.System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263e378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x263e380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263e3c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42.System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode> (OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x263e3c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::*)()>(&OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x263e46c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode>
constexpr  OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::operator System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode>() const noexcept {
return System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode>
constexpr  OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::operator System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode>() const noexcept {
return System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::__set___2__current(OVRSimpleJSON::JSONNode value)  {
::cordl_internals::setInstanceField<OVRSimpleJSON::JSONNode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<OVRSimpleJSON::JSONNode>(value));
}
constexpr OVRSimpleJSON::JSONNode OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::__get___2__current() const {
return ::cordl_internals::getInstanceField<OVRSimpleJSON::JSONNode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::__set___4__this(OVRSimpleJSON::JSONNode value)  {
::cordl_internals::setInstanceField<OVRSimpleJSON::JSONNode, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<OVRSimpleJSON::JSONNode>(value));
}
constexpr OVRSimpleJSON::JSONNode OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::__get___4__this() const {
return ::cordl_internals::getInstanceField<OVRSimpleJSON::JSONNode, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::__set___7__wrap1(System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode>>(value));
}
constexpr System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode> OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::__set___7__wrap2(System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode>>(value));
}
constexpr System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode> OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::__get___7__wrap2() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<OVRSimpleJSON__JSONNode___get_DeepChildren_d__42>(__1__state))) {}
 void OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(const_cast<void*>(instance), ___internal_method);
}
 void OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode> OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<OVRSimpleJSON::JSONNode>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::OVRSimpleJSON__JSONNode___get_DeepChildren_d__42>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_Tag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNodeType (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_Tag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (OVRSimpleJSON::JSONNode::*)(int32_t)>(&OVRSimpleJSON::JSONNode::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2639114;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.set_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNode::*)(int32_t, OVRSimpleJSON::JSONNode)>(&OVRSimpleJSON::JSONNode::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x263911c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (OVRSimpleJSON::JSONNode::*)(::StringW)>(&OVRSimpleJSON::JSONNode::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2639120;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.set_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNode::*)(::StringW, OVRSimpleJSON::JSONNode)>(&OVRSimpleJSON::JSONNode::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2639128;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_Value)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x263912c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.set_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNode::*)(::StringW)>(&OVRSimpleJSON::JSONNode::set_Value)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x263916c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_Count
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2639170;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_IsNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_IsNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2639178;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_IsString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_IsString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2639180;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_IsBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_IsBoolean)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2639188;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_IsNull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_IsNull)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2639190;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_IsArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_IsArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2639198;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_IsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_IsObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26391a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_Inline
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_Inline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26391a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.set_Inline
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNode::*)(bool)>(&OVRSimpleJSON::JSONNode::set_Inline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26391b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNode::*)(::StringW, OVRSimpleJSON::JSONNode)>(&OVRSimpleJSON::JSONNode::Add)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26391b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNode::*)(OVRSimpleJSON::JSONNode)>(&OVRSimpleJSON::JSONNode::Add)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x26391b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (OVRSimpleJSON::JSONNode::*)(::StringW)>(&OVRSimpleJSON::JSONNode::Remove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263921c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (OVRSimpleJSON::JSONNode::*)(int32_t)>(&OVRSimpleJSON::JSONNode::Remove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2639224;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (OVRSimpleJSON::JSONNode::*)(OVRSimpleJSON::JSONNode)>(&OVRSimpleJSON::JSONNode::Remove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x263922c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_Children
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode> (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_Children)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2639234;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_DeepChildren
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode> (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_DeepChildren)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2639294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_DeepChildren",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::ToString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26392fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (OVRSimpleJSON::JSONNode::*)(int32_t)>(&OVRSimpleJSON::JSONNode::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2639388;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.WriteToStringBuilder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNode::*)(System::Text::StringBuilder, int32_t, int32_t, OVRSimpleJSON::JSONTextMode)>(&OVRSimpleJSON::JSONNode::WriteToStringBuilder)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_Linq
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode>> (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_Linq)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2639420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_Linq",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_Keys
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_Keys)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2639484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_Keys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_Values
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_Values)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26394c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_Values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_AsDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_AsDouble)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x26394fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.set_AsDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNode::*)(double_t)>(&OVRSimpleJSON::JSONNode::set_AsDouble)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x26395a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_AsInt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_AsInt)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2639628;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.set_AsInt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNode::*)(int32_t)>(&OVRSimpleJSON::JSONNode::set_AsInt)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x263965c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_AsFloat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_AsFloat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2639674;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.set_AsFloat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNode::*)(float_t)>(&OVRSimpleJSON::JSONNode::set_AsFloat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2639694;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_AsBool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_AsBool)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x26396a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.set_AsBool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNode::*)(bool)>(&OVRSimpleJSON::JSONNode::set_AsBool)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2639760;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_AsLong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_AsLong)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x26397d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.set_AsLong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNode::*)(int64_t)>(&OVRSimpleJSON::JSONNode::set_AsLong)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x263980c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_AsArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONArray (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_AsArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2639848;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_AsObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONObject (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::get_AsObject)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x26398c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_OVRSimpleJSON__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (*)(::StringW)>(&OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2639938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit___StringW
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(OVRSimpleJSON::JSONNode)>(&OVRSimpleJSON::JSONNode::op_Implicit___StringW)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x263999c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_OVRSimpleJSON__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (*)(double_t)>(&OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26399d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_double_t
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(OVRSimpleJSON::JSONNode)>(&OVRSimpleJSON::JSONNode::op_Implicit_double_t)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2639a44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_OVRSimpleJSON__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (*)(float_t)>(&OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2639a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_float_t
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(OVRSimpleJSON::JSONNode)>(&OVRSimpleJSON::JSONNode::op_Implicit_float_t)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2639af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_OVRSimpleJSON__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (*)(int32_t)>(&OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2639b30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_int32_t
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(OVRSimpleJSON::JSONNode)>(&OVRSimpleJSON::JSONNode::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2639b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_OVRSimpleJSON__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (*)(int64_t)>(&OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2639bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_int64_t
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(OVRSimpleJSON::JSONNode)>(&OVRSimpleJSON::JSONNode::op_Implicit_int64_t)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2639cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_OVRSimpleJSON__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (*)(bool)>(&OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2639cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_bool
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(OVRSimpleJSON::JSONNode)>(&OVRSimpleJSON::JSONNode::op_Implicit_bool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2639d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_OVRSimpleJSON__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (*)(System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode>)>(&OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2639d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(OVRSimpleJSON::JSONNode, ::bs_hook::Il2CppWrapperType)>(&OVRSimpleJSON::JSONNode::op_Equality)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x26371d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(OVRSimpleJSON::JSONNode, ::bs_hook::Il2CppWrapperType)>(&OVRSimpleJSON::JSONNode::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2637358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSimpleJSON::JSONNode::*)(::bs_hook::Il2CppWrapperType)>(&OVRSimpleJSON::JSONNode::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2639dd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2639ddc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(OVRSimpleJSON::JSONNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.get_EscapeBuilder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::StringBuilder (*)()>(&OVRSimpleJSON::JSONNode::get_EscapeBuilder)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2639de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_EscapeBuilder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.Escape
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&OVRSimpleJSON::JSONNode::Escape)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x2639e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "Escape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.ParseElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (*)(::StringW, bool)>(&OVRSimpleJSON::JSONNode::ParseElement)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x263a144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ParseElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (*)(::StringW)>(&OVRSimpleJSON::JSONNode::Parse)> {
  constexpr static std::size_t size = 0x604;
  constexpr static std::size_t addrs = 0x2636bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.GetContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (*)(OVRSimpleJSON::JSONContainerType)>(&OVRSimpleJSON::JSONNode::GetContainer)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x263a2b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "GetContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONContainerType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_OVRSimpleJSON__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (*)(UnityEngine::Vector2)>(&OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x263a34c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_OVRSimpleJSON__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (*)(UnityEngine::Vector3)>(&OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x263a518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_OVRSimpleJSON__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (*)(UnityEngine::Vector4)>(&OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x263a77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_OVRSimpleJSON__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (*)(UnityEngine::Quaternion)>(&OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x263aa50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_OVRSimpleJSON__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (*)(UnityEngine::Rect)>(&OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x263ad24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_OVRSimpleJSON__JSONNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (*)(UnityEngine::RectOffset)>(&OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x263b054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectOffset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_UnityEngine__Vector2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (*)(OVRSimpleJSON::JSONNode)>(&OVRSimpleJSON::JSONNode::op_Implicit_UnityEngine__Vector2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x263b37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_UnityEngine__Vector3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(OVRSimpleJSON::JSONNode)>(&OVRSimpleJSON::JSONNode::op_Implicit_UnityEngine__Vector3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x263b3dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_UnityEngine__Vector4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (*)(OVRSimpleJSON::JSONNode)>(&OVRSimpleJSON::JSONNode::op_Implicit_UnityEngine__Vector4)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x263b440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_UnityEngine__Quaternion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(OVRSimpleJSON::JSONNode)>(&OVRSimpleJSON::JSONNode::op_Implicit_UnityEngine__Quaternion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x263b4a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_UnityEngine__Rect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (*)(OVRSimpleJSON::JSONNode)>(&OVRSimpleJSON::JSONNode::op_Implicit_UnityEngine__Rect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x263b508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.op_Implicit_UnityEngine__RectOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RectOffset (*)(OVRSimpleJSON::JSONNode)>(&OVRSimpleJSON::JSONNode::op_Implicit_UnityEngine__RectOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x263b53c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.ReadVector2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (OVRSimpleJSON::JSONNode::*)(UnityEngine::Vector2)>(&OVRSimpleJSON::JSONNode::ReadVector2)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x263b5b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadVector2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.ReadVector2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (OVRSimpleJSON::JSONNode::*)(::StringW, ::StringW)>(&OVRSimpleJSON::JSONNode::ReadVector2)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x263b6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadVector2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.ReadVector2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::ReadVector2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x263b38c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadVector2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.WriteVector2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (OVRSimpleJSON::JSONNode::*)(UnityEngine::Vector2, ::StringW, ::StringW)>(&OVRSimpleJSON::JSONNode::WriteVector2)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x263a3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "WriteVector2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.ReadVector3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (OVRSimpleJSON::JSONNode::*)(UnityEngine::Vector3)>(&OVRSimpleJSON::JSONNode::ReadVector3)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x263b7c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadVector3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.ReadVector3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (OVRSimpleJSON::JSONNode::*)(::StringW, ::StringW, ::StringW)>(&OVRSimpleJSON::JSONNode::ReadVector3)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x263b984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadVector3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.ReadVector3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::ReadVector3)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x263b3ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadVector3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.WriteVector3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (OVRSimpleJSON::JSONNode::*)(UnityEngine::Vector3, ::StringW, ::StringW, ::StringW)>(&OVRSimpleJSON::JSONNode::WriteVector3)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x263a5dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "WriteVector3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.ReadVector4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (OVRSimpleJSON::JSONNode::*)(UnityEngine::Vector4)>(&OVRSimpleJSON::JSONNode::ReadVector4)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x263ba9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadVector4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.ReadVector4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::ReadVector4)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x263b450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadVector4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.WriteVector4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (OVRSimpleJSON::JSONNode::*)(UnityEngine::Vector4)>(&OVRSimpleJSON::JSONNode::WriteVector4)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x263a800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "WriteVector4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.ReadQuaternion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (OVRSimpleJSON::JSONNode::*)(UnityEngine::Quaternion)>(&OVRSimpleJSON::JSONNode::ReadQuaternion)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x263bccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadQuaternion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.ReadQuaternion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::ReadQuaternion)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x263b4b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadQuaternion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.WriteQuaternion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (OVRSimpleJSON::JSONNode::*)(UnityEngine::Quaternion)>(&OVRSimpleJSON::JSONNode::WriteQuaternion)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x263aad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "WriteQuaternion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.ReadRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (OVRSimpleJSON::JSONNode::*)(UnityEngine::Rect)>(&OVRSimpleJSON::JSONNode::ReadRect)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x263befc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.ReadRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rect (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::ReadRect)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x263b528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.WriteRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (OVRSimpleJSON::JSONNode::*)(UnityEngine::Rect)>(&OVRSimpleJSON::JSONNode::WriteRect)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x263ada8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "WriteRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.ReadRectOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RectOffset (OVRSimpleJSON::JSONNode::*)(UnityEngine::RectOffset)>(&OVRSimpleJSON::JSONNode::ReadRectOffset)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x263c154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadRectOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectOffset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.ReadRectOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RectOffset (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::ReadRectOffset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x263b54c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadRectOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.WriteRectOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (OVRSimpleJSON::JSONNode::*)(UnityEngine::RectOffset)>(&OVRSimpleJSON::JSONNode::WriteRectOffset)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x263b0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "WriteRectOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectOffset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.ReadMatrix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Matrix4x4 (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::ReadMatrix)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x263c3f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode.WriteMatrix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVRSimpleJSON::JSONNode (OVRSimpleJSON::JSONNode::*)(UnityEngine::Matrix4x4)>(&OVRSimpleJSON::JSONNode::WriteMatrix)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x263c4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "WriteMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Matrix4x4>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: OVRSimpleJSON::JSONNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSimpleJSON::JSONNode::*)()>(&OVRSimpleJSON::JSONNode::_ctor)> {
  constexpr static std::size_t size = 0x1008;
  constexpr static std::size_t addrs = 0x263c580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void OVRSimpleJSON::JSONNode::__set_forceASCII(bool value)  {
::cordl_internals::setStaticField<bool, "forceASCII", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get>(std::forward<bool>(value));
}
 bool OVRSimpleJSON::JSONNode::__get_forceASCII()  {
return ::cordl_internals::getStaticField<bool, "forceASCII", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get>();
}
 void OVRSimpleJSON::JSONNode::__set_longAsString(bool value)  {
::cordl_internals::setStaticField<bool, "longAsString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get>(std::forward<bool>(value));
}
 bool OVRSimpleJSON::JSONNode::__get_longAsString()  {
return ::cordl_internals::getStaticField<bool, "longAsString", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get>();
}
 void OVRSimpleJSON::JSONNode::__set_m_EscapeBuilder(System::Text::StringBuilder value)  {
::cordl_internals::setStaticField<System::Text::StringBuilder, "m_EscapeBuilder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get>(std::forward<System::Text::StringBuilder>(value));
}
 System::Text::StringBuilder OVRSimpleJSON::JSONNode::__get_m_EscapeBuilder()  {
return ::cordl_internals::getStaticField<System::Text::StringBuilder, "m_EscapeBuilder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get>();
}
 void OVRSimpleJSON::JSONNode::__set_VectorContainerType(OVRSimpleJSON::JSONContainerType value)  {
::cordl_internals::setStaticField<OVRSimpleJSON::JSONContainerType, "VectorContainerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get>(std::forward<OVRSimpleJSON::JSONContainerType>(value));
}
 OVRSimpleJSON::JSONContainerType OVRSimpleJSON::JSONNode::__get_VectorContainerType()  {
return ::cordl_internals::getStaticField<OVRSimpleJSON::JSONContainerType, "VectorContainerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get>();
}
 void OVRSimpleJSON::JSONNode::__set_QuaternionContainerType(OVRSimpleJSON::JSONContainerType value)  {
::cordl_internals::setStaticField<OVRSimpleJSON::JSONContainerType, "QuaternionContainerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get>(std::forward<OVRSimpleJSON::JSONContainerType>(value));
}
 OVRSimpleJSON::JSONContainerType OVRSimpleJSON::JSONNode::__get_QuaternionContainerType()  {
return ::cordl_internals::getStaticField<OVRSimpleJSON::JSONContainerType, "QuaternionContainerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get>();
}
 void OVRSimpleJSON::JSONNode::__set_RectContainerType(OVRSimpleJSON::JSONContainerType value)  {
::cordl_internals::setStaticField<OVRSimpleJSON::JSONContainerType, "RectContainerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get>(std::forward<OVRSimpleJSON::JSONContainerType>(value));
}
 OVRSimpleJSON::JSONContainerType OVRSimpleJSON::JSONNode::__get_RectContainerType()  {
return ::cordl_internals::getStaticField<OVRSimpleJSON::JSONContainerType, "RectContainerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get>();
}
 OVRSimpleJSON::JSONNodeType OVRSimpleJSON::JSONNode::get_Tag()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_Tag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNodeType, false>(const_cast<void*>(instance), ___internal_method);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::get_Item(int32_t aIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aIndex);
}
 void OVRSimpleJSON::JSONNode::set_Item(int32_t aIndex, OVRSimpleJSON::JSONNode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, aIndex, value);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::get_Item(::StringW aKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aKey);
}
 void OVRSimpleJSON::JSONNode::set_Item(::StringW aKey, OVRSimpleJSON::JSONNode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "set_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, aKey, value);
}
 ::StringW OVRSimpleJSON::JSONNode::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void OVRSimpleJSON::JSONNode::set_Value(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "set_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t OVRSimpleJSON::JSONNode::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool OVRSimpleJSON::JSONNode::get_IsNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_IsNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool OVRSimpleJSON::JSONNode::get_IsString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_IsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool OVRSimpleJSON::JSONNode::get_IsBoolean()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_IsBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool OVRSimpleJSON::JSONNode::get_IsNull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_IsNull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool OVRSimpleJSON::JSONNode::get_IsArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_IsArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool OVRSimpleJSON::JSONNode::get_IsObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_IsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool OVRSimpleJSON::JSONNode::get_Inline()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_Inline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void OVRSimpleJSON::JSONNode::set_Inline(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "set_Inline",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void OVRSimpleJSON::JSONNode::Add(::StringW aKey, OVRSimpleJSON::JSONNode aItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, aKey, aItem);
}
 void OVRSimpleJSON::JSONNode::Add(OVRSimpleJSON::JSONNode aItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, aItem);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::Remove(::StringW aKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aKey);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::Remove(int32_t aIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aIndex);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::Remove(OVRSimpleJSON::JSONNode aNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aNode);
}
 System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode> OVRSimpleJSON::JSONNode::get_Children()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_Children",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode> OVRSimpleJSON::JSONNode::get_DeepChildren()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_DeepChildren",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<OVRSimpleJSON::JSONNode>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW OVRSimpleJSON::JSONNode::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW OVRSimpleJSON::JSONNode::ToString(int32_t aIndent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, aIndent);
}
 void OVRSimpleJSON::JSONNode::WriteToStringBuilder(System::Text::StringBuilder aSB, int32_t aIndent, int32_t aIndentInc, OVRSimpleJSON::JSONTextMode aMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "WriteToStringBuilder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONTextMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, aSB, aIndent, aIndentInc, aMode);
}
 OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator OVRSimpleJSON::JSONNode::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::OVRSimpleJSON__JSONNode__Enumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode>> OVRSimpleJSON::JSONNode::get_Linq()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_Linq",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode>>, false>(const_cast<void*>(instance), ___internal_method);
}
 OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator OVRSimpleJSON::JSONNode::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_Keys",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::OVRSimpleJSON__JSONNode__KeyEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator OVRSimpleJSON::JSONNode::get_Values()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_Values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::OVRSimpleJSON__JSONNode__ValueEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t OVRSimpleJSON::JSONNode::get_AsDouble()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_AsDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void OVRSimpleJSON::JSONNode::set_AsDouble(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "set_AsDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t OVRSimpleJSON::JSONNode::get_AsInt()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_AsInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void OVRSimpleJSON::JSONNode::set_AsInt(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "set_AsInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t OVRSimpleJSON::JSONNode::get_AsFloat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_AsFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void OVRSimpleJSON::JSONNode::set_AsFloat(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "set_AsFloat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool OVRSimpleJSON::JSONNode::get_AsBool()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_AsBool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void OVRSimpleJSON::JSONNode::set_AsBool(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "set_AsBool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int64_t OVRSimpleJSON::JSONNode::get_AsLong()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_AsLong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void OVRSimpleJSON::JSONNode::set_AsLong(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "set_AsLong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 OVRSimpleJSON::JSONArray OVRSimpleJSON::JSONNode::get_AsArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_AsArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONArray, false>(const_cast<void*>(instance), ___internal_method);
}
 OVRSimpleJSON::JSONObject OVRSimpleJSON::JSONNode::get_AsObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_AsObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONObject, false>(const_cast<void*>(instance), ___internal_method);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode(::StringW s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(nullptr, ___internal_method, s);
}
 ::StringW OVRSimpleJSON::JSONNode::op_Implicit___StringW(OVRSimpleJSON::JSONNode d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, d);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode(double_t n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(nullptr, ___internal_method, n);
}
 double_t OVRSimpleJSON::JSONNode::op_Implicit_double_t(OVRSimpleJSON::JSONNode d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, d);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode(float_t n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(nullptr, ___internal_method, n);
}
 float_t OVRSimpleJSON::JSONNode::op_Implicit_float_t(OVRSimpleJSON::JSONNode d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, d);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode(int32_t n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(nullptr, ___internal_method, n);
}
 int32_t OVRSimpleJSON::JSONNode::op_Implicit_int32_t(OVRSimpleJSON::JSONNode d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, d);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode(int64_t n)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(nullptr, ___internal_method, n);
}
 int64_t OVRSimpleJSON::JSONNode::op_Implicit_int64_t(OVRSimpleJSON::JSONNode d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, d);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode(bool b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(nullptr, ___internal_method, b);
}
 bool OVRSimpleJSON::JSONNode::op_Implicit_bool(OVRSimpleJSON::JSONNode d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, d);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode(System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode> aKeyValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<::StringW,OVRSimpleJSON::JSONNode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(nullptr, ___internal_method, aKeyValue);
}
 bool OVRSimpleJSON::JSONNode::op_Equality(OVRSimpleJSON::JSONNode a, ::bs_hook::Il2CppWrapperType b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
 bool OVRSimpleJSON::JSONNode::op_Inequality(OVRSimpleJSON::JSONNode a, ::bs_hook::Il2CppWrapperType b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
 bool OVRSimpleJSON::JSONNode::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t OVRSimpleJSON::JSONNode::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Text::StringBuilder OVRSimpleJSON::JSONNode::get_EscapeBuilder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "get_EscapeBuilder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Text::StringBuilder, false>(nullptr, ___internal_method);
}
 ::StringW OVRSimpleJSON::JSONNode::Escape(::StringW aText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "Escape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, aText);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::ParseElement(::StringW token, bool quoted)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ParseElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(nullptr, ___internal_method, token, quoted);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::Parse(::StringW aJSON)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(nullptr, ___internal_method, aJSON);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::GetContainer(OVRSimpleJSON::JSONContainerType aType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "GetContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONContainerType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(nullptr, ___internal_method, aType);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode(UnityEngine::Vector2 aVec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(nullptr, ___internal_method, aVec);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode(UnityEngine::Vector3 aVec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(nullptr, ___internal_method, aVec);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode(UnityEngine::Vector4 aVec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(nullptr, ___internal_method, aVec);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode(UnityEngine::Quaternion aRot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(nullptr, ___internal_method, aRot);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode(UnityEngine::Rect aRect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(nullptr, ___internal_method, aRect);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::op_Implicit_OVRSimpleJSON__JSONNode(UnityEngine::RectOffset aRect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectOffset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(nullptr, ___internal_method, aRect);
}
 UnityEngine::Vector2 OVRSimpleJSON::JSONNode::op_Implicit_UnityEngine__Vector2(OVRSimpleJSON::JSONNode aNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(nullptr, ___internal_method, aNode);
}
 UnityEngine::Vector3 OVRSimpleJSON::JSONNode::op_Implicit_UnityEngine__Vector3(OVRSimpleJSON::JSONNode aNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(nullptr, ___internal_method, aNode);
}
 UnityEngine::Vector4 OVRSimpleJSON::JSONNode::op_Implicit_UnityEngine__Vector4(OVRSimpleJSON::JSONNode aNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector4, false>(nullptr, ___internal_method, aNode);
}
 UnityEngine::Quaternion OVRSimpleJSON::JSONNode::op_Implicit_UnityEngine__Quaternion(OVRSimpleJSON::JSONNode aNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(nullptr, ___internal_method, aNode);
}
 UnityEngine::Rect OVRSimpleJSON::JSONNode::op_Implicit_UnityEngine__Rect(OVRSimpleJSON::JSONNode aNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rect, false>(nullptr, ___internal_method, aNode);
}
 UnityEngine::RectOffset OVRSimpleJSON::JSONNode::op_Implicit_UnityEngine__RectOffset(OVRSimpleJSON::JSONNode aNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<OVRSimpleJSON::JSONNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::RectOffset, false>(nullptr, ___internal_method, aNode);
}
 UnityEngine::Vector2 OVRSimpleJSON::JSONNode::ReadVector2(UnityEngine::Vector2 aDefault)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadVector2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, aDefault);
}
 UnityEngine::Vector2 OVRSimpleJSON::JSONNode::ReadVector2(::StringW aXName, ::StringW aYName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadVector2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method, aXName, aYName);
}
 UnityEngine::Vector2 OVRSimpleJSON::JSONNode::ReadVector2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadVector2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector2, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param aXName: ::StringW (default: u"x")
/// @param aYName: ::StringW (default: u"y")
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::WriteVector2(UnityEngine::Vector2 aVec, ::StringW aXName, ::StringW aYName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "WriteVector2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aVec, aXName, aYName);
}
 UnityEngine::Vector3 OVRSimpleJSON::JSONNode::ReadVector3(UnityEngine::Vector3 aDefault)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadVector3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, aDefault);
}
 UnityEngine::Vector3 OVRSimpleJSON::JSONNode::ReadVector3(::StringW aXName, ::StringW aYName, ::StringW aZName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadVector3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method, aXName, aYName, aZName);
}
 UnityEngine::Vector3 OVRSimpleJSON::JSONNode::ReadVector3()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadVector3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param aXName: ::StringW (default: u"x")
/// @param aYName: ::StringW (default: u"y")
/// @param aZName: ::StringW (default: u"z")
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::WriteVector3(UnityEngine::Vector3 aVec, ::StringW aXName, ::StringW aYName, ::StringW aZName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "WriteVector3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aVec, aXName, aYName, aZName);
}
 UnityEngine::Vector4 OVRSimpleJSON::JSONNode::ReadVector4(UnityEngine::Vector4 aDefault)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadVector4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector4, false>(const_cast<void*>(instance), ___internal_method, aDefault);
}
 UnityEngine::Vector4 OVRSimpleJSON::JSONNode::ReadVector4()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadVector4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector4, false>(const_cast<void*>(instance), ___internal_method);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::WriteVector4(UnityEngine::Vector4 aVec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "WriteVector4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aVec);
}
 UnityEngine::Quaternion OVRSimpleJSON::JSONNode::ReadQuaternion(UnityEngine::Quaternion aDefault)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadQuaternion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(const_cast<void*>(instance), ___internal_method, aDefault);
}
 UnityEngine::Quaternion OVRSimpleJSON::JSONNode::ReadQuaternion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadQuaternion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Quaternion, false>(const_cast<void*>(instance), ___internal_method);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::WriteQuaternion(UnityEngine::Quaternion aRot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "WriteQuaternion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aRot);
}
 UnityEngine::Rect OVRSimpleJSON::JSONNode::ReadRect(UnityEngine::Rect aDefault)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rect, false>(const_cast<void*>(instance), ___internal_method, aDefault);
}
 UnityEngine::Rect OVRSimpleJSON::JSONNode::ReadRect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Rect, false>(const_cast<void*>(instance), ___internal_method);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::WriteRect(UnityEngine::Rect aRect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "WriteRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aRect);
}
 UnityEngine::RectOffset OVRSimpleJSON::JSONNode::ReadRectOffset(UnityEngine::RectOffset aDefault)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadRectOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectOffset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::RectOffset, false>(const_cast<void*>(instance), ___internal_method, aDefault);
}
 UnityEngine::RectOffset OVRSimpleJSON::JSONNode::ReadRectOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadRectOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::RectOffset, false>(const_cast<void*>(instance), ___internal_method);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::WriteRectOffset(UnityEngine::RectOffset aRect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "WriteRectOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectOffset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aRect);
}
 UnityEngine::Matrix4x4 OVRSimpleJSON::JSONNode::ReadMatrix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "ReadMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Matrix4x4, false>(const_cast<void*>(instance), ___internal_method);
}
 OVRSimpleJSON::JSONNode OVRSimpleJSON::JSONNode::WriteMatrix(UnityEngine::Matrix4x4 aMatrix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            "WriteMatrix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Matrix4x4>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<OVRSimpleJSON::JSONNode, false>(const_cast<void*>(instance), ___internal_method, aMatrix);
}
// Ctor Parameters []
 OVRSimpleJSON::JSONNode::JSONNode()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<JSONNode>())) {}
 void OVRSimpleJSON::JSONNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<OVRSimpleJSON::JSONNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
