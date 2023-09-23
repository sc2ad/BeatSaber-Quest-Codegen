#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct CloudStorageUpdateStatus;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class CloudStorageUpdateResponse;
}
// Type: Oculus.Platform.Models::CloudStorageUpdateResponse
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13409))
// CS Name: Oculus.Platform.Models.CloudStorageUpdateResponse
class CORDL_TYPE CloudStorageUpdateResponse : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CloudStorageUpdateResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "CloudStorageUpdateResponse", modifiers: " const&", def_value: None }]
constexpr CloudStorageUpdateResponse(CloudStorageUpdateResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CloudStorageUpdateResponse", modifiers: "&&", def_value: None }]
constexpr CloudStorageUpdateResponse(CloudStorageUpdateResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CloudStorageUpdateResponse(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CloudStorageUpdateResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CloudStorageUpdateResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CloudStorageUpdateResponse& operator=(CloudStorageUpdateResponse&& o) noexcept = default;
  constexpr CloudStorageUpdateResponse& operator=(CloudStorageUpdateResponse const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Bucket, put=__set_Bucket))  Bucket;

constexpr void __set_Bucket(::StringW value) ;

constexpr ::StringW __get_Bucket() const;

 ::StringW __declspec(property(get=__get_Key, put=__set_Key))  Key;

constexpr void __set_Key(::StringW value) ;

constexpr ::StringW __get_Key() const;

 Oculus::Platform::CloudStorageUpdateStatus __declspec(property(get=__get_Status, put=__set_Status))  Status;

constexpr void __set_Status(Oculus::Platform::CloudStorageUpdateStatus value) ;

constexpr Oculus::Platform::CloudStorageUpdateStatus __get_Status() const;

 ::StringW __declspec(property(get=__get_VersionHandle, put=__set_VersionHandle))  VersionHandle;

constexpr void __set_VersionHandle(::StringW value) ;

constexpr ::StringW __get_VersionHandle() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit CloudStorageUpdateResponse(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259e81c size 0xa8 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::CloudStorageUpdateResponse);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::CloudStorageUpdateResponse, "Oculus.Platform.Models", "CloudStorageUpdateResponse");
