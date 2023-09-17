#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Oculus::Platform::Models {
class DestinationList;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform {
class RichPresenceOptions;
}
namespace Oculus::Platform {
class Request;
}
// Forward declare root types
namespace Oculus::Platform {
class RichPresence;
}
// Type: Oculus.Platform::RichPresence
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13337))
// CS Name: Oculus.Platform.RichPresence
class CORDL_TYPE RichPresence : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RichPresence() = default;

// Ctor Parameters [CppParam { name: "", ty: "RichPresence", modifiers: " const&", def_value: None }]
constexpr RichPresence(RichPresence const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RichPresence", modifiers: "&&", def_value: None }]
constexpr RichPresence(RichPresence&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RichPresence(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RichPresence& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RichPresence& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RichPresence& operator=(RichPresence&& o) noexcept = default;
  constexpr RichPresence& operator=(RichPresence const& o) noexcept = default;
                


// Methods

/// @brief Method Clear addr 0x2596bdc size 0x148 virtual false final false
static ::Oculus::Platform::Request Clear() ;

/// @brief Method GetDestinations addr 0x2596d24 size 0x15c virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList> GetDestinations() ;

/// @brief Method Set addr 0x2596e80 size 0x190 virtual false final false
static ::Oculus::Platform::Request Set(::Oculus::Platform::RichPresenceOptions richPresenceOptions) ;

/// @brief Method GetNextDestinationListPage addr 0x2597068 size 0x1e0 virtual false final false
static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList> GetNextDestinationListPage(::Oculus::Platform::Models::DestinationList list) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::RichPresence);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RichPresence, "Oculus.Platform", "RichPresence");
