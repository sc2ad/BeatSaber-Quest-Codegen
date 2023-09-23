#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace UnityEngine::Networking {
class UnityWebRequestTexture;
}
// Type: UnityEngine.Networking::UnityWebRequestTexture
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15986))
// CS Name: UnityEngine.Networking.UnityWebRequestTexture
class CORDL_TYPE UnityWebRequestTexture : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityWebRequestTexture() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestTexture", modifiers: " const&", def_value: None }]
constexpr UnityWebRequestTexture(UnityWebRequestTexture const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestTexture", modifiers: "&&", def_value: None }]
constexpr UnityWebRequestTexture(UnityWebRequestTexture&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityWebRequestTexture(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityWebRequestTexture& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityWebRequestTexture& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityWebRequestTexture& operator=(UnityWebRequestTexture&& o) noexcept = default;
  constexpr UnityWebRequestTexture& operator=(UnityWebRequestTexture const& o) noexcept = default;
                


// Methods

/// @brief Method GetTexture addr 0x2d37810 size 0x8 virtual false final false
static UnityEngine::Networking::UnityWebRequest GetTexture(::StringW uri) ;

/// @brief Method GetTexture addr 0x2d37818 size 0xc0 virtual false final false
static UnityEngine::Networking::UnityWebRequest GetTexture(::StringW uri, bool nonReadable) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking
NEED_NO_BOX(UnityEngine::Networking::UnityWebRequestTexture);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UnityWebRequestTexture, "UnityEngine.Networking", "UnityWebRequestTexture");
