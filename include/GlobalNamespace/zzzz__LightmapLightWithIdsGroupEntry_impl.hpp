#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightmapLightWithIdsGroupEntry_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
#include "GlobalNamespace/zzzz__LightmapLightWithIds_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting  GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting::Maximum{0};
constexpr GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting  GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting::LinearFraction{1};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData.get_lightGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::LightGroupSO (GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData::*)()>(&GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData::get_lightGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9d858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData>::get(),
                            "get_lightGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData.get_groupIntensity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData::*)()>(&GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData::get_groupIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9d860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData>::get(),
                            "get_groupIntensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData.get_groupProbeHighlightsIntensityMultiplier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData::*)()>(&GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData::get_groupProbeHighlightsIntensityMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9d868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData>::get(),
                            "get_groupProbeHighlightsIntensityMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData::*)(GlobalNamespace::LightGroupSO, float_t, float_t)>(&GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1f9d870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LightGroupSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData::__set__lightGroup(GlobalNamespace::LightGroupSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LightGroupSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LightGroupSO>(value));
}
constexpr GlobalNamespace::LightGroupSO GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData::__get__lightGroup() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LightGroupSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData::__set__groupIntensity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData::__get__groupIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData::__set__groupProbeHighlightsIntensityMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData::__get__groupProbeHighlightsIntensityMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::LightGroupSO GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData::get_lightGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData>::get(),
                            "get_lightGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::LightGroupSO, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData::get_groupIntensity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData>::get(),
                            "get_groupIntensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData::get_groupProbeHighlightsIntensityMultiplier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData>::get(),
                            "get_groupProbeHighlightsIntensityMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "lightGroup", ty: "GlobalNamespace::LightGroupSO", modifiers: "", def_value: None }, CppParam { name: "groupIntensity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "groupProbeHighlightsIntensityMultiplier", ty: "float_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData(GlobalNamespace::LightGroupSO lightGroup, float_t groupIntensity, float_t groupProbeHighlightsIntensityMultiplier)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData>(lightGroup, groupIntensity, groupProbeHighlightsIntensityMultiplier))) {}
 void GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData::_ctor(GlobalNamespace::LightGroupSO lightGroup, float_t groupIntensity, float_t groupProbeHighlightsIntensityMultiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LightGroupSO>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lightGroup, groupIntensity, groupProbeHighlightsIntensityMultiplier);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId.get_lightId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::*)()>(&GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::get_lightId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9d8ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId>::get(),
                            "get_lightId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId.get_intensity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::*)()>(&GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9d8b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId>::get(),
                            "get_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId.get_probeHighlightsIntensityMultiplier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::*)()>(&GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::get_probeHighlightsIntensityMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9d8bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId>::get(),
                            "get_probeHighlightsIntensityMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::*)(int32_t, float_t, float_t)>(&GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1f9d8c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::__set__lightId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::__get__lightId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::__set__intensity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::__get__intensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::__set__probeHighlightsIntensityMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::__get__probeHighlightsIntensityMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::get_lightId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId>::get(),
                            "get_lightId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::get_intensity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId>::get(),
                            "get_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::get_probeHighlightsIntensityMultiplier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId>::get(),
                            "get_probeHighlightsIntensityMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "lightId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "intensity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "probeHighlightsIntensityMultiplier", ty: "float_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId(int32_t lightId, float_t intensity, float_t probeHighlightsIntensityMultiplier)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId>(lightId, intensity, probeHighlightsIntensityMultiplier))) {}
 void GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId::_ctor(int32_t lightId, float_t intensity, float_t probeHighlightsIntensityMultiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lightId, intensity, probeHighlightsIntensityMultiplier);
}
//  Writing Method size for method: GlobalNamespace::LightmapLightWithIdsGroupEntry.get_lightmapLightWithIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::LightmapLightWithIds (GlobalNamespace::LightmapLightWithIdsGroupEntry::*)()>(&GlobalNamespace::LightmapLightWithIdsGroupEntry::get_lightmapLightWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9d848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIdsGroupEntry>::get(),
                            "get_lightmapLightWithIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightmapLightWithIdsGroupEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapLightWithIdsGroupEntry::*)()>(&GlobalNamespace::LightmapLightWithIdsGroupEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9d850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIdsGroupEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LightmapLightWithIdsGroupEntry::__set__lightmapLightWithIds(GlobalNamespace::LightmapLightWithIds value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LightmapLightWithIds, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LightmapLightWithIds>(value));
}
constexpr GlobalNamespace::LightmapLightWithIds GlobalNamespace::LightmapLightWithIdsGroupEntry::__get__lightmapLightWithIds() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LightmapLightWithIds, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightmapLightWithIdsGroupEntry::__set__groupLightData(::ArrayW<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData> GlobalNamespace::LightmapLightWithIdsGroupEntry::__get__groupLightData() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightmapLightWithIdsGroupEntry::__set__individualLightData(::ArrayW<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId> GlobalNamespace::LightmapLightWithIdsGroupEntry::__get__individualLightData() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__LightIntensitiesWithId>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightmapLightWithIdsGroupEntry::__set__excludedLightIds(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> GlobalNamespace::LightmapLightWithIdsGroupEntry::__get__excludedLightIds() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightmapLightWithIdsGroupEntry::__set__groupLightsWeighting(GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting>(value));
}
constexpr GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting GlobalNamespace::LightmapLightWithIdsGroupEntry::__get__groupLightsWeighting() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__LightmapLightWithIdsGroupEntry__GroupLightsWeighting, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::LightmapLightWithIds GlobalNamespace::LightmapLightWithIdsGroupEntry::get_lightmapLightWithIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIdsGroupEntry>::get(),
                            "get_lightmapLightWithIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::LightmapLightWithIds, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::LightmapLightWithIdsGroupEntry::LightmapLightWithIdsGroupEntry()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<LightmapLightWithIdsGroupEntry>())) {}
 void GlobalNamespace::LightmapLightWithIdsGroupEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIdsGroupEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
