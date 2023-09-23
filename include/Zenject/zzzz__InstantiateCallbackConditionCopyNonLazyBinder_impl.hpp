#pragma once
#include "Zenject/zzzz__ConditionCopyNonLazyBinder_impl.hpp"
#include "Zenject/zzzz__InstantiateCallbackConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__ConditionCopyNonLazyBinder_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: Zenject::InstantiateCallbackConditionCopyNonLazyBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::InstantiateCallbackConditionCopyNonLazyBinder::*)(Zenject::BindInfo)>(&Zenject::InstantiateCallbackConditionCopyNonLazyBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d61cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::InstantiateCallbackConditionCopyNonLazyBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::InstantiateCallbackConditionCopyNonLazyBinder.OnInstantiated
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ConditionCopyNonLazyBinder (Zenject::InstantiateCallbackConditionCopyNonLazyBinder::*)(System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType>)>(&Zenject::InstantiateCallbackConditionCopyNonLazyBinder::OnInstantiated)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d61d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::InstantiateCallbackConditionCopyNonLazyBinder>::get(),
                            "OnInstantiated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }]
 Zenject::InstantiateCallbackConditionCopyNonLazyBinder::InstantiateCallbackConditionCopyNonLazyBinder(Zenject::BindInfo bindInfo)  : Zenject::ConditionCopyNonLazyBinder(THROW_UNLESS(::il2cpp_utils::New<InstantiateCallbackConditionCopyNonLazyBinder>(bindInfo))) {}
 void Zenject::InstantiateCallbackConditionCopyNonLazyBinder::_ctor(Zenject::BindInfo bindInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::InstantiateCallbackConditionCopyNonLazyBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindInfo);
}
 Zenject::ConditionCopyNonLazyBinder Zenject::InstantiateCallbackConditionCopyNonLazyBinder::OnInstantiated(System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::InstantiateCallbackConditionCopyNonLazyBinder>::get(),
                            "OnInstantiated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, callback);
}
template<typename T>
 Zenject::ConditionCopyNonLazyBinder Zenject::InstantiateCallbackConditionCopyNonLazyBinder::OnInstantiated(System::Action_2<Zenject::InjectContext,T> callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::InstantiateCallbackConditionCopyNonLazyBinder>::get(),
                        "OnInstantiated",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<Zenject::InjectContext,T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::ConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, callback);
}
//  Writing Method size for method: Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1::*)()>(&Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1._OnInstantiated_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1::*)(Zenject::InjectContext, ::bs_hook::Il2CppWrapperType)>(&Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1::_OnInstantiated_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1>::get(),
                            "<OnInstantiated>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1::__zenCreate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1::__set_callback(System::Action_2<Zenject::InjectContext,T> value)  {
::cordl_internals::setInstanceField<System::Action_2<Zenject::InjectContext,T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<Zenject::InjectContext,T>>(value));
}
constexpr System::Action_2<Zenject::InjectContext,T> Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1::__get_callback() const {
return ::cordl_internals::getInstanceField<System::Action_2<Zenject::InjectContext,T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1>())) {}
 void Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1::_OnInstantiated_b__0(Zenject::InjectContext ctx, ::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1>::get(),
                            "<OnInstantiated>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::InjectContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ctx, obj);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__InstantiateCallbackConditionCopyNonLazyBinder____c__DisplayClass2_0_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
