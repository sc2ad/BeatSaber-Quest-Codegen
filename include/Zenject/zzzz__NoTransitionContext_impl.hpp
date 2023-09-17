#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "Zenject/zzzz__NoTransitionContext_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
//  Writing Method size for method: ::Zenject::NoTransitionContext.get_installMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::Zenject::DiContainer> (::Zenject::NoTransitionContext::*)()>(&::Zenject::NoTransitionContext::get_installMethod)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d8b48c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoTransitionContext>::get(),
                            "get_installMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NoTransitionContext.get_postInstallMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::Zenject::DiContainer> (::Zenject::NoTransitionContext::*)()>(&::Zenject::NoTransitionContext::get_postInstallMethod)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d8b500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoTransitionContext>::get(),
                            "get_postInstallMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NoTransitionContext.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::NoTransitionContext::*)()>(&::Zenject::NoTransitionContext::Awake)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2d8b574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoTransitionContext>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NoTransitionContext._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::NoTransitionContext::*)()>(&::Zenject::NoTransitionContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d8b5ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoTransitionContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::NoTransitionContext.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo (*)()>(&::Zenject::NoTransitionContext::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2d8b5f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoTransitionContext>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Zenject::NoTransitionContext::__set__noScenesTransitionInstaller(::Zenject::NoTransitionInstaller value)  {
::cordl_internals::setInstanceField<::Zenject::NoTransitionInstaller, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Zenject::NoTransitionInstaller>(value));
}
constexpr ::Zenject::NoTransitionInstaller ::Zenject::NoTransitionContext::__get__noScenesTransitionInstaller() const {
return ::cordl_internals::getInstanceField<::Zenject::NoTransitionInstaller, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Action_1<::Zenject::DiContainer> ::Zenject::NoTransitionContext::get_installMethod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoTransitionContext>::get(),
                            "get_installMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Zenject::DiContainer>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Action_1<::Zenject::DiContainer> ::Zenject::NoTransitionContext::get_postInstallMethod()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoTransitionContext>::get(),
                            "get_postInstallMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Zenject::DiContainer>, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Zenject::NoTransitionContext::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoTransitionContext>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::Zenject::NoTransitionContext::NoTransitionContext()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<NoTransitionContext>())) {}
 void ::Zenject::NoTransitionContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoTransitionContext>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Zenject::InjectTypeInfo ::Zenject::NoTransitionContext::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::NoTransitionContext>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
