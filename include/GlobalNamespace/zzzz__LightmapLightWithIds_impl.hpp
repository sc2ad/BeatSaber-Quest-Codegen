#pragma once
#include "GlobalNamespace/zzzz__LightWithIds_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__LightmapLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__LightmapLightWithIds_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__LightConstants_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__BakedLightsNormalizer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__LightmapLightWithIds__MixType::GlobalNamespace__LightmapLightWithIds__MixType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__LightmapLightWithIds__MixType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LightmapLightWithIds__MixType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__LightmapLightWithIds__MixType  GlobalNamespace::GlobalNamespace__LightmapLightWithIds__MixType::Maximum{0};
constexpr GlobalNamespace::GlobalNamespace__LightmapLightWithIds__MixType  GlobalNamespace::GlobalNamespace__LightmapLightWithIds__MixType::Sum{1};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId.get_intensity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId::*)()>(&GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9d7f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId>::get(),
                            "get_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId.get_probeHighlightsIntensityMultiplier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId::*)()>(&GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId::get_probeHighlightsIntensityMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9d7fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId>::get(),
                            "get_probeHighlightsIntensityMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId::*)(int32_t, float_t, float_t)>(&GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1f9d804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId::__set__intensity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId::__get__intensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId::__set__probeHighlightsIntensityMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId::__get__probeHighlightsIntensityMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId::get_intensity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId>::get(),
                            "get_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId::get_probeHighlightsIntensityMultiplier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId>::get(),
                            "get_probeHighlightsIntensityMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId::New_ctor(int32_t lightId, float_t lightIntensity, float_t probeMultiplier)  {
GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId>(lightId, lightIntensity, probeMultiplier))};
return o;
}
 void GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId::_ctor(int32_t lightId, float_t lightIntensity, float_t probeMultiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lightId, lightIntensity, probeMultiplier);
}
//  Writing Method size for method: GlobalNamespace::LightmapLightWithIds.get_intensity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::LightmapLightWithIds::*)()>(&GlobalNamespace::LightmapLightWithIds::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9d1ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            "get_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightmapLightWithIds.set_intensity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapLightWithIds::*)(float_t)>(&GlobalNamespace::LightmapLightWithIds::set_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9d1b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            "set_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightmapLightWithIds.get_normalizerWeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::LightmapLightWithIds::*)()>(&GlobalNamespace::LightmapLightWithIds::get_normalizerWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9d1bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            "get_normalizerWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightmapLightWithIds.set_normalizerWeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapLightWithIds::*)(float_t)>(&GlobalNamespace::LightmapLightWithIds::set_normalizerWeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9d1c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            "set_normalizerWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightmapLightWithIds.get_calculatedColorPreNormalization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::LightmapLightWithIds::*)()>(&GlobalNamespace::LightmapLightWithIds::get_calculatedColorPreNormalization)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1f9d1cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            "get_calculatedColorPreNormalization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightmapLightWithIds.get_bakeId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__LightConstants__BakeId (GlobalNamespace::LightmapLightWithIds::*)()>(&GlobalNamespace::LightmapLightWithIds::get_bakeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9d1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            "get_bakeId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightmapLightWithIds.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapLightWithIds::*)()>(&GlobalNamespace::LightmapLightWithIds::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1f9d1e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LightmapLightWithIds),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightmapLightWithIds.ProcessNewColorData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapLightWithIds::*)()>(&GlobalNamespace::LightmapLightWithIds::ProcessNewColorData)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x1f9d438;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LightmapLightWithIds),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightmapLightWithIds.GetLightWithIds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId> (GlobalNamespace::LightmapLightWithIds::*)()>(&GlobalNamespace::LightmapLightWithIds::GetLightWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f9d7d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::LightmapLightWithIds),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightmapLightWithIds.SetDataToShaders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapLightWithIds::*)(UnityEngine::Color, UnityEngine::Color)>(&GlobalNamespace::LightmapLightWithIds::SetDataToShaders)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1f9d3e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            "SetDataToShaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightmapLightWithIds.SetShaderProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapLightWithIds::*)()>(&GlobalNamespace::LightmapLightWithIds::SetShaderProperties)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1f9d2fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            "SetShaderProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightmapLightWithIds.GetBakedLightsNormalizer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapLightWithIds::*)()>(&GlobalNamespace::LightmapLightWithIds::GetBakedLightsNormalizer)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1f9d270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            "GetBakedLightsNormalizer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightmapLightWithIds._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightmapLightWithIds::*)()>(&GlobalNamespace::LightmapLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1f9d7dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LightmapLightWithIds::__set__bakeId(GlobalNamespace::GlobalNamespace__LightConstants__BakeId value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__LightConstants__BakeId, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__LightConstants__BakeId>(value));
}
constexpr GlobalNamespace::GlobalNamespace__LightConstants__BakeId GlobalNamespace::LightmapLightWithIds::__get__bakeId() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__LightConstants__BakeId, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__intensity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LightmapLightWithIds::__get__intensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__probeIntensity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LightmapLightWithIds::__get__probeIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__lightIntensityData(::ArrayW<GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId> value)  {
::cordl_internals::setInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId>>(value));
}
constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId> GlobalNamespace::LightmapLightWithIds::__get__lightIntensityData() const {
return ::cordl_internals::getInstanceField<::ArrayW<GlobalNamespace::GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__mixType(GlobalNamespace::GlobalNamespace__LightmapLightWithIds__MixType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__LightmapLightWithIds__MixType, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__LightmapLightWithIds__MixType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__LightmapLightWithIds__MixType GlobalNamespace::LightmapLightWithIds::__get__mixType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__LightmapLightWithIds__MixType, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__normalizerWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LightmapLightWithIds::__get__normalizerWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__bakedLightsNormalizer(GlobalNamespace::BakedLightsNormalizer value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BakedLightsNormalizer, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BakedLightsNormalizer>(value));
}
constexpr GlobalNamespace::BakedLightsNormalizer GlobalNamespace::LightmapLightWithIds::__get__bakedLightsNormalizer() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BakedLightsNormalizer, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__lightmapLightIdColorPropertyId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::LightmapLightWithIds::__get__lightmapLightIdColorPropertyId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__lightProbeLightIdColorPropertyId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::LightmapLightWithIds::__get__lightProbeLightIdColorPropertyId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__initializedPropertyIds(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LightmapLightWithIds::__get__initializedPropertyIds() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__initializedNormalizer(bool value)  {
::cordl_internals::setInstanceField<bool, 0x59>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LightmapLightWithIds::__get__initializedNormalizer() const {
return ::cordl_internals::getInstanceField<bool, 0x59>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__isNormalizerInScene(bool value)  {
::cordl_internals::setInstanceField<bool, 0x5a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LightmapLightWithIds::__get__isNormalizerInScene() const {
return ::cordl_internals::getInstanceField<bool, 0x5a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightmapLightWithIds::__set__calculatedColorPreNormalization(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::LightmapLightWithIds::__get__calculatedColorPreNormalization() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t GlobalNamespace::LightmapLightWithIds::get_intensity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            "get_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LightmapLightWithIds::set_intensity(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            "set_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t GlobalNamespace::LightmapLightWithIds::get_normalizerWeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            "get_normalizerWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LightmapLightWithIds::set_normalizerWeight(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            "set_normalizerWeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Color GlobalNamespace::LightmapLightWithIds::get_calculatedColorPreNormalization()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            "get_calculatedColorPreNormalization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__LightConstants__BakeId GlobalNamespace::LightmapLightWithIds::get_bakeId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            "get_bakeId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__LightConstants__BakeId, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LightmapLightWithIds::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LightmapLightWithIds::ProcessNewColorData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            "ProcessNewColorData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId> GlobalNamespace::LightmapLightWithIds::GetLightWithIds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            "GetLightWithIds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId>, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LightmapLightWithIds::SetDataToShaders(UnityEngine::Color lightmapColor, UnityEngine::Color probeColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            "SetDataToShaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lightmapColor, probeColor);
}
 void GlobalNamespace::LightmapLightWithIds::SetShaderProperties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            "SetShaderProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LightmapLightWithIds::GetBakedLightsNormalizer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            "GetBakedLightsNormalizer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::LightmapLightWithIds GlobalNamespace::LightmapLightWithIds::New_ctor()  {
GlobalNamespace::LightmapLightWithIds o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::LightmapLightWithIds>())};
return o;
}
 void GlobalNamespace::LightmapLightWithIds::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightmapLightWithIds>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
