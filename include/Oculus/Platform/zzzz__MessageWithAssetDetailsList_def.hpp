#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetailsList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class AssetDetailsList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAssetDetailsList;
}
// Type: Oculus.Platform::MessageWithAssetDetailsList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13389)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4429 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13215))
// CS Name: Oculus.Platform.MessageWithAssetDetailsList
class CORDL_TYPE MessageWithAssetDetailsList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithAssetDetailsList() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetDetailsList", modifiers: " const&", def_value: None }]
constexpr MessageWithAssetDetailsList(MessageWithAssetDetailsList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetDetailsList", modifiers: "&&", def_value: None }]
constexpr MessageWithAssetDetailsList(MessageWithAssetDetailsList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithAssetDetailsList(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList>(ptr) {
}


  constexpr MessageWithAssetDetailsList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithAssetDetailsList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithAssetDetailsList& operator=(MessageWithAssetDetailsList&& o) noexcept = default;
  constexpr MessageWithAssetDetailsList& operator=(MessageWithAssetDetailsList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithAssetDetailsList(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257dfb0 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetAssetDetailsList addr 0x2580140 size 0x3c virtual true final false
 ::Oculus::Platform::Models::AssetDetailsList GetAssetDetailsList() ;

/// @brief Method GetDataFromMessage addr 0x258017c size 0x9c virtual true final false
 ::Oculus::Platform::Models::AssetDetailsList GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithAssetDetailsList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAssetDetailsList, "Oculus.Platform", "MessageWithAssetDetailsList");
