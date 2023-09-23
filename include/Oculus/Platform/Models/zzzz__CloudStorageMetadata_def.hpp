#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct CloudStorageDataStatus;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class CloudStorageMetadata;
}
// Type: Oculus.Platform.Models::CloudStorageMetadata
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13407))
// CS Name: Oculus.Platform.Models.CloudStorageMetadata
class CORDL_TYPE CloudStorageMetadata : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~CloudStorageMetadata() = default;

// Ctor Parameters [CppParam { name: "", ty: "CloudStorageMetadata", modifiers: " const&", def_value: None }]
constexpr CloudStorageMetadata(CloudStorageMetadata const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CloudStorageMetadata", modifiers: "&&", def_value: None }]
constexpr CloudStorageMetadata(CloudStorageMetadata&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CloudStorageMetadata(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CloudStorageMetadata& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CloudStorageMetadata& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CloudStorageMetadata& operator=(CloudStorageMetadata&& o) noexcept = default;
  constexpr CloudStorageMetadata& operator=(CloudStorageMetadata const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Bucket, put=__set_Bucket))  Bucket;

constexpr void __set_Bucket(::StringW value) ;

constexpr ::StringW __get_Bucket() const;

 int64_t __declspec(property(get=__get_Counter, put=__set_Counter))  Counter;

constexpr void __set_Counter(int64_t value) ;

constexpr int64_t __get_Counter() const;

 uint32_t __declspec(property(get=__get_DataSize, put=__set_DataSize))  DataSize;

constexpr void __set_DataSize(uint32_t value) ;

constexpr uint32_t __get_DataSize() const;

 ::StringW __declspec(property(get=__get_ExtraData, put=__set_ExtraData))  ExtraData;

constexpr void __set_ExtraData(::StringW value) ;

constexpr ::StringW __get_ExtraData() const;

 ::StringW __declspec(property(get=__get_Key, put=__set_Key))  Key;

constexpr void __set_Key(::StringW value) ;

constexpr ::StringW __get_Key() const;

 uint64_t __declspec(property(get=__get_SaveTime, put=__set_SaveTime))  SaveTime;

constexpr void __set_SaveTime(uint64_t value) ;

constexpr uint64_t __get_SaveTime() const;

 Oculus::Platform::CloudStorageDataStatus __declspec(property(get=__get_Status, put=__set_Status))  Status;

constexpr void __set_Status(Oculus::Platform::CloudStorageDataStatus value) ;

constexpr Oculus::Platform::CloudStorageDataStatus __get_Status() const;

 ::StringW __declspec(property(get=__get_VersionHandle, put=__set_VersionHandle))  VersionHandle;

constexpr void __set_VersionHandle(::StringW value) ;

constexpr ::StringW __get_VersionHandle() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit CloudStorageMetadata(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259e430 size 0xe8 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::CloudStorageMetadata);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::CloudStorageMetadata, "Oculus.Platform.Models", "CloudStorageMetadata");
