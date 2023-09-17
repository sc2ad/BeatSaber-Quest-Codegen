#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageConflictMetadata_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class CloudStorageConflictMetadata;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithCloudStorageConflictMetadata;
}
// Type: Oculus.Platform::MessageWithCloudStorageConflictMetadata
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13405)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 4440 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13228))
// CS Name: Oculus.Platform.MessageWithCloudStorageConflictMetadata
class CORDL_TYPE MessageWithCloudStorageConflictMetadata : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::CloudStorageConflictMetadata> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithCloudStorageConflictMetadata() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithCloudStorageConflictMetadata", modifiers: " const&", def_value: None }]
constexpr MessageWithCloudStorageConflictMetadata(MessageWithCloudStorageConflictMetadata const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithCloudStorageConflictMetadata", modifiers: "&&", def_value: None }]
constexpr MessageWithCloudStorageConflictMetadata(MessageWithCloudStorageConflictMetadata&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithCloudStorageConflictMetadata(void* ptr) noexcept : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::CloudStorageConflictMetadata>(ptr) {
}


  constexpr MessageWithCloudStorageConflictMetadata& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithCloudStorageConflictMetadata& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithCloudStorageConflictMetadata& operator=(MessageWithCloudStorageConflictMetadata&& o) noexcept = default;
  constexpr MessageWithCloudStorageConflictMetadata& operator=(MessageWithCloudStorageConflictMetadata const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithCloudStorageConflictMetadata(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e3d0 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetCloudStorageConflictMetadata addr 0x2580c90 size 0x3c virtual true final false
 ::Oculus::Platform::Models::CloudStorageConflictMetadata GetCloudStorageConflictMetadata() ;

/// @brief Method GetDataFromMessage addr 0x2580ccc size 0x9c virtual true final false
 ::Oculus::Platform::Models::CloudStorageConflictMetadata GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::MessageWithCloudStorageConflictMetadata);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithCloudStorageConflictMetadata, "Oculus.Platform", "MessageWithCloudStorageConflictMetadata");
