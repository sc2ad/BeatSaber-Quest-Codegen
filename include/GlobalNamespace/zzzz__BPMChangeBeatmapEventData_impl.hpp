#pragma once
#include "GlobalNamespace/zzzz__BeatmapEventData_impl.hpp"
#include "GlobalNamespace/zzzz__BPMChangeBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
//  Writing Method size for method: GlobalNamespace::BPMChangeBeatmapEventData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BPMChangeBeatmapEventData::*)(float_t, float_t)>(&GlobalNamespace::BPMChangeBeatmapEventData::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xd91a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BPMChangeBeatmapEventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BPMChangeBeatmapEventData.GetCopy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapDataItem (GlobalNamespace::BPMChangeBeatmapEventData::*)()>(&GlobalNamespace::BPMChangeBeatmapEventData::GetCopy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xd91a70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BPMChangeBeatmapEventData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BPMChangeBeatmapEventData>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BPMChangeBeatmapEventData.GetDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapEventData (GlobalNamespace::BPMChangeBeatmapEventData::*)()>(&GlobalNamespace::BPMChangeBeatmapEventData::GetDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd91afc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BPMChangeBeatmapEventData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BPMChangeBeatmapEventData>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BPMChangeBeatmapEventData::__set_bpm(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::BPMChangeBeatmapEventData::__get_bpm() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bpm", ty: "float_t", modifiers: "", def_value: None }]
 GlobalNamespace::BPMChangeBeatmapEventData::BPMChangeBeatmapEventData(float_t time, float_t bpm)  : GlobalNamespace::BeatmapEventData(THROW_UNLESS(::il2cpp_utils::New<BPMChangeBeatmapEventData>(time, bpm))) {}
 void GlobalNamespace::BPMChangeBeatmapEventData::_ctor(float_t time, float_t bpm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BPMChangeBeatmapEventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time, bpm);
}
 GlobalNamespace::BeatmapDataItem GlobalNamespace::BPMChangeBeatmapEventData::GetCopy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BPMChangeBeatmapEventData>::get(),
                            "GetCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapDataItem, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BeatmapEventData GlobalNamespace::BPMChangeBeatmapEventData::GetDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BPMChangeBeatmapEventData>::get(),
                            "GetDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapEventData, false>(const_cast<void*>(instance), ___internal_method);
}
