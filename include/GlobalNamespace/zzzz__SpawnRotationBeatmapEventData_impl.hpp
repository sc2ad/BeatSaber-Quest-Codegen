#pragma once
#include "GlobalNamespace/zzzz__BeatmapEventData_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__SpawnRotationBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType  GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType::Early{1};
constexpr GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType  GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType::Late{2};
//  Writing Method size for method: GlobalNamespace::SpawnRotationBeatmapEventData.get_subtypeGroupIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::SpawnRotationBeatmapEventData::*)()>(&GlobalNamespace::SpawnRotationBeatmapEventData::get_subtypeGroupIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd927bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::SpawnRotationBeatmapEventData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationBeatmapEventData>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SpawnRotationBeatmapEventData.get_rotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::SpawnRotationBeatmapEventData::*)()>(&GlobalNamespace::SpawnRotationBeatmapEventData::get_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd927c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationBeatmapEventData>::get(),
                            "get_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SpawnRotationBeatmapEventData.set_rotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationBeatmapEventData::*)(float_t)>(&GlobalNamespace::SpawnRotationBeatmapEventData::set_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xd927cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationBeatmapEventData>::get(),
                            "set_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SpawnRotationBeatmapEventData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationBeatmapEventData::*)(float_t, GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType, float_t)>(&GlobalNamespace::SpawnRotationBeatmapEventData::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xd927d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationBeatmapEventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SpawnRotationBeatmapEventData.Mirror
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationBeatmapEventData::*)()>(&GlobalNamespace::SpawnRotationBeatmapEventData::Mirror)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xd9282c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationBeatmapEventData>::get(),
                            "Mirror",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SpawnRotationBeatmapEventData.GetCopy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapDataItem (GlobalNamespace::SpawnRotationBeatmapEventData::*)()>(&GlobalNamespace::SpawnRotationBeatmapEventData::GetCopy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xd92848;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::SpawnRotationBeatmapEventData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationBeatmapEventData>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SpawnRotationBeatmapEventData.RecalculateRotationFromPreviousEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationBeatmapEventData::*)(GlobalNamespace::SpawnRotationBeatmapEventData)>(&GlobalNamespace::SpawnRotationBeatmapEventData::RecalculateRotationFromPreviousEvent)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xd928e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationBeatmapEventData>::get(),
                            "RecalculateRotationFromPreviousEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SpawnRotationBeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SpawnRotationBeatmapEventData.SetFirstRotationEventRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpawnRotationBeatmapEventData::*)()>(&GlobalNamespace::SpawnRotationBeatmapEventData::SetFirstRotationEventRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xd9290c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationBeatmapEventData>::get(),
                            "SetFirstRotationEventRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SpawnRotationBeatmapEventData.GetDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapEventData (GlobalNamespace::SpawnRotationBeatmapEventData::*)()>(&GlobalNamespace::SpawnRotationBeatmapEventData::GetDefault)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xd92918;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::SpawnRotationBeatmapEventData),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationBeatmapEventData>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SpawnRotationBeatmapEventData::__set__rotation_k__BackingField(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::SpawnRotationBeatmapEventData::__get__rotation_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpawnRotationBeatmapEventData::__set_spawnRotationEventType(GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType GlobalNamespace::SpawnRotationBeatmapEventData::__get_spawnRotationEventType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SpawnRotationBeatmapEventData::__set__deltaRotation(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::SpawnRotationBeatmapEventData::__get__deltaRotation() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::SpawnRotationBeatmapEventData::__set__defaultCopy(GlobalNamespace::BeatmapEventData value)  {
::cordl_internals::setStaticField<GlobalNamespace::BeatmapEventData, "_defaultCopy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationBeatmapEventData>::get>(std::forward<GlobalNamespace::BeatmapEventData>(value));
}
 GlobalNamespace::BeatmapEventData GlobalNamespace::SpawnRotationBeatmapEventData::__get__defaultCopy()  {
return ::cordl_internals::getStaticField<GlobalNamespace::BeatmapEventData, "_defaultCopy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationBeatmapEventData>::get>();
}
 int32_t GlobalNamespace::SpawnRotationBeatmapEventData::get_subtypeGroupIdentifier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationBeatmapEventData>::get(),
                            "get_subtypeGroupIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::SpawnRotationBeatmapEventData::get_rotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationBeatmapEventData>::get(),
                            "get_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SpawnRotationBeatmapEventData::set_rotation(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationBeatmapEventData>::get(),
                            "set_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "spawnRotationEventType", ty: "GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType", modifiers: "", def_value: None }, CppParam { name: "deltaRotation", ty: "float_t", modifiers: "", def_value: None }]
 GlobalNamespace::SpawnRotationBeatmapEventData::SpawnRotationBeatmapEventData(float_t time, GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType spawnRotationEventType, float_t deltaRotation)  : GlobalNamespace::BeatmapEventData(THROW_UNLESS(::il2cpp_utils::New<SpawnRotationBeatmapEventData>(time, spawnRotationEventType, deltaRotation))) {}
 void GlobalNamespace::SpawnRotationBeatmapEventData::_ctor(float_t time, GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType spawnRotationEventType, float_t deltaRotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationBeatmapEventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__SpawnRotationBeatmapEventData__SpawnRotationEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time, spawnRotationEventType, deltaRotation);
}
 void GlobalNamespace::SpawnRotationBeatmapEventData::Mirror()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationBeatmapEventData>::get(),
                            "Mirror",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BeatmapDataItem GlobalNamespace::SpawnRotationBeatmapEventData::GetCopy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationBeatmapEventData>::get(),
                            "GetCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapDataItem, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::SpawnRotationBeatmapEventData::RecalculateRotationFromPreviousEvent(GlobalNamespace::SpawnRotationBeatmapEventData previousSpawnRotationBeatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationBeatmapEventData>::get(),
                            "RecalculateRotationFromPreviousEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SpawnRotationBeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, previousSpawnRotationBeatmapEventData);
}
 void GlobalNamespace::SpawnRotationBeatmapEventData::SetFirstRotationEventRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationBeatmapEventData>::get(),
                            "SetFirstRotationEventRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BeatmapEventData GlobalNamespace::SpawnRotationBeatmapEventData::GetDefault()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SpawnRotationBeatmapEventData>::get(),
                            "GetDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapEventData, false>(const_cast<void*>(instance), ___internal_method);
}
