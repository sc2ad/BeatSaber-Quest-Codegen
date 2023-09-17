#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__SdkAccountList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class SdkAccountList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithSdkAccountList;
}
// Type: Oculus.Platform::MessageWithSdkAccountList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4474 }), TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13473))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13278))
// CS Name: Oculus.Platform.MessageWithSdkAccountList
class CORDL_TYPE MessageWithSdkAccountList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::SdkAccountList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithSdkAccountList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithSdkAccountList", modifiers: " const&", def_value: None }]
constexpr MessageWithSdkAccountList(MessageWithSdkAccountList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithSdkAccountList", modifiers: "&&", def_value: None }]
constexpr MessageWithSdkAccountList(MessageWithSdkAccountList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithSdkAccountList(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::SdkAccountList>(ptr) {
}


  constexpr MessageWithSdkAccountList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithSdkAccountList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithSdkAccountList& operator=(MessageWithSdkAccountList&& o) noexcept = default;
  constexpr MessageWithSdkAccountList& operator=(MessageWithSdkAccountList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithSdkAccountList(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257f1e8 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetSdkAccountList addr 0x2583a08 size 0x3c virtual true final false
 ::Oculus::Platform::Models::SdkAccountList GetSdkAccountList() ;

/// @brief Method GetDataFromMessage addr 0x2583a44 size 0x9c virtual true final false
 ::Oculus::Platform::Models::SdkAccountList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithSdkAccountList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithSdkAccountList, "Oculus.Platform", "MessageWithSdkAccountList");
