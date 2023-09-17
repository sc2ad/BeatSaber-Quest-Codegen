#pragma once
#include "System/Reflection/zzzz__Binder_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/zzzz__DefaultBinder_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/Reflection/zzzz__ParameterModifier_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
//  Writing Method size for method: ::System::____System__DefaultBinder__BinderState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__DefaultBinder__BinderState::*)(::ArrayW<int32_t>, int32_t, bool)>(&::System::____System__DefaultBinder__BinderState::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x24703d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__DefaultBinder__BinderState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::____System__DefaultBinder__BinderState::__set_m_argsMap(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::System::____System__DefaultBinder__BinderState::__get_m_argsMap() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::____System__DefaultBinder__BinderState::__set_m_originalSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::____System__DefaultBinder__BinderState::__get_m_originalSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::____System__DefaultBinder__BinderState::__set_m_isParamArray(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::____System__DefaultBinder__BinderState::__get_m_isParamArray() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "argsMap", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "originalSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isParamArray", ty: "bool", modifiers: "", def_value: None }]
 ::System::____System__DefaultBinder__BinderState::____System__DefaultBinder__BinderState(::ArrayW<int32_t> argsMap, int32_t originalSize, bool isParamArray)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__DefaultBinder__BinderState>(argsMap, originalSize, isParamArray))) {}
 void ::System::____System__DefaultBinder__BinderState::_ctor(::ArrayW<int32_t> argsMap, int32_t originalSize, bool isParamArray)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__DefaultBinder__BinderState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, argsMap, originalSize, isParamArray);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::____System__DefaultBinder__Primitives::____System__DefaultBinder__Primitives(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::____System__DefaultBinder__Primitives::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::____System__DefaultBinder__Primitives::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::____System__DefaultBinder__Primitives  ::System::____System__DefaultBinder__Primitives::Boolean{8};
constexpr ::System::____System__DefaultBinder__Primitives  ::System::____System__DefaultBinder__Primitives::Char{16};
constexpr ::System::____System__DefaultBinder__Primitives  ::System::____System__DefaultBinder__Primitives::SByte{32};
constexpr ::System::____System__DefaultBinder__Primitives  ::System::____System__DefaultBinder__Primitives::Byte{64};
constexpr ::System::____System__DefaultBinder__Primitives  ::System::____System__DefaultBinder__Primitives::Int16{128};
constexpr ::System::____System__DefaultBinder__Primitives  ::System::____System__DefaultBinder__Primitives::UInt16{256};
constexpr ::System::____System__DefaultBinder__Primitives  ::System::____System__DefaultBinder__Primitives::Int32{512};
constexpr ::System::____System__DefaultBinder__Primitives  ::System::____System__DefaultBinder__Primitives::UInt32{1024};
constexpr ::System::____System__DefaultBinder__Primitives  ::System::____System__DefaultBinder__Primitives::Int64{2048};
constexpr ::System::____System__DefaultBinder__Primitives  ::System::____System__DefaultBinder__Primitives::UInt64{4096};
constexpr ::System::____System__DefaultBinder__Primitives  ::System::____System__DefaultBinder__Primitives::Single{8192};
constexpr ::System::____System__DefaultBinder__Primitives  ::System::____System__DefaultBinder__Primitives::Double{16384};
constexpr ::System::____System__DefaultBinder__Primitives  ::System::____System__DefaultBinder__Primitives::Decimal{32768};
constexpr ::System::____System__DefaultBinder__Primitives  ::System::____System__DefaultBinder__Primitives::DateTime{65536};
constexpr ::System::____System__DefaultBinder__Primitives  ::System::____System__DefaultBinder__Primitives::String{262144};
//  Writing Method size for method: ::System::____System__DefaultBinder____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__DefaultBinder____c::*)()>(&::System::____System__DefaultBinder____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24737e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__DefaultBinder____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__DefaultBinder____c._SelectProperty_b__2_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::____System__DefaultBinder____c::*)(::System::Type)>(&::System::____System__DefaultBinder____c::_SelectProperty_b__2_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x24737f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__DefaultBinder____c>::get(),
                            "<SelectProperty>b__2_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::System::____System__DefaultBinder____c::__set___9(::System::____System__DefaultBinder____c value)  {
::cordl_internals::setStaticField<::System::____System__DefaultBinder____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__DefaultBinder____c>::get>(std::forward<::System::____System__DefaultBinder____c>(value));
}
 ::System::____System__DefaultBinder____c ::System::____System__DefaultBinder____c::__get___9()  {
return ::cordl_internals::getStaticField<::System::____System__DefaultBinder____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__DefaultBinder____c>::get>();
}
 void ::System::____System__DefaultBinder____c::__set___9__2_0(::System::Predicate_1<::System::Type> value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::System::Type>, "<>9__2_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__DefaultBinder____c>::get>(std::forward<::System::Predicate_1<::System::Type>>(value));
}
 ::System::Predicate_1<::System::Type> ::System::____System__DefaultBinder____c::__get___9__2_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::System::Type>, "<>9__2_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__DefaultBinder____c>::get>();
}
// Ctor Parameters []
 ::System::____System__DefaultBinder____c::____System__DefaultBinder____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__DefaultBinder____c>())) {}
 void ::System::____System__DefaultBinder____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__DefaultBinder____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::____System__DefaultBinder____c::_SelectProperty_b__2_0(::System::Type t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__DefaultBinder____c>::get(),
                            "<SelectProperty>b__2_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, t);
}
//  Writing Method size for method: ::System::DefaultBinder.BindToMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase (::System::DefaultBinder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::MethodBase>, ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>>, ::ArrayW<::System::Reflection::ParameterModifier>, ::System::Globalization::CultureInfo, ::ArrayW<::StringW>, ByRef<::bs_hook::Il2CppWrapperType>)>(&::System::DefaultBinder::BindToMethod)> {
  constexpr static std::size_t size = 0x1eec;
  constexpr static std::size_t addrs = 0x246e19c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::DefaultBinder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.BindToField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::FieldInfo (::System::DefaultBinder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::FieldInfo>, ::bs_hook::Il2CppWrapperType, ::System::Globalization::CultureInfo)>(&::System::DefaultBinder::BindToField)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x24706e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::DefaultBinder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.SelectProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::PropertyInfo (::System::DefaultBinder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::PropertyInfo>, ::System::Type, ::ArrayW<::System::Type>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::DefaultBinder::SelectProperty)> {
  constexpr static std::size_t size = 0xa24;
  constexpr static std::size_t addrs = 0x2470c84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::DefaultBinder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.ChangeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::DefaultBinder::*)(::bs_hook::Il2CppWrapperType, ::System::Type, ::System::Globalization::CultureInfo)>(&::System::DefaultBinder::ChangeType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2472188;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::DefaultBinder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.ReorderArgumentArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DefaultBinder::*)(ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>>, ::bs_hook::Il2CppWrapperType)>(&::System::DefaultBinder::ReorderArgumentArray)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x24721e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::DefaultBinder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.ExactBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase (*)(::ArrayW<::System::Reflection::MethodBase>, ::ArrayW<::System::Type>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::DefaultBinder::ExactBinding)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x24724c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "ExactBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::MethodBase>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.ExactPropertyBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::PropertyInfo (*)(::ArrayW<::System::Reflection::PropertyInfo>, ::System::Type, ::ArrayW<::System::Type>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::DefaultBinder::ExactPropertyBinding)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x2472880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "ExactPropertyBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::PropertyInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostSpecific
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<::System::Reflection::ParameterInfo>, ::ArrayW<int32_t>, ::System::Type, ::ArrayW<::System::Reflection::ParameterInfo>, ::ArrayW<int32_t>, ::System::Type, ::ArrayW<::System::Type>, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::System::DefaultBinder::FindMostSpecific)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x2471c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "FindMostSpecific",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostSpecificType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Type, ::System::Type, ::System::Type)>(&::System::DefaultBinder::FindMostSpecificType)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x24718cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "FindMostSpecificType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostSpecificMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Reflection::MethodBase, ::ArrayW<int32_t>, ::System::Type, ::System::Reflection::MethodBase, ::ArrayW<int32_t>, ::System::Type, ::ArrayW<::System::Type>, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::System::DefaultBinder::FindMostSpecificMethod)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2470568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "FindMostSpecificMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostSpecificField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Reflection::FieldInfo, ::System::Reflection::FieldInfo)>(&::System::DefaultBinder::FindMostSpecificField)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2470b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "FindMostSpecificField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostSpecificProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Reflection::PropertyInfo, ::System::Reflection::PropertyInfo)>(&::System::DefaultBinder::FindMostSpecificProperty)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x24720a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "FindMostSpecificProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CompareMethodSigAndName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::MethodBase, ::System::Reflection::MethodBase)>(&::System::DefaultBinder::CompareMethodSigAndName)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2472b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "CompareMethodSigAndName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.GetHierarchyDepth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Type)>(&::System::DefaultBinder::GetHierarchyDepth)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2472c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "GetHierarchyDepth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostDerivedNewSlotMeth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase (*)(::ArrayW<::System::Reflection::MethodBase>, int32_t)>(&::System::DefaultBinder::FindMostDerivedNewSlotMeth)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2472730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "FindMostDerivedNewSlotMeth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::MethodBase>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.ReorderParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int32_t>, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::System::DefaultBinder::ReorderParams)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2470418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "ReorderParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CreateParamOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<int32_t>, ::ArrayW<::System::Reflection::ParameterInfo>, ::ArrayW<::StringW>)>(&::System::DefaultBinder::CreateParamOrder)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2470088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "CreateParamOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CanConvertPrimitive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType, ::System::RuntimeType)>(&::System::DefaultBinder::CanConvertPrimitive)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x24716a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "CanConvertPrimitive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CanConvertPrimitiveObjectToType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::bs_hook::Il2CppWrapperType, ::System::RuntimeType)>(&::System::DefaultBinder::CanConvertPrimitiveObjectToType)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x24702c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "CanConvertPrimitiveObjectToType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CompareMethodSig
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::MethodBase, ::System::Reflection::MethodBase)>(&::System::DefaultBinder::CompareMethodSig)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2472d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "CompareMethodSig",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.SelectMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase (::System::DefaultBinder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::MethodBase>, ::ArrayW<::System::Type>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::DefaultBinder::SelectMethod)> {
  constexpr static std::size_t size = 0x724;
  constexpr static std::size_t addrs = 0x2472e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "SelectMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::MethodBase>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CanChangePrimitive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type, ::System::Type)>(&::System::DefaultBinder::CanChangePrimitive)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x24735ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "CanChangePrimitive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CanPrimitiveWiden
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type, ::System::Type)>(&::System::DefaultBinder::CanPrimitiveWiden)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2473610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "CanPrimitiveWiden",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DefaultBinder::*)()>(&::System::DefaultBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24736e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::System::DefaultBinder::__set__primitiveConversions(::ArrayW<::System::____System__DefaultBinder__Primitives> value)  {
::cordl_internals::setStaticField<::ArrayW<::System::____System__DefaultBinder__Primitives>, "_primitiveConversions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get>(std::forward<::ArrayW<::System::____System__DefaultBinder__Primitives>>(value));
}
 ::ArrayW<::System::____System__DefaultBinder__Primitives> ::System::DefaultBinder::__get__primitiveConversions()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::____System__DefaultBinder__Primitives>, "_primitiveConversions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get>();
}
 ::System::Reflection::MethodBase ::System::DefaultBinder::BindToMethod(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::MethodBase> match, ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>> args, ::ArrayW<::System::Reflection::ParameterModifier> modifiers, ::System::Globalization::CultureInfo cultureInfo, ::ArrayW<::StringW> names, ByRef<::bs_hook::Il2CppWrapperType> state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "BindToMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::MethodBase>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase, false>(const_cast<void*>(instance), ___internal_method, bindingAttr, match, args, modifiers, cultureInfo, names, state);
}
 ::System::Reflection::FieldInfo ::System::DefaultBinder::BindToField(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::FieldInfo> match, ::bs_hook::Il2CppWrapperType value, ::System::Globalization::CultureInfo cultureInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "BindToField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::FieldInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo, false>(const_cast<void*>(instance), ___internal_method, bindingAttr, match, value, cultureInfo);
}
 ::System::Reflection::PropertyInfo ::System::DefaultBinder::SelectProperty(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::PropertyInfo> match, ::System::Type returnType, ::ArrayW<::System::Type> indexes, ::ArrayW<::System::Reflection::ParameterModifier> modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "SelectProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::PropertyInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo, false>(const_cast<void*>(instance), ___internal_method, bindingAttr, match, returnType, indexes, modifiers);
}
 ::bs_hook::Il2CppWrapperType ::System::DefaultBinder::ChangeType(::bs_hook::Il2CppWrapperType value, ::System::Type type, ::System::Globalization::CultureInfo cultureInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "ChangeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, value, type, cultureInfo);
}
 void ::System::DefaultBinder::ReorderArgumentArray(ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>> args, ::bs_hook::Il2CppWrapperType state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "ReorderArgumentArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, args, state);
}
 ::System::Reflection::MethodBase ::System::DefaultBinder::ExactBinding(::ArrayW<::System::Reflection::MethodBase> match, ::ArrayW<::System::Type> types, ::ArrayW<::System::Reflection::ParameterModifier> modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "ExactBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::MethodBase>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase, false>(nullptr, ___internal_method, match, types, modifiers);
}
 ::System::Reflection::PropertyInfo ::System::DefaultBinder::ExactPropertyBinding(::ArrayW<::System::Reflection::PropertyInfo> match, ::System::Type returnType, ::ArrayW<::System::Type> types, ::ArrayW<::System::Reflection::ParameterModifier> modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "ExactPropertyBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::PropertyInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo, false>(nullptr, ___internal_method, match, returnType, types, modifiers);
}
 int32_t ::System::DefaultBinder::FindMostSpecific(::ArrayW<::System::Reflection::ParameterInfo> p1, ::ArrayW<int32_t> paramOrder1, ::System::Type paramArrayType1, ::ArrayW<::System::Reflection::ParameterInfo> p2, ::ArrayW<int32_t> paramOrder2, ::System::Type paramArrayType2, ::ArrayW<::System::Type> types, ::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "FindMostSpecific",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, p1, paramOrder1, paramArrayType1, p2, paramOrder2, paramArrayType2, types, args);
}
 int32_t ::System::DefaultBinder::FindMostSpecificType(::System::Type c1, ::System::Type c2, ::System::Type t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "FindMostSpecificType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, c1, c2, t);
}
 int32_t ::System::DefaultBinder::FindMostSpecificMethod(::System::Reflection::MethodBase m1, ::ArrayW<int32_t> paramOrder1, ::System::Type paramArrayType1, ::System::Reflection::MethodBase m2, ::ArrayW<int32_t> paramOrder2, ::System::Type paramArrayType2, ::ArrayW<::System::Type> types, ::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "FindMostSpecificMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, m1, paramOrder1, paramArrayType1, m2, paramOrder2, paramArrayType2, types, args);
}
 int32_t ::System::DefaultBinder::FindMostSpecificField(::System::Reflection::FieldInfo cur1, ::System::Reflection::FieldInfo cur2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "FindMostSpecificField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, cur1, cur2);
}
 int32_t ::System::DefaultBinder::FindMostSpecificProperty(::System::Reflection::PropertyInfo cur1, ::System::Reflection::PropertyInfo cur2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "FindMostSpecificProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, cur1, cur2);
}
 bool ::System::DefaultBinder::CompareMethodSigAndName(::System::Reflection::MethodBase m1, ::System::Reflection::MethodBase m2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "CompareMethodSigAndName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, m1, m2);
}
 int32_t ::System::DefaultBinder::GetHierarchyDepth(::System::Type t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "GetHierarchyDepth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, t);
}
 ::System::Reflection::MethodBase ::System::DefaultBinder::FindMostDerivedNewSlotMeth(::ArrayW<::System::Reflection::MethodBase> match, int32_t cMatches)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "FindMostDerivedNewSlotMeth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::MethodBase>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase, false>(nullptr, ___internal_method, match, cMatches);
}
 void ::System::DefaultBinder::ReorderParams(::ArrayW<int32_t> paramOrder, ::ArrayW<::bs_hook::Il2CppWrapperType> vars)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "ReorderParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, paramOrder, vars);
}
 bool ::System::DefaultBinder::CreateParamOrder(::ArrayW<int32_t> paramOrder, ::ArrayW<::System::Reflection::ParameterInfo> pars, ::ArrayW<::StringW> names)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "CreateParamOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, paramOrder, pars, names);
}
 bool ::System::DefaultBinder::CanConvertPrimitive(::System::RuntimeType source, ::System::RuntimeType target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "CanConvertPrimitive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source, target);
}
 bool ::System::DefaultBinder::CanConvertPrimitiveObjectToType(::bs_hook::Il2CppWrapperType source, ::System::RuntimeType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "CanConvertPrimitiveObjectToType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source, type);
}
 bool ::System::DefaultBinder::CompareMethodSig(::System::Reflection::MethodBase m1, ::System::Reflection::MethodBase m2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "CompareMethodSig",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, m1, m2);
}
 ::System::Reflection::MethodBase ::System::DefaultBinder::SelectMethod(::System::Reflection::BindingFlags bindingAttr, ::ArrayW<::System::Reflection::MethodBase> match, ::ArrayW<::System::Type> types, ::ArrayW<::System::Reflection::ParameterModifier> modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "SelectMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::MethodBase>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::ParameterModifier>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase, false>(const_cast<void*>(instance), ___internal_method, bindingAttr, match, types, modifiers);
}
 bool ::System::DefaultBinder::CanChangePrimitive(::System::Type source, ::System::Type target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "CanChangePrimitive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source, target);
}
 bool ::System::DefaultBinder::CanPrimitiveWiden(::System::Type source, ::System::Type target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            "CanPrimitiveWiden",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source, target);
}
// Ctor Parameters []
 ::System::DefaultBinder::DefaultBinder()  : ::System::Reflection::Binder(THROW_UNLESS(::il2cpp_utils::New<DefaultBinder>())) {}
 void ::System::DefaultBinder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DefaultBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
