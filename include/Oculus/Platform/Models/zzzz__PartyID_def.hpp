#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class PartyID;
}
// Type: Oculus.Platform.Models::PartyID
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13457))
// CS Name: Oculus.Platform.Models.PartyID
class CORDL_TYPE PartyID : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PartyID() = default;

// Ctor Parameters [CppParam { name: "", ty: "PartyID", modifiers: " const&", def_value: None }]
constexpr PartyID(PartyID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PartyID", modifiers: "&&", def_value: None }]
constexpr PartyID(PartyID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PartyID(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PartyID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PartyID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PartyID& operator=(PartyID&& o) noexcept = default;
  constexpr PartyID& operator=(PartyID const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_ID, put=__set_ID))  ID;

constexpr void __set_ID(uint64_t value) ;

constexpr uint64_t __get_ID() const;


// Methods

static Oculus::Platform::Models::PartyID New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x25a1e90 size 0x78 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::PartyID);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::PartyID, "Oculus.Platform.Models", "PartyID");
