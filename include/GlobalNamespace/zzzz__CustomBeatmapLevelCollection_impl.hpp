#pragma once
namespace {
#include "GlobalNamespace/zzzz__CustomBeatmapLevelCollection_def.hpp"
#include "GlobalNamespace/zzzz__CustomPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelCollection_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomBeatmapLevelCollection.get_beatmapLevels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel> (::GlobalNamespace::CustomBeatmapLevelCollection::*)()>(&::GlobalNamespace::CustomBeatmapLevelCollection::get_beatmapLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e9698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevelCollection>::get(),
                            "get_beatmapLevels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomBeatmapLevelCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomBeatmapLevelCollection::*)(::ArrayW<::GlobalNamespace::CustomPreviewBeatmapLevel>)>(&::GlobalNamespace::CustomBeatmapLevelCollection::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21e96a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevelCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::CustomPreviewBeatmapLevel>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IBeatmapLevelCollection
constexpr  ::GlobalNamespace::CustomBeatmapLevelCollection::operator ::GlobalNamespace::IBeatmapLevelCollection() const noexcept {
return ::GlobalNamespace::IBeatmapLevelCollection(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::CustomBeatmapLevelCollection::__set__customPreviewBeatmapLevels(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomPreviewBeatmapLevel> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomPreviewBeatmapLevel>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomPreviewBeatmapLevel>>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomPreviewBeatmapLevel> ::GlobalNamespace::CustomBeatmapLevelCollection::__get__customPreviewBeatmapLevels() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomPreviewBeatmapLevel>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel> ::GlobalNamespace::CustomBeatmapLevelCollection::get_beatmapLevels()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevelCollection>::get(),
                            "get_beatmapLevels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel>, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "customPreviewBeatmapLevels", ty: "::ArrayW<::GlobalNamespace::CustomPreviewBeatmapLevel>", modifiers: "", def_value: None }]
 ::GlobalNamespace::CustomBeatmapLevelCollection::CustomBeatmapLevelCollection(::ArrayW<::GlobalNamespace::CustomPreviewBeatmapLevel> customPreviewBeatmapLevels)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CustomBeatmapLevelCollection>(customPreviewBeatmapLevels))) {}
 void ::GlobalNamespace::CustomBeatmapLevelCollection::_ctor(::ArrayW<::GlobalNamespace::CustomPreviewBeatmapLevel> customPreviewBeatmapLevels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevelCollection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::CustomPreviewBeatmapLevel>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, customPreviewBeatmapLevels);
}
} // end anonymous namespace
