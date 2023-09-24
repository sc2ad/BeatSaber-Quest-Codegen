#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__UserReportID_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class UserReportID;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithUserReportID;
}
// Type: Oculus.Platform::MessageWithUserReportID
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4480 }), TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13488))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13289))
// CS Name: Oculus.Platform.MessageWithUserReportID
class CORDL_TYPE MessageWithUserReportID : public Oculus::Platform::Message_1<Oculus::Platform::Models::UserReportID> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithUserReportID() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithUserReportID", modifiers: " const&", def_value: None }]
constexpr MessageWithUserReportID(MessageWithUserReportID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithUserReportID", modifiers: "&&", def_value: None }]
constexpr MessageWithUserReportID(MessageWithUserReportID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithUserReportID(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::UserReportID>(ptr) {
}


  constexpr MessageWithUserReportID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithUserReportID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithUserReportID& operator=(MessageWithUserReportID&& o) noexcept = default;
  constexpr MessageWithUserReportID& operator=(MessageWithUserReportID const& o) noexcept = default;
                


// Methods

static Oculus::Platform::MessageWithUserReportID New_ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x2584308 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetUserReportID addr 0x2584360 size 0x3c virtual true final false
 Oculus::Platform::Models::UserReportID GetUserReportID() ;

/// @brief Method GetDataFromMessage addr 0x258439c size 0x9c virtual true final false
 Oculus::Platform::Models::UserReportID GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithUserReportID);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithUserReportID, "Oculus.Platform", "MessageWithUserReportID");
