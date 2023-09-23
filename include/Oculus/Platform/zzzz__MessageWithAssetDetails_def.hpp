#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetails_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class AssetDetails;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAssetDetails;
}
// Type: Oculus.Platform::MessageWithAssetDetails
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 1130 }), TypeDefinitionIndex(TypeDefinitionIndex(13388)), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13214))
// CS Name: Oculus.Platform.MessageWithAssetDetails
class CORDL_TYPE MessageWithAssetDetails : public Oculus::Platform::Message_1<Oculus::Platform::Models::AssetDetails> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithAssetDetails() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetDetails", modifiers: " const&", def_value: None }]
constexpr MessageWithAssetDetails(MessageWithAssetDetails const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetDetails", modifiers: "&&", def_value: None }]
constexpr MessageWithAssetDetails(MessageWithAssetDetails&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithAssetDetails(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::AssetDetails>(ptr) {
}


  constexpr MessageWithAssetDetails& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithAssetDetails& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithAssetDetails& operator=(MessageWithAssetDetails&& o) noexcept = default;
  constexpr MessageWithAssetDetails& operator=(MessageWithAssetDetails const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithAssetDetails(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257df58 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetAssetDetails addr 0x2580068 size 0x3c virtual true final false
 Oculus::Platform::Models::AssetDetails GetAssetDetails() ;

/// @brief Method GetDataFromMessage addr 0x25800a4 size 0x9c virtual true final false
 Oculus::Platform::Models::AssetDetails GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithAssetDetails);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithAssetDetails, "Oculus.Platform", "MessageWithAssetDetails");
