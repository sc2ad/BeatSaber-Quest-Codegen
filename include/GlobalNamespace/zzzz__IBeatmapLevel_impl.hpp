#pragma once
namespace {
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBeatmapLevel.get_beatmapLevelData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelData (::GlobalNamespace::IBeatmapLevel::*)()>(&::GlobalNamespace::IBeatmapLevel::get_beatmapLevelData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IBeatmapLevel),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapLevel>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IPreviewBeatmapLevel
constexpr  ::GlobalNamespace::IBeatmapLevel::operator ::GlobalNamespace::IPreviewBeatmapLevel() const noexcept {
return ::GlobalNamespace::IPreviewBeatmapLevel(::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::IBeatmapLevelData ::GlobalNamespace::IBeatmapLevel::get_beatmapLevelData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapLevel>::get(),
                            "get_beatmapLevelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevelData, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
