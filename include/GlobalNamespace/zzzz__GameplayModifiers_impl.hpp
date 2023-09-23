#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType::GlobalNamespace__GameplayModifiers__EnabledObstacleType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType  GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType::All{0};
constexpr GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType  GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType::FullHeightOnly{1};
constexpr GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType  GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType::NoObstacles{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType::GlobalNamespace__GameplayModifiers__EnergyType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType  GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType::Bar{0};
constexpr GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType  GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType::Battery{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed::GlobalNamespace__GameplayModifiers__SongSpeed(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed  GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed::Normal{0};
constexpr GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed  GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed::Faster{1};
constexpr GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed  GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed::Slower{2};
constexpr GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed  GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed::SuperFast{3};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.get_energyType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_energyType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12152fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_energyType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.get_noFailOn0Energy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_noFailOn0Energy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1215304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_noFailOn0Energy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.get_instaFail
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_instaFail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x121530c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_instaFail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.get_failOnSaberClash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_failOnSaberClash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1215314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_failOnSaberClash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.get_enabledObstacleType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_enabledObstacleType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x121531c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_enabledObstacleType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.get_fastNotes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_fastNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1215324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_fastNotes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.get_strictAngles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_strictAngles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x121532c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_strictAngles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.get_disappearingArrows
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_disappearingArrows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1215334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_disappearingArrows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.get_ghostNotes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_ghostNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x121533c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_ghostNotes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.get_noBombs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_noBombs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1215344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_noBombs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.get_songSpeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_songSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x121534c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_songSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.get_noArrows
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_noArrows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1215354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_noArrows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.get_proMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_proMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x121535c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_proMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.get_zenMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_zenMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1215364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_zenMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.get_smallCubes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_smallCubes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x121536c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_smallCubes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.get_songSpeedMul
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_songSpeedMul)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1215374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_songSpeedMul",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.get_cutAngleTolerance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_cutAngleTolerance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1215398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_cutAngleTolerance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.get_notesUniformScale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::get_notesUniformScale)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x12153b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_notesUniformScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x12153d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiers::*)(GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType, bool, bool, bool, GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType, bool, bool, bool, bool, GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed, bool, bool, bool, bool, bool)>(&GlobalNamespace::GameplayModifiers::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x1215150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.CopyWith
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers (GlobalNamespace::GameplayModifiers::*)(System::Nullable_1<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType>, System::Nullable_1<bool>, System::Nullable_1<bool>, System::Nullable_1<bool>, System::Nullable_1<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType>, System::Nullable_1<bool>, System::Nullable_1<bool>, System::Nullable_1<bool>, System::Nullable_1<bool>, System::Nullable_1<GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed>, System::Nullable_1<bool>, System::Nullable_1<bool>, System::Nullable_1<bool>, System::Nullable_1<bool>, System::Nullable_1<bool>)>(&GlobalNamespace::GameplayModifiers::CopyWith)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x12153fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "CopyWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.IsWithoutModifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameplayModifiers::*)()>(&GlobalNamespace::GameplayModifiers::IsWithoutModifiers)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1215728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "IsWithoutModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifiers::*)(LiteNetLib::Utils::NetDataWriter)>(&GlobalNamespace::GameplayModifiers::Serialize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x12157b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.LiteNetLib_Utils_INetImmutableSerializable_GameplayModifiers__CreateFromSerializedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers (GlobalNamespace::GameplayModifiers::*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GameplayModifiers::LiteNetLib_Utils_INetImmutableSerializable_GameplayModifiers__CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1215850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "LiteNetLib.Utils.INetImmutableSerializable<GameplayModifiers>.CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GameplayModifiers.CreateFromSerializedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers (*)(LiteNetLib::Utils::NetDataReader)>(&GlobalNamespace::GameplayModifiers::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x12158a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayModifiers>
constexpr  GlobalNamespace::GameplayModifiers::operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayModifiers>() const noexcept {
return LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayModifiers>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiers::__set__energyType(GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType GlobalNamespace::GameplayModifiers::__get__energyType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiers::__set__noFailOn0Energy(bool value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameplayModifiers::__get__noFailOn0Energy() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiers::__set__instaFail(bool value)  {
::cordl_internals::setInstanceField<bool, 0x15>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameplayModifiers::__get__instaFail() const {
return ::cordl_internals::getInstanceField<bool, 0x15>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiers::__set__failOnSaberClash(bool value)  {
::cordl_internals::setInstanceField<bool, 0x16>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameplayModifiers::__get__failOnSaberClash() const {
return ::cordl_internals::getInstanceField<bool, 0x16>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiers::__set__enabledObstacleType(GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType GlobalNamespace::GameplayModifiers::__get__enabledObstacleType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiers::__set__fastNotes(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameplayModifiers::__get__fastNotes() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiers::__set__strictAngles(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameplayModifiers::__get__strictAngles() const {
return ::cordl_internals::getInstanceField<bool, 0x1d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiers::__set__disappearingArrows(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1e>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameplayModifiers::__get__disappearingArrows() const {
return ::cordl_internals::getInstanceField<bool, 0x1e>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiers::__set__ghostNotes(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1f>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameplayModifiers::__get__ghostNotes() const {
return ::cordl_internals::getInstanceField<bool, 0x1f>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiers::__set__noBombs(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameplayModifiers::__get__noBombs() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiers::__set__songSpeed(GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed>(value));
}
constexpr GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed GlobalNamespace::GameplayModifiers::__get__songSpeed() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiers::__set__noArrows(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameplayModifiers::__get__noArrows() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiers::__set__proMode(bool value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameplayModifiers::__get__proMode() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiers::__set__zenMode(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameplayModifiers::__get__zenMode() const {
return ::cordl_internals::getInstanceField<bool, 0x2a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GameplayModifiers::__set__smallCubes(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2b>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GameplayModifiers::__get__smallCubes() const {
return ::cordl_internals::getInstanceField<bool, 0x2b>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::GameplayModifiers::__set_noModifiers(GlobalNamespace::GameplayModifiers value)  {
::cordl_internals::setStaticField<GlobalNamespace::GameplayModifiers, "noModifiers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get>(std::forward<GlobalNamespace::GameplayModifiers>(value));
}
 GlobalNamespace::GameplayModifiers GlobalNamespace::GameplayModifiers::__get_noModifiers()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GameplayModifiers, "noModifiers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get>();
}
 GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType GlobalNamespace::GameplayModifiers::get_energyType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_energyType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GameplayModifiers::get_noFailOn0Energy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_noFailOn0Energy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GameplayModifiers::get_instaFail()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_instaFail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GameplayModifiers::get_failOnSaberClash()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_failOnSaberClash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType GlobalNamespace::GameplayModifiers::get_enabledObstacleType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_enabledObstacleType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GameplayModifiers::get_fastNotes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_fastNotes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GameplayModifiers::get_strictAngles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_strictAngles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GameplayModifiers::get_disappearingArrows()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_disappearingArrows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GameplayModifiers::get_ghostNotes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_ghostNotes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GameplayModifiers::get_noBombs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_noBombs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed GlobalNamespace::GameplayModifiers::get_songSpeed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_songSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GameplayModifiers::get_noArrows()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_noArrows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GameplayModifiers::get_proMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_proMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GameplayModifiers::get_zenMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_zenMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GameplayModifiers::get_smallCubes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_smallCubes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GameplayModifiers::get_songSpeedMul()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_songSpeedMul",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GameplayModifiers::get_cutAngleTolerance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_cutAngleTolerance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::GameplayModifiers::get_notesUniformScale()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "get_notesUniformScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::GameplayModifiers::GameplayModifiers()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GameplayModifiers>())) {}
 void GlobalNamespace::GameplayModifiers::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "energyType", ty: "GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType", modifiers: "", def_value: None }, CppParam { name: "noFailOn0Energy", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "instaFail", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "failOnSaberClash", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "enabledObstacleType", ty: "GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType", modifiers: "", def_value: None }, CppParam { name: "noBombs", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fastNotes", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "strictAngles", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "disappearingArrows", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "songSpeed", ty: "GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed", modifiers: "", def_value: None }, CppParam { name: "noArrows", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ghostNotes", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "proMode", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "zenMode", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "smallCubes", ty: "bool", modifiers: "", def_value: None }]
 GlobalNamespace::GameplayModifiers::GameplayModifiers(GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType energyType, bool noFailOn0Energy, bool instaFail, bool failOnSaberClash, GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType enabledObstacleType, bool noBombs, bool fastNotes, bool strictAngles, bool disappearingArrows, GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed songSpeed, bool noArrows, bool ghostNotes, bool proMode, bool zenMode, bool smallCubes)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GameplayModifiers>(energyType, noFailOn0Energy, instaFail, failOnSaberClash, enabledObstacleType, noBombs, fastNotes, strictAngles, disappearingArrows, songSpeed, noArrows, ghostNotes, proMode, zenMode, smallCubes))) {}
 void GlobalNamespace::GameplayModifiers::_ctor(GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType energyType, bool noFailOn0Energy, bool instaFail, bool failOnSaberClash, GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType enabledObstacleType, bool noBombs, bool fastNotes, bool strictAngles, bool disappearingArrows, GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed songSpeed, bool noArrows, bool ghostNotes, bool proMode, bool zenMode, bool smallCubes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, energyType, noFailOn0Energy, instaFail, failOnSaberClash, enabledObstacleType, noBombs, fastNotes, strictAngles, disappearingArrows, songSpeed, noArrows, ghostNotes, proMode, zenMode, smallCubes);
}
/// @param energyType: System::Nullable_1<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType> (default: {})
/// @param noFailOn0Energy: System::Nullable_1<bool> (default: {})
/// @param instaFail: System::Nullable_1<bool> (default: {})
/// @param failOnSaberClash: System::Nullable_1<bool> (default: {})
/// @param enabledObstacleType: System::Nullable_1<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType> (default: {})
/// @param noBombs: System::Nullable_1<bool> (default: {})
/// @param fastNotes: System::Nullable_1<bool> (default: {})
/// @param strictAngles: System::Nullable_1<bool> (default: {})
/// @param disappearingArrows: System::Nullable_1<bool> (default: {})
/// @param songSpeed: System::Nullable_1<GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed> (default: {})
/// @param noArrows: System::Nullable_1<bool> (default: {})
/// @param ghostNotes: System::Nullable_1<bool> (default: {})
/// @param proMode: System::Nullable_1<bool> (default: {})
/// @param zenMode: System::Nullable_1<bool> (default: {})
/// @param smallCubes: System::Nullable_1<bool> (default: {})
 GlobalNamespace::GameplayModifiers GlobalNamespace::GameplayModifiers::CopyWith(System::Nullable_1<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType> energyType, System::Nullable_1<bool> noFailOn0Energy, System::Nullable_1<bool> instaFail, System::Nullable_1<bool> failOnSaberClash, System::Nullable_1<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType> enabledObstacleType, System::Nullable_1<bool> noBombs, System::Nullable_1<bool> fastNotes, System::Nullable_1<bool> strictAngles, System::Nullable_1<bool> disappearingArrows, System::Nullable_1<GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed> songSpeed, System::Nullable_1<bool> noArrows, System::Nullable_1<bool> ghostNotes, System::Nullable_1<bool> proMode, System::Nullable_1<bool> zenMode, System::Nullable_1<bool> smallCubes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "CopyWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Nullable_1<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GameplayModifiers, false>(const_cast<void*>(instance), ___internal_method, energyType, noFailOn0Energy, instaFail, failOnSaberClash, enabledObstacleType, noBombs, fastNotes, strictAngles, disappearingArrows, songSpeed, noArrows, ghostNotes, proMode, zenMode, smallCubes);
}
 bool GlobalNamespace::GameplayModifiers::IsWithoutModifiers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "IsWithoutModifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GameplayModifiers::Serialize(LiteNetLib::Utils::NetDataWriter writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataWriter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, writer);
}
 GlobalNamespace::GameplayModifiers GlobalNamespace::GameplayModifiers::LiteNetLib_Utils_INetImmutableSerializable_GameplayModifiers__CreateFromSerializedData(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "LiteNetLib.Utils.INetImmutableSerializable<GameplayModifiers>.CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GameplayModifiers, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 GlobalNamespace::GameplayModifiers GlobalNamespace::GameplayModifiers::CreateFromSerializedData(LiteNetLib::Utils::NetDataReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GameplayModifiers>::get(),
                            "CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<LiteNetLib::Utils::NetDataReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GameplayModifiers, false>(nullptr, ___internal_method, reader);
}
