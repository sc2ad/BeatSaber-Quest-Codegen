#pragma once
#include "Zenject/Internal/zzzz__ReflectionTypeInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "Zenject/zzzz__InjectableInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
//  Writing Method size for method: Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo::*)(System::Reflection::FieldInfo, Zenject::InjectableInfo)>(&Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2da9cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::FieldInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectableInfo>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo::__set_FieldInfo(System::Reflection::FieldInfo value)  {
::cordl_internals::setInstanceField<System::Reflection::FieldInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Reflection::FieldInfo>(value));
}
constexpr System::Reflection::FieldInfo Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo::__get_FieldInfo() const {
return ::cordl_internals::getInstanceField<System::Reflection::FieldInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo::__set_InjectableInfo(Zenject::InjectableInfo value)  {
::cordl_internals::setInstanceField<Zenject::InjectableInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::InjectableInfo>(value));
}
constexpr Zenject::InjectableInfo Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo::__get_InjectableInfo() const {
return ::cordl_internals::getInstanceField<Zenject::InjectableInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "fieldInfo", ty: "System::Reflection::FieldInfo", modifiers: "", def_value: None }, CppParam { name: "injectableInfo", ty: "Zenject::InjectableInfo", modifiers: "", def_value: None }]
 Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo(System::Reflection::FieldInfo fieldInfo, Zenject::InjectableInfo injectableInfo)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo>(fieldInfo, injectableInfo))) {}
 void Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo::_ctor(System::Reflection::FieldInfo fieldInfo, Zenject::InjectableInfo injectableInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::FieldInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectableInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fieldInfo, injectableInfo);
}
//  Writing Method size for method: Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo::*)(System::Reflection::ParameterInfo, Zenject::InjectableInfo)>(&Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2da9cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ParameterInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectableInfo>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo::__set_ParameterInfo(System::Reflection::ParameterInfo value)  {
::cordl_internals::setInstanceField<System::Reflection::ParameterInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Reflection::ParameterInfo>(value));
}
constexpr System::Reflection::ParameterInfo Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo::__get_ParameterInfo() const {
return ::cordl_internals::getInstanceField<System::Reflection::ParameterInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo::__set_InjectableInfo(Zenject::InjectableInfo value)  {
::cordl_internals::setInstanceField<Zenject::InjectableInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::InjectableInfo>(value));
}
constexpr Zenject::InjectableInfo Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo::__get_InjectableInfo() const {
return ::cordl_internals::getInstanceField<Zenject::InjectableInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "parameterInfo", ty: "System::Reflection::ParameterInfo", modifiers: "", def_value: None }, CppParam { name: "injectableInfo", ty: "Zenject::InjectableInfo", modifiers: "", def_value: None }]
 Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo(System::Reflection::ParameterInfo parameterInfo, Zenject::InjectableInfo injectableInfo)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo>(parameterInfo, injectableInfo))) {}
 void Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo::_ctor(System::Reflection::ParameterInfo parameterInfo, Zenject::InjectableInfo injectableInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ParameterInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectableInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameterInfo, injectableInfo);
}
//  Writing Method size for method: Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo::*)(System::Reflection::PropertyInfo, Zenject::InjectableInfo)>(&Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2da9d18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::PropertyInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectableInfo>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo::__set_PropertyInfo(System::Reflection::PropertyInfo value)  {
::cordl_internals::setInstanceField<System::Reflection::PropertyInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Reflection::PropertyInfo>(value));
}
constexpr System::Reflection::PropertyInfo Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo::__get_PropertyInfo() const {
return ::cordl_internals::getInstanceField<System::Reflection::PropertyInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo::__set_InjectableInfo(Zenject::InjectableInfo value)  {
::cordl_internals::setInstanceField<Zenject::InjectableInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::InjectableInfo>(value));
}
constexpr Zenject::InjectableInfo Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo::__get_InjectableInfo() const {
return ::cordl_internals::getInstanceField<Zenject::InjectableInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "propertyInfo", ty: "System::Reflection::PropertyInfo", modifiers: "", def_value: None }, CppParam { name: "injectableInfo", ty: "Zenject::InjectableInfo", modifiers: "", def_value: None }]
 Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo(System::Reflection::PropertyInfo propertyInfo, Zenject::InjectableInfo injectableInfo)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo>(propertyInfo, injectableInfo))) {}
 void Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo::_ctor(System::Reflection::PropertyInfo propertyInfo, Zenject::InjectableInfo injectableInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::PropertyInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectableInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, propertyInfo, injectableInfo);
}
//  Writing Method size for method: Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo::*)(System::Reflection::MethodInfo, System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo>)>(&Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2da9d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo::__set_MethodInfo(System::Reflection::MethodInfo value)  {
::cordl_internals::setInstanceField<System::Reflection::MethodInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Reflection::MethodInfo>(value));
}
constexpr System::Reflection::MethodInfo Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo::__get_MethodInfo() const {
return ::cordl_internals::getInstanceField<System::Reflection::MethodInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo::__set_Parameters(System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo>>(value));
}
constexpr System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo> Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo::__get_Parameters() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "methodInfo", ty: "System::Reflection::MethodInfo", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo>", modifiers: "", def_value: None }]
 Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo(System::Reflection::MethodInfo methodInfo, System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo> parameters)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo>(methodInfo, parameters))) {}
 void Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo::_ctor(System::Reflection::MethodInfo methodInfo, System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo> parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MethodInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, methodInfo, parameters);
}
//  Writing Method size for method: Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo::*)(System::Reflection::ConstructorInfo, System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo>)>(&Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2da9d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ConstructorInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo::__set_ConstructorInfo(System::Reflection::ConstructorInfo value)  {
::cordl_internals::setInstanceField<System::Reflection::ConstructorInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Reflection::ConstructorInfo>(value));
}
constexpr System::Reflection::ConstructorInfo Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo::__get_ConstructorInfo() const {
return ::cordl_internals::getInstanceField<System::Reflection::ConstructorInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo::__set_Parameters(System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo>>(value));
}
constexpr System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo> Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo::__get_Parameters() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "constructorInfo", ty: "System::Reflection::ConstructorInfo", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo>", modifiers: "", def_value: None }]
 Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo(System::Reflection::ConstructorInfo constructorInfo, System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo> parameters)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo>(constructorInfo, parameters))) {}
 void Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo::_ctor(System::Reflection::ConstructorInfo constructorInfo, System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo> parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::ConstructorInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectParameterInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, constructorInfo, parameters);
}
//  Writing Method size for method: Zenject::Internal::ReflectionTypeInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::ReflectionTypeInfo::*)(System::Type, System::Type, Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo, System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo>, System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo>, System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo>)>(&Zenject::Internal::ReflectionTypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2da9c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ReflectionTypeInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Internal::ReflectionTypeInfo::__set_Type(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type Zenject::Internal::ReflectionTypeInfo::__get_Type() const {
return ::cordl_internals::getInstanceField<System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Internal::ReflectionTypeInfo::__set_BaseType(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type Zenject::Internal::ReflectionTypeInfo::__get_BaseType() const {
return ::cordl_internals::getInstanceField<System::Type, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Internal::ReflectionTypeInfo::__set_InjectProperties(System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo>>(value));
}
constexpr System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo> Zenject::Internal::ReflectionTypeInfo::__get_InjectProperties() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Internal::ReflectionTypeInfo::__set_InjectFields(System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo>>(value));
}
constexpr System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo> Zenject::Internal::ReflectionTypeInfo::__get_InjectFields() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Internal::ReflectionTypeInfo::__set_InjectConstructor(Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo value)  {
::cordl_internals::setInstanceField<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo>(value));
}
constexpr Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo Zenject::Internal::ReflectionTypeInfo::__get_InjectConstructor() const {
return ::cordl_internals::getInstanceField<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Internal::ReflectionTypeInfo::__set_InjectMethods(System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo>>(value));
}
constexpr System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo> Zenject::Internal::ReflectionTypeInfo::__get_InjectMethods() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "type", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "baseType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "injectConstructor", ty: "Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo", modifiers: "", def_value: None }, CppParam { name: "injectMethods", ty: "System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo>", modifiers: "", def_value: None }, CppParam { name: "injectFields", ty: "System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo>", modifiers: "", def_value: None }, CppParam { name: "injectProperties", ty: "System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo>", modifiers: "", def_value: None }]
 Zenject::Internal::ReflectionTypeInfo::ReflectionTypeInfo(System::Type type, System::Type baseType, Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo injectConstructor, System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo> injectMethods, System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo> injectFields, System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo> injectProperties)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ReflectionTypeInfo>(type, baseType, injectConstructor, injectMethods, injectFields, injectProperties))) {}
 void Zenject::Internal::ReflectionTypeInfo::_ctor(System::Type type, System::Type baseType, Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo injectConstructor, System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo> injectMethods, System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo> injectFields, System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo> injectProperties)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Internal::ReflectionTypeInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectConstructorInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectMethodInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectFieldInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::Internal::Zenject__Internal__ReflectionTypeInfo__InjectPropertyInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, baseType, injectConstructor, injectMethods, injectFields, injectProperties);
}
