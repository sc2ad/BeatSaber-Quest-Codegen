#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__PlayerSpaceConvertor_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerSpaceConvertor.get_worldToPlayerSpaceRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::PlayerSpaceConvertor::*)()>(&::GlobalNamespace::PlayerSpaceConvertor::get_worldToPlayerSpaceRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2108f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSpaceConvertor>::get(),
                            "get_worldToPlayerSpaceRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpaceConvertor.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSpaceConvertor::*)()>(&::GlobalNamespace::PlayerSpaceConvertor::Start)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2108f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSpaceConvertor>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSpaceConvertor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSpaceConvertor::*)()>(&::GlobalNamespace::PlayerSpaceConvertor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2108f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSpaceConvertor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::PlayerSpaceConvertor::__set__worldToPlayerSpaceRotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::GlobalNamespace::PlayerSpaceConvertor::__get__worldToPlayerSpaceRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::Quaternion ::GlobalNamespace::PlayerSpaceConvertor::get_worldToPlayerSpaceRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSpaceConvertor>::get(),
                            "get_worldToPlayerSpaceRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::PlayerSpaceConvertor::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSpaceConvertor>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::PlayerSpaceConvertor::PlayerSpaceConvertor()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<PlayerSpaceConvertor>())) {}
 void ::GlobalNamespace::PlayerSpaceConvertor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSpaceConvertor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
