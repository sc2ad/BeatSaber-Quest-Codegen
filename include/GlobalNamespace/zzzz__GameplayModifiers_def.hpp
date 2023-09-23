#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
struct Nullable_1;
}
namespace LiteNetLib::Utils {
template<typename T>
class INetImmutableSerializable_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__GameplayModifiers__EnabledObstacleType;
}
namespace GlobalNamespace {
struct GlobalNamespace__GameplayModifiers__EnergyType;
}
namespace GlobalNamespace {
struct GlobalNamespace__GameplayModifiers__SongSpeed;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
// Type: ::EnabledObstacleType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15090))
// CS Name: GameplayModifiers::EnabledObstacleType
struct CORDL_TYPE GlobalNamespace__GameplayModifiers__EnabledObstacleType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__GameplayModifiers__EnabledObstacleType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__GameplayModifiers__EnabledObstacleType(GlobalNamespace__GameplayModifiers__EnabledObstacleType const&) = default;
                    constexpr GlobalNamespace__GameplayModifiers__EnabledObstacleType(GlobalNamespace__GameplayModifiers__EnabledObstacleType&&) = default;
                    constexpr GlobalNamespace__GameplayModifiers__EnabledObstacleType& operator=(GlobalNamespace__GameplayModifiers__EnabledObstacleType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__GameplayModifiers__EnabledObstacleType& operator=(GlobalNamespace__GameplayModifiers__EnabledObstacleType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayModifiers__EnabledObstacleType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__GameplayModifiers__EnabledObstacleType_Unwrapped : int32_t {
__All = 0,
__FullHeightOnly = 1,
__NoObstacles = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__GameplayModifiers__EnabledObstacleType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__GameplayModifiers__EnabledObstacleType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field All offset 0
static GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType const All;

/// @brief Field FullHeightOnly offset 0
static GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType const FullHeightOnly;

/// @brief Field NoObstacles offset 0
static GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType const NoObstacles;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EnergyType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15091))
// CS Name: GameplayModifiers::EnergyType
struct CORDL_TYPE GlobalNamespace__GameplayModifiers__EnergyType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__GameplayModifiers__EnergyType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__GameplayModifiers__EnergyType(GlobalNamespace__GameplayModifiers__EnergyType const&) = default;
                    constexpr GlobalNamespace__GameplayModifiers__EnergyType(GlobalNamespace__GameplayModifiers__EnergyType&&) = default;
                    constexpr GlobalNamespace__GameplayModifiers__EnergyType& operator=(GlobalNamespace__GameplayModifiers__EnergyType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__GameplayModifiers__EnergyType& operator=(GlobalNamespace__GameplayModifiers__EnergyType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayModifiers__EnergyType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__GameplayModifiers__EnergyType_Unwrapped : int32_t {
__Bar = 0,
__Battery = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__GameplayModifiers__EnergyType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__GameplayModifiers__EnergyType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Bar offset 0
static GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType const Bar;

/// @brief Field Battery offset 0
static GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType const Battery;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SongSpeed
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15092))
// CS Name: GameplayModifiers::SongSpeed
struct CORDL_TYPE GlobalNamespace__GameplayModifiers__SongSpeed : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__GameplayModifiers__SongSpeed(int32_t value__) noexcept;


                    constexpr GlobalNamespace__GameplayModifiers__SongSpeed(GlobalNamespace__GameplayModifiers__SongSpeed const&) = default;
                    constexpr GlobalNamespace__GameplayModifiers__SongSpeed(GlobalNamespace__GameplayModifiers__SongSpeed&&) = default;
                    constexpr GlobalNamespace__GameplayModifiers__SongSpeed& operator=(GlobalNamespace__GameplayModifiers__SongSpeed const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__GameplayModifiers__SongSpeed& operator=(GlobalNamespace__GameplayModifiers__SongSpeed&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayModifiers__SongSpeed(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__GameplayModifiers__SongSpeed_Unwrapped : int32_t {
__Normal = 0,
__Faster = 1,
__Slower = 2,
__SuperFast = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__GameplayModifiers__SongSpeed_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__GameplayModifiers__SongSpeed_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed const Normal;

/// @brief Field Faster offset 0
static GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed const Faster;

/// @brief Field Slower offset 0
static GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed const Slower;

/// @brief Field SuperFast offset 0
static GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed const SuperFast;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameplayModifiers
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15093))
// CS Name: GameplayModifiers
class CORDL_TYPE GameplayModifiers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SongSpeed = GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed;

using EnergyType = GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType;

using EnabledObstacleType = GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType;

/// @brief Convert operator to LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayModifiers>
constexpr operator  LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayModifiers>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GameplayModifiers() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifiers", modifiers: " const&", def_value: None }]
constexpr GameplayModifiers(GameplayModifiers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifiers", modifiers: "&&", def_value: None }]
constexpr GameplayModifiers(GameplayModifiers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameplayModifiers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GameplayModifiers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameplayModifiers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameplayModifiers& operator=(GameplayModifiers&& o) noexcept = default;
  constexpr GameplayModifiers& operator=(GameplayModifiers const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType __declspec(property(get=__get__energyType, put=__set__energyType))  _energyType;

constexpr void __set__energyType(GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType value) ;

constexpr GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType __get__energyType() const;

 bool __declspec(property(get=__get__noFailOn0Energy, put=__set__noFailOn0Energy))  _noFailOn0Energy;

constexpr void __set__noFailOn0Energy(bool value) ;

constexpr bool __get__noFailOn0Energy() const;

 bool __declspec(property(get=__get__instaFail, put=__set__instaFail))  _instaFail;

constexpr void __set__instaFail(bool value) ;

constexpr bool __get__instaFail() const;

 bool __declspec(property(get=__get__failOnSaberClash, put=__set__failOnSaberClash))  _failOnSaberClash;

constexpr void __set__failOnSaberClash(bool value) ;

constexpr bool __get__failOnSaberClash() const;

 GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType __declspec(property(get=__get__enabledObstacleType, put=__set__enabledObstacleType))  _enabledObstacleType;

constexpr void __set__enabledObstacleType(GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType value) ;

constexpr GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType __get__enabledObstacleType() const;

 bool __declspec(property(get=__get__fastNotes, put=__set__fastNotes))  _fastNotes;

constexpr void __set__fastNotes(bool value) ;

constexpr bool __get__fastNotes() const;

 bool __declspec(property(get=__get__strictAngles, put=__set__strictAngles))  _strictAngles;

constexpr void __set__strictAngles(bool value) ;

constexpr bool __get__strictAngles() const;

 bool __declspec(property(get=__get__disappearingArrows, put=__set__disappearingArrows))  _disappearingArrows;

constexpr void __set__disappearingArrows(bool value) ;

constexpr bool __get__disappearingArrows() const;

 bool __declspec(property(get=__get__ghostNotes, put=__set__ghostNotes))  _ghostNotes;

constexpr void __set__ghostNotes(bool value) ;

constexpr bool __get__ghostNotes() const;

 bool __declspec(property(get=__get__noBombs, put=__set__noBombs))  _noBombs;

constexpr void __set__noBombs(bool value) ;

constexpr bool __get__noBombs() const;

 GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed __declspec(property(get=__get__songSpeed, put=__set__songSpeed))  _songSpeed;

constexpr void __set__songSpeed(GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed value) ;

constexpr GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed __get__songSpeed() const;

 bool __declspec(property(get=__get__noArrows, put=__set__noArrows))  _noArrows;

constexpr void __set__noArrows(bool value) ;

constexpr bool __get__noArrows() const;

 bool __declspec(property(get=__get__proMode, put=__set__proMode))  _proMode;

constexpr void __set__proMode(bool value) ;

constexpr bool __get__proMode() const;

 bool __declspec(property(get=__get__zenMode, put=__set__zenMode))  _zenMode;

constexpr void __set__zenMode(bool value) ;

constexpr bool __get__zenMode() const;

 bool __declspec(property(get=__get__smallCubes, put=__set__smallCubes))  _smallCubes;

constexpr void __set__smallCubes(bool value) ;

constexpr bool __get__smallCubes() const;

static GlobalNamespace::GameplayModifiers __declspec(property(get=__get_noModifiers, put=__set_noModifiers))  noModifiers;

static void __set_noModifiers(GlobalNamespace::GameplayModifiers value) ;

static GlobalNamespace::GameplayModifiers __get_noModifiers() ;


// Properties

 GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType __declspec(property(get=get_energyType))  energyType;

 bool __declspec(property(get=get_noFailOn0Energy))  noFailOn0Energy;

 bool __declspec(property(get=get_instaFail))  instaFail;

 bool __declspec(property(get=get_failOnSaberClash))  failOnSaberClash;

 GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType __declspec(property(get=get_enabledObstacleType))  enabledObstacleType;

 bool __declspec(property(get=get_fastNotes))  fastNotes;

 bool __declspec(property(get=get_strictAngles))  strictAngles;

 bool __declspec(property(get=get_disappearingArrows))  disappearingArrows;

 bool __declspec(property(get=get_ghostNotes))  ghostNotes;

 bool __declspec(property(get=get_noBombs))  noBombs;

 GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed __declspec(property(get=get_songSpeed))  songSpeed;

 bool __declspec(property(get=get_noArrows))  noArrows;

 bool __declspec(property(get=get_proMode))  proMode;

 bool __declspec(property(get=get_zenMode))  zenMode;

 bool __declspec(property(get=get_smallCubes))  smallCubes;

 float_t __declspec(property(get=get_songSpeedMul))  songSpeedMul;

 float_t __declspec(property(get=get_cutAngleTolerance))  cutAngleTolerance;

 float_t __declspec(property(get=get_notesUniformScale))  notesUniformScale;


// Methods

/// @brief Method get_energyType addr 0x12152fc size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType get_energyType() ;

/// @brief Method get_noFailOn0Energy addr 0x1215304 size 0x8 virtual false final false
 bool get_noFailOn0Energy() ;

/// @brief Method get_instaFail addr 0x121530c size 0x8 virtual false final false
 bool get_instaFail() ;

/// @brief Method get_failOnSaberClash addr 0x1215314 size 0x8 virtual false final false
 bool get_failOnSaberClash() ;

/// @brief Method get_enabledObstacleType addr 0x121531c size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType get_enabledObstacleType() ;

/// @brief Method get_fastNotes addr 0x1215324 size 0x8 virtual false final false
 bool get_fastNotes() ;

/// @brief Method get_strictAngles addr 0x121532c size 0x8 virtual false final false
 bool get_strictAngles() ;

/// @brief Method get_disappearingArrows addr 0x1215334 size 0x8 virtual false final false
 bool get_disappearingArrows() ;

/// @brief Method get_ghostNotes addr 0x121533c size 0x8 virtual false final false
 bool get_ghostNotes() ;

/// @brief Method get_noBombs addr 0x1215344 size 0x8 virtual false final false
 bool get_noBombs() ;

/// @brief Method get_songSpeed addr 0x121534c size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed get_songSpeed() ;

/// @brief Method get_noArrows addr 0x1215354 size 0x8 virtual false final false
 bool get_noArrows() ;

/// @brief Method get_proMode addr 0x121535c size 0x8 virtual false final false
 bool get_proMode() ;

/// @brief Method get_zenMode addr 0x1215364 size 0x8 virtual false final false
 bool get_zenMode() ;

/// @brief Method get_smallCubes addr 0x121536c size 0x8 virtual false final false
 bool get_smallCubes() ;

/// @brief Method get_songSpeedMul addr 0x1215374 size 0x24 virtual false final false
 float_t get_songSpeedMul() ;

/// @brief Method get_cutAngleTolerance addr 0x1215398 size 0x20 virtual false final false
 float_t get_cutAngleTolerance() ;

/// @brief Method get_notesUniformScale addr 0x12153b8 size 0x18 virtual false final false
 float_t get_notesUniformScale() ;

// Ctor Parameters []
explicit GameplayModifiers() ;

/// @brief Method .ctor addr 0x12153d0 size 0x2c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "energyType", ty: "GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType", modifiers: "", def_value: None }, CppParam { name: "noFailOn0Energy", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "instaFail", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "failOnSaberClash", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "enabledObstacleType", ty: "GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType", modifiers: "", def_value: None }, CppParam { name: "noBombs", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fastNotes", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "strictAngles", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "disappearingArrows", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "songSpeed", ty: "GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed", modifiers: "", def_value: None }, CppParam { name: "noArrows", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ghostNotes", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "proMode", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "zenMode", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "smallCubes", ty: "bool", modifiers: "", def_value: None }]
explicit GameplayModifiers(GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType energyType, bool noFailOn0Energy, bool instaFail, bool failOnSaberClash, GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType enabledObstacleType, bool noBombs, bool fastNotes, bool strictAngles, bool disappearingArrows, GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed songSpeed, bool noArrows, bool ghostNotes, bool proMode, bool zenMode, bool smallCubes) ;

/// @brief Method .ctor addr 0x1215150 size 0xf4 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType energyType, bool noFailOn0Energy, bool instaFail, bool failOnSaberClash, GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType enabledObstacleType, bool noBombs, bool fastNotes, bool strictAngles, bool disappearingArrows, GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed songSpeed, bool noArrows, bool ghostNotes, bool proMode, bool zenMode, bool smallCubes) ;

/// @brief Method CopyWith addr 0x12153fc size 0x32c virtual false final false
 GlobalNamespace::GameplayModifiers CopyWith(System::Nullable_1<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType> energyType, System::Nullable_1<bool> noFailOn0Energy, System::Nullable_1<bool> instaFail, System::Nullable_1<bool> failOnSaberClash, System::Nullable_1<GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType> enabledObstacleType, System::Nullable_1<bool> noBombs, System::Nullable_1<bool> fastNotes, System::Nullable_1<bool> strictAngles, System::Nullable_1<bool> disappearingArrows, System::Nullable_1<GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed> songSpeed, System::Nullable_1<bool> noArrows, System::Nullable_1<bool> ghostNotes, System::Nullable_1<bool> proMode, System::Nullable_1<bool> zenMode, System::Nullable_1<bool> smallCubes) ;

/// @brief Method IsWithoutModifiers addr 0x1215728 size 0x88 virtual false final false
 bool IsWithoutModifiers() ;

/// @brief Method Serialize addr 0x12157b0 size 0xa0 virtual true final true
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method LiteNetLib.Utils.INetImmutableSerializable<GameplayModifiers>.CreateFromSerializedData addr 0x1215850 size 0x54 virtual true final true
 GlobalNamespace::GameplayModifiers LiteNetLib_Utils_INetImmutableSerializable_GameplayModifiers__CreateFromSerializedData(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method CreateFromSerializedData addr 0x12158a4 size 0x144 virtual false final false
static GlobalNamespace::GameplayModifiers CreateFromSerializedData(LiteNetLib::Utils::NetDataReader reader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayModifiers__EnabledObstacleType, "", "GameplayModifiers/EnabledObstacleType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType, "", "GameplayModifiers/EnergyType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed, "", "GameplayModifiers/SongSpeed");
NEED_NO_BOX(GlobalNamespace::GameplayModifiers);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiers, "", "GameplayModifiers");
