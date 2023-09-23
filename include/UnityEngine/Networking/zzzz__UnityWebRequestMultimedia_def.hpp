#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
struct AudioType;
}
// Forward declare root types
namespace UnityEngine::Networking {
class UnityWebRequestMultimedia;
}
// Type: UnityEngine.Networking::UnityWebRequestMultimedia
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15993))
// CS Name: UnityEngine.Networking.UnityWebRequestMultimedia
class CORDL_TYPE UnityWebRequestMultimedia : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityWebRequestMultimedia() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestMultimedia", modifiers: " const&", def_value: None }]
constexpr UnityWebRequestMultimedia(UnityWebRequestMultimedia const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestMultimedia", modifiers: "&&", def_value: None }]
constexpr UnityWebRequestMultimedia(UnityWebRequestMultimedia&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityWebRequestMultimedia(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityWebRequestMultimedia& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityWebRequestMultimedia& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityWebRequestMultimedia& operator=(UnityWebRequestMultimedia&& o) noexcept = default;
  constexpr UnityWebRequestMultimedia& operator=(UnityWebRequestMultimedia const& o) noexcept = default;
                


// Methods

/// @brief Method GetAudioClip addr 0x2d33a0c size 0xc0 virtual false final false
static UnityEngine::Networking::UnityWebRequest GetAudioClip(::StringW uri, UnityEngine::AudioType audioType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking
NEED_NO_BOX(UnityEngine::Networking::UnityWebRequestMultimedia);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UnityWebRequestMultimedia, "UnityEngine.Networking", "UnityWebRequestMultimedia");
