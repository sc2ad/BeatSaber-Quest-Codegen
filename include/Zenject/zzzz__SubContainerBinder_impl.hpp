#pragma once
#include "Zenject/zzzz__SubContainerBinder_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__ScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__SubContainerBinder_def.hpp"
#include "Zenject/zzzz__IBindingFinalizer_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "Zenject/zzzz__WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "Zenject/zzzz__NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ISubContainerCreator_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__GameObjectCreationParameters_def.hpp"
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0::*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d61f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0._ByInstance_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ISubContainerCreator (Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0::*)(Zenject::DiContainer)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0::_ByInstance_b__0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d6337c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0>::get(),
                            "<ByInstance>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d633e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d63440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0::__set_subContainer(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0::__get_subContainer() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0 Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0::New_ctor()  {
Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0 o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0>())};
return o;
}
 void Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::ISubContainerCreator Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0::_ByInstance_b__0(Zenject::DiContainer _)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0>::get(),
                            "<ByInstance>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ISubContainerCreator, false>(const_cast<void*>(instance), ___internal_method, _);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass7_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0::*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6212c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0._ByInstanceGetter_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ISubContainerCreator (Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0::*)(Zenject::DiContainer)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0::_ByInstanceGetter_b__0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d63600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0>::get(),
                            "<ByInstanceGetter>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d63668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d636c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0::__set_subContainerGetter(System::Func_2<Zenject::InjectContext,Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<System::Func_2<Zenject::InjectContext,Zenject::DiContainer>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<Zenject::InjectContext,Zenject::DiContainer>>(value));
}
constexpr System::Func_2<Zenject::InjectContext,Zenject::DiContainer> Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0::__get_subContainerGetter() const {
return ::cordl_internals::getInstanceField<System::Func_2<Zenject::InjectContext,Zenject::DiContainer>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0 Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0::New_ctor()  {
Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0 o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0>())};
return o;
}
 void Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::ISubContainerCreator Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0::_ByInstanceGetter_b__0(Zenject::DiContainer _)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0>::get(),
                            "<ByInstanceGetter>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ISubContainerCreator, false>(const_cast<void*>(instance), ___internal_method, _);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass8_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0::*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6231c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0._ByInstaller_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ISubContainerCreator (Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0::*)(Zenject::DiContainer)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0::_ByInstaller_b__0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d63884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0>::get(),
                            "<ByInstaller>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d63900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d6395c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0::__set_subContainerBindInfo(Zenject::SubContainerCreatorBindInfo value)  {
::cordl_internals::setInstanceField<Zenject::SubContainerCreatorBindInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::SubContainerCreatorBindInfo>(value));
}
constexpr Zenject::SubContainerCreatorBindInfo Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0::__get_subContainerBindInfo() const {
return ::cordl_internals::getInstanceField<Zenject::SubContainerCreatorBindInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0::__set_installerType(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0::__get_installerType() const {
return ::cordl_internals::getInstanceField<System::Type, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0 Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0::New_ctor()  {
Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0 o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0>())};
return o;
}
 void Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::ISubContainerCreator Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0::_ByInstaller_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0>::get(),
                            "<ByInstaller>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ISubContainerCreator, false>(const_cast<void*>(instance), ___internal_method, container);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass10_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0::*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d624a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0._ByMethod_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ISubContainerCreator (Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0::*)(Zenject::DiContainer)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0::_ByMethod_b__0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d63b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0>::get(),
                            "<ByMethod>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d63b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d63bf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0::__set_subContainerBindInfo(Zenject::SubContainerCreatorBindInfo value)  {
::cordl_internals::setInstanceField<Zenject::SubContainerCreatorBindInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::SubContainerCreatorBindInfo>(value));
}
constexpr Zenject::SubContainerCreatorBindInfo Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0::__get_subContainerBindInfo() const {
return ::cordl_internals::getInstanceField<Zenject::SubContainerCreatorBindInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0::__set_installerMethod(System::Action_1<Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<System::Action_1<Zenject::DiContainer>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<Zenject::DiContainer>>(value));
}
constexpr System::Action_1<Zenject::DiContainer> Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0::__get_installerMethod() const {
return ::cordl_internals::getInstanceField<System::Action_1<Zenject::DiContainer>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0 Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0::New_ctor()  {
Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0 o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0>())};
return o;
}
 void Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::ISubContainerCreator Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0::_ByMethod_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0>::get(),
                            "<ByMethod>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ISubContainerCreator, false>(const_cast<void*>(instance), ___internal_method, container);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass11_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0::*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6262c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0._ByNewGameObjectMethod_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ISubContainerCreator (Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0::*)(Zenject::DiContainer)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0::_ByNewGameObjectMethod_b__0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d63db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0>::get(),
                            "<ByNewGameObjectMethod>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d63e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d63e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0::__set_gameObjectInfo(Zenject::GameObjectCreationParameters value)  {
::cordl_internals::setInstanceField<Zenject::GameObjectCreationParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::GameObjectCreationParameters>(value));
}
constexpr Zenject::GameObjectCreationParameters Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0::__get_gameObjectInfo() const {
return ::cordl_internals::getInstanceField<Zenject::GameObjectCreationParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0::__set_installerMethod(System::Action_1<Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<System::Action_1<Zenject::DiContainer>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<Zenject::DiContainer>>(value));
}
constexpr System::Action_1<Zenject::DiContainer> Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0::__get_installerMethod() const {
return ::cordl_internals::getInstanceField<System::Action_1<Zenject::DiContainer>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0 Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0::New_ctor()  {
Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0 o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0>())};
return o;
}
 void Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::ISubContainerCreator Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0::_ByNewGameObjectMethod_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0>::get(),
                            "<ByNewGameObjectMethod>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ISubContainerCreator, false>(const_cast<void*>(instance), ___internal_method, container);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass12_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0::*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d6280c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0._ByNewPrefabMethod_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ISubContainerCreator (Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0::*)(Zenject::DiContainer)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0::_ByNewPrefabMethod_b__0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2d6404c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0>::get(),
                            "<ByNewPrefabMethod>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d64100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d6415c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0::__set_prefab(UnityEngine::Object value)  {
::cordl_internals::setInstanceField<UnityEngine::Object, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Object>(value));
}
constexpr UnityEngine::Object Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0::__get_prefab() const {
return ::cordl_internals::getInstanceField<UnityEngine::Object, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0::__set_gameObjectInfo(Zenject::GameObjectCreationParameters value)  {
::cordl_internals::setInstanceField<Zenject::GameObjectCreationParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::GameObjectCreationParameters>(value));
}
constexpr Zenject::GameObjectCreationParameters Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0::__get_gameObjectInfo() const {
return ::cordl_internals::getInstanceField<Zenject::GameObjectCreationParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0::__set_installerMethod(System::Action_1<Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<System::Action_1<Zenject::DiContainer>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<Zenject::DiContainer>>(value));
}
constexpr System::Action_1<Zenject::DiContainer> Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0::__get_installerMethod() const {
return ::cordl_internals::getInstanceField<System::Action_1<Zenject::DiContainer>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0 Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0::New_ctor()  {
Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0 o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0>())};
return o;
}
 void Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::ISubContainerCreator Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0::_ByNewPrefabMethod_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0>::get(),
                            "<ByNewPrefabMethod>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ISubContainerCreator, false>(const_cast<void*>(instance), ___internal_method, container);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass13_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0::*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d62a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0._ByNewGameObjectInstaller_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ISubContainerCreator (Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0::*)(Zenject::DiContainer)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0::_ByNewGameObjectInstaller_b__0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d6431c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0>::get(),
                            "<ByNewGameObjectInstaller>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d643b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d6440c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0::__set_gameObjectInfo(Zenject::GameObjectCreationParameters value)  {
::cordl_internals::setInstanceField<Zenject::GameObjectCreationParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::GameObjectCreationParameters>(value));
}
constexpr Zenject::GameObjectCreationParameters Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0::__get_gameObjectInfo() const {
return ::cordl_internals::getInstanceField<Zenject::GameObjectCreationParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0::__set_installerType(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0::__get_installerType() const {
return ::cordl_internals::getInstanceField<System::Type, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0::__set___4__this(Zenject::SubContainerBinder value)  {
::cordl_internals::setInstanceField<Zenject::SubContainerBinder, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::SubContainerBinder>(value));
}
constexpr Zenject::SubContainerBinder Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<Zenject::SubContainerBinder, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0 Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0::New_ctor()  {
Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0 o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0>())};
return o;
}
 void Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::ISubContainerCreator Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0::_ByNewGameObjectInstaller_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0>::get(),
                            "<ByNewGameObjectInstaller>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ISubContainerCreator, false>(const_cast<void*>(instance), ___internal_method, container);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass15_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0::*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d62c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0._ByNewPrefabInstaller_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ISubContainerCreator (Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0::*)(Zenject::DiContainer)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0::_ByNewPrefabInstaller_b__0)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2d645cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0>::get(),
                            "<ByNewPrefabInstaller>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d646a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d646fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0::__set_prefab(UnityEngine::Object value)  {
::cordl_internals::setInstanceField<UnityEngine::Object, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Object>(value));
}
constexpr UnityEngine::Object Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0::__get_prefab() const {
return ::cordl_internals::getInstanceField<UnityEngine::Object, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0::__set_gameObjectInfo(Zenject::GameObjectCreationParameters value)  {
::cordl_internals::setInstanceField<Zenject::GameObjectCreationParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::GameObjectCreationParameters>(value));
}
constexpr Zenject::GameObjectCreationParameters Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0::__get_gameObjectInfo() const {
return ::cordl_internals::getInstanceField<Zenject::GameObjectCreationParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0::__set_installerType(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0::__get_installerType() const {
return ::cordl_internals::getInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0::__set___4__this(Zenject::SubContainerBinder value)  {
::cordl_internals::setInstanceField<Zenject::SubContainerBinder, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::SubContainerBinder>(value));
}
constexpr Zenject::SubContainerBinder Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<Zenject::SubContainerBinder, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0 Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0::New_ctor()  {
Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0 o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0>())};
return o;
}
 void Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::ISubContainerCreator Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0::_ByNewPrefabInstaller_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0>::get(),
                            "<ByNewPrefabInstaller>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ISubContainerCreator, false>(const_cast<void*>(instance), ___internal_method, container);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass17_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0::*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d62dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0._ByNewPrefabResourceMethod_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ISubContainerCreator (Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0::*)(Zenject::DiContainer)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0::_ByNewPrefabResourceMethod_b__0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2d648bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0>::get(),
                            "<ByNewPrefabResourceMethod>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d64970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d649cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0::__set_resourcePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0::__get_resourcePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0::__set_gameObjectInfo(Zenject::GameObjectCreationParameters value)  {
::cordl_internals::setInstanceField<Zenject::GameObjectCreationParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::GameObjectCreationParameters>(value));
}
constexpr Zenject::GameObjectCreationParameters Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0::__get_gameObjectInfo() const {
return ::cordl_internals::getInstanceField<Zenject::GameObjectCreationParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0::__set_installerMethod(System::Action_1<Zenject::DiContainer> value)  {
::cordl_internals::setInstanceField<System::Action_1<Zenject::DiContainer>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<Zenject::DiContainer>>(value));
}
constexpr System::Action_1<Zenject::DiContainer> Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0::__get_installerMethod() const {
return ::cordl_internals::getInstanceField<System::Action_1<Zenject::DiContainer>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0 Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0::New_ctor()  {
Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0 o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0>())};
return o;
}
 void Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::ISubContainerCreator Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0::_ByNewPrefabResourceMethod_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0>::get(),
                            "<ByNewPrefabResourceMethod>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ISubContainerCreator, false>(const_cast<void*>(instance), ___internal_method, container);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass18_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0::*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d63054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0._ByNewPrefabResourceInstaller_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ISubContainerCreator (Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0::*)(Zenject::DiContainer)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0::_ByNewPrefabResourceInstaller_b__0)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2d64b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0>::get(),
                            "<ByNewPrefabResourceInstaller>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d64c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d64cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0::__set_resourcePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0::__get_resourcePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0::__set_gameObjectInfo(Zenject::GameObjectCreationParameters value)  {
::cordl_internals::setInstanceField<Zenject::GameObjectCreationParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::GameObjectCreationParameters>(value));
}
constexpr Zenject::GameObjectCreationParameters Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0::__get_gameObjectInfo() const {
return ::cordl_internals::getInstanceField<Zenject::GameObjectCreationParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0::__set_installerType(System::Type value)  {
::cordl_internals::setInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Type>(value));
}
constexpr System::Type Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0::__get_installerType() const {
return ::cordl_internals::getInstanceField<System::Type, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0::__set___4__this(Zenject::SubContainerBinder value)  {
::cordl_internals::setInstanceField<Zenject::SubContainerBinder, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::SubContainerBinder>(value));
}
constexpr Zenject::SubContainerBinder Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<Zenject::SubContainerBinder, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0 Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0::New_ctor()  {
Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0 o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0>())};
return o;
}
 void Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::ISubContainerCreator Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0::_ByNewPrefabResourceInstaller_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0>::get(),
                            "<ByNewPrefabResourceInstaller>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ISubContainerCreator, false>(const_cast<void*>(instance), ___internal_method, container);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass20_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0::*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d631e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0._ByNewContextPrefab_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ISubContainerCreator (Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0::*)(Zenject::DiContainer)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0::_ByNewContextPrefab_b__0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2d64e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0>::get(),
                            "<ByNewContextPrefab>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d64f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d64f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0::__set_prefab(UnityEngine::Object value)  {
::cordl_internals::setInstanceField<UnityEngine::Object, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Object>(value));
}
constexpr UnityEngine::Object Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0::__get_prefab() const {
return ::cordl_internals::getInstanceField<UnityEngine::Object, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0::__set_gameObjectInfo(Zenject::GameObjectCreationParameters value)  {
::cordl_internals::setInstanceField<Zenject::GameObjectCreationParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::GameObjectCreationParameters>(value));
}
constexpr Zenject::GameObjectCreationParameters Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0::__get_gameObjectInfo() const {
return ::cordl_internals::getInstanceField<Zenject::GameObjectCreationParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0 Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0::New_ctor()  {
Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0 o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0>())};
return o;
}
 void Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::ISubContainerCreator Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0::_ByNewContextPrefab_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0>::get(),
                            "<ByNewContextPrefab>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ISubContainerCreator, false>(const_cast<void*>(instance), ___internal_method, container);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass22_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0::*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d63374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0._ByNewContextPrefabResource_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ISubContainerCreator (Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0::*)(Zenject::DiContainer)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0::_ByNewContextPrefabResource_b__0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2d65148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0>::get(),
                            "<ByNewContextPrefabResource>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0.__zenCreate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)(::ArrayW<::bs_hook::Il2CppWrapperType>)>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0::__zenCreate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d651f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::InjectTypeInfo (*)()>(&Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d65254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0::__set_resourcePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0::__get_resourcePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0::__set_gameObjectInfo(Zenject::GameObjectCreationParameters value)  {
::cordl_internals::setInstanceField<Zenject::GameObjectCreationParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::GameObjectCreationParameters>(value));
}
constexpr Zenject::GameObjectCreationParameters Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0::__get_gameObjectInfo() const {
return ::cordl_internals::getInstanceField<Zenject::GameObjectCreationParameters, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0 Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0::New_ctor()  {
Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0 o{THROW_UNLESS(::il2cpp_utils::New<Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0>())};
return o;
}
 void Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::ISubContainerCreator Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0::_ByNewContextPrefabResource_b__0(Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0>::get(),
                            "<ByNewContextPrefabResource>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ISubContainerCreator, false>(const_cast<void*>(instance), ___internal_method, container);
}
 ::bs_hook::Il2CppWrapperType Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::Zenject__SubContainerBinder____c__DisplayClass24_0>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: Zenject::SubContainerBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerBinder::*)(Zenject::BindInfo, Zenject::BindStatement, ::bs_hook::Il2CppWrapperType, bool)>(&Zenject::SubContainerBinder::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2d61dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindStatement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerBinder.set_SubFinalizer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SubContainerBinder::*)(Zenject::IBindingFinalizer)>(&Zenject::SubContainerBinder::set_SubFinalizer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d61e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "set_SubFinalizer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IBindingFinalizer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerBinder.ByInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder (Zenject::SubContainerBinder::*)(Zenject::DiContainer)>(&Zenject::SubContainerBinder::ByInstance)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2d61e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerBinder.ByInstanceGetter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder (Zenject::SubContainerBinder::*)(System::Func_2<Zenject::InjectContext,Zenject::DiContainer>)>(&Zenject::SubContainerBinder::ByInstanceGetter)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2d61fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByInstanceGetter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<Zenject::InjectContext,Zenject::DiContainer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerBinder.ByInstaller
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder (Zenject::SubContainerBinder::*)(System::Type)>(&Zenject::SubContainerBinder::ByInstaller)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2d62134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByInstaller",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerBinder.ByMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder (Zenject::SubContainerBinder::*)(System::Action_1<Zenject::DiContainer>)>(&Zenject::SubContainerBinder::ByMethod)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2d6232c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerBinder.ByNewGameObjectMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder (Zenject::SubContainerBinder::*)(System::Action_1<Zenject::DiContainer>)>(&Zenject::SubContainerBinder::ByNewGameObjectMethod)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2d624b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByNewGameObjectMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerBinder.ByNewPrefabMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder (Zenject::SubContainerBinder::*)(UnityEngine::Object, System::Action_1<Zenject::DiContainer>)>(&Zenject::SubContainerBinder::ByNewPrefabMethod)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2d62680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByNewPrefabMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerBinder.ByNewGameObjectInstaller
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder (Zenject::SubContainerBinder::*)(System::Type)>(&Zenject::SubContainerBinder::ByNewGameObjectInstaller)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2d62870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByNewGameObjectInstaller",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerBinder.ByNewPrefabInstaller
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder (Zenject::SubContainerBinder::*)(UnityEngine::Object, System::Type)>(&Zenject::SubContainerBinder::ByNewPrefabInstaller)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2d62a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByNewPrefabInstaller",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerBinder.ByNewPrefabResourceMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder (Zenject::SubContainerBinder::*)(::StringW, System::Action_1<Zenject::DiContainer>)>(&Zenject::SubContainerBinder::ByNewPrefabResourceMethod)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2d62c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByNewPrefabResourceMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerBinder.ByNewPrefabResourceInstaller
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder (Zenject::SubContainerBinder::*)(::StringW, System::Type)>(&Zenject::SubContainerBinder::ByNewPrefabResourceInstaller)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2d62e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByNewPrefabResourceInstaller",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerBinder.ByNewPrefab
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder (Zenject::SubContainerBinder::*)(UnityEngine::Object)>(&Zenject::SubContainerBinder::ByNewPrefab)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d6305c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByNewPrefab",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerBinder.ByNewContextPrefab
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder (Zenject::SubContainerBinder::*)(UnityEngine::Object)>(&Zenject::SubContainerBinder::ByNewContextPrefab)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2d63060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByNewContextPrefab",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerBinder.ByNewPrefabResource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder (Zenject::SubContainerBinder::*)(::StringW)>(&Zenject::SubContainerBinder::ByNewPrefabResource)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d631ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByNewPrefabResource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::SubContainerBinder.ByNewContextPrefabResource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder (Zenject::SubContainerBinder::*)(::StringW)>(&Zenject::SubContainerBinder::ByNewContextPrefabResource)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2d631f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByNewContextPrefabResource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::SubContainerBinder::__set__bindInfo(Zenject::BindInfo value)  {
::cordl_internals::setInstanceField<Zenject::BindInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::BindInfo>(value));
}
constexpr Zenject::BindInfo Zenject::SubContainerBinder::__get__bindInfo() const {
return ::cordl_internals::getInstanceField<Zenject::BindInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SubContainerBinder::__set__bindStatement(Zenject::BindStatement value)  {
::cordl_internals::setInstanceField<Zenject::BindStatement, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::BindStatement>(value));
}
constexpr Zenject::BindStatement Zenject::SubContainerBinder::__get__bindStatement() const {
return ::cordl_internals::getInstanceField<Zenject::BindStatement, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SubContainerBinder::__set__subIdentifier(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType Zenject::SubContainerBinder::__get__subIdentifier() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::SubContainerBinder::__set__resolveAll(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Zenject::SubContainerBinder::__get__resolveAll() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::SubContainerBinder Zenject::SubContainerBinder::New_ctor(Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement, ::bs_hook::Il2CppWrapperType subIdentifier, bool resolveAll)  {
Zenject::SubContainerBinder o{THROW_UNLESS(::il2cpp_utils::New<Zenject::SubContainerBinder>(bindInfo, bindStatement, subIdentifier, resolveAll))};
return o;
}
 void Zenject::SubContainerBinder::_ctor(Zenject::BindInfo bindInfo, Zenject::BindStatement bindStatement, ::bs_hook::Il2CppWrapperType subIdentifier, bool resolveAll)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::BindStatement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindInfo, bindStatement, subIdentifier, resolveAll);
}
 void Zenject::SubContainerBinder::set_SubFinalizer(Zenject::IBindingFinalizer value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "set_SubFinalizer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IBindingFinalizer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::SubContainerBinder::ByInstance(Zenject::DiContainer subContainer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, subContainer);
}
 Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::SubContainerBinder::ByInstanceGetter(System::Func_2<Zenject::InjectContext,Zenject::DiContainer> subContainerGetter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByInstanceGetter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<Zenject::InjectContext,Zenject::DiContainer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, subContainerGetter);
}
template<typename TInstaller>
 Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::SubContainerBinder::ByInstaller()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                        "ByInstaller",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::SubContainerBinder::ByInstaller(System::Type installerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByInstaller",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, installerType);
}
 Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::SubContainerBinder::ByMethod(System::Action_1<Zenject::DiContainer> installerMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, installerMethod);
}
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::SubContainerBinder::ByNewGameObjectMethod(System::Action_1<Zenject::DiContainer> installerMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByNewGameObjectMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, installerMethod);
}
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::SubContainerBinder::ByNewPrefabMethod(UnityEngine::Object prefab, System::Action_1<Zenject::DiContainer> installerMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByNewPrefabMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, prefab, installerMethod);
}
template<typename TInstaller>
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::SubContainerBinder::ByNewGameObjectInstaller()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                        "ByNewGameObjectInstaller",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::SubContainerBinder::ByNewGameObjectInstaller(System::Type installerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByNewGameObjectInstaller",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, installerType);
}
template<typename TInstaller>
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::SubContainerBinder::ByNewPrefabInstaller(UnityEngine::Object prefab)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                        "ByNewPrefabInstaller",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, prefab);
}
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::SubContainerBinder::ByNewPrefabInstaller(UnityEngine::Object prefab, System::Type installerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByNewPrefabInstaller",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, prefab, installerType);
}
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::SubContainerBinder::ByNewPrefabResourceMethod(::StringW resourcePath, System::Action_1<Zenject::DiContainer> installerMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByNewPrefabResourceMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<Zenject::DiContainer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, resourcePath, installerMethod);
}
template<typename TInstaller>
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::SubContainerBinder::ByNewPrefabResourceInstaller(::StringW resourcePath)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                        "ByNewPrefabResourceInstaller",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, resourcePath);
}
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::SubContainerBinder::ByNewPrefabResourceInstaller(::StringW resourcePath, System::Type installerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByNewPrefabResourceInstaller",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, resourcePath, installerType);
}
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::SubContainerBinder::ByNewPrefab(UnityEngine::Object prefab)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByNewPrefab",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, prefab);
}
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::SubContainerBinder::ByNewContextPrefab(UnityEngine::Object prefab)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByNewContextPrefab",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, prefab);
}
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::SubContainerBinder::ByNewPrefabResource(::StringW resourcePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByNewPrefabResource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, resourcePath);
}
 Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder Zenject::SubContainerBinder::ByNewContextPrefabResource(::StringW resourcePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::SubContainerBinder>::get(),
                            "ByNewContextPrefabResource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder, false>(const_cast<void*>(instance), ___internal_method, resourcePath);
}
