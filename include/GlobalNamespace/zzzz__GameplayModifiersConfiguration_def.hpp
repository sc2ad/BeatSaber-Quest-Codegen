#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifiersConfiguration;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayModifiersConfiguration__CutAngleTolerance;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayModifiersConfiguration__NoteUniformScale;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayModifiersConfiguration__SongSpeed;
}
// Type: ::SongSpeed
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15094))
// CS Name: GameplayModifiersConfiguration::SongSpeed
class CORDL_TYPE GlobalNamespace__GameplayModifiersConfiguration__SongSpeed : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__GameplayModifiersConfiguration__SongSpeed() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayModifiersConfiguration__SongSpeed", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplayModifiersConfiguration__SongSpeed(GlobalNamespace__GameplayModifiersConfiguration__SongSpeed const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayModifiersConfiguration__SongSpeed", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplayModifiersConfiguration__SongSpeed(GlobalNamespace__GameplayModifiersConfiguration__SongSpeed&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayModifiersConfiguration__SongSpeed(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameplayModifiersConfiguration__SongSpeed& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplayModifiersConfiguration__SongSpeed& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplayModifiersConfiguration__SongSpeed& operator=(GlobalNamespace__GameplayModifiersConfiguration__SongSpeed&& o) noexcept = default;
  constexpr GlobalNamespace__GameplayModifiersConfiguration__SongSpeed& operator=(GlobalNamespace__GameplayModifiersConfiguration__SongSpeed const& o) noexcept = default;
                


// Fields

/// @brief Field kSlower offset 0
static constexpr float_t  kSlower{0.85};

/// @brief Field kNormal offset 0
static constexpr float_t  kNormal{1};

/// @brief Field kFaster offset 0
static constexpr float_t  kFaster{1.2};

/// @brief Field kSuperFast offset 0
static constexpr float_t  kSuperFast{1.5};

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CutAngleTolerance
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15095))
// CS Name: GameplayModifiersConfiguration::CutAngleTolerance
class CORDL_TYPE GlobalNamespace__GameplayModifiersConfiguration__CutAngleTolerance : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__GameplayModifiersConfiguration__CutAngleTolerance() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayModifiersConfiguration__CutAngleTolerance", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplayModifiersConfiguration__CutAngleTolerance(GlobalNamespace__GameplayModifiersConfiguration__CutAngleTolerance const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayModifiersConfiguration__CutAngleTolerance", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplayModifiersConfiguration__CutAngleTolerance(GlobalNamespace__GameplayModifiersConfiguration__CutAngleTolerance&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayModifiersConfiguration__CutAngleTolerance(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameplayModifiersConfiguration__CutAngleTolerance& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplayModifiersConfiguration__CutAngleTolerance& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplayModifiersConfiguration__CutAngleTolerance& operator=(GlobalNamespace__GameplayModifiersConfiguration__CutAngleTolerance&& o) noexcept = default;
  constexpr GlobalNamespace__GameplayModifiersConfiguration__CutAngleTolerance& operator=(GlobalNamespace__GameplayModifiersConfiguration__CutAngleTolerance const& o) noexcept = default;
                


// Fields

/// @brief Field kDefault offset 0
static constexpr float_t  kDefault{60};

/// @brief Field kStrict offset 0
static constexpr float_t  kStrict{40};

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NoteUniformScale
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15096))
// CS Name: GameplayModifiersConfiguration::NoteUniformScale
class CORDL_TYPE GlobalNamespace__GameplayModifiersConfiguration__NoteUniformScale : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__GameplayModifiersConfiguration__NoteUniformScale() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayModifiersConfiguration__NoteUniformScale", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplayModifiersConfiguration__NoteUniformScale(GlobalNamespace__GameplayModifiersConfiguration__NoteUniformScale const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayModifiersConfiguration__NoteUniformScale", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplayModifiersConfiguration__NoteUniformScale(GlobalNamespace__GameplayModifiersConfiguration__NoteUniformScale&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayModifiersConfiguration__NoteUniformScale(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameplayModifiersConfiguration__NoteUniformScale& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplayModifiersConfiguration__NoteUniformScale& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplayModifiersConfiguration__NoteUniformScale& operator=(GlobalNamespace__GameplayModifiersConfiguration__NoteUniformScale&& o) noexcept = default;
  constexpr GlobalNamespace__GameplayModifiersConfiguration__NoteUniformScale& operator=(GlobalNamespace__GameplayModifiersConfiguration__NoteUniformScale const& o) noexcept = default;
                


// Fields

/// @brief Field kDefault offset 0
static constexpr float_t  kDefault{1};

/// @brief Field kSmall offset 0
static constexpr float_t  kSmall{0.5};

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameplayModifiersConfiguration
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15097))
// CS Name: GameplayModifiersConfiguration
class CORDL_TYPE GameplayModifiersConfiguration : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using NoteUniformScale = GlobalNamespace::GlobalNamespace__GameplayModifiersConfiguration__NoteUniformScale;

using CutAngleTolerance = GlobalNamespace::GlobalNamespace__GameplayModifiersConfiguration__CutAngleTolerance;

using SongSpeed = GlobalNamespace::GlobalNamespace__GameplayModifiersConfiguration__SongSpeed;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GameplayModifiersConfiguration() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersConfiguration", modifiers: " const&", def_value: None }]
constexpr GameplayModifiersConfiguration(GameplayModifiersConfiguration const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersConfiguration", modifiers: "&&", def_value: None }]
constexpr GameplayModifiersConfiguration(GameplayModifiersConfiguration&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameplayModifiersConfiguration(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GameplayModifiersConfiguration& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameplayModifiersConfiguration& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameplayModifiersConfiguration& operator=(GameplayModifiersConfiguration&& o) noexcept = default;
  constexpr GameplayModifiersConfiguration& operator=(GameplayModifiersConfiguration const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameplayModifiersConfiguration);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiersConfiguration, "", "GameplayModifiersConfiguration");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplayModifiersConfiguration__CutAngleTolerance);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayModifiersConfiguration__CutAngleTolerance, "", "GameplayModifiersConfiguration/CutAngleTolerance");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplayModifiersConfiguration__NoteUniformScale);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayModifiersConfiguration__NoteUniformScale, "", "GameplayModifiersConfiguration/NoteUniformScale");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplayModifiersConfiguration__SongSpeed);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayModifiersConfiguration__SongSpeed, "", "GameplayModifiersConfiguration/SongSpeed");
