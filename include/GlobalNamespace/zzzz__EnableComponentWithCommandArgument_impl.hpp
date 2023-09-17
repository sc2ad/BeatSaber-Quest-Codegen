#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__EnableComponentWithCommandArgument_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnableComponentWithCommandArgument.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnableComponentWithCommandArgument::*)()>(&::GlobalNamespace::EnableComponentWithCommandArgument::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1f769f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableComponentWithCommandArgument>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableComponentWithCommandArgument._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnableComponentWithCommandArgument::*)()>(&::GlobalNamespace::EnableComponentWithCommandArgument::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f76a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableComponentWithCommandArgument>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::EnableComponentWithCommandArgument::__set__argument(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::EnableComponentWithCommandArgument::__get__argument() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::EnableComponentWithCommandArgument::__set__component(::UnityEngine::Behaviour value)  {
::cordl_internals::setInstanceField<::UnityEngine::Behaviour, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Behaviour>(value));
}
constexpr ::UnityEngine::Behaviour ::GlobalNamespace::EnableComponentWithCommandArgument::__get__component() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Behaviour, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::EnableComponentWithCommandArgument::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableComponentWithCommandArgument>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::EnableComponentWithCommandArgument::EnableComponentWithCommandArgument()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<EnableComponentWithCommandArgument>())) {}
 void ::GlobalNamespace::EnableComponentWithCommandArgument::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnableComponentWithCommandArgument>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
