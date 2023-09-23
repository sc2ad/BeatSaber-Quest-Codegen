#pragma once
#include "Zenject/zzzz__IFactoryProviderBase_1_impl.hpp"
#include "Zenject/zzzz__IFactoryProvider_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/zzzz__Int32Enum_def.hpp"
//  Writing Method size for method: Zenject::IFactoryProvider_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IFactoryProvider_1::*)(Zenject::DiContainer, System::Guid)>(&Zenject::IFactoryProvider_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IFactoryProvider_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::IFactoryProvider_1.GetAllInstancesWithInjectSplit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IFactoryProvider_1::*)(Zenject::InjectContext, System::Collections::Generic::List_1<Zenject::TypeValuePair>, ByRef<System::Action>, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>)>(&Zenject::IFactoryProvider_1::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::IFactoryProvider_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IFactoryProvider_1>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "factoryId", ty: "System::Guid", modifiers: "", def_value: None }]
 Zenject::IFactoryProvider_1::IFactoryProvider_1(Zenject::DiContainer container, System::Guid factoryId)  : Zenject::IFactoryProviderBase_1<TContract>(THROW_UNLESS(::il2cpp_utils::New<IFactoryProvider_1>(container, factoryId))) {}
 void Zenject::IFactoryProvider_1::_ctor(Zenject::DiContainer container, System::Guid factoryId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IFactoryProvider_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, factoryId);
}
 void Zenject::IFactoryProvider_1::GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IFactoryProvider_1>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Action>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context, args, injectAction, buffer);
}
//  Writing Method size for method: Zenject::IFactoryProvider_1<float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IFactoryProvider_1<float_t>::*)(Zenject::DiContainer, System::Guid)>(&Zenject::IFactoryProvider_1<float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IFactoryProvider_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::IFactoryProvider_1<float_t>.GetAllInstancesWithInjectSplit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IFactoryProvider_1<float_t>::*)(Zenject::InjectContext, System::Collections::Generic::List_1<Zenject::TypeValuePair>, ByRef<System::Action>, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>)>(&Zenject::IFactoryProvider_1<float_t>::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::IFactoryProvider_1<float_t>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IFactoryProvider_1>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "factoryId", ty: "System::Guid", modifiers: "", def_value: None }]
 Zenject::IFactoryProvider_1<float_t>::IFactoryProvider_1(Zenject::DiContainer container, System::Guid factoryId)  : Zenject::IFactoryProviderBase_1<float_t>(THROW_UNLESS(::il2cpp_utils::New<IFactoryProvider_1>(container, factoryId))) {}
 void Zenject::IFactoryProvider_1<float_t>::_ctor(Zenject::DiContainer container, System::Guid factoryId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IFactoryProvider_1<float_t>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, factoryId);
}
 void Zenject::IFactoryProvider_1<float_t>::GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IFactoryProvider_1<float_t>>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Action>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context, args, injectAction, buffer);
}
//  Writing Method size for method: Zenject::IFactoryProvider_1<System::Int32Enum>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IFactoryProvider_1<System::Int32Enum>::*)(Zenject::DiContainer, System::Guid)>(&Zenject::IFactoryProvider_1<System::Int32Enum>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IFactoryProvider_1<System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::IFactoryProvider_1<System::Int32Enum>.GetAllInstancesWithInjectSplit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::IFactoryProvider_1<System::Int32Enum>::*)(Zenject::InjectContext, System::Collections::Generic::List_1<Zenject::TypeValuePair>, ByRef<System::Action>, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>)>(&Zenject::IFactoryProvider_1<System::Int32Enum>::GetAllInstancesWithInjectSplit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::IFactoryProvider_1<System::Int32Enum>),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IFactoryProvider_1>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "factoryId", ty: "System::Guid", modifiers: "", def_value: None }]
 Zenject::IFactoryProvider_1<System::Int32Enum>::IFactoryProvider_1(Zenject::DiContainer container, System::Guid factoryId)  : Zenject::IFactoryProviderBase_1<System::Int32Enum>(THROW_UNLESS(::il2cpp_utils::New<IFactoryProvider_1>(container, factoryId))) {}
 void Zenject::IFactoryProvider_1<System::Int32Enum>::_ctor(Zenject::DiContainer container, System::Guid factoryId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IFactoryProvider_1<System::Int32Enum>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, factoryId);
}
 void Zenject::IFactoryProvider_1<System::Int32Enum>::GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::IFactoryProvider_1<System::Int32Enum>>::get(),
                            "GetAllInstancesWithInjectSplit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<Zenject::TypeValuePair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Action>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context, args, injectAction, buffer);
}
