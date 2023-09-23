#pragma once
#include "GlobalNamespace/zzzz__BeatmapDataItem_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_def.hpp"
//  Writing Method size for method: GlobalNamespace::BeatmapObjectData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectData::*)(float_t, int32_t)>(&GlobalNamespace::BeatmapObjectData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xd93b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapObjectData.Mirror
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectData::*)(int32_t)>(&GlobalNamespace::BeatmapObjectData::Mirror)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BeatmapObjectData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectData>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "subtypeIdentifier", ty: "int32_t", modifiers: "", def_value: None }]
 GlobalNamespace::BeatmapObjectData::BeatmapObjectData(float_t time, int32_t subtypeIdentifier)  : GlobalNamespace::BeatmapDataItem(THROW_UNLESS(::il2cpp_utils::New<BeatmapObjectData>(time, subtypeIdentifier))) {}
 void GlobalNamespace::BeatmapObjectData::_ctor(float_t time, int32_t subtypeIdentifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time, subtypeIdentifier);
}
 void GlobalNamespace::BeatmapObjectData::Mirror(int32_t lineCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapObjectData>::get(),
                            "Mirror",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lineCount);
}
