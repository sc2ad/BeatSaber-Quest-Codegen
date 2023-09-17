#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace GlobalNamespace {
class AudioHelpers;
}
// Type: ::AudioHelpers
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13728))
// CS Name: AudioHelpers
class CORDL_TYPE AudioHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AudioHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioHelpers", modifiers: " const&", def_value: None }]
constexpr AudioHelpers(AudioHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioHelpers", modifiers: "&&", def_value: None }]
constexpr AudioHelpers(AudioHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AudioHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioHelpers& operator=(AudioHelpers&& o) noexcept = default;
  constexpr AudioHelpers& operator=(AudioHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method NormalizedVolumeToDB addr 0x1f6fc80 size 0x74 virtual false final false
static float_t NormalizedVolumeToDB(float_t normalizedVolume) ;

/// @brief Method DBToNormalizedVolume addr 0x1f6fcf4 size 0x18 virtual false final false
static float_t DBToNormalizedVolume(float_t db) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AudioHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioHelpers, "", "AudioHelpers");
