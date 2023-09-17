#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncVoipAttenuationValueList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class NetSyncVoipAttenuationValueList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithNetSyncVoipAttenuationValueList;
}
// Type: Oculus.Platform::MessageWithNetSyncVoipAttenuationValueList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4464 }), TypeDefinitionIndex(TypeDefinitionIndex(13453)), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13261))
// CS Name: Oculus.Platform.MessageWithNetSyncVoipAttenuationValueList
class CORDL_TYPE MessageWithNetSyncVoipAttenuationValueList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithNetSyncVoipAttenuationValueList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncVoipAttenuationValueList", modifiers: " const&", def_value: None }]
constexpr MessageWithNetSyncVoipAttenuationValueList(MessageWithNetSyncVoipAttenuationValueList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncVoipAttenuationValueList", modifiers: "&&", def_value: None }]
constexpr MessageWithNetSyncVoipAttenuationValueList(MessageWithNetSyncVoipAttenuationValueList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithNetSyncVoipAttenuationValueList(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList>(ptr) {
}


  constexpr MessageWithNetSyncVoipAttenuationValueList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithNetSyncVoipAttenuationValueList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithNetSyncVoipAttenuationValueList& operator=(MessageWithNetSyncVoipAttenuationValueList&& o) noexcept = default;
  constexpr MessageWithNetSyncVoipAttenuationValueList& operator=(MessageWithNetSyncVoipAttenuationValueList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithNetSyncVoipAttenuationValueList(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x2582aa8 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetNetSyncVoipAttenuationValueList addr 0x2582b00 size 0x3c virtual true final false
 ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList GetNetSyncVoipAttenuationValueList() ;

/// @brief Method GetDataFromMessage addr 0x2582b3c size 0x9c virtual true final false
 ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList, "Oculus.Platform", "MessageWithNetSyncVoipAttenuationValueList");
