#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__ColorArrayLightWithIdsGroupEntry_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorArrayLightWithIds_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry.get_lightGroups
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::LightGroupSO> (::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::*)()>(&::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::get_lightGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9cb7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorArrayLightWithIdsGroupEntry>::get(),
                            "get_lightGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::*)()>(&::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9cb84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorArrayLightWithIdsGroupEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__set__colorArrayLightWithIds(::GlobalNamespace::ColorArrayLightWithIds value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorArrayLightWithIds, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ColorArrayLightWithIds>(value));
}
constexpr ::GlobalNamespace::ColorArrayLightWithIds ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__get__colorArrayLightWithIds() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorArrayLightWithIds, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__set__lightGroups(::ArrayW<::GlobalNamespace::LightGroupSO> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::LightGroupSO>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::LightGroupSO>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::LightGroupSO> ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__get__lightGroups() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::LightGroupSO>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__set__excludedLightIds(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__get__excludedLightIds() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<::GlobalNamespace::LightGroupSO> ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::get_lightGroups()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorArrayLightWithIdsGroupEntry>::get(),
                            "get_lightGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::LightGroupSO>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::ColorArrayLightWithIdsGroupEntry()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ColorArrayLightWithIdsGroupEntry>())) {}
 void ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorArrayLightWithIdsGroupEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
