#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__PidList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class PidList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPidList;
}
// Type: Oculus.Platform::MessageWithPidList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13460)), TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4468 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13267))
// CS Name: Oculus.Platform.MessageWithPidList
class CORDL_TYPE MessageWithPidList : public Oculus::Platform::Message_1<Oculus::Platform::Models::PidList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithPidList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPidList", modifiers: " const&", def_value: None }]
constexpr MessageWithPidList(MessageWithPidList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPidList", modifiers: "&&", def_value: None }]
constexpr MessageWithPidList(MessageWithPidList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithPidList(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::PidList>(ptr) {
}


  constexpr MessageWithPidList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithPidList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithPidList& operator=(MessageWithPidList&& o) noexcept = default;
  constexpr MessageWithPidList& operator=(MessageWithPidList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithPidList(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257ee20 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetPidList addr 0x25830c0 size 0x3c virtual true final false
 Oculus::Platform::Models::PidList GetPidList() ;

/// @brief Method GetDataFromMessage addr 0x25830fc size 0x9c virtual true final false
 Oculus::Platform::Models::PidList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithPidList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithPidList, "Oculus.Platform", "MessageWithPidList");
