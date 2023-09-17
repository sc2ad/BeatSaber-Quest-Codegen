#pragma once
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__LightColorBeatmapEventDataBox_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBaseData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConvertor_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightColorBeatmapEventDataBox.get_subtypeIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LightColorBeatmapEventDataBox::*)()>(&::GlobalNamespace::LightColorBeatmapEventDataBox::get_subtypeIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21de180;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::LightColorBeatmapEventDataBox),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataBox>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorBeatmapEventDataBox.get_beatStep
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::LightColorBeatmapEventDataBox::*)()>(&::GlobalNamespace::LightColorBeatmapEventDataBox::get_beatStep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21de188;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::LightColorBeatmapEventDataBox),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataBox>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorBeatmapEventDataBox._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorBeatmapEventDataBox::*)(::GlobalNamespace::IndexFilter, float_t, ::GlobalNamespace::____GlobalNamespace__BeatmapEventDataBox__DistributionParamType, float_t, ::GlobalNamespace::____GlobalNamespace__BeatmapEventDataBox__DistributionParamType, bool, ::GlobalNamespace::EaseType, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData>)>(&::GlobalNamespace::LightColorBeatmapEventDataBox::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x21d794c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataBox>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IndexFilter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BeatmapEventDataBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BeatmapEventDataBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorBeatmapEventDataBox.Unpack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorBeatmapEventDataBox::*)(float_t, int32_t, int32_t, int32_t, int32_t, float_t, ::GlobalNamespace::IBeatToTimeConvertor, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData>)>(&::GlobalNamespace::LightColorBeatmapEventDataBox::Unpack)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x21de190;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::LightColorBeatmapEventDataBox),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataBox>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::LightColorBeatmapEventDataBox::__set__lightColorBaseDataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData>>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData> ::GlobalNamespace::LightColorBeatmapEventDataBox::__get__lightColorBaseDataList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LightColorBeatmapEventDataBox::__set__brightnessStep(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::LightColorBeatmapEventDataBox::__get__brightnessStep() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LightColorBeatmapEventDataBox::__set__beatStep(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::LightColorBeatmapEventDataBox::__get__beatStep() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::LightColorBeatmapEventDataBox::__set__brightnessDistributionShouldAffectFirstBaseEvent(bool value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::LightColorBeatmapEventDataBox::__get__brightnessDistributionShouldAffectFirstBaseEvent() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t ::GlobalNamespace::LightColorBeatmapEventDataBox::get_subtypeIdentifier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataBox>::get(),
                            "get_subtypeIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::LightColorBeatmapEventDataBox::get_beatStep()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataBox>::get(),
                            "get_beatStep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "indexFilter", ty: "::GlobalNamespace::IndexFilter", modifiers: "", def_value: None }, CppParam { name: "beatDistributionParam", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "beatDistributionParamType", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapEventDataBox__DistributionParamType", modifiers: "", def_value: None }, CppParam { name: "brightnessDistributionParam", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "brightnessDistributionParamType", ty: "::GlobalNamespace::____GlobalNamespace__BeatmapEventDataBox__DistributionParamType", modifiers: "", def_value: None }, CppParam { name: "brightnessDistributionShouldAffectFirstBaseEvent", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "brightnessDistributionEaseType", ty: "::GlobalNamespace::EaseType", modifiers: "", def_value: None }, CppParam { name: "lightColorBaseDataList", ty: "::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData>", modifiers: "", def_value: None }]
 ::GlobalNamespace::LightColorBeatmapEventDataBox::LightColorBeatmapEventDataBox(::GlobalNamespace::IndexFilter indexFilter, float_t beatDistributionParam, ::GlobalNamespace::____GlobalNamespace__BeatmapEventDataBox__DistributionParamType beatDistributionParamType, float_t brightnessDistributionParam, ::GlobalNamespace::____GlobalNamespace__BeatmapEventDataBox__DistributionParamType brightnessDistributionParamType, bool brightnessDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType brightnessDistributionEaseType, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData> lightColorBaseDataList)  : ::GlobalNamespace::BeatmapEventDataBox(THROW_UNLESS(::il2cpp_utils::New<LightColorBeatmapEventDataBox>(indexFilter, beatDistributionParam, beatDistributionParamType, brightnessDistributionParam, brightnessDistributionParamType, brightnessDistributionShouldAffectFirstBaseEvent, brightnessDistributionEaseType, lightColorBaseDataList))) {}
 void ::GlobalNamespace::LightColorBeatmapEventDataBox::_ctor(::GlobalNamespace::IndexFilter indexFilter, float_t beatDistributionParam, ::GlobalNamespace::____GlobalNamespace__BeatmapEventDataBox__DistributionParamType beatDistributionParamType, float_t brightnessDistributionParam, ::GlobalNamespace::____GlobalNamespace__BeatmapEventDataBox__DistributionParamType brightnessDistributionParamType, bool brightnessDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType brightnessDistributionEaseType, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData> lightColorBaseDataList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataBox>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IndexFilter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BeatmapEventDataBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BeatmapEventDataBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightColorBaseData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indexFilter, beatDistributionParam, beatDistributionParamType, brightnessDistributionParam, brightnessDistributionParamType, brightnessDistributionShouldAffectFirstBaseEvent, brightnessDistributionEaseType, lightColorBaseDataList);
}
 void ::GlobalNamespace::LightColorBeatmapEventDataBox::Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t maxBeat, ::GlobalNamespace::IBeatToTimeConvertor beatToTimeConvertor, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData> output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorBeatmapEventDataBox>::get(),
                            "Unpack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatToTimeConvertor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, groupBoxBeat, groupId, elementId, durationOrderIndex, distributionOrderIndex, maxBeat, beatToTimeConvertor, output);
}
} // end anonymous namespace
