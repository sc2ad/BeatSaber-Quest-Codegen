#pragma once
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "Zenject/zzzz__InjectableInfo_def.hpp"
#include "Zenject/zzzz__ZenFactoryMethod_def.hpp"
#include "Zenject/zzzz__ZenMemberSetterMethod_def.hpp"
#include "Zenject/zzzz__ZenInjectMethod_def.hpp"
//  Writing Method size for method: Zenject::Zenject__InjectTypeInfo__InjectMemberInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__InjectTypeInfo__InjectMemberInfo::*)(Zenject::ZenMemberSetterMethod, Zenject::InjectableInfo)>(&Zenject::Zenject__InjectTypeInfo__InjectMemberInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d409c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::ZenMemberSetterMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectableInfo>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__InjectTypeInfo__InjectMemberInfo::__set_Setter(Zenject::ZenMemberSetterMethod value)  {
::cordl_internals::setInstanceField<Zenject::ZenMemberSetterMethod, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::ZenMemberSetterMethod>(value));
}
constexpr Zenject::ZenMemberSetterMethod Zenject::Zenject__InjectTypeInfo__InjectMemberInfo::__get_Setter() const {
return ::cordl_internals::getInstanceField<Zenject::ZenMemberSetterMethod, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__InjectTypeInfo__InjectMemberInfo::__set_Info(Zenject::InjectableInfo value)  {
::cordl_internals::setInstanceField<Zenject::InjectableInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::InjectableInfo>(value));
}
constexpr Zenject::InjectableInfo Zenject::Zenject__InjectTypeInfo__InjectMemberInfo::__get_Info() const {
return ::cordl_internals::getInstanceField<Zenject::InjectableInfo, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "setter", ty: "Zenject::ZenMemberSetterMethod", modifiers: "", def_value: None }, CppParam { name: "info", ty: "Zenject::InjectableInfo", modifiers: "", def_value: None }]
 Zenject::Zenject__InjectTypeInfo__InjectMemberInfo::Zenject__InjectTypeInfo__InjectMemberInfo(Zenject::ZenMemberSetterMethod setter, Zenject::InjectableInfo info)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__InjectTypeInfo__InjectMemberInfo>(setter, info))) {}
 void Zenject::Zenject__InjectTypeInfo__InjectMemberInfo::_ctor(Zenject::ZenMemberSetterMethod setter, Zenject::InjectableInfo info)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::ZenMemberSetterMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectableInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, setter, info);
}
//  Writing Method size for method: Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo::*)(Zenject::ZenFactoryMethod, ::ArrayW<Zenject::InjectableInfo>)>(&Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d409f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::ZenFactoryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Zenject::InjectableInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo::__set_Factory(Zenject::ZenFactoryMethod value)  {
::cordl_internals::setInstanceField<Zenject::ZenFactoryMethod, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::ZenFactoryMethod>(value));
}
constexpr Zenject::ZenFactoryMethod Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo::__get_Factory() const {
return ::cordl_internals::getInstanceField<Zenject::ZenFactoryMethod, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo::__set_Parameters(::ArrayW<Zenject::InjectableInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<Zenject::InjectableInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<Zenject::InjectableInfo>>(value));
}
constexpr ::ArrayW<Zenject::InjectableInfo> Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo::__get_Parameters() const {
return ::cordl_internals::getInstanceField<::ArrayW<Zenject::InjectableInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "factory", ty: "Zenject::ZenFactoryMethod", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "::ArrayW<Zenject::InjectableInfo>", modifiers: "", def_value: None }]
 Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo::Zenject__InjectTypeInfo__InjectConstructorInfo(Zenject::ZenFactoryMethod factory, ::ArrayW<Zenject::InjectableInfo> parameters)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__InjectTypeInfo__InjectConstructorInfo>(factory, parameters))) {}
 void Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo::_ctor(Zenject::ZenFactoryMethod factory, ::ArrayW<Zenject::InjectableInfo> parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::ZenFactoryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Zenject::InjectableInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, factory, parameters);
}
//  Writing Method size for method: Zenject::Zenject__InjectTypeInfo__InjectMethodInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__InjectTypeInfo__InjectMethodInfo::*)(Zenject::ZenInjectMethod, ::ArrayW<Zenject::InjectableInfo>, ::StringW)>(&Zenject::Zenject__InjectTypeInfo__InjectMethodInfo::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d40a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::ZenInjectMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Zenject::InjectableInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__InjectTypeInfo__InjectMethodInfo::__set_Name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Zenject::Zenject__InjectTypeInfo__InjectMethodInfo::__get_Name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__InjectTypeInfo__InjectMethodInfo::__set_Action(Zenject::ZenInjectMethod value)  {
::cordl_internals::setInstanceField<Zenject::ZenInjectMethod, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::ZenInjectMethod>(value));
}
constexpr Zenject::ZenInjectMethod Zenject::Zenject__InjectTypeInfo__InjectMethodInfo::__get_Action() const {
return ::cordl_internals::getInstanceField<Zenject::ZenInjectMethod, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__InjectTypeInfo__InjectMethodInfo::__set_Parameters(::ArrayW<Zenject::InjectableInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<Zenject::InjectableInfo>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<Zenject::InjectableInfo>>(value));
}
constexpr ::ArrayW<Zenject::InjectableInfo> Zenject::Zenject__InjectTypeInfo__InjectMethodInfo::__get_Parameters() const {
return ::cordl_internals::getInstanceField<::ArrayW<Zenject::InjectableInfo>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "action", ty: "Zenject::ZenInjectMethod", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "::ArrayW<Zenject::InjectableInfo>", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
 Zenject::Zenject__InjectTypeInfo__InjectMethodInfo::Zenject__InjectTypeInfo__InjectMethodInfo(Zenject::ZenInjectMethod action, ::ArrayW<Zenject::InjectableInfo> parameters, ::StringW name)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__InjectTypeInfo__InjectMethodInfo>(action, parameters, name))) {}
 void Zenject::Zenject__InjectTypeInfo__InjectMethodInfo::_ctor(Zenject::ZenInjectMethod action, ::ArrayW<Zenject::InjectableInfo> parameters, ::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::ZenInjectMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Zenject::InjectableInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, action, parameters, name);
}
//  Writing Method size for method: Zenject::InjectTypeInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectTypeInfo::*)(System::Type, Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo, ::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo>, ::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo>)>(&Zenject::InjectTypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2d4079c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::InjectTypeInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::InjectTypeInfo.get_BaseTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (Zenject::InjectTypeInfo::*)()>(&Zenject::InjectTypeInfo::get_BaseTypeInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d407dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::InjectTypeInfo>::get(),
                            "get_BaseTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::InjectTypeInfo.set_BaseTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InjectTypeInfo::*)(Zenject::InjectTypeInfo)>(&Zenject::InjectTypeInfo::set_BaseTypeInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d407e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::InjectTypeInfo>::get(),
                            "set_BaseTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectTypeInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::InjectTypeInfo.get_AllInjectables
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo> (Zenject::InjectTypeInfo::*)()>(&Zenject::InjectTypeInfo::get_AllInjectables)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2d407ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::InjectTypeInfo>::get(),
                            "get_AllInjectables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::InjectTypeInfo._get_AllInjectables_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectableInfo (*)(Zenject::Zenject__InjectTypeInfo__InjectMemberInfo)>(&Zenject::InjectTypeInfo::_get_AllInjectables_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2d40998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::InjectTypeInfo>::get(),
                            "<get_AllInjectables>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::InjectTypeInfo._get_AllInjectables_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo> (*)(Zenject::Zenject__InjectTypeInfo__InjectMethodInfo)>(&Zenject::InjectTypeInfo::_get_AllInjectables_b__1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2d409b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::InjectTypeInfo>::get(),
                            "<get_AllInjectables>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::InjectTypeInfo::__set_Type(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type Zenject::InjectTypeInfo::__get_Type() const {
return ::cordl_internals::getInstanceField<System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::InjectTypeInfo::__set_InjectMethods(::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo>>(value));
}
constexpr ::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo> Zenject::InjectTypeInfo::__get_InjectMethods() const {
return ::cordl_internals::getInstanceField<::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::InjectTypeInfo::__set_InjectMembers(::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo>>(value));
}
constexpr ::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo> Zenject::InjectTypeInfo::__get_InjectMembers() const {
return ::cordl_internals::getInstanceField<::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::InjectTypeInfo::__set_InjectConstructor(Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo value)  {
::cordl_internals::setInstanceField<Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo>(value));
}
constexpr Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo Zenject::InjectTypeInfo::__get_InjectConstructor() const {
return ::cordl_internals::getInstanceField<Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::InjectTypeInfo::__set__BaseTypeInfo_k__BackingField(Zenject::InjectTypeInfo value)  {
::cordl_internals::setInstanceField<Zenject::InjectTypeInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::InjectTypeInfo>(value));
}
constexpr Zenject::InjectTypeInfo Zenject::InjectTypeInfo::__get__BaseTypeInfo_k__BackingField() const {
return ::cordl_internals::getInstanceField<Zenject::InjectTypeInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Zenject::InjectTypeInfo::__set_CS$__9__CachedAnonymousMethodDelegate2(System::Func_2<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo,Zenject::InjectableInfo> value)  {
::cordl_internals::setStaticField<System::Func_2<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo,Zenject::InjectableInfo>, "CS$<>9__CachedAnonymousMethodDelegate2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::InjectTypeInfo>::get>(std::forward<System::Func_2<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo,Zenject::InjectableInfo>>(value));
}
 System::Func_2<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo,Zenject::InjectableInfo> Zenject::InjectTypeInfo::__get_CS$__9__CachedAnonymousMethodDelegate2()  {
return ::cordl_internals::getStaticField<System::Func_2<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo,Zenject::InjectableInfo>, "CS$<>9__CachedAnonymousMethodDelegate2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::InjectTypeInfo>::get>();
}
 void Zenject::InjectTypeInfo::__set_CS$__9__CachedAnonymousMethodDelegate3(System::Func_2<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo,System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo>> value)  {
::cordl_internals::setStaticField<System::Func_2<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo,System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo>>, "CS$<>9__CachedAnonymousMethodDelegate3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::InjectTypeInfo>::get>(std::forward<System::Func_2<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo,System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo>>>(value));
}
 System::Func_2<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo,System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo>> Zenject::InjectTypeInfo::__get_CS$__9__CachedAnonymousMethodDelegate3()  {
return ::cordl_internals::getStaticField<System::Func_2<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo,System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo>>, "CS$<>9__CachedAnonymousMethodDelegate3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::InjectTypeInfo>::get>();
}
// Ctor Parameters [CppParam { name: "type", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "injectConstructor", ty: "Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo", modifiers: "", def_value: None }, CppParam { name: "injectMethods", ty: "::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo>", modifiers: "", def_value: None }, CppParam { name: "injectMembers", ty: "::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo>", modifiers: "", def_value: None }]
 Zenject::InjectTypeInfo::InjectTypeInfo(System::Type type, Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo injectConstructor, ::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo> injectMethods, ::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo> injectMembers)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<InjectTypeInfo>(type, injectConstructor, injectMethods, injectMembers))) {}
 void Zenject::InjectTypeInfo::_ctor(System::Type type, Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo injectConstructor, ::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo> injectMethods, ::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo> injectMembers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::InjectTypeInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__InjectTypeInfo__InjectConstructorInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, injectConstructor, injectMethods, injectMembers);
}
 Zenject::InjectTypeInfo Zenject::InjectTypeInfo::get_BaseTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::InjectTypeInfo>::get(),
                            "get_BaseTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::InjectTypeInfo::set_BaseTypeInfo(Zenject::InjectTypeInfo value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::InjectTypeInfo>::get(),
                            "set_BaseTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectTypeInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo> Zenject::InjectTypeInfo::get_AllInjectables()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::InjectTypeInfo>::get(),
                            "get_AllInjectables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo>, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::InjectableInfo Zenject::InjectTypeInfo::_get_AllInjectables_b__0(Zenject::Zenject__InjectTypeInfo__InjectMemberInfo x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::InjectTypeInfo>::get(),
                            "<get_AllInjectables>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__InjectTypeInfo__InjectMemberInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectableInfo, false>(nullptr, ___internal_method, x);
}
 System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo> Zenject::InjectTypeInfo::_get_AllInjectables_b__1(Zenject::Zenject__InjectTypeInfo__InjectMethodInfo x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::InjectTypeInfo>::get(),
                            "<get_AllInjectables>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::Zenject__InjectTypeInfo__InjectMethodInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<Zenject::InjectableInfo>, false>(nullptr, ___internal_method, x);
}
