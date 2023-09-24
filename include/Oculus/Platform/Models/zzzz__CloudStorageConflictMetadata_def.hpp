#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class CloudStorageMetadata;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class CloudStorageConflictMetadata;
}
// Type: Oculus.Platform.Models::CloudStorageConflictMetadata
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13405))
// CS Name: Oculus.Platform.Models.CloudStorageConflictMetadata
class CORDL_TYPE CloudStorageConflictMetadata : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CloudStorageConflictMetadata() = default;

// Ctor Parameters [CppParam { name: "", ty: "CloudStorageConflictMetadata", modifiers: " const&", def_value: None }]
constexpr CloudStorageConflictMetadata(CloudStorageConflictMetadata const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CloudStorageConflictMetadata", modifiers: "&&", def_value: None }]
constexpr CloudStorageConflictMetadata(CloudStorageConflictMetadata&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CloudStorageConflictMetadata(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CloudStorageConflictMetadata& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CloudStorageConflictMetadata& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CloudStorageConflictMetadata& operator=(CloudStorageConflictMetadata&& o) noexcept = default;
  constexpr CloudStorageConflictMetadata& operator=(CloudStorageConflictMetadata const& o) noexcept = default;
                


// Fields

 Oculus::Platform::Models::CloudStorageMetadata __declspec(property(get=__get_Local, put=__set_Local))  Local;

constexpr void __set_Local(Oculus::Platform::Models::CloudStorageMetadata value) ;

constexpr Oculus::Platform::Models::CloudStorageMetadata __get_Local() const;

 Oculus::Platform::Models::CloudStorageMetadata __declspec(property(get=__get_Remote, put=__set_Remote))  Remote;

constexpr void __set_Remote(Oculus::Platform::Models::CloudStorageMetadata value) ;

constexpr Oculus::Platform::Models::CloudStorageMetadata __get_Remote() const;


// Methods

static Oculus::Platform::Models::CloudStorageConflictMetadata New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259e350 size 0xe0 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::CloudStorageConflictMetadata);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::CloudStorageConflictMetadata, "Oculus.Platform.Models", "CloudStorageConflictMetadata");
