#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageMetadata_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class CloudStorageMetadata;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithCloudStorageMetadataUnderLocal;
}
// Type: Oculus.Platform::MessageWithCloudStorageMetadataUnderLocal
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 1135 }), TypeDefinitionIndex(TypeDefinitionIndex(13407)), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13230))
// CS Name: Oculus.Platform.MessageWithCloudStorageMetadataUnderLocal
class CORDL_TYPE MessageWithCloudStorageMetadataUnderLocal : public Oculus::Platform::Message_1<Oculus::Platform::Models::CloudStorageMetadata> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MessageWithCloudStorageMetadataUnderLocal() = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithCloudStorageMetadataUnderLocal", modifiers: " const&", def_value: None }]
constexpr MessageWithCloudStorageMetadataUnderLocal(MessageWithCloudStorageMetadataUnderLocal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithCloudStorageMetadataUnderLocal", modifiers: "&&", def_value: None }]
constexpr MessageWithCloudStorageMetadataUnderLocal(MessageWithCloudStorageMetadataUnderLocal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MessageWithCloudStorageMetadataUnderLocal(void* ptr) noexcept : Oculus::Platform::Message_1<Oculus::Platform::Models::CloudStorageMetadata>(ptr) {
}


  constexpr MessageWithCloudStorageMetadataUnderLocal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MessageWithCloudStorageMetadataUnderLocal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MessageWithCloudStorageMetadataUnderLocal& operator=(MessageWithCloudStorageMetadataUnderLocal&& o) noexcept = default;
  constexpr MessageWithCloudStorageMetadataUnderLocal& operator=(MessageWithCloudStorageMetadataUnderLocal const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit MessageWithCloudStorageMetadataUnderLocal(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257e480 size 0x58 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method GetCloudStorageMetadata addr 0x2580e40 size 0x3c virtual true final false
 Oculus::Platform::Models::CloudStorageMetadata GetCloudStorageMetadata() ;

/// @brief Method GetDataFromMessage addr 0x2580e7c size 0x9c virtual true final false
 Oculus::Platform::Models::CloudStorageMetadata GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithCloudStorageMetadataUnderLocal, "Oculus.Platform", "MessageWithCloudStorageMetadataUnderLocal");
