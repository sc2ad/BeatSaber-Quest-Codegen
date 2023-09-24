#pragma once
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationBeatmapEventDataBox_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConvertor_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationBaseData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
//  Writing Method size for method: GlobalNamespace::LightRotationBeatmapEventDataBox.get_subtypeIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::LightRotationBeatmapEventDataBox::*)()>(&GlobalNamespace::LightRotationBeatmapEventDataBox::get_subtypeIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21de664;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LightRotationBeatmapEventDataBox),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationBeatmapEventDataBox>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightRotationBeatmapEventDataBox.get_beatStep
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::LightRotationBeatmapEventDataBox::*)()>(&GlobalNamespace::LightRotationBeatmapEventDataBox::get_beatStep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21de66c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LightRotationBeatmapEventDataBox),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationBeatmapEventDataBox>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightRotationBeatmapEventDataBox._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightRotationBeatmapEventDataBox::*)(GlobalNamespace::IndexFilter, float_t, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType, GlobalNamespace::LightAxis, bool, float_t, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType, bool, GlobalNamespace::EaseType, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::LightRotationBaseData>)>(&GlobalNamespace::LightRotationBeatmapEventDataBox::_ctor)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x21d81c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationBeatmapEventDataBox>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IndexFilter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LightAxis>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::LightRotationBaseData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightRotationBeatmapEventDataBox.Unpack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightRotationBeatmapEventDataBox::*)(float_t, int32_t, int32_t, int32_t, int32_t, float_t, GlobalNamespace::IBeatToTimeConvertor, System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData>)>(&GlobalNamespace::LightRotationBeatmapEventDataBox::Unpack)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x21de674;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LightRotationBeatmapEventDataBox),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationBeatmapEventDataBox>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LightRotationBeatmapEventDataBox::__set__lightRotationBaseDataList(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::LightRotationBaseData> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::LightRotationBaseData>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::LightRotationBaseData>>(value));
}
constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::LightRotationBaseData> GlobalNamespace::LightRotationBeatmapEventDataBox::__get__lightRotationBaseDataList() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::LightRotationBaseData>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationBeatmapEventDataBox::__set__axis(GlobalNamespace::LightAxis value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LightAxis, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LightAxis>(value));
}
constexpr GlobalNamespace::LightAxis GlobalNamespace::LightRotationBeatmapEventDataBox::__get__axis() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LightAxis, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationBeatmapEventDataBox::__set__rotationDirection(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LightRotationBeatmapEventDataBox::__get__rotationDirection() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationBeatmapEventDataBox::__set__rotationStep(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LightRotationBeatmapEventDataBox::__get__rotationStep() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightRotationBeatmapEventDataBox::__set__beatStep(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LightRotationBeatmapEventDataBox::__get__beatStep() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t GlobalNamespace::LightRotationBeatmapEventDataBox::get_subtypeIdentifier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationBeatmapEventDataBox>::get(),
                            "get_subtypeIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::LightRotationBeatmapEventDataBox::get_beatStep()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationBeatmapEventDataBox>::get(),
                            "get_beatStep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::LightRotationBeatmapEventDataBox GlobalNamespace::LightRotationBeatmapEventDataBox::New_ctor(GlobalNamespace::IndexFilter indexFilter, float_t beatDistributionParam, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType beatDistributionParamType, GlobalNamespace::LightAxis axis, bool flipRotation, float_t rotationDistributionParam, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType rotationDistributionParamType, bool rotationDistributionShouldAffectFirstBaseEvent, GlobalNamespace::EaseType rotationDistributionEaseType, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::LightRotationBaseData> lightRotationBaseDataList)  {
GlobalNamespace::LightRotationBeatmapEventDataBox o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::LightRotationBeatmapEventDataBox>(indexFilter, beatDistributionParam, beatDistributionParamType, axis, flipRotation, rotationDistributionParam, rotationDistributionParamType, rotationDistributionShouldAffectFirstBaseEvent, rotationDistributionEaseType, lightRotationBaseDataList))};
return o;
}
 void GlobalNamespace::LightRotationBeatmapEventDataBox::_ctor(GlobalNamespace::IndexFilter indexFilter, float_t beatDistributionParam, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType beatDistributionParamType, GlobalNamespace::LightAxis axis, bool flipRotation, float_t rotationDistributionParam, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType rotationDistributionParamType, bool rotationDistributionShouldAffectFirstBaseEvent, GlobalNamespace::EaseType rotationDistributionEaseType, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::LightRotationBaseData> lightRotationBaseDataList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationBeatmapEventDataBox>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IndexFilter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LightAxis>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::LightRotationBaseData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indexFilter, beatDistributionParam, beatDistributionParamType, axis, flipRotation, rotationDistributionParam, rotationDistributionParamType, rotationDistributionShouldAffectFirstBaseEvent, rotationDistributionEaseType, lightRotationBaseDataList);
}
 void GlobalNamespace::LightRotationBeatmapEventDataBox::Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t maxBeat, GlobalNamespace::IBeatToTimeConvertor beatToTimeConvertor, System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData> output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightRotationBeatmapEventDataBox>::get(),
                            "Unpack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatToTimeConvertor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, groupBoxBeat, groupId, elementId, durationOrderIndex, distributionOrderIndex, maxBeat, beatToTimeConvertor, output);
}
