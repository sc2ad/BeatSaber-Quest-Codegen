#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__UserCapabilityList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class UserCapabilityList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithUserCapabilityList;
}
// Type: Oculus.Platform::MessageWithUserCapabilityList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13485)), TypeDefinitionIndex(TypeDefinitionIndex(13203)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4477 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13286))
// CS Name: Oculus.Platform.MessageWithUserCapabilityList
class CORDL_TYPE MessageWithUserCapabilityList : public Oculus::Platform::Message_1<Oculus::Platform::Models::UserCapabilityList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithUserCapabilityList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithUserCapabilityList", modifiers: " const&", def_value: None }]
constexpr MessageWithUserCapabilityList(MessageWithUserCapabilityList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithUserCapabilityList", modifiers: "&&", def_value: None }]
constexpr MessageWithUserCapabilityList(MessageWithUserCapabilityList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithUserCapabilityList(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::UserCapabilityList>(ptr) {
}


  constexpr MessageWithUserCapabilityList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithUserCapabilityList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithUserCapabilityList& operator=(MessageWithUserCapabilityList&& o) noexcept = default;
  constexpr MessageWithUserCapabilityList& operator=(MessageWithUserCapabilityList const& o) noexcept = default;
                


// Methods

static Oculus::Platform::MessageWithUserCapabilityList New_ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257f4a8 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetUserCapabilityList addr 0x2584080 size 0x3c virtual true final false
 Oculus::Platform::Models::UserCapabilityList GetUserCapabilityList() ;

/// @brief Method GetDataFromMessage addr 0x25840bc size 0x9c virtual true final false
 Oculus::Platform::Models::UserCapabilityList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithUserCapabilityList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithUserCapabilityList, "Oculus.Platform", "MessageWithUserCapabilityList");
