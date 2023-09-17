#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
struct AudioType;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioTypeHelper;
}
// Type: ::AudioTypeHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5978))
// CS Name: AudioTypeHelper
class CORDL_TYPE AudioTypeHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AudioTypeHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioTypeHelper", modifiers: " const&", def_value: None }]
constexpr AudioTypeHelper(AudioTypeHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioTypeHelper", modifiers: "&&", def_value: None }]
constexpr AudioTypeHelper(AudioTypeHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioTypeHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AudioTypeHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioTypeHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioTypeHelper& operator=(AudioTypeHelper&& o) noexcept = default;
  constexpr AudioTypeHelper& operator=(AudioTypeHelper const& o) noexcept = default;
                


// Methods

/// @brief Method GetAudioTypeFromPath addr 0x21a1974 size 0x9c virtual false final false
static ::UnityEngine::AudioType GetAudioTypeFromPath(::StringW path) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AudioTypeHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioTypeHelper, "", "AudioTypeHelper");
