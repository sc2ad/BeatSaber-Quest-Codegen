#pragma once
namespace {
#include "Zenject/zzzz__PrefabProvider_def.hpp"
#include "Zenject/zzzz__IPrefabProvider_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Zenject::PrefabProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::PrefabProvider::*)(::UnityEngine::Object)>(&::Zenject::PrefabProvider::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2d906bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::PrefabProvider.GetPrefab
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object (::Zenject::PrefabProvider::*)()>(&::Zenject::PrefabProvider::GetPrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d906f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabProvider>::get(),
                            "GetPrefab",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Zenject::IPrefabProvider
constexpr  ::Zenject::PrefabProvider::operator ::Zenject::IPrefabProvider() const noexcept {
return ::Zenject::IPrefabProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Zenject::PrefabProvider::__set__prefab(::UnityEngine::Object value)  {
::cordl_internals::setInstanceField<::UnityEngine::Object, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Object>(value));
}
constexpr ::UnityEngine::Object ::Zenject::PrefabProvider::__get__prefab() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Object, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "prefab", ty: "::UnityEngine::Object", modifiers: "", def_value: None }]
 ::Zenject::PrefabProvider::PrefabProvider(::UnityEngine::Object prefab)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PrefabProvider>(prefab))) {}
 void ::Zenject::PrefabProvider::_ctor(::UnityEngine::Object prefab)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, prefab);
}
 ::UnityEngine::Object ::Zenject::PrefabProvider::GetPrefab()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PrefabProvider>::get(),
                            "GetPrefab",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Object, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
