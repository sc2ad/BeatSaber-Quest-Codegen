#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class CloudStorageData;
}
// Type: Oculus.Platform.Models::CloudStorageData
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13406))
// CS Name: Oculus.Platform.Models.CloudStorageData
class CORDL_TYPE CloudStorageData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CloudStorageData() = default;

// Ctor Parameters [CppParam { name: "", ty: "CloudStorageData", modifiers: " const&", def_value: None }]
constexpr CloudStorageData(CloudStorageData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CloudStorageData", modifiers: "&&", def_value: None }]
constexpr CloudStorageData(CloudStorageData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CloudStorageData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CloudStorageData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CloudStorageData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CloudStorageData& operator=(CloudStorageData&& o) noexcept = default;
  constexpr CloudStorageData& operator=(CloudStorageData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Bucket, put=__set_Bucket))  Bucket;

constexpr void __set_Bucket(::StringW value) ;

constexpr ::StringW __get_Bucket() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_Data, put=__set_Data))  Data;

constexpr void __set_Data(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Data() const;

 uint32_t __declspec(property(get=__get_DataSize, put=__set_DataSize))  DataSize;

constexpr void __set_DataSize(uint32_t value) ;

constexpr uint32_t __get_DataSize() const;

 ::StringW __declspec(property(get=__get_Key, put=__set_Key))  Key;

constexpr void __set_Key(::StringW value) ;

constexpr ::StringW __get_Key() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit CloudStorageData(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259e518 size 0xa8 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::CloudStorageData);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::CloudStorageData, "Oculus.Platform.Models", "CloudStorageData");
