#pragma once
#include "GlobalNamespace/zzzz__IBeatmapLevelPackCollection_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
//  Writing Method size for method: GlobalNamespace::IBeatmapLevelPackCollection.get_beatmapLevelPacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::IBeatmapLevelPack> (GlobalNamespace::IBeatmapLevelPackCollection::*)()>(&GlobalNamespace::IBeatmapLevelPackCollection::get_beatmapLevelPacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IBeatmapLevelPackCollection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IBeatmapLevelPackCollection>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::ArrayW<GlobalNamespace::IBeatmapLevelPack> GlobalNamespace::IBeatmapLevelPackCollection::get_beatmapLevelPacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IBeatmapLevelPackCollection>::get(),
                            "get_beatmapLevelPacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<GlobalNamespace::IBeatmapLevelPack>, false>(const_cast<void*>(instance), ___internal_method);
}
