#pragma once
#include "Zenject/zzzz__FromBinder_impl.hpp"
#include "Zenject/zzzz__FromBinderNonGeneric_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: Zenject::FromBinderNonGeneric._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::FromBinderNonGeneric::*)(Zenject::DiContainer, Zenject::BindInfo, Zenject::BindStatement)>(&Zenject::FromBinderNonGeneric::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2d4d7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FromBinderNonGeneric>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindStatement>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::FromBinderNonGeneric.FromInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder (Zenject::FromBinderNonGeneric::*)(::bs_hook::Il2CppWrapperType)>(&Zenject::FromBinderNonGeneric::FromInstance)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d60b60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FromBinderNonGeneric>::get(),
                            "FromInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::FromBinderNonGeneric.FromComponentsInChildren
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder (Zenject::FromBinderNonGeneric::*)(System::Func_2<UnityEngine::Component,bool>, bool)>(&Zenject::FromBinderNonGeneric::FromComponentsInChildren)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d60b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FromBinderNonGeneric>::get(),
                            "FromComponentsInChildren",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<UnityEngine::Component,bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::FromBinderNonGeneric.FromComponentsInChildren
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder (Zenject::FromBinderNonGeneric::*)(bool, System::Func_2<UnityEngine::Component,bool>, bool)>(&Zenject::FromBinderNonGeneric::FromComponentsInChildren)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d60b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FromBinderNonGeneric>::get(),
                            "FromComponentsInChildren",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<UnityEngine::Component,bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::FromBinderNonGeneric.FromComponentsInHierarchy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder (Zenject::FromBinderNonGeneric::*)(System::Func_2<UnityEngine::Component,bool>, bool)>(&Zenject::FromBinderNonGeneric::FromComponentsInHierarchy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d60b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FromBinderNonGeneric>::get(),
                            "FromComponentsInHierarchy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<UnityEngine::Component,bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "bindStatement", ty: "Zenject::BindStatement", modifiers: "", def_value: None }]
 Zenject::FromBinderNonGeneric::FromBinderNonGeneric(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement)  : Zenject::FromBinder(THROW_UNLESS(::il2cpp_utils::New<FromBinderNonGeneric>(bindContainer, bindInfo, bindStatement))) {}
 void Zenject::FromBinderNonGeneric::_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FromBinderNonGeneric>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindStatement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindContainer, bindInfo, bindStatement);
}
template<typename TConcrete,typename TFactory>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::FromBinderNonGeneric::FromFactory()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FromBinderNonGeneric>::get(),
                        "FromFactory",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TFactory>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename TContract>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::FromBinderNonGeneric::FromIFactory(System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TContract>>> factoryBindGenerator)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FromBinderNonGeneric>::get(),
                        "FromIFactory",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TContract>>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, factoryBindGenerator);
}
template<typename TConcrete>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::FromBinderNonGeneric::FromMethod(System::Func_2<Zenject::InjectContext,TConcrete> method)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FromBinderNonGeneric>::get(),
                        "FromMethod",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<Zenject::InjectContext,TConcrete>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, method);
}
template<typename TConcrete>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::FromBinderNonGeneric::FromMethodMultiple(System::Func_2<Zenject::InjectContext,System::Collections::Generic::IEnumerable_1<TConcrete>> method)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FromBinderNonGeneric>::get(),
                        "FromMethodMultiple",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<Zenject::InjectContext,System::Collections::Generic::IEnumerable_1<TConcrete>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, method);
}
template<typename TObj,typename TContract>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::FromBinderNonGeneric::FromResolveGetter(System::Func_2<TObj,TContract> method)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FromBinderNonGeneric>::get(),
                        "FromResolveGetter",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TObj,TContract>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, method);
}
template<typename TObj,typename TContract>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::FromBinderNonGeneric::FromResolveGetter(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,TContract> method)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FromBinderNonGeneric>::get(),
                        "FromResolveGetter",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TObj,TContract>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, identifier, method);
}
template<typename TObj,typename TContract>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::FromBinderNonGeneric::FromResolveGetter(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,TContract> method, Zenject::InjectSources source)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FromBinderNonGeneric>::get(),
                        "FromResolveGetter",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TObj,TContract>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectSources>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, identifier, method, source);
}
template<typename TObj,typename TContract>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::FromBinderNonGeneric::FromResolveAllGetter(System::Func_2<TObj,TContract> method)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FromBinderNonGeneric>::get(),
                        "FromResolveAllGetter",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TObj,TContract>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, method);
}
template<typename TObj,typename TContract>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::FromBinderNonGeneric::FromResolveAllGetter(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,TContract> method)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FromBinderNonGeneric>::get(),
                        "FromResolveAllGetter",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TObj,TContract>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, identifier, method);
}
template<typename TObj,typename TContract>
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::FromBinderNonGeneric::FromResolveAllGetter(::bs_hook::Il2CppWrapperType identifier, System::Func_2<TObj,TContract> method, Zenject::InjectSources source)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FromBinderNonGeneric>::get(),
                        "FromResolveAllGetter",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TObj,TContract>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectSources>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObj>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, identifier, method, source);
}
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::FromBinderNonGeneric::FromInstance(::bs_hook::Il2CppWrapperType instance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FromBinderNonGeneric>::get(),
                            "FromInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, instance);
}
/// @param includeInactive: bool (default: true)
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::FromBinderNonGeneric::FromComponentsInChildren(System::Func_2<UnityEngine::Component,bool> predicate, bool includeInactive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FromBinderNonGeneric>::get(),
                            "FromComponentsInChildren",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<UnityEngine::Component,bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, predicate, includeInactive);
}
/// @param excludeSelf: bool (default: false)
/// @param predicate: System::Func_2<UnityEngine::Component,bool> (default: csnull)
/// @param includeInactive: bool (default: true)
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::FromBinderNonGeneric::FromComponentsInChildren(bool excludeSelf, System::Func_2<UnityEngine::Component,bool> predicate, bool includeInactive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FromBinderNonGeneric>::get(),
                            "FromComponentsInChildren",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<UnityEngine::Component,bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, excludeSelf, predicate, includeInactive);
}
/// @param predicate: System::Func_2<UnityEngine::Component,bool> (default: csnull)
/// @param includeInactive: bool (default: true)
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::FromBinderNonGeneric::FromComponentsInHierarchy(System::Func_2<UnityEngine::Component,bool> predicate, bool includeInactive)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::FromBinderNonGeneric>::get(),
                            "FromComponentsInHierarchy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<UnityEngine::Component,bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, predicate, includeInactive);
}
//  Writing Method size for method: Zenject::Zenject__FromBinderNonGeneric____c__1_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__FromBinderNonGeneric____c__1_2::*)()>(&Zenject::Zenject__FromBinderNonGeneric____c__1_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FromBinderNonGeneric____c__1_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__FromBinderNonGeneric____c__1_2._FromFactory_b__1_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__FromBinderNonGeneric____c__1_2::*)(Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TConcrete>>)>(&Zenject::Zenject__FromBinderNonGeneric____c__1_2::_FromFactory_b__1_0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FromBinderNonGeneric____c__1_2>::get(),
                            "<FromFactory>b__1_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TConcrete>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__FromBinderNonGeneric____c__1_2.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__FromBinderNonGeneric____c__1_2::__zenCreate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FromBinderNonGeneric____c__1_2>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__FromBinderNonGeneric____c__1_2.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__FromBinderNonGeneric____c__1_2::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FromBinderNonGeneric____c__1_2>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Zenject::Zenject__FromBinderNonGeneric____c__1_2::__set___9(Zenject::Zenject__FromBinderNonGeneric____c__1_2<TConcrete,TFactory> value)  {
::cordl_internals::setStaticField<Zenject::Zenject__FromBinderNonGeneric____c__1_2<TConcrete,TFactory>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FromBinderNonGeneric____c__1_2>::get>(std::forward<Zenject::Zenject__FromBinderNonGeneric____c__1_2<TConcrete,TFactory>>(value));
}
 Zenject::Zenject__FromBinderNonGeneric____c__1_2<TConcrete,TFactory> Zenject::Zenject__FromBinderNonGeneric____c__1_2::__get___9()  {
return ::cordl_internals::getStaticField<Zenject::Zenject__FromBinderNonGeneric____c__1_2<TConcrete,TFactory>, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FromBinderNonGeneric____c__1_2>::get>();
}
 void Zenject::Zenject__FromBinderNonGeneric____c__1_2::__set___9__1_0(System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TConcrete>>> value)  {
::cordl_internals::setStaticField<System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TConcrete>>>, "<>9__1_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FromBinderNonGeneric____c__1_2>::get>(std::forward<System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TConcrete>>>>(value));
}
 System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TConcrete>>> Zenject::Zenject__FromBinderNonGeneric____c__1_2::__get___9__1_0()  {
return ::cordl_internals::getStaticField<System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TConcrete>>>, "<>9__1_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FromBinderNonGeneric____c__1_2>::get>();
}
// Ctor Parameters []
 Zenject::Zenject__FromBinderNonGeneric____c__1_2::Zenject__FromBinderNonGeneric____c__1_2()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__FromBinderNonGeneric____c__1_2>())) {}
 void Zenject::Zenject__FromBinderNonGeneric____c__1_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FromBinderNonGeneric____c__1_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::Zenject__FromBinderNonGeneric____c__1_2::_FromFactory_b__1_0(Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TConcrete>> x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FromBinderNonGeneric____c__1_2>::get(),
                            "<FromFactory>b__1_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_1<TConcrete>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, x);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__FromBinderNonGeneric____c__1_2::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FromBinderNonGeneric____c__1_2>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__FromBinderNonGeneric____c__1_2::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__FromBinderNonGeneric____c__1_2>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
