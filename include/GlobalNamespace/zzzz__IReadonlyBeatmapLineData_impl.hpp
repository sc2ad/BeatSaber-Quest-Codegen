#pragma once
#include "GlobalNamespace/zzzz__IReadonlyBeatmapLineData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::IReadonlyBeatmapLineData.get_beatmapObjectsData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapObjectData> (GlobalNamespace::IReadonlyBeatmapLineData::*)()>(&GlobalNamespace::IReadonlyBeatmapLineData::get_beatmapObjectsData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::IReadonlyBeatmapLineData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IReadonlyBeatmapLineData>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapObjectData> GlobalNamespace::IReadonlyBeatmapLineData::get_beatmapObjectsData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::IReadonlyBeatmapLineData>::get(),
                            "get_beatmapObjectsData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapObjectData>, false>(const_cast<void*>(instance), ___internal_method);
}
