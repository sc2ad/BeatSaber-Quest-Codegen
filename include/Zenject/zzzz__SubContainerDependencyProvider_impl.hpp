#pragma once
#include "Zenject/zzzz__SubContainerDependencyProvider_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
//  Writing Method size for method: Zenject::SubContainerDependencyProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerDependencyProvider::*)(System::Type, ::bs_hook::Il2CppWrapperType, Zenject::ISubContainerCreator, bool)>(&Zenject::SubContainerDependencyProvider::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d9413c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerDependencyProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::ISubContainerCreator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerDependencyProvider.get_IsCached
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::SubContainerDependencyProvider::*)()>(&Zenject::SubContainerDependencyProvider::get_IsCached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerDependencyProvider>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerDependencyProvider.get_TypeVariesBasedOnMemberType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::SubContainerDependencyProvider::*)()>(&Zenject::SubContainerDependencyProvider::get_TypeVariesBasedOnMemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerDependencyProvider>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerDependencyProvider.GetInstanceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (Zenject::SubContainerDependencyProvider::*)(Zenject::InjectContext)>(&Zenject::SubContainerDependencyProvider::GetInstanceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerDependencyProvider>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerDependencyProvider.CreateSubContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectContext (Zenject::SubContainerDependencyProvider::*)(Zenject::InjectContext, Zenject::DiContainer)>(&Zenject::SubContainerDependencyProvider::CreateSubContext)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d94198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerDependencyProvider>::get(),
                            "CreateSubContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerDependencyProvider.GetAllInstancesWithInjectSplit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerDependencyProvider::*)(Zenject::InjectContext, System::Collections::Generic::List_1<Zenject::TypeValuePair>, ByRef<System::Action>, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>)>(&Zenject::SubContainerDependencyProvider::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2d941d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerDependencyProvider>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Action>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::IProvider
constexpr  Zenject::SubContainerDependencyProvider::operator Zenject::IProvider() const noexcept {
return Zenject::IProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SubContainerDependencyProvider::__set__subContainerCreator(Zenject::ISubContainerCreator value)  {
::cordl_internals::setInstanceField<Zenject::ISubContainerCreator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::ISubContainerCreator>(value));
}
constexpr Zenject::ISubContainerCreator Zenject::SubContainerDependencyProvider::__get__subContainerCreator() const {
return ::cordl_internals::getInstanceField<Zenject::ISubContainerCreator, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SubContainerDependencyProvider::__set__dependencyType(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type Zenject::SubContainerDependencyProvider::__get__dependencyType() const {
return ::cordl_internals::getInstanceField<System::Type, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SubContainerDependencyProvider::__set__identifier(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType Zenject::SubContainerDependencyProvider::__get__identifier() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SubContainerDependencyProvider::__set__resolveAll(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::SubContainerDependencyProvider::__get__resolveAll() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "dependencyType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "identifier", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "subContainerCreator", ty: "Zenject::ISubContainerCreator", modifiers: "", def_value: None }, CppParam { name: "resolveAll", ty: "bool", modifiers: "", def_value: None }]
 Zenject::SubContainerDependencyProvider::SubContainerDependencyProvider(System::Type dependencyType, ::bs_hook::Il2CppWrapperType identifier, Zenject::ISubContainerCreator subContainerCreator, bool resolveAll)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SubContainerDependencyProvider>(dependencyType, identifier, subContainerCreator, resolveAll))) {}
 void Zenject::SubContainerDependencyProvider::_ctor(System::Type dependencyType, ::bs_hook::Il2CppWrapperType identifier, Zenject::ISubContainerCreator subContainerCreator, bool resolveAll)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerDependencyProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::ISubContainerCreator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dependencyType, identifier, subContainerCreator, resolveAll);
}
 bool Zenject::SubContainerDependencyProvider::get_IsCached()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerDependencyProvider>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Zenject::SubContainerDependencyProvider::get_TypeVariesBasedOnMemberType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerDependencyProvider>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type Zenject::SubContainerDependencyProvider::GetInstanceType(Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerDependencyProvider>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, context);
}
 Zenject::InjectContext Zenject::SubContainerDependencyProvider::CreateSubContext(Zenject::InjectContext parent, Zenject::DiContainer subContainer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerDependencyProvider>::get(),
                            "CreateSubContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectContext, false>(const_cast<void*>(instance), ___internal_method, parent, subContainer);
}
 void Zenject::SubContainerDependencyProvider::GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerDependencyProvider>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Action>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context, args, injectAction, buffer);
}
