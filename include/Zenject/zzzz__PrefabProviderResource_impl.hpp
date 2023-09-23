#pragma once
#include "Zenject/zzzz__PrefabProviderResource_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IPrefabProvider_def.hpp"
//  Writing Method size for method: Zenject::PrefabProviderResource._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::PrefabProviderResource::*)(::StringW)>(&Zenject::PrefabProviderResource::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d906f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PrefabProviderResource>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Zenject::PrefabProviderResource.GetPrefab
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object (Zenject::PrefabProviderResource::*)()>(&Zenject::PrefabProviderResource::GetPrefab)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2d90720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PrefabProviderResource>::get(),
                            "GetPrefab",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Zenject::IPrefabProvider
constexpr  Zenject::PrefabProviderResource::operator Zenject::IPrefabProvider() const noexcept {
return Zenject::IPrefabProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Zenject::PrefabProviderResource::__set__resourcePath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Zenject::PrefabProviderResource::__get__resourcePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "resourcePath", ty: "::StringW", modifiers: "", def_value: None }]
 Zenject::PrefabProviderResource::PrefabProviderResource(::StringW resourcePath)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PrefabProviderResource>(resourcePath))) {}
 void Zenject::PrefabProviderResource::_ctor(::StringW resourcePath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PrefabProviderResource>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, resourcePath);
}
 UnityEngine::Object Zenject::PrefabProviderResource::GetPrefab()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PrefabProviderResource>::get(),
                            "GetPrefab",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Object, false>(const_cast<void*>(instance), ___internal_method);
}
