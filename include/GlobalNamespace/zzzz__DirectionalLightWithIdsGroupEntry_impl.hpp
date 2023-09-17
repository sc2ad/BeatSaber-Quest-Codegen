#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__DirectionalLightWithIdsGroupEntry_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting  ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting::Maximum{0};
constexpr ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting  ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting::LinearFraction{1};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData.get_lightGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightGroupSO (::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData::*)()>(&::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData::get_lightGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9cc48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData>::get(),
                            "get_lightGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData.get_groupIntensity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData::*)()>(&::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData::get_groupIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9cc50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData>::get(),
                            "get_groupIntensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData::*)()>(&::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9cc58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData::__set__lightGroup(::GlobalNamespace::LightGroupSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LightGroupSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LightGroupSO>(value));
}
constexpr ::GlobalNamespace::LightGroupSO ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData::__get__lightGroup() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LightGroupSO, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData::__set__groupIntensity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData::__get__groupIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::GlobalNamespace::LightGroupSO ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData::get_lightGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData>::get(),
                            "get_lightGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightGroupSO, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData::get_groupIntensity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData>::get(),
                            "get_groupIntensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData>())) {}
 void ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId.get_lightId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::*)()>(&::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::get_lightId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9cc60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId>::get(),
                            "get_lightId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId.get_intensity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::*)()>(&::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9cc68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId>::get(),
                            "get_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::*)(int32_t, float_t)>(&::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1f9cc70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::__set__lightId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::__get__lightId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::__set__intensity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::__get__intensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::get_lightId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId>::get(),
                            "get_lightId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::get_intensity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId>::get(),
                            "get_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "lightId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lightIntensity", ty: "float_t", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId(int32_t lightId, float_t lightIntensity)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId>(lightId, lightIntensity))) {}
 void ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::_ctor(int32_t lightId, float_t lightIntensity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lightId, lightIntensity);
}
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithIdsGroupEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DirectionalLightWithIdsGroupEntry::*)()>(&::GlobalNamespace::DirectionalLightWithIdsGroupEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9cc40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::DirectionalLightWithIdsGroupEntry::__set__directionalLightWithIds(::GlobalNamespace::DirectionalLightWithIds value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DirectionalLightWithIds, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::DirectionalLightWithIds>(value));
}
constexpr ::GlobalNamespace::DirectionalLightWithIds ::GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__directionalLightWithIds() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DirectionalLightWithIds, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::DirectionalLightWithIdsGroupEntry::__set__groupLightData(::ArrayW<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData> ::GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__groupLightData() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightData>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::DirectionalLightWithIdsGroupEntry::__set__individualLightData(::ArrayW<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId> ::GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__individualLightData() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::DirectionalLightWithIdsGroupEntry::__set__excludedLightIds(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__excludedLightIds() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::DirectionalLightWithIdsGroupEntry::__set__groupLightsWeighting(::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting>(value));
}
constexpr ::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting ::GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__groupLightsWeighting() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::____GlobalNamespace__DirectionalLightWithIdsGroupEntry__GroupLightsWeighting, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::DirectionalLightWithIdsGroupEntry::DirectionalLightWithIdsGroupEntry()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<DirectionalLightWithIdsGroupEntry>())) {}
 void ::GlobalNamespace::DirectionalLightWithIdsGroupEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
