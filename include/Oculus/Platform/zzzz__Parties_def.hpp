#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform {
template<typename T>
class Oculus__Platform__Message_1__Callback;
}
namespace Oculus::Platform::Models {
class PartyUpdateNotification;
}
namespace Oculus::Platform::Models {
class Party;
}
// Forward declare root types
namespace Oculus::Platform {
class Parties;
}
// Type: Oculus.Platform::Parties
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13336))
// CS Name: Oculus.Platform.Parties
class CORDL_TYPE Parties : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Parties() = default;

// Ctor Parameters [CppParam { name: "", ty: "Parties", modifiers: " const&", def_value: None }]
constexpr Parties(Parties const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Parties", modifiers: "&&", def_value: None }]
constexpr Parties(Parties&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Parties(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Parties& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Parties& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Parties& operator=(Parties&& o) noexcept = default;
  constexpr Parties& operator=(Parties const& o) noexcept = default;
                


// Methods

/// @brief Method GetCurrent addr 0x2596a0c size 0x15c virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::Party> GetCurrent() ;

/// @brief Method SetPartyUpdateNotificationCallback addr 0x2596b68 size 0x74 virtual false final false
static void SetPartyUpdateNotificationCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::PartyUpdateNotification> callback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::Parties);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Parties, "Oculus.Platform", "Parties");
