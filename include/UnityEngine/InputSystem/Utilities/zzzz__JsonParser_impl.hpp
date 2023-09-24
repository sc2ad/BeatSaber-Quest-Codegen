#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Substring_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType::None{0};
constexpr UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType::Bool{1};
constexpr UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType::Real{2};
constexpr UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType::Integer{3};
constexpr UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType::String{4};
constexpr UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType::Array{5};
constexpr UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType::Object{6};
constexpr UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType::Any{7};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::ToString)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x297f190;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::*)(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::Equals)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x297f284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::*)(::bs_hook::Il2CppWrapperType)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x297f42c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::GetHashCode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x297f4bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::op_Equality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x297f4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::op_Inequality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x297f528;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString.op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString (*)(::StringW)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x297f55c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IEquatable_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>
constexpr  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::operator System::IEquatable_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>() const {
return System::IEquatable_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "text", ty: "UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasEscapes", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::UnityEngine__InputSystem__Utilities__JsonParser__JsonString(UnityEngine::InputSystem::Utilities::Substring text, bool hasEscapes) noexcept : ::bs_hook::ValueTypeWrapper() {this->text = text;
this->hasEscapes = hasEscapes;
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::__set_text(UnityEngine::InputSystem::Utilities::Substring value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::Substring, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::Substring>(value));
}
constexpr UnityEngine::InputSystem::Utilities::Substring UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::__get_text() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::Substring, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::__set_hasEscapes(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::__get_hasEscapes() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->__instance);
}
 ::StringW UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::Equals(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 int32_t UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::op_Equality(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString left, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 bool UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::op_Inequality(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString left, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString::op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonString(::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString, false>(nullptr, ___internal_method, str);
}
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c::*)()>(&GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2980a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c._ToString_b__11_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c::*)(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue)>(&GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c::_ToString_b__11_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2980a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c>::get(),
                            "<ToString>b__11_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c._ToString_b__11_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c::*)(System::Collections::Generic::KeyValuePair_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>)>(&GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c::_ToString_b__11_1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2980a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c>::get(),
                            "<ToString>b__11_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c::__set___9(GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c>::get>(std::forward<GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c>(value));
}
 GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c>::get>();
}
 void GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c::__set___9__11_0(System::Func_2<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue,::StringW>, "<>9__11_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c>::get>(std::forward<System::Func_2<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue,::StringW>>(value));
}
 System::Func_2<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue,::StringW> GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c::__get___9__11_0()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue,::StringW>, "<>9__11_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c>::get>();
}
 void GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c::__set___9__11_1(System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>,::StringW>, "<>9__11_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c>::get>(std::forward<System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>,::StringW>>(value));
}
 System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>,::StringW> GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c::__get___9__11_1()  {
return ::cordl_internals::getStaticField<System::Func_2<System::Collections::Generic::KeyValuePair_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>,::StringW>, "<>9__11_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c>::get>();
}
 GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c::New_ctor()  {
GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c>())};
return o;
}
 void GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c::_ToString_b__11_0(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c>::get(),
                            "<ToString>b__11_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::StringW GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c::_ToString_b__11_1(System::Collections::Generic::KeyValuePair_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> pair)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue____c>::get(),
                            "<ToString>b__11_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::KeyValuePair_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, pair);
}
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue.ToBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::ToBoolean)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x297f57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue.ToInteger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::ToInteger)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x297faf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "ToInteger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue.ToDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::ToDouble)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x297fbc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::ToString)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x297f6bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue.op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue (*)(bool)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x297f154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue.op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue (*)(int64_t)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x297f064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue.op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue (*)(double_t)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x297f08c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue.op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue (*)(::StringW)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x297fc90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue.op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue (*)(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x297efcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue.op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue (*)(System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x297f040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue.op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue (*)(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x297fccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue.op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue (*)(::bs_hook::EnumTypeWrapper)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x297fcf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::EnumTypeWrapper>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::*)(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::Equals)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x297fd14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::bs_hook::Il2CppWrapperType, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::Equals)> {
  constexpr static std::size_t size = 0x878;
  constexpr static std::size_t addrs = 0x297ff18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::*)(::bs_hook::Il2CppWrapperType)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2980790;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::*)()>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::GetHashCode)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2980820;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::op_Equality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x297e410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue)>(&UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::op_Inequality)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x298097c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IEquatable_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>
constexpr  UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::operator System::IEquatable_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>() const {
return System::IEquatable_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "type", ty: "UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType", modifiers: "", def_value: Some("{}") }, CppParam { name: "boolValue", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "realValue", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "integerValue", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "stringValue", ty: "UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString", modifiers: "", def_value: Some("{}") }, CppParam { name: "arrayValue", ty: "System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "objectValue", ty: "System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "anyValue", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType type, bool boolValue, double_t realValue, int64_t integerValue, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString stringValue, System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> arrayValue, System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> objectValue, ::bs_hook::Il2CppWrapperType anyValue) noexcept : ::bs_hook::ValueTypeWrapper() {this->type = type;
this->boolValue = boolValue;
this->realValue = realValue;
this->integerValue = integerValue;
this->stringValue = stringValue;
this->arrayValue = arrayValue;
this->objectValue = objectValue;
this->anyValue = anyValue;
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::__set_type(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType>(value));
}
constexpr UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::__get_type() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValueType, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::__set_boolValue(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::__get_boolValue() const {
return ::cordl_internals::getInstanceField<bool, 0x4>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::__set_realValue(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x8>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::__get_realValue() const {
return ::cordl_internals::getInstanceField<double_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::__set_integerValue(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::__get_integerValue() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::__set_stringValue(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString, 0x18>(this->__instance, std::forward<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>(value));
}
constexpr UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::__get_stringValue() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString, 0x18>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::__set_arrayValue(System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>, 0x30>(this->__instance, std::forward<System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::__get_arrayValue() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>, 0x30>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::__set_objectValue(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>, 0x38>(this->__instance, std::forward<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::__get_objectValue() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>, 0x38>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::__set_anyValue(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x40>(this->__instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::__get_anyValue() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x40>(this->__instance);
}
 bool UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::ToBoolean()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int64_t UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::ToInteger()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "ToInteger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 double_t UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::ToDouble()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue(bool val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue, false>(nullptr, ___internal_method, val);
}
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue(int64_t val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue, false>(nullptr, ___internal_method, val);
}
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue(double_t val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue, false>(nullptr, ___internal_method, val);
}
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue(::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue, false>(nullptr, ___internal_method, str);
}
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonString>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue, false>(nullptr, ___internal_method, str);
}
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue(System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue, false>(nullptr, ___internal_method, array);
}
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue, false>(nullptr, ___internal_method, obj);
}
 UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::op_Implicit_UnityEngine__InputSystem__Utilities__UnityEngine__InputSystem__Utilities__JsonParser__JsonValue(::bs_hook::EnumTypeWrapper val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::EnumTypeWrapper>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue, false>(nullptr, ___internal_method, val);
}
 bool UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::Equals(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 bool UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::Equals(::bs_hook::Il2CppWrapperType obj, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj, value);
}
 bool UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 int32_t UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::op_Equality(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue left, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
 bool UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue::op_Inequality(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue left, UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::JsonParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::JsonParser::*)(::StringW)>(&UnityEngine::InputSystem::Utilities::JsonParser::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x297da20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::JsonParser.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::JsonParser::*)()>(&UnityEngine::InputSystem::Utilities::JsonParser::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x297da90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::JsonParser.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Utilities::JsonParser::*)()>(&UnityEngine::InputSystem::Utilities::JsonParser::ToString)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x297da9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Utilities::JsonParser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::JsonParser.NavigateToProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::JsonParser::*)(::StringW)>(&UnityEngine::InputSystem::Utilities::JsonParser::NavigateToProperty)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x297db88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "NavigateToProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::JsonParser.CurrentPropertyHasValueEqualTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::JsonParser::*)(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue)>(&UnityEngine::InputSystem::Utilities::JsonParser::CurrentPropertyHasValueEqualTo)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x297e1b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "CurrentPropertyHasValueEqualTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::JsonParser.ParseToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::JsonParser::*)(char16_t)>(&UnityEngine::InputSystem::Utilities::JsonParser::ParseToken)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x297e014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "ParseToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::JsonParser.ParseValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::JsonParser::*)()>(&UnityEngine::InputSystem::Utilities::JsonParser::ParseValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x297e184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "ParseValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::JsonParser.ParseValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::JsonParser::*)(ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>)>(&UnityEngine::InputSystem::Utilities::JsonParser::ParseValue)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x297e300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "ParseValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::JsonParser.ParseStringValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::JsonParser::*)(ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>)>(&UnityEngine::InputSystem::Utilities::JsonParser::ParseStringValue)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x297e444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "ParseStringValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::JsonParser.ParseArrayValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::JsonParser::*)(ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>)>(&UnityEngine::InputSystem::Utilities::JsonParser::ParseArrayValue)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x297e5c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "ParseArrayValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::JsonParser.ParseObjectValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::JsonParser::*)(ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>)>(&UnityEngine::InputSystem::Utilities::JsonParser::ParseObjectValue)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x297e890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "ParseObjectValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::JsonParser.ParseNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::JsonParser::*)(ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>)>(&UnityEngine::InputSystem::Utilities::JsonParser::ParseNumber)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x297eb3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "ParseNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::JsonParser.ParseBooleanValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::JsonParser::*)(ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>)>(&UnityEngine::InputSystem::Utilities::JsonParser::ParseBooleanValue)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x297ea00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "ParseBooleanValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::JsonParser.ParseNullValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::JsonParser::*)(ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>)>(&UnityEngine::InputSystem::Utilities::JsonParser::ParseNullValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x297ead8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "ParseNullValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::JsonParser.SkipToValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::JsonParser::*)()>(&UnityEngine::InputSystem::Utilities::JsonParser::SkipToValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x297e124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "SkipToValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::JsonParser.SkipString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::JsonParser::*)(::StringW)>(&UnityEngine::InputSystem::Utilities::JsonParser::SkipString)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x297f0ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "SkipString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::JsonParser.SkipWhitespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::JsonParser::*)()>(&UnityEngine::InputSystem::Utilities::JsonParser::SkipWhitespace)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x297e088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "SkipWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Utilities::JsonParser.get_isAtEnd
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::JsonParser::*)()>(&UnityEngine::InputSystem::Utilities::JsonParser::get_isAtEnd)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x297f180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "get_isAtEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_Text", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Position", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MatchAnyElementInArray", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DryRun", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Utilities::JsonParser::JsonParser(::StringW m_Text, int32_t m_Length, int32_t m_Position, bool m_MatchAnyElementInArray, bool m_DryRun) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Text = m_Text;
this->m_Length = m_Length;
this->m_Position = m_Position;
this->m_MatchAnyElementInArray = m_MatchAnyElementInArray;
this->m_DryRun = m_DryRun;
}
constexpr void UnityEngine::InputSystem::Utilities::JsonParser::__set_m_Text(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::InputSystem::Utilities::JsonParser::__get_m_Text() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Utilities::JsonParser::__set_m_Length(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Utilities::JsonParser::__get_m_Length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Utilities::JsonParser::__set_m_Position(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::Utilities::JsonParser::__get_m_Position() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Utilities::JsonParser::__set_m_MatchAnyElementInArray(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::Utilities::JsonParser::__get_m_MatchAnyElementInArray() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::Utilities::JsonParser::__set_m_DryRun(bool value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::Utilities::JsonParser::__get_m_DryRun() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this->__instance);
}
 void UnityEngine::InputSystem::Utilities::JsonParser::_ctor(::StringW json)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, json);
}
 void UnityEngine::InputSystem::Utilities::JsonParser::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW UnityEngine::InputSystem::Utilities::JsonParser::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::InputSystem::Utilities::JsonParser::NavigateToProperty(::StringW path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "NavigateToProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, path);
}
 bool UnityEngine::InputSystem::Utilities::JsonParser::CurrentPropertyHasValueEqualTo(UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue expectedValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "CurrentPropertyHasValueEqualTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, expectedValue);
}
 bool UnityEngine::InputSystem::Utilities::JsonParser::ParseToken(char16_t token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "ParseToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, token);
}
 bool UnityEngine::InputSystem::Utilities::JsonParser::ParseValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "ParseValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::InputSystem::Utilities::JsonParser::ParseValue(ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "ParseValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, result);
}
 bool UnityEngine::InputSystem::Utilities::JsonParser::ParseStringValue(ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "ParseStringValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, result);
}
 bool UnityEngine::InputSystem::Utilities::JsonParser::ParseArrayValue(ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "ParseArrayValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, result);
}
 bool UnityEngine::InputSystem::Utilities::JsonParser::ParseObjectValue(ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "ParseObjectValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, result);
}
 bool UnityEngine::InputSystem::Utilities::JsonParser::ParseNumber(ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "ParseNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, result);
}
 bool UnityEngine::InputSystem::Utilities::JsonParser::ParseBooleanValue(ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "ParseBooleanValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, result);
}
 bool UnityEngine::InputSystem::Utilities::JsonParser::ParseNullValue(ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "ParseNullValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::Utilities::UnityEngine__InputSystem__Utilities__JsonParser__JsonValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, result);
}
 bool UnityEngine::InputSystem::Utilities::JsonParser::SkipToValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "SkipToValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::InputSystem::Utilities::JsonParser::SkipString(::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "SkipString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, text);
}
 void UnityEngine::InputSystem::Utilities::JsonParser::SkipWhitespace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "SkipWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::InputSystem::Utilities::JsonParser::get_isAtEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Utilities::JsonParser>::get(),
                            "get_isAtEnd",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
