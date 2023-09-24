#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Net/Http/Headers/zzzz__Token_def.hpp"
#include "System/Net/Http/Headers/zzzz__Token_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::Http::Headers::System__Net__Http__Headers__Token__Type::System__Net__Http__Headers__Token__Type(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Net::Http::Headers::System__Net__Http__Headers__Token__Type::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Http::Headers::System__Net__Http__Headers__Token__Type::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Net::Http::Headers::System__Net__Http__Headers__Token__Type  System::Net::Http::Headers::System__Net__Http__Headers__Token__Type::Error{0};
constexpr System::Net::Http::Headers::System__Net__Http__Headers__Token__Type  System::Net::Http::Headers::System__Net__Http__Headers__Token__Type::End{1};
constexpr System::Net::Http::Headers::System__Net__Http__Headers__Token__Type  System::Net::Http::Headers::System__Net__Http__Headers__Token__Type::Token{2};
constexpr System::Net::Http::Headers::System__Net__Http__Headers__Token__Type  System::Net::Http::Headers::System__Net__Http__Headers__Token__Type::QuotedString{3};
constexpr System::Net::Http::Headers::System__Net__Http__Headers__Token__Type  System::Net::Http::Headers::System__Net__Http__Headers__Token__Type::SeparatorEqual{4};
constexpr System::Net::Http::Headers::System__Net__Http__Headers__Token__Type  System::Net::Http::Headers::System__Net__Http__Headers__Token__Type::SeparatorSemicolon{5};
constexpr System::Net::Http::Headers::System__Net__Http__Headers__Token__Type  System::Net::Http::Headers::System__Net__Http__Headers__Token__Type::SeparatorSlash{6};
constexpr System::Net::Http::Headers::System__Net__Http__Headers__Token__Type  System::Net::Http::Headers::System__Net__Http__Headers__Token__Type::SeparatorDash{7};
constexpr System::Net::Http::Headers::System__Net__Http__Headers__Token__Type  System::Net::Http::Headers::System__Net__Http__Headers__Token__Type::SeparatorComma{8};
constexpr System::Net::Http::Headers::System__Net__Http__Headers__Token__Type  System::Net::Http::Headers::System__Net__Http__Headers__Token__Type::OpenParens{9};
//  Writing Method size for method: System::Net::Http::Headers::Token._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::Token::*)(System::Net::Http::Headers::System__Net__Http__Headers__Token__Type, int32_t, int32_t)>(&System::Net::Http::Headers::Token::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26a375c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::Token>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::Headers::System__Net__Http__Headers__Token__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::Headers::Token.get_StartPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Http::Headers::Token::*)()>(&System::Net::Http::Headers::Token::get_StartPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26aae2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::Token>::get(),
                            "get_StartPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::Headers::Token.set_StartPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::Token::*)(int32_t)>(&System::Net::Http::Headers::Token::set_StartPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26aae34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::Token>::get(),
                            "set_StartPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::Headers::Token.get_EndPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Net::Http::Headers::Token::*)()>(&System::Net::Http::Headers::Token::get_EndPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26aae3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::Token>::get(),
                            "get_EndPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::Headers::Token.set_EndPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Http::Headers::Token::*)(int32_t)>(&System::Net::Http::Headers::Token::set_EndPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26aae44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::Token>::get(),
                            "set_EndPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::Headers::Token.get_Kind
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Http::Headers::System__Net__Http__Headers__Token__Type (System::Net::Http::Headers::Token::*)()>(&System::Net::Http::Headers::Token::get_Kind)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26aae4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::Token>::get(),
                            "get_Kind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::Headers::Token.op_Implicit_System__Net__Http__Headers__System__Net__Http__Headers__Token__Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::Http::Headers::System__Net__Http__Headers__Token__Type (*)(System::Net::Http::Headers::Token)>(&System::Net::Http::Headers::Token::op_Implicit_System__Net__Http__Headers__System__Net__Http__Headers__Token__Type)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x26aae54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::Token>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::Headers::Token>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Net::Http::Headers::Token.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Http::Headers::Token::*)()>(&System::Net::Http::Headers::Token::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26aae58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Net::Http::Headers::Token),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::Token>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "type", ty: "System::Net::Http::Headers::System__Net__Http__Headers__Token__Type", modifiers: "", def_value: Some("{}") }, CppParam { name: "_StartPosition_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_EndPosition_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Net::Http::Headers::Token::Token(System::Net::Http::Headers::System__Net__Http__Headers__Token__Type type, int32_t _StartPosition_k__BackingField, int32_t _EndPosition_k__BackingField) noexcept : ::bs_hook::ValueTypeWrapper() {this->type = type;
this->_StartPosition_k__BackingField = _StartPosition_k__BackingField;
this->_EndPosition_k__BackingField = _EndPosition_k__BackingField;
}
 void System::Net::Http::Headers::Token::__set_Empty(System::Net::Http::Headers::Token value)  {
::cordl_internals::setStaticField<System::Net::Http::Headers::Token, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::Token>::get>(std::forward<System::Net::Http::Headers::Token>(value));
}
 System::Net::Http::Headers::Token System::Net::Http::Headers::Token::__get_Empty()  {
return ::cordl_internals::getStaticField<System::Net::Http::Headers::Token, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::Token>::get>();
}
constexpr void System::Net::Http::Headers::Token::__set_type(System::Net::Http::Headers::System__Net__Http__Headers__Token__Type value)  {
::cordl_internals::setInstanceField<System::Net::Http::Headers::System__Net__Http__Headers__Token__Type, 0x0>(this->__instance, std::forward<System::Net::Http::Headers::System__Net__Http__Headers__Token__Type>(value));
}
constexpr System::Net::Http::Headers::System__Net__Http__Headers__Token__Type System::Net::Http::Headers::Token::__get_type() const {
return ::cordl_internals::getInstanceField<System::Net::Http::Headers::System__Net__Http__Headers__Token__Type, 0x0>(this->__instance);
}
constexpr void System::Net::Http::Headers::Token::__set__StartPosition_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Http::Headers::Token::__get__StartPosition_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void System::Net::Http::Headers::Token::__set__EndPosition_k__BackingField(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Net::Http::Headers::Token::__get__EndPosition_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
 void System::Net::Http::Headers::Token::_ctor(System::Net::Http::Headers::System__Net__Http__Headers__Token__Type type, int32_t startPosition, int32_t endPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::Token>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::Headers::System__Net__Http__Headers__Token__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, type, startPosition, endPosition);
}
 int32_t System::Net::Http::Headers::Token::get_StartPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::Token>::get(),
                            "get_StartPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Net::Http::Headers::Token::set_StartPosition(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::Token>::get(),
                            "set_StartPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t System::Net::Http::Headers::Token::get_EndPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::Token>::get(),
                            "get_EndPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Net::Http::Headers::Token::set_EndPosition(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::Token>::get(),
                            "set_EndPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 System::Net::Http::Headers::System__Net__Http__Headers__Token__Type System::Net::Http::Headers::Token::get_Kind()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::Token>::get(),
                            "get_Kind",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Http::Headers::System__Net__Http__Headers__Token__Type, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 System::Net::Http::Headers::System__Net__Http__Headers__Token__Type System::Net::Http::Headers::Token::op_Implicit_System__Net__Http__Headers__System__Net__Http__Headers__Token__Type(System::Net::Http::Headers::Token token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::Token>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Http::Headers::Token>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Net::Http::Headers::System__Net__Http__Headers__Token__Type, false>(nullptr, ___internal_method, token);
}
 ::StringW System::Net::Http::Headers::Token::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Net::Http::Headers::Token>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
