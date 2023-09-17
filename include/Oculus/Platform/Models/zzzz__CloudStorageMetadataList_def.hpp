#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageMetadata_def.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform::Models {
class CloudStorageMetadataList;
}
// Type: Oculus.Platform.Models::CloudStorageMetadataList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13407)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13410), inst: 1135 }), TypeDefinitionIndex(TypeDefinitionIndex(13410))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13408))
// CS Name: Oculus.Platform.Models.CloudStorageMetadataList
class CORDL_TYPE CloudStorageMetadataList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::CloudStorageMetadata> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CloudStorageMetadataList() = default;

// Ctor Parameters [CppParam { name: "", ty: "CloudStorageMetadataList", modifiers: " const&", def_value: None }]
constexpr CloudStorageMetadataList(CloudStorageMetadataList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CloudStorageMetadataList", modifiers: "&&", def_value: None }]
constexpr CloudStorageMetadataList(CloudStorageMetadataList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CloudStorageMetadataList(void* ptr) noexcept : ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::CloudStorageMetadata>(ptr) {
}


  constexpr CloudStorageMetadataList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CloudStorageMetadataList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CloudStorageMetadataList& operator=(CloudStorageMetadataList&& o) noexcept = default;
  constexpr CloudStorageMetadataList& operator=(CloudStorageMetadataList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit CloudStorageMetadataList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x259e5c0 size 0x25c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::CloudStorageMetadataList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::CloudStorageMetadataList, "Oculus.Platform.Models", "CloudStorageMetadataList");
