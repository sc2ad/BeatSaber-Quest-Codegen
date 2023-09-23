#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConvertor_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType::GlobalNamespace__BeatmapEventDataBox__DistributionParamType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType  GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType::Wave{1};
constexpr GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType  GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType::Step{2};
//  Writing Method size for method: GlobalNamespace::BeatmapEventDataBox.get_subtypeIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::BeatmapEventDataBox::*)()>(&GlobalNamespace::BeatmapEventDataBox::get_subtypeIdentifier)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BeatmapEventDataBox),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBox>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapEventDataBox.get_beatStep
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::BeatmapEventDataBox::*)()>(&GlobalNamespace::BeatmapEventDataBox::get_beatStep)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BeatmapEventDataBox),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBox>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapEventDataBox.get_indexFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IndexFilter (GlobalNamespace::BeatmapEventDataBox::*)()>(&GlobalNamespace::BeatmapEventDataBox::get_indexFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21da734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBox>::get(),
                            "get_indexFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapEventDataBox._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapEventDataBox::*)(GlobalNamespace::IndexFilter, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType, float_t, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType, float_t, bool, GlobalNamespace::EaseType)>(&GlobalNamespace::BeatmapEventDataBox::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x21da73c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBox>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IndexFilter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapEventDataBox.Unpack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapEventDataBox::*)(float_t, int32_t, int32_t, int32_t, int32_t, float_t, GlobalNamespace::IBeatToTimeConvertor, System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData>)>(&GlobalNamespace::BeatmapEventDataBox::Unpack)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BeatmapEventDataBox),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBox>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapEventDataBox.GetBeatStep
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::BeatmapEventDataBox::*)(float_t)>(&GlobalNamespace::BeatmapEventDataBox::GetBeatStep)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21da7d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBox>::get(),
                            "GetBeatStep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapEventDataBox.GetDistribution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::BeatmapEventDataBox::*)(bool, int32_t)>(&GlobalNamespace::BeatmapEventDataBox::GetDistribution)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x21da854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBox>::get(),
                            "GetDistribution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapEventDataBox.BeatDistributionParamToStep
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType, int32_t)>(&GlobalNamespace::BeatmapEventDataBox::BeatDistributionParamToStep)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21da834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBox>::get(),
                            "BeatDistributionParamToStep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapEventDataBox.EventDistributionParamToStep
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(int32_t, float_t, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType, int32_t, GlobalNamespace::EaseType)>(&GlobalNamespace::BeatmapEventDataBox::EventDistributionParamToStep)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x21da880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBox>::get(),
                            "EventDistributionParamToStep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatmapEventDataBox::__set__indexFilter_k__BackingField(GlobalNamespace::IndexFilter value)  {
::cordl_internals::setInstanceField<GlobalNamespace::IndexFilter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::IndexFilter>(value));
}
constexpr GlobalNamespace::IndexFilter GlobalNamespace::BeatmapEventDataBox::__get__indexFilter_k__BackingField() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::IndexFilter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__set__beatDistributionParam(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::BeatmapEventDataBox::__get__beatDistributionParam() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__set__beatDistributionParamType(GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType GlobalNamespace::BeatmapEventDataBox::__get__beatDistributionParamType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__set__eventDistributionCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::BeatmapEventDataBox::__get__eventDistributionCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__set__eventDistributionParamType(GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType GlobalNamespace::BeatmapEventDataBox::__get__eventDistributionParamType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__set__eventDistributionParam(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::BeatmapEventDataBox::__get__eventDistributionParam() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__set__eventDistributionShouldAffectFirstBaseEvent(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::BeatmapEventDataBox::__get__eventDistributionShouldAffectFirstBaseEvent() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__set__eventDistributionEaseType(GlobalNamespace::EaseType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EaseType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EaseType>(value));
}
constexpr GlobalNamespace::EaseType GlobalNamespace::BeatmapEventDataBox::__get__eventDistributionEaseType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EaseType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t GlobalNamespace::BeatmapEventDataBox::get_subtypeIdentifier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBox>::get(),
                            "get_subtypeIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::BeatmapEventDataBox::get_beatStep()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBox>::get(),
                            "get_beatStep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::IndexFilter GlobalNamespace::BeatmapEventDataBox::get_indexFilter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBox>::get(),
                            "get_indexFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IndexFilter, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "indexFilter", ty: "GlobalNamespace::IndexFilter", modifiers: "", def_value: None }, CppParam { name: "beatDistributionParamType", ty: "GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType", modifiers: "", def_value: None }, CppParam { name: "beatDistributionParam", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "eventDistributionParamType", ty: "GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType", modifiers: "", def_value: None }, CppParam { name: "eventDistributionParam", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "eventDistributionShouldAffectFirstBaseEvent", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "eventDistributionEaseType", ty: "GlobalNamespace::EaseType", modifiers: "", def_value: None }]
 GlobalNamespace::BeatmapEventDataBox::BeatmapEventDataBox(GlobalNamespace::IndexFilter indexFilter, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType beatDistributionParamType, float_t beatDistributionParam, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType eventDistributionParamType, float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent, GlobalNamespace::EaseType eventDistributionEaseType)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BeatmapEventDataBox>(indexFilter, beatDistributionParamType, beatDistributionParam, eventDistributionParamType, eventDistributionParam, eventDistributionShouldAffectFirstBaseEvent, eventDistributionEaseType))) {}
 void GlobalNamespace::BeatmapEventDataBox::_ctor(GlobalNamespace::IndexFilter indexFilter, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType beatDistributionParamType, float_t beatDistributionParam, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType eventDistributionParamType, float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent, GlobalNamespace::EaseType eventDistributionEaseType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBox>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IndexFilter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indexFilter, beatDistributionParamType, beatDistributionParam, eventDistributionParamType, eventDistributionParam, eventDistributionShouldAffectFirstBaseEvent, eventDistributionEaseType);
}
 void GlobalNamespace::BeatmapEventDataBox::Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t maxBeat, GlobalNamespace::IBeatToTimeConvertor beatToTimeConvertor, System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData> output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBox>::get(),
                            "Unpack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBeatToTimeConvertor>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<GlobalNamespace::BeatmapEventData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, groupBoxBeat, groupId, elementId, durationOrderIndex, distributionOrderIndex, maxBeat, beatToTimeConvertor, output);
}
 float_t GlobalNamespace::BeatmapEventDataBox::GetBeatStep(float_t lastBaseEventRelativeBeat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBox>::get(),
                            "GetBeatStep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, lastBaseEventRelativeBeat);
}
 float_t GlobalNamespace::BeatmapEventDataBox::GetDistribution(bool isFirstBaseDataEvent, int32_t distributionOrderIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBox>::get(),
                            "GetDistribution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, isFirstBaseDataEvent, distributionOrderIndex);
}
 float_t GlobalNamespace::BeatmapEventDataBox::BeatDistributionParamToStep(float_t distributionParam, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType distributionParamType, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBox>::get(),
                            "BeatDistributionParamToStep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, distributionParam, distributionParamType, count);
}
 float_t GlobalNamespace::BeatmapEventDataBox::EventDistributionParamToStep(int32_t index, float_t distributionParam, GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType distributionParamType, int32_t count, GlobalNamespace::EaseType easeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBox>::get(),
                            "EventDistributionParamToStep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__BeatmapEventDataBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, index, distributionParam, distributionParamType, count, easeType);
}
