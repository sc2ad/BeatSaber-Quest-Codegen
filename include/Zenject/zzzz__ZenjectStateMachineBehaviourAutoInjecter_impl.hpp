#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "Zenject/zzzz__ZenjectStateMachineBehaviourAutoInjecter_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
//  Writing Method size for method: ::Zenject::ZenjectStateMachineBehaviourAutoInjecter.Construct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenjectStateMachineBehaviourAutoInjecter::*)(::Zenject::DiContainer)>(&::Zenject::ZenjectStateMachineBehaviourAutoInjecter::Construct)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2da78ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectStateMachineBehaviourAutoInjecter>::get(),
                            "Construct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectStateMachineBehaviourAutoInjecter.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenjectStateMachineBehaviourAutoInjecter::*)()>(&::Zenject::ZenjectStateMachineBehaviourAutoInjecter::Start)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2da7950;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectStateMachineBehaviourAutoInjecter>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectStateMachineBehaviourAutoInjecter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenjectStateMachineBehaviourAutoInjecter::*)()>(&::Zenject::ZenjectStateMachineBehaviourAutoInjecter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2da7a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectStateMachineBehaviourAutoInjecter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectStateMachineBehaviourAutoInjecter.__zenInjectMethod0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&::Zenject::ZenjectStateMachineBehaviourAutoInjecter::__zenInjectMethod0)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2da7a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectStateMachineBehaviourAutoInjecter>::get(),
                            "__zenInjectMethod0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectStateMachineBehaviourAutoInjecter.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo (*)()>(&::Zenject::ZenjectStateMachineBehaviourAutoInjecter::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x2da7b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectStateMachineBehaviourAutoInjecter>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Zenject::ZenjectStateMachineBehaviourAutoInjecter::__set__container(::Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<::Zenject::DiContainer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::DiContainer>(value));
}
constexpr ::Zenject::DiContainer ::Zenject::ZenjectStateMachineBehaviourAutoInjecter::__get__container() const {
return ::cordl_internals::getInstanceField<::Zenject::DiContainer, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::ZenjectStateMachineBehaviourAutoInjecter::__set__animator(::UnityEngine::Animator value)  {
::cordl_internals::setInstanceField<::UnityEngine::Animator, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Animator>(value));
}
constexpr ::UnityEngine::Animator ::Zenject::ZenjectStateMachineBehaviourAutoInjecter::__get__animator() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Animator, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::Zenject::ZenjectStateMachineBehaviourAutoInjecter::Construct(::Zenject::DiContainer container)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectStateMachineBehaviourAutoInjecter>::get(),
                            "Construct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, container);
}
 void ::Zenject::ZenjectStateMachineBehaviourAutoInjecter::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectStateMachineBehaviourAutoInjecter>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::Zenject::ZenjectStateMachineBehaviourAutoInjecter::ZenjectStateMachineBehaviourAutoInjecter()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ZenjectStateMachineBehaviourAutoInjecter>())) {}
 void ::Zenject::ZenjectStateMachineBehaviourAutoInjecter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectStateMachineBehaviourAutoInjecter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Zenject::ZenjectStateMachineBehaviourAutoInjecter::__zenInjectMethod0(::bs_hook::Il2CppWrapperType P_0, ::ArrayW<::bs_hook::Il2CppWrapperType> P_1)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectStateMachineBehaviourAutoInjecter>::get(),
                            "__zenInjectMethod0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
 ::Zenject::InjectTypeInfo ::Zenject::ZenjectStateMachineBehaviourAutoInjecter::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectStateMachineBehaviourAutoInjecter>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
