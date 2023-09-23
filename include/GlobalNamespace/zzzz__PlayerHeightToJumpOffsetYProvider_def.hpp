#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace GlobalNamespace {
class IJumpOffsetYProvider;
}
namespace Zenject {
class IInitializable;
}
namespace GlobalNamespace {
class PlayerHeightDetector;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerHeightToJumpOffsetYProvider;
}
// Type: ::PlayerHeightToJumpOffsetYProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5371))
// CS Name: PlayerHeightToJumpOffsetYProvider
class CORDL_TYPE PlayerHeightToJumpOffsetYProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IJumpOffsetYProvider
constexpr operator  GlobalNamespace::IJumpOffsetYProvider() const noexcept;

/// @brief Convert operator to Zenject::IInitializable
constexpr operator  Zenject::IInitializable() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PlayerHeightToJumpOffsetYProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerHeightToJumpOffsetYProvider", modifiers: " const&", def_value: None }]
constexpr PlayerHeightToJumpOffsetYProvider(PlayerHeightToJumpOffsetYProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerHeightToJumpOffsetYProvider", modifiers: "&&", def_value: None }]
constexpr PlayerHeightToJumpOffsetYProvider(PlayerHeightToJumpOffsetYProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerHeightToJumpOffsetYProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayerHeightToJumpOffsetYProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerHeightToJumpOffsetYProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerHeightToJumpOffsetYProvider& operator=(PlayerHeightToJumpOffsetYProvider&& o) noexcept = default;
  constexpr PlayerHeightToJumpOffsetYProvider& operator=(PlayerHeightToJumpOffsetYProvider const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PlayerHeightDetector __declspec(property(get=__get__playerHeightDetector, put=__set__playerHeightDetector))  _playerHeightDetector;

constexpr void __set__playerHeightDetector(GlobalNamespace::PlayerHeightDetector value) ;

constexpr GlobalNamespace::PlayerHeightDetector __get__playerHeightDetector() const;

 float_t __declspec(property(get=__get__jumpOffsetY, put=__set__jumpOffsetY))  _jumpOffsetY;

constexpr void __set__jumpOffsetY(float_t value) ;

constexpr float_t __get__jumpOffsetY() const;


// Properties

 float_t __declspec(property(get=get_jumpOffsetY))  jumpOffsetY;


// Methods

/// @brief Method get_jumpOffsetY addr 0x2109868 size 0x8 virtual true final true
 float_t get_jumpOffsetY() ;

/// @brief Method Initialize addr 0x2109870 size 0xf8 virtual true final true
 void Initialize() ;

/// @brief Method Dispose addr 0x21099d4 size 0xd0 virtual true final true
 void Dispose() ;

/// @brief Method HandlePlayerHeightDidChange addr 0x210999c size 0x38 virtual false final false
 void HandlePlayerHeightDidChange(float_t playerHeight) ;

/// @brief Method JumpOffsetYForPlayerHeight addr 0x2109968 size 0x34 virtual false final false
static float_t JumpOffsetYForPlayerHeight(float_t playerHeight) ;

// Ctor Parameters []
explicit PlayerHeightToJumpOffsetYProvider() ;

/// @brief Method .ctor addr 0x2109aa4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlayerHeightToJumpOffsetYProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerHeightToJumpOffsetYProvider, "", "PlayerHeightToJumpOffsetYProvider");
