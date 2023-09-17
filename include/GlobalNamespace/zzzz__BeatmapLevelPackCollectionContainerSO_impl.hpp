#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__BeatmapLevelPackCollectionContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackCollectionSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelPackCollectionContainerSO.get_beatmapLevelPackCollection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelPackCollectionSO (::GlobalNamespace::BeatmapLevelPackCollectionContainerSO::*)()>(&::GlobalNamespace::BeatmapLevelPackCollectionContainerSO::get_beatmapLevelPackCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e51a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO>::get(),
                            "get_beatmapLevelPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelPackCollectionContainerSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelPackCollectionContainerSO::*)()>(&::GlobalNamespace::BeatmapLevelPackCollectionContainerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e51a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::BeatmapLevelPackCollectionContainerSO::__set__beatmapLevelPackCollection(::GlobalNamespace::BeatmapLevelPackCollectionSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelPackCollectionSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapLevelPackCollectionSO>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelPackCollectionSO ::GlobalNamespace::BeatmapLevelPackCollectionContainerSO::__get__beatmapLevelPackCollection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelPackCollectionSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::BeatmapLevelPackCollectionSO ::GlobalNamespace::BeatmapLevelPackCollectionContainerSO::get_beatmapLevelPackCollection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO>::get(),
                            "get_beatmapLevelPackCollection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPackCollectionSO, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::BeatmapLevelPackCollectionContainerSO::BeatmapLevelPackCollectionContainerSO()  : ::GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<BeatmapLevelPackCollectionContainerSO>())) {}
 void ::GlobalNamespace::BeatmapLevelPackCollectionContainerSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
