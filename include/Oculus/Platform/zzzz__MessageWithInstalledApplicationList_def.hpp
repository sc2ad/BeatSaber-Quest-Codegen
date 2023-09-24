#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__InstalledApplicationList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class InstalledApplicationList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithInstalledApplicationList;
}
// Type: Oculus.Platform::MessageWithInstalledApplicationList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13418)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4445 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13238))
// CS Name: Oculus.Platform.MessageWithInstalledApplicationList
class CORDL_TYPE MessageWithInstalledApplicationList : public Oculus::Platform::Message_1<Oculus::Platform::Models::InstalledApplicationList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithInstalledApplicationList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithInstalledApplicationList", modifiers: " const&", def_value: None }]
constexpr MessageWithInstalledApplicationList(MessageWithInstalledApplicationList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithInstalledApplicationList", modifiers: "&&", def_value: None }]
constexpr MessageWithInstalledApplicationList(MessageWithInstalledApplicationList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithInstalledApplicationList(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::InstalledApplicationList>(ptr) {
}


  constexpr MessageWithInstalledApplicationList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithInstalledApplicationList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithInstalledApplicationList& operator=(MessageWithInstalledApplicationList&& o) noexcept = default;
  constexpr MessageWithInstalledApplicationList& operator=(MessageWithInstalledApplicationList const& o) noexcept = default;
                


// Methods

static Oculus::Platform::MessageWithInstalledApplicationList New_ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x2581480 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetInstalledApplicationList addr 0x25814d8 size 0x3c virtual true final false
 Oculus::Platform::Models::InstalledApplicationList GetInstalledApplicationList() ;

/// @brief Method GetDataFromMessage addr 0x2581514 size 0x9c virtual true final false
 Oculus::Platform::Models::InstalledApplicationList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithInstalledApplicationList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithInstalledApplicationList, "Oculus.Platform", "MessageWithInstalledApplicationList");
