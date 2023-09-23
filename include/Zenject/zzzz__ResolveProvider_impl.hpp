#pragma once
#include "Zenject/zzzz__ResolveProvider_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: Zenject::ResolveProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ResolveProvider::*)(System::Type, Zenject::DiContainer, ::bs_hook::Il2CppWrapperType, bool, Zenject::InjectSources, bool)>(&Zenject::ResolveProvider::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d908b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ResolveProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectSources>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ResolveProvider.get_IsCached
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ResolveProvider::*)()>(&Zenject::ResolveProvider::get_IsCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9090c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ResolveProvider>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ResolveProvider.get_TypeVariesBasedOnMemberType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ResolveProvider::*)()>(&Zenject::ResolveProvider::get_TypeVariesBasedOnMemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d90914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ResolveProvider>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ResolveProvider.GetInstanceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (Zenject::ResolveProvider::*)(Zenject::InjectContext)>(&Zenject::ResolveProvider::GetInstanceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9091c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ResolveProvider>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ResolveProvider.GetAllInstancesWithInjectSplit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ResolveProvider::*)(Zenject::InjectContext, System::Collections::Generic::List_1<Zenject::TypeValuePair>, ByRef<System::Action>, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>)>(&Zenject::ResolveProvider::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2d90924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ResolveProvider>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Action>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::ResolveProvider.GetSubContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectContext (Zenject::ResolveProvider::*)(Zenject::InjectContext)>(&Zenject::ResolveProvider::GetSubContext)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d90ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ResolveProvider>::get(),
                            "GetSubContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::IProvider
constexpr  Zenject::ResolveProvider::operator Zenject::IProvider() const noexcept {
return Zenject::IProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::ResolveProvider::__set__identifier(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType Zenject::ResolveProvider::__get__identifier() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::ResolveProvider::__set__container(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer Zenject::ResolveProvider::__get__container() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::ResolveProvider::__set__contractType(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type Zenject::ResolveProvider::__get__contractType() const {
return ::cordl_internals::getInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::ResolveProvider::__set__isOptional(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::ResolveProvider::__get__isOptional() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::ResolveProvider::__set__source(Zenject::InjectSources value)  {
::cordl_internals::setInstanceField<Zenject::InjectSources, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::InjectSources>(value));
}
constexpr Zenject::InjectSources Zenject::ResolveProvider::__get__source() const {
return ::cordl_internals::getInstanceField<Zenject::InjectSources, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::ResolveProvider::__set__matchAll(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::ResolveProvider::__get__matchAll() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "contractType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "identifier", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "isOptional", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "source", ty: "Zenject::InjectSources", modifiers: "", def_value: None }, CppParam { name: "matchAll", ty: "bool", modifiers: "", def_value: None }]
 Zenject::ResolveProvider::ResolveProvider(System::Type contractType, Zenject::DiContainer container, ::bs_hook::Il2CppWrapperType identifier, bool isOptional, Zenject::InjectSources source, bool matchAll)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ResolveProvider>(contractType, container, identifier, isOptional, source, matchAll))) {}
 void Zenject::ResolveProvider::_ctor(System::Type contractType, Zenject::DiContainer container, ::bs_hook::Il2CppWrapperType identifier, bool isOptional, Zenject::InjectSources source, bool matchAll)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ResolveProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectSources>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, contractType, container, identifier, isOptional, source, matchAll);
}
 bool Zenject::ResolveProvider::get_IsCached()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ResolveProvider>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Zenject::ResolveProvider::get_TypeVariesBasedOnMemberType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ResolveProvider>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type Zenject::ResolveProvider::GetInstanceType(Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ResolveProvider>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void Zenject::ResolveProvider::GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ResolveProvider>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Action>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context, args, injectAction, buffer);
}
 Zenject::InjectContext Zenject::ResolveProvider::GetSubContext(Zenject::InjectContext parent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ResolveProvider>::get(),
                            "GetSubContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectContext, false>(const_cast<void*>(instance), ___internal_method, parent);
}
