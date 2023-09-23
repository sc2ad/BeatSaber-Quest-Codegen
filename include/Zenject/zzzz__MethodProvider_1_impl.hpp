#pragma once
#include "Zenject/zzzz__MethodProvider_1_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Int32Enum_def.hpp"
//  Writing Method size for method: Zenject::MethodProvider_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MethodProvider_1::*)(System::Func_2<Zenject::InjectContext,TReturn>, Zenject::DiContainer)>(&Zenject::MethodProvider_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<Zenject::InjectContext,TReturn>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::MethodProvider_1.get_IsCached
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::MethodProvider_1::*)()>(&Zenject::MethodProvider_1::get_IsCached)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::MethodProvider_1.get_TypeVariesBasedOnMemberType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::MethodProvider_1::*)()>(&Zenject::MethodProvider_1::get_TypeVariesBasedOnMemberType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::MethodProvider_1.GetInstanceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (Zenject::MethodProvider_1::*)(Zenject::InjectContext)>(&Zenject::MethodProvider_1::GetInstanceType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::MethodProvider_1.GetAllInstancesWithInjectSplit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MethodProvider_1::*)(Zenject::InjectContext, System::Collections::Generic::List_1<Zenject::TypeValuePair>, ByRef<System::Action>, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>)>(&Zenject::MethodProvider_1::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Action>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::IProvider
constexpr  Zenject::MethodProvider_1::operator Zenject::IProvider() const noexcept {
return Zenject::IProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::MethodProvider_1::__set__container(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer Zenject::MethodProvider_1::__get__container() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::MethodProvider_1::__set__method(System::Func_2<Zenject::InjectContext,TReturn> value)  {
::cordl_internals::setInstanceField<System::Func_2<Zenject::InjectContext,TReturn>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<Zenject::InjectContext,TReturn>>(value));
}
constexpr System::Func_2<Zenject::InjectContext,TReturn> Zenject::MethodProvider_1::__get__method() const {
return ::cordl_internals::getInstanceField<System::Func_2<Zenject::InjectContext,TReturn>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "method", ty: "System::Func_2<Zenject::InjectContext,TReturn>", modifiers: "", def_value: None }, CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }]
 Zenject::MethodProvider_1::MethodProvider_1(System::Func_2<Zenject::InjectContext,TReturn> method, Zenject::DiContainer container)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MethodProvider_1>(method, container))) {}
 void Zenject::MethodProvider_1::_ctor(System::Func_2<Zenject::InjectContext,TReturn> method, Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<Zenject::InjectContext,TReturn>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, method, container);
}
 bool Zenject::MethodProvider_1::get_IsCached()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Zenject::MethodProvider_1::get_TypeVariesBasedOnMemberType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type Zenject::MethodProvider_1::GetInstanceType(Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void Zenject::MethodProvider_1::GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Action>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context, args, injectAction, buffer);
}
//  Writing Method size for method: Zenject::MethodProvider_1<float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MethodProvider_1<float_t>::*)(System::Func_2<Zenject::InjectContext,float_t>, Zenject::DiContainer)>(&Zenject::MethodProvider_1<float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<Zenject::InjectContext,float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::MethodProvider_1<float_t>.get_IsCached
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::MethodProvider_1<float_t>::*)()>(&Zenject::MethodProvider_1<float_t>::get_IsCached)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1<float_t>>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::MethodProvider_1<float_t>.get_TypeVariesBasedOnMemberType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::MethodProvider_1<float_t>::*)()>(&Zenject::MethodProvider_1<float_t>::get_TypeVariesBasedOnMemberType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1<float_t>>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::MethodProvider_1<float_t>.GetInstanceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (Zenject::MethodProvider_1<float_t>::*)(Zenject::InjectContext)>(&Zenject::MethodProvider_1<float_t>::GetInstanceType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1<float_t>>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::MethodProvider_1<float_t>.GetAllInstancesWithInjectSplit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MethodProvider_1<float_t>::*)(Zenject::InjectContext, System::Collections::Generic::List_1<Zenject::TypeValuePair>, ByRef<System::Action>, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>)>(&Zenject::MethodProvider_1<float_t>::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1<float_t>>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Action>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::IProvider
constexpr  Zenject::MethodProvider_1<float_t>::operator Zenject::IProvider() const noexcept {
return Zenject::IProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::MethodProvider_1<float_t>::__set__container(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer Zenject::MethodProvider_1<float_t>::__get__container() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::MethodProvider_1<float_t>::__set__method(System::Func_2<Zenject::InjectContext,float_t> value)  {
::cordl_internals::setInstanceField<System::Func_2<Zenject::InjectContext,float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<Zenject::InjectContext,float_t>>(value));
}
constexpr System::Func_2<Zenject::InjectContext,float_t> Zenject::MethodProvider_1<float_t>::__get__method() const {
return ::cordl_internals::getInstanceField<System::Func_2<Zenject::InjectContext,float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "method", ty: "System::Func_2<Zenject::InjectContext,float_t>", modifiers: "", def_value: None }, CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }]
 Zenject::MethodProvider_1<float_t>::MethodProvider_1(System::Func_2<Zenject::InjectContext,float_t> method, Zenject::DiContainer container)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MethodProvider_1>(method, container))) {}
 void Zenject::MethodProvider_1<float_t>::_ctor(System::Func_2<Zenject::InjectContext,float_t> method, Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<Zenject::InjectContext,float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, method, container);
}
 bool Zenject::MethodProvider_1<float_t>::get_IsCached()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1<float_t>>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Zenject::MethodProvider_1<float_t>::get_TypeVariesBasedOnMemberType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1<float_t>>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type Zenject::MethodProvider_1<float_t>::GetInstanceType(Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1<float_t>>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void Zenject::MethodProvider_1<float_t>::GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1<float_t>>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Action>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context, args, injectAction, buffer);
}
//  Writing Method size for method: Zenject::MethodProvider_1<System::Int32Enum>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MethodProvider_1<System::Int32Enum>::*)(System::Func_2<Zenject::InjectContext,System::Int32Enum>, Zenject::DiContainer)>(&Zenject::MethodProvider_1<System::Int32Enum>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1<System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<Zenject::InjectContext,System::Int32Enum>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::MethodProvider_1<System::Int32Enum>.get_IsCached
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::MethodProvider_1<System::Int32Enum>::*)()>(&Zenject::MethodProvider_1<System::Int32Enum>::get_IsCached)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1<System::Int32Enum>>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::MethodProvider_1<System::Int32Enum>.get_TypeVariesBasedOnMemberType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::MethodProvider_1<System::Int32Enum>::*)()>(&Zenject::MethodProvider_1<System::Int32Enum>::get_TypeVariesBasedOnMemberType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1<System::Int32Enum>>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::MethodProvider_1<System::Int32Enum>.GetInstanceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type (Zenject::MethodProvider_1<System::Int32Enum>::*)(Zenject::InjectContext)>(&Zenject::MethodProvider_1<System::Int32Enum>::GetInstanceType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1<System::Int32Enum>>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::MethodProvider_1<System::Int32Enum>.GetAllInstancesWithInjectSplit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::MethodProvider_1<System::Int32Enum>::*)(Zenject::InjectContext, System::Collections::Generic::List_1<Zenject::TypeValuePair>, ByRef<System::Action>, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>)>(&Zenject::MethodProvider_1<System::Int32Enum>::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1<System::Int32Enum>>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Action>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::IProvider
constexpr  Zenject::MethodProvider_1<System::Int32Enum>::operator Zenject::IProvider() const noexcept {
return Zenject::IProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::MethodProvider_1<System::Int32Enum>::__set__container(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer Zenject::MethodProvider_1<System::Int32Enum>::__get__container() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::MethodProvider_1<System::Int32Enum>::__set__method(System::Func_2<Zenject::InjectContext,System::Int32Enum> value)  {
::cordl_internals::setInstanceField<System::Func_2<Zenject::InjectContext,System::Int32Enum>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<Zenject::InjectContext,System::Int32Enum>>(value));
}
constexpr System::Func_2<Zenject::InjectContext,System::Int32Enum> Zenject::MethodProvider_1<System::Int32Enum>::__get__method() const {
return ::cordl_internals::getInstanceField<System::Func_2<Zenject::InjectContext,System::Int32Enum>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "method", ty: "System::Func_2<Zenject::InjectContext,System::Int32Enum>", modifiers: "", def_value: None }, CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }]
 Zenject::MethodProvider_1<System::Int32Enum>::MethodProvider_1(System::Func_2<Zenject::InjectContext,System::Int32Enum> method, Zenject::DiContainer container)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MethodProvider_1>(method, container))) {}
 void Zenject::MethodProvider_1<System::Int32Enum>::_ctor(System::Func_2<Zenject::InjectContext,System::Int32Enum> method, Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1<System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<Zenject::InjectContext,System::Int32Enum>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, method, container);
}
 bool Zenject::MethodProvider_1<System::Int32Enum>::get_IsCached()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1<System::Int32Enum>>::get(),
                            "get_IsCached",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Zenject::MethodProvider_1<System::Int32Enum>::get_TypeVariesBasedOnMemberType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1<System::Int32Enum>>::get(),
                            "get_TypeVariesBasedOnMemberType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Type Zenject::MethodProvider_1<System::Int32Enum>::GetInstanceType(Zenject::InjectContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1<System::Int32Enum>>::get(),
                            "GetInstanceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Type, false>(const_cast<void*>(instance), ___internal_method, context);
}
 void Zenject::MethodProvider_1<System::Int32Enum>::GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MethodProvider_1<System::Int32Enum>>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Action>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context, args, injectAction, buffer);
}
