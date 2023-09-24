#pragma once
#include "Zenject/zzzz__ProviderBindingFinalizer_impl.hpp"
#include "Zenject/zzzz__SubContainerBindingFinalizer_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__SubContainerBindingFinalizer_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorCached_def.hpp"
//  Writing Method size for method: Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0::*)()>(&Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6d784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0._FinalizeBindingConcrete_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider (Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0::*)(Zenject::DiContainer, System::Type)>(&Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0::_FinalizeBindingConcrete_b__0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2d6d7a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0>::get(),
                            "<FinalizeBindingConcrete>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d6d85c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d6d8b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0::__set___4__this(Zenject::SubContainerBindingFinalizer value)  {
::cordl_internals::setInstanceField<Zenject::SubContainerBindingFinalizer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::SubContainerBindingFinalizer>(value));
}
constexpr Zenject::SubContainerBindingFinalizer Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<Zenject::SubContainerBindingFinalizer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0::__set_container(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0::__get_container() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0 Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0::New_ctor()  {
Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0 o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0>())};
return o;
}
 void Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::IProvider Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0::_FinalizeBindingConcrete_b__0(Zenject::DiContainer _, System::Type concreteType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0>::get(),
                            "<FinalizeBindingConcrete>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::IProvider, false>(const_cast<void*>(instance), ___internal_method, _, concreteType);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1::*)()>(&Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6d78c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1._FinalizeBindingConcrete_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider (Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1::*)(Zenject::DiContainer, System::Type)>(&Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1::_FinalizeBindingConcrete_b__1)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2d6da78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1>::get(),
                            "<FinalizeBindingConcrete>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d6db14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d6db70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1::__set_containerCreator(Zenject::SubContainerCreatorCached value)  {
::cordl_internals::setInstanceField<Zenject::SubContainerCreatorCached, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::SubContainerCreatorCached>(value));
}
constexpr Zenject::SubContainerCreatorCached Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1::__get_containerCreator() const {
return ::cordl_internals::getInstanceField<Zenject::SubContainerCreatorCached, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1::__set_CS$__8__locals1(Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0 value)  {
::cordl_internals::setInstanceField<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0>(value));
}
constexpr Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0 Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1::__get_CS$__8__locals1() const {
return ::cordl_internals::getInstanceField<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_0, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1 Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1::New_ctor()  {
Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1 o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1>())};
return o;
}
 void Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::IProvider Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1::_FinalizeBindingConcrete_b__1(Zenject::DiContainer _, System::Type concreteType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1>::get(),
                            "<FinalizeBindingConcrete>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::IProvider, false>(const_cast<void*>(instance), ___internal_method, _, concreteType);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass5_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0::*)()>(&Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6d794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0._FinalizeBindingSelf_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider (Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0::*)(Zenject::DiContainer, System::Type)>(&Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0::_FinalizeBindingSelf_b__0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2d6dd30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0>::get(),
                            "<FinalizeBindingSelf>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d6dde8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d6de44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0::__set___4__this(Zenject::SubContainerBindingFinalizer value)  {
::cordl_internals::setInstanceField<Zenject::SubContainerBindingFinalizer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::SubContainerBindingFinalizer>(value));
}
constexpr Zenject::SubContainerBindingFinalizer Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<Zenject::SubContainerBindingFinalizer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0::__set_container(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0::__get_container() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0 Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0::New_ctor()  {
Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0 o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0>())};
return o;
}
 void Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::IProvider Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0::_FinalizeBindingSelf_b__0(Zenject::DiContainer _, System::Type contractType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0>::get(),
                            "<FinalizeBindingSelf>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::IProvider, false>(const_cast<void*>(instance), ___internal_method, _, contractType);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1::*)()>(&Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6d79c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1._FinalizeBindingSelf_b__1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::IProvider (Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1::*)(Zenject::DiContainer, System::Type)>(&Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1::_FinalizeBindingSelf_b__1)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2d6e004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1>::get(),
                            "<FinalizeBindingSelf>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d6e0a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d6e0fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1::__set_containerCreator(Zenject::SubContainerCreatorCached value)  {
::cordl_internals::setInstanceField<Zenject::SubContainerCreatorCached, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::SubContainerCreatorCached>(value));
}
constexpr Zenject::SubContainerCreatorCached Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1::__get_containerCreator() const {
return ::cordl_internals::getInstanceField<Zenject::SubContainerCreatorCached, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1::__set_CS$__8__locals1(Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0 value)  {
::cordl_internals::setInstanceField<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0>(value));
}
constexpr Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0 Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1::__get_CS$__8__locals1() const {
return ::cordl_internals::getInstanceField<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_0, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1 Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1::New_ctor()  {
Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1 o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1>())};
return o;
}
 void Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::IProvider Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1::_FinalizeBindingSelf_b__1(Zenject::DiContainer _, System::Type contractType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1>::get(),
                            "<FinalizeBindingSelf>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::IProvider, false>(const_cast<void*>(instance), ___internal_method, _, contractType);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBindingFinalizer____c__DisplayClass6_1>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::SubContainerBindingFinalizer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerBindingFinalizer::*)(Zenject::BindInfo, ::bs_hook::Il2CppWrapperType, bool, System::Func_2<Zenject::DiContainer,Zenject::ISubContainerCreator>)>(&Zenject::SubContainerBindingFinalizer::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d61fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBindingFinalizer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<Zenject::DiContainer,Zenject::ISubContainerCreator>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerBindingFinalizer.OnFinalizeBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerBindingFinalizer::*)(Zenject::DiContainer)>(&Zenject::SubContainerBindingFinalizer::OnFinalizeBinding)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2d6d348;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Zenject::SubContainerBindingFinalizer),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBindingFinalizer>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerBindingFinalizer.FinalizeBindingConcrete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerBindingFinalizer::*)(Zenject::DiContainer, System::Collections::Generic::List_1<System::Type>)>(&Zenject::SubContainerBindingFinalizer::FinalizeBindingConcrete)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2d6d5a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBindingFinalizer>::get(),
                            "FinalizeBindingConcrete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Type>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerBindingFinalizer.FinalizeBindingSelf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerBindingFinalizer::*)(Zenject::DiContainer)>(&Zenject::SubContainerBindingFinalizer::FinalizeBindingSelf)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2d6d3cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBindingFinalizer>::get(),
                            "FinalizeBindingSelf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::SubContainerBindingFinalizer::__set__subIdentifier(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType Zenject::SubContainerBindingFinalizer::__get__subIdentifier() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SubContainerBindingFinalizer::__set__resolveAll(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::SubContainerBindingFinalizer::__get__resolveAll() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SubContainerBindingFinalizer::__set__creatorFactory(System::Func_2<Zenject::DiContainer,Zenject::ISubContainerCreator> value)  {
::cordl_internals::setInstanceField<System::Func_2<Zenject::DiContainer,Zenject::ISubContainerCreator>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<Zenject::DiContainer,Zenject::ISubContainerCreator>>(value));
}
constexpr System::Func_2<Zenject::DiContainer,Zenject::ISubContainerCreator> Zenject::SubContainerBindingFinalizer::__get__creatorFactory() const {
return ::cordl_internals::getInstanceField<System::Func_2<Zenject::DiContainer,Zenject::ISubContainerCreator>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::SubContainerBindingFinalizer Zenject::SubContainerBindingFinalizer::New_ctor(Zenject::BindInfo bindInfo, ::bs_hook::Il2CppWrapperType subIdentifier, bool resolveAll, System::Func_2<Zenject::DiContainer,Zenject::ISubContainerCreator> creatorFactory)  {
Zenject::SubContainerBindingFinalizer o{THROW_UNLESS(::il2cpp_utils::New<Zenject::SubContainerBindingFinalizer>(bindInfo, subIdentifier, resolveAll, creatorFactory))};
return o;
}
 void Zenject::SubContainerBindingFinalizer::_ctor(Zenject::BindInfo bindInfo, ::bs_hook::Il2CppWrapperType subIdentifier, bool resolveAll, System::Func_2<Zenject::DiContainer,Zenject::ISubContainerCreator> creatorFactory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBindingFinalizer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<Zenject::DiContainer,Zenject::ISubContainerCreator>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindInfo, subIdentifier, resolveAll, creatorFactory);
}
 void Zenject::SubContainerBindingFinalizer::OnFinalizeBinding(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBindingFinalizer>::get(),
                            "OnFinalizeBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
 void Zenject::SubContainerBindingFinalizer::FinalizeBindingConcrete(Zenject::DiContainer container, System::Collections::Generic::List_1<System::Type> concreteTypes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBindingFinalizer>::get(),
                            "FinalizeBindingConcrete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container, concreteTypes);
}
 void Zenject::SubContainerBindingFinalizer::FinalizeBindingSelf(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBindingFinalizer>::get(),
                            "FinalizeBindingSelf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
