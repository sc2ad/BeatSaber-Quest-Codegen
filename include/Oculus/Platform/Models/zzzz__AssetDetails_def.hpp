#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Oculus::Platform::Models {
class LanguagePackInfo;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class AssetDetails;
}
// Type: Oculus.Platform.Models::AssetDetails
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13388))
// CS Name: Oculus.Platform.Models.AssetDetails
class CORDL_TYPE AssetDetails : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~AssetDetails() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetDetails", modifiers: " const&", def_value: None }]
constexpr AssetDetails(AssetDetails const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetDetails", modifiers: "&&", def_value: None }]
constexpr AssetDetails(AssetDetails&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetDetails(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AssetDetails& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetDetails& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetDetails& operator=(AssetDetails&& o) noexcept = default;
  constexpr AssetDetails& operator=(AssetDetails const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_AssetId, put=__set_AssetId))  AssetId;

constexpr void __set_AssetId(uint64_t value) ;

constexpr uint64_t __get_AssetId() const;

 ::StringW __declspec(property(get=__get_AssetType, put=__set_AssetType))  AssetType;

constexpr void __set_AssetType(::StringW value) ;

constexpr ::StringW __get_AssetType() const;

 ::StringW __declspec(property(get=__get_DownloadStatus, put=__set_DownloadStatus))  DownloadStatus;

constexpr void __set_DownloadStatus(::StringW value) ;

constexpr ::StringW __get_DownloadStatus() const;

 ::StringW __declspec(property(get=__get_Filepath, put=__set_Filepath))  Filepath;

constexpr void __set_Filepath(::StringW value) ;

constexpr ::StringW __get_Filepath() const;

 ::StringW __declspec(property(get=__get_IapStatus, put=__set_IapStatus))  IapStatus;

constexpr void __set_IapStatus(::StringW value) ;

constexpr ::StringW __get_IapStatus() const;

 Oculus::Platform::Models::LanguagePackInfo __declspec(property(get=__get_LanguageOptional, put=__set_LanguageOptional))  LanguageOptional;

constexpr void __set_LanguageOptional(Oculus::Platform::Models::LanguagePackInfo value) ;

constexpr Oculus::Platform::Models::LanguagePackInfo __get_LanguageOptional() const;

 Oculus::Platform::Models::LanguagePackInfo __declspec(property(get=__get_Language, put=__set_Language))  Language;

constexpr void __set_Language(Oculus::Platform::Models::LanguagePackInfo value) ;

constexpr Oculus::Platform::Models::LanguagePackInfo __get_Language() const;

 ::StringW __declspec(property(get=__get_Metadata, put=__set_Metadata))  Metadata;

constexpr void __set_Metadata(::StringW value) ;

constexpr ::StringW __get_Metadata() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit AssetDetails(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259c9a0 size 0x168 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::AssetDetails);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AssetDetails, "Oculus.Platform.Models", "AssetDetails");
