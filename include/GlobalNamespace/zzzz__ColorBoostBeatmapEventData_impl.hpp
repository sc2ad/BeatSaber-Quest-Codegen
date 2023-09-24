#pragma once
#include "GlobalNamespace/zzzz__BeatmapEventData_impl.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
//  Writing Method size for method: GlobalNamespace::ColorBoostBeatmapEventData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ColorBoostBeatmapEventData::*)(float_t, bool)>(&GlobalNamespace::ColorBoostBeatmapEventData::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xd91b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ColorBoostBeatmapEventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ColorBoostBeatmapEventData.GetCopy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapDataItem (GlobalNamespace::ColorBoostBeatmapEventData::*)()>(&GlobalNamespace::ColorBoostBeatmapEventData::GetCopy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xd91b50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ColorBoostBeatmapEventData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ColorBoostBeatmapEventData>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ColorBoostBeatmapEventData.GetDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapEventData (GlobalNamespace::ColorBoostBeatmapEventData::*)()>(&GlobalNamespace::ColorBoostBeatmapEventData::GetDefault)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xd91bdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ColorBoostBeatmapEventData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ColorBoostBeatmapEventData>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ColorBoostBeatmapEventData::__set_boostColorsAreOn(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::ColorBoostBeatmapEventData::__get_boostColorsAreOn() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::ColorBoostBeatmapEventData::__set__defaultCopy(GlobalNamespace::ColorBoostBeatmapEventData value)  {
::cordl_internals::setStaticField<GlobalNamespace::ColorBoostBeatmapEventData, "_defaultCopy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ColorBoostBeatmapEventData>::get>(std::forward<GlobalNamespace::ColorBoostBeatmapEventData>(value));
}
 GlobalNamespace::ColorBoostBeatmapEventData GlobalNamespace::ColorBoostBeatmapEventData::__get__defaultCopy()  {
return ::cordl_internals::getStaticField<GlobalNamespace::ColorBoostBeatmapEventData, "_defaultCopy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ColorBoostBeatmapEventData>::get>();
}
 GlobalNamespace::ColorBoostBeatmapEventData GlobalNamespace::ColorBoostBeatmapEventData::New_ctor(float_t time, bool boostColorsAreOn)  {
GlobalNamespace::ColorBoostBeatmapEventData o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::ColorBoostBeatmapEventData>(time, boostColorsAreOn))};
return o;
}
 void GlobalNamespace::ColorBoostBeatmapEventData::_ctor(float_t time, bool boostColorsAreOn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ColorBoostBeatmapEventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time, boostColorsAreOn);
}
 GlobalNamespace::BeatmapDataItem GlobalNamespace::ColorBoostBeatmapEventData::GetCopy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ColorBoostBeatmapEventData>::get(),
                            "GetCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapDataItem, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BeatmapEventData GlobalNamespace::ColorBoostBeatmapEventData::GetDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ColorBoostBeatmapEventData>::get(),
                            "GetDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapEventData, false>(const_cast<void*>(instance), ___internal_method);
}
