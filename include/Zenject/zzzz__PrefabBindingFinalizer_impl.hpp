#pragma once
#include "Zenject/zzzz__ProviderBindingFinalizer_impl.hpp"
#include "Zenject/zzzz__PrefabBindingFinalizer_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__IPrefabInstantiator_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__PrefabInstantiatorCached_def.hpp"
//  Writing Method size for method: Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0::*)()>(&Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d69178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0._FinalizeBindingConcrete_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider (Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0::*)(Zenject::DiContainer, System::Type)>(&Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0::_FinalizeBindingConcrete_b__0)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2d69b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0>::get(),
                            "<FinalizeBindingConcrete>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d69cac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d69d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0::__set___4__this(Zenject::PrefabBindingFinalizer value)  {
::cordl_internals::setInstanceField<Zenject::PrefabBindingFinalizer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::PrefabBindingFinalizer>(value));
}
constexpr Zenject::PrefabBindingFinalizer Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<Zenject::PrefabBindingFinalizer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0::__set_container(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0::__get_container() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0::__set_concreteTypes(System::Collections::Generic::List_1<System::Type> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::Type>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::Type>>(value));
}
constexpr System::Collections::Generic::List_1<System::Type> Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0::__get_concreteTypes() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::Type>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__PrefabBindingFinalizer____c__DisplayClass5_0>())) {}
 void Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::IProvider Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0::_FinalizeBindingConcrete_b__0(Zenject::DiContainer _, System::Type concreteType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0>::get(),
                            "<FinalizeBindingConcrete>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::IProvider, false>(const_cast<void*>(instance), ___internal_method, _, concreteType);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1::*)()>(&Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d69968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1._FinalizeBindingConcrete_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider (Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1::*)(Zenject::DiContainer, System::Type)>(&Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1::_FinalizeBindingConcrete_b__1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2d69ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1>::get(),
                            "<FinalizeBindingConcrete>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d69f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d69f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1::__set_prefabCreator(Zenject::PrefabInstantiatorCached value)  {
::cordl_internals::setInstanceField<Zenject::PrefabInstantiatorCached, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::PrefabInstantiatorCached>(value));
}
constexpr Zenject::PrefabInstantiatorCached Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1::__get_prefabCreator() const {
return ::cordl_internals::getInstanceField<Zenject::PrefabInstantiatorCached, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1::__set_CS$__8__locals1(Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0 value)  {
::cordl_internals::setInstanceField<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0>(value));
}
constexpr Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0 Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1::__get_CS$__8__locals1() const {
return ::cordl_internals::getInstanceField<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_0, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__PrefabBindingFinalizer____c__DisplayClass5_1>())) {}
 void Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::IProvider Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1::_FinalizeBindingConcrete_b__1(Zenject::DiContainer _, System::Type concreteType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1>::get(),
                            "<FinalizeBindingConcrete>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::IProvider, false>(const_cast<void*>(instance), ___internal_method, _, concreteType);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass5_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0::*)()>(&Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d69970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0._FinalizeBindingSelf_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider (Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0::*)(Zenject::DiContainer, System::Type)>(&Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0::_FinalizeBindingSelf_b__0)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2d6a124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0>::get(),
                            "<FinalizeBindingSelf>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d6a240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d6a29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0::__set___4__this(Zenject::PrefabBindingFinalizer value)  {
::cordl_internals::setInstanceField<Zenject::PrefabBindingFinalizer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::PrefabBindingFinalizer>(value));
}
constexpr Zenject::PrefabBindingFinalizer Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<Zenject::PrefabBindingFinalizer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0::__set_container(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0::__get_container() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__PrefabBindingFinalizer____c__DisplayClass6_0>())) {}
 void Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::IProvider Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0::_FinalizeBindingSelf_b__0(Zenject::DiContainer _, System::Type contractType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0>::get(),
                            "<FinalizeBindingSelf>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::IProvider, false>(const_cast<void*>(instance), ___internal_method, _, contractType);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1::*)()>(&Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d69b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1._FinalizeBindingSelf_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider (Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1::*)(Zenject::DiContainer, System::Type)>(&Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1::_FinalizeBindingSelf_b__1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2d6a45c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1>::get(),
                            "<FinalizeBindingSelf>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d6a49c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d6a4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1::__set_prefabCreator(Zenject::PrefabInstantiatorCached value)  {
::cordl_internals::setInstanceField<Zenject::PrefabInstantiatorCached, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::PrefabInstantiatorCached>(value));
}
constexpr Zenject::PrefabInstantiatorCached Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1::__get_prefabCreator() const {
return ::cordl_internals::getInstanceField<Zenject::PrefabInstantiatorCached, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1::__set_CS$__8__locals1(Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0 value)  {
::cordl_internals::setInstanceField<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0>(value));
}
constexpr Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0 Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1::__get_CS$__8__locals1() const {
return ::cordl_internals::getInstanceField<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_0, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Zenject__PrefabBindingFinalizer____c__DisplayClass6_1>())) {}
 void Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::IProvider Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1::_FinalizeBindingSelf_b__1(Zenject::DiContainer _, System::Type contractType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1>::get(),
                            "<FinalizeBindingSelf>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::IProvider, false>(const_cast<void*>(instance), ___internal_method, _, contractType);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__PrefabBindingFinalizer____c__DisplayClass6_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::PrefabBindingFinalizer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::PrefabBindingFinalizer::*)(Zenject::BindInfo, Zenject::GameObjectCreationParameters, UnityEngine::Object, System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider>)>(&Zenject::PrefabBindingFinalizer::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2d68a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PrefabBindingFinalizer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::GameObjectCreationParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::PrefabBindingFinalizer.OnFinalizeBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::PrefabBindingFinalizer::*)(Zenject::DiContainer)>(&Zenject::PrefabBindingFinalizer::OnFinalizeBinding)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2d68a90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::PrefabBindingFinalizer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PrefabBindingFinalizer>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::PrefabBindingFinalizer.FinalizeBindingConcrete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::PrefabBindingFinalizer::*)(Zenject::DiContainer, System::Collections::Generic::List_1<System::Type>)>(&Zenject::PrefabBindingFinalizer::FinalizeBindingConcrete)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x2d68e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PrefabBindingFinalizer>::get(),
                            "FinalizeBindingConcrete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Type>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::PrefabBindingFinalizer.FinalizeBindingSelf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::PrefabBindingFinalizer::*)(Zenject::DiContainer)>(&Zenject::PrefabBindingFinalizer::FinalizeBindingSelf)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x2d68b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PrefabBindingFinalizer>::get(),
                            "FinalizeBindingSelf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::PrefabBindingFinalizer::__set__gameObjectBindInfo(Zenject::GameObjectCreationParameters value)  {
::cordl_internals::setInstanceField<Zenject::GameObjectCreationParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::GameObjectCreationParameters>(value));
}
constexpr Zenject::GameObjectCreationParameters Zenject::PrefabBindingFinalizer::__get__gameObjectBindInfo() const {
return ::cordl_internals::getInstanceField<Zenject::GameObjectCreationParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::PrefabBindingFinalizer::__set__prefab(UnityEngine::Object value)  {
::cordl_internals::setInstanceField<UnityEngine::Object, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Object>(value));
}
constexpr UnityEngine::Object Zenject::PrefabBindingFinalizer::__get__prefab() const {
return ::cordl_internals::getInstanceField<UnityEngine::Object, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::PrefabBindingFinalizer::__set__providerFactory(System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider> value)  {
::cordl_internals::setInstanceField<System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider>>(value));
}
constexpr System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider> Zenject::PrefabBindingFinalizer::__get__providerFactory() const {
return ::cordl_internals::getInstanceField<System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "gameObjectBindInfo", ty: "Zenject::GameObjectCreationParameters", modifiers: "", def_value: None }, CppParam { name: "prefab", ty: "UnityEngine::Object", modifiers: "", def_value: None }, CppParam { name: "providerFactory", ty: "System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider>", modifiers: "", def_value: None }]
 Zenject::PrefabBindingFinalizer::PrefabBindingFinalizer(Zenject::BindInfo bindInfo, Zenject::GameObjectCreationParameters gameObjectBindInfo, UnityEngine::Object prefab, System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider> providerFactory)  : Zenject::ProviderBindingFinalizer(THROW_UNLESS(::il2cpp_utils::New<PrefabBindingFinalizer>(bindInfo, gameObjectBindInfo, prefab, providerFactory))) {}
 void Zenject::PrefabBindingFinalizer::_ctor(Zenject::BindInfo bindInfo, Zenject::GameObjectCreationParameters gameObjectBindInfo, UnityEngine::Object prefab, System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider> providerFactory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PrefabBindingFinalizer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::GameObjectCreationParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_3<System::Type,Zenject::IPrefabInstantiator,Zenject::IProvider>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindInfo, gameObjectBindInfo, prefab, providerFactory);
}
 void Zenject::PrefabBindingFinalizer::OnFinalizeBinding(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PrefabBindingFinalizer>::get(),
                            "OnFinalizeBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
 void Zenject::PrefabBindingFinalizer::FinalizeBindingConcrete(Zenject::DiContainer container, System::Collections::Generic::List_1<System::Type> concreteTypes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PrefabBindingFinalizer>::get(),
                            "FinalizeBindingConcrete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, concreteTypes);
}
 void Zenject::PrefabBindingFinalizer::FinalizeBindingSelf(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PrefabBindingFinalizer>::get(),
                            "FinalizeBindingSelf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
