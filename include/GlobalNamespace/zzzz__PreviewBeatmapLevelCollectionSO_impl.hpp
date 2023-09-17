#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__PreviewBeatmapLevelCollectionSO_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelCollection_def.hpp"
#include "GlobalNamespace/zzzz__PreviewBeatmapLevelSO_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelCollectionSO.get_beatmapLevels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel> (::GlobalNamespace::PreviewBeatmapLevelCollectionSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelCollectionSO::get_beatmapLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ec6e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelCollectionSO>::get(),
                            "get_beatmapLevels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelCollectionSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PreviewBeatmapLevelCollectionSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelCollectionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ec6e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelCollectionSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IBeatmapLevelCollection
constexpr  ::GlobalNamespace::PreviewBeatmapLevelCollectionSO::operator ::GlobalNamespace::IBeatmapLevelCollection() const noexcept {
return ::GlobalNamespace::IBeatmapLevelCollection(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::PreviewBeatmapLevelCollectionSO::__set__beatmapLevels(::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO> ::GlobalNamespace::PreviewBeatmapLevelCollectionSO::__get__beatmapLevels() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel> ::GlobalNamespace::PreviewBeatmapLevelCollectionSO::get_beatmapLevels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelCollectionSO>::get(),
                            "get_beatmapLevels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::PreviewBeatmapLevelCollectionSO::PreviewBeatmapLevelCollectionSO()  : ::GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<PreviewBeatmapLevelCollectionSO>())) {}
 void ::GlobalNamespace::PreviewBeatmapLevelCollectionSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelCollectionSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
