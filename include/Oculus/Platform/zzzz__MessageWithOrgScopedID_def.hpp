#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__OrgScopedID_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class OrgScopedID;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithOrgScopedID;
}
// Type: Oculus.Platform::MessageWithOrgScopedID
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4465 }), TypeDefinitionIndex(TypeDefinitionIndex(13455))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13262))
// CS Name: Oculus.Platform.MessageWithOrgScopedID
class CORDL_TYPE MessageWithOrgScopedID : public Oculus::Platform::Message_1<Oculus::Platform::Models::OrgScopedID> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithOrgScopedID() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithOrgScopedID", modifiers: " const&", def_value: None }]
constexpr MessageWithOrgScopedID(MessageWithOrgScopedID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithOrgScopedID", modifiers: "&&", def_value: None }]
constexpr MessageWithOrgScopedID(MessageWithOrgScopedID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithOrgScopedID(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::OrgScopedID>(ptr) {
}


  constexpr MessageWithOrgScopedID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithOrgScopedID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithOrgScopedID& operator=(MessageWithOrgScopedID&& o) noexcept = default;
  constexpr MessageWithOrgScopedID& operator=(MessageWithOrgScopedID const& o) noexcept = default;
                


// Methods

static Oculus::Platform::MessageWithOrgScopedID New_ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257ed18 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetOrgScopedID addr 0x2582bd8 size 0x3c virtual true final false
 Oculus::Platform::Models::OrgScopedID GetOrgScopedID() ;

/// @brief Method GetDataFromMessage addr 0x2582c14 size 0x9c virtual true final false
 Oculus::Platform::Models::OrgScopedID GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithOrgScopedID);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithOrgScopedID, "Oculus.Platform", "MessageWithOrgScopedID");
