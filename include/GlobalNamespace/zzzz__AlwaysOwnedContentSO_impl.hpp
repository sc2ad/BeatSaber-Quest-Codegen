#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__AlwaysOwnedContentSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AlwaysOwnedContentSO.get_alwaysOwnedPacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::BeatmapLevelPackSO> (::GlobalNamespace::AlwaysOwnedContentSO::*)()>(&::GlobalNamespace::AlwaysOwnedContentSO::get_alwaysOwnedPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20c81e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentSO>::get(),
                            "get_alwaysOwnedPacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlwaysOwnedContentSO.get_alwaysOwnedBeatmapLevels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::BeatmapLevelSO> (::GlobalNamespace::AlwaysOwnedContentSO::*)()>(&::GlobalNamespace::AlwaysOwnedContentSO::get_alwaysOwnedBeatmapLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20c81ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentSO>::get(),
                            "get_alwaysOwnedBeatmapLevels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlwaysOwnedContentSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlwaysOwnedContentSO::*)()>(&::GlobalNamespace::AlwaysOwnedContentSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20c81f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::AlwaysOwnedContentSO::__set__alwaysOwnedPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPackSO> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::BeatmapLevelPackSO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::BeatmapLevelPackSO>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPackSO> ::GlobalNamespace::AlwaysOwnedContentSO::__get__alwaysOwnedPacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BeatmapLevelPackSO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::AlwaysOwnedContentSO::__set__alwaysOwnedBeatmapLevels(::ArrayW<::GlobalNamespace::BeatmapLevelSO> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::BeatmapLevelSO>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::BeatmapLevelSO>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelSO> ::GlobalNamespace::AlwaysOwnedContentSO::__get__alwaysOwnedBeatmapLevels() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BeatmapLevelSO>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<::GlobalNamespace::BeatmapLevelPackSO> ::GlobalNamespace::AlwaysOwnedContentSO::get_alwaysOwnedPacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentSO>::get(),
                            "get_alwaysOwnedPacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapLevelPackSO>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::GlobalNamespace::BeatmapLevelSO> ::GlobalNamespace::AlwaysOwnedContentSO::get_alwaysOwnedBeatmapLevels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentSO>::get(),
                            "get_alwaysOwnedBeatmapLevels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapLevelSO>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::AlwaysOwnedContentSO::AlwaysOwnedContentSO()  : ::GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<AlwaysOwnedContentSO>())) {}
 void ::GlobalNamespace::AlwaysOwnedContentSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
