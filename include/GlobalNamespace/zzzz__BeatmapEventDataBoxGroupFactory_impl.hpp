#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupFactory_def.hpp"
#include "GlobalNamespace/zzzz__DefaultEnvironmentEvents_def.hpp"
#include "GlobalNamespace/zzzz__DefaultEnvironmentEvents_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroup_def.hpp"
// Ctor Parameters [CppParam { name: "numberOfElements", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0::GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0(int32_t numberOfElements) noexcept : ::bs_hook::ValueTypeWrapper() {this->numberOfElements = numberOfElements;
}
constexpr void GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0::__set_numberOfElements(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0::__get_numberOfElements() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
//  Writing Method size for method: GlobalNamespace::BeatmapEventDataBoxGroupFactory.CreateExtendColorBeatmapEventDataBoxGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapEventDataBoxGroup (*)(float_t, int32_t)>(&GlobalNamespace::BeatmapEventDataBoxGroupFactory::CreateExtendColorBeatmapEventDataBoxGroup)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x21db6dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBoxGroupFactory>::get(),
                            "CreateExtendColorBeatmapEventDataBoxGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapEventDataBoxGroupFactory.CreateExtendRotationBeatmapEventDataBoxGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapEventDataBoxGroup (*)(float_t, int32_t)>(&GlobalNamespace::BeatmapEventDataBoxGroupFactory::CreateExtendRotationBeatmapEventDataBoxGroup)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x21db9b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBoxGroupFactory>::get(),
                            "CreateExtendRotationBeatmapEventDataBoxGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapEventDataBoxGroupFactory.CreateSingleLightBeatmapEventDataBoxGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapEventDataBoxGroup (*)(float_t, int32_t, GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent)>(&GlobalNamespace::BeatmapEventDataBoxGroupFactory::CreateSingleLightBeatmapEventDataBoxGroup)> {
  constexpr static std::size_t size = 0x828;
  constexpr static std::size_t addrs = 0x21d995c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBoxGroupFactory>::get(),
                            "CreateSingleLightBeatmapEventDataBoxGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BeatmapEventDataBoxGroupFactory._CreateSingleLightBeatmapEventDataBoxGroup_g__CreateIndexFilter_2_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IndexFilter (*)(GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering, ByRef<GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0>)>(&GlobalNamespace::BeatmapEventDataBoxGroupFactory::_CreateSingleLightBeatmapEventDataBoxGroup_g__CreateIndexFilter_2_0)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x21dbcc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBoxGroupFactory>::get(),
                            "<CreateSingleLightBeatmapEventDataBoxGroup>g__CreateIndexFilter|2_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0>>::get()}
                        )));
    return ___internal_method;
  }
};
 GlobalNamespace::BeatmapEventDataBoxGroup GlobalNamespace::BeatmapEventDataBoxGroupFactory::CreateExtendColorBeatmapEventDataBoxGroup(float_t beat, int32_t numberOfElements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBoxGroupFactory>::get(),
                            "CreateExtendColorBeatmapEventDataBoxGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapEventDataBoxGroup, false>(nullptr, ___internal_method, beat, numberOfElements);
}
 GlobalNamespace::BeatmapEventDataBoxGroup GlobalNamespace::BeatmapEventDataBoxGroupFactory::CreateExtendRotationBeatmapEventDataBoxGroup(float_t beat, int32_t numberOfElements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBoxGroupFactory>::get(),
                            "CreateExtendRotationBeatmapEventDataBoxGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapEventDataBoxGroup, false>(nullptr, ___internal_method, beat, numberOfElements);
}
 GlobalNamespace::BeatmapEventDataBoxGroup GlobalNamespace::BeatmapEventDataBoxGroupFactory::CreateSingleLightBeatmapEventDataBoxGroup(float_t beat, int32_t numberOfElements, GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent lightGroupEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBoxGroupFactory>::get(),
                            "CreateSingleLightBeatmapEventDataBoxGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapEventDataBoxGroup, false>(nullptr, ___internal_method, beat, numberOfElements, lightGroupEvent);
}
 GlobalNamespace::IndexFilter GlobalNamespace::BeatmapEventDataBoxGroupFactory::_CreateSingleLightBeatmapEventDataBoxGroup_g__CreateIndexFilter_2_0(GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering filtering, ByRef<GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0> )  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BeatmapEventDataBoxGroupFactory>::get(),
                            "<CreateSingleLightBeatmapEventDataBoxGroup>g__CreateIndexFilter|2_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__DefaultEnvironmentEvents__LightGroupFiltering>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<GlobalNamespace::GlobalNamespace__BeatmapEventDataBoxGroupFactory____c__DisplayClass2_0>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::IndexFilter, false>(nullptr, ___internal_method, filtering, );
}
