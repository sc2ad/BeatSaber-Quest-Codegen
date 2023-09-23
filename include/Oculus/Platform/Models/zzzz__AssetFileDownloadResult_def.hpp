#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class AssetFileDownloadResult;
}
// Type: Oculus.Platform.Models::AssetFileDownloadResult
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13392))
// CS Name: Oculus.Platform.Models.AssetFileDownloadResult
class CORDL_TYPE AssetFileDownloadResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AssetFileDownloadResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetFileDownloadResult", modifiers: " const&", def_value: None }]
constexpr AssetFileDownloadResult(AssetFileDownloadResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetFileDownloadResult", modifiers: "&&", def_value: None }]
constexpr AssetFileDownloadResult(AssetFileDownloadResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetFileDownloadResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AssetFileDownloadResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetFileDownloadResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetFileDownloadResult& operator=(AssetFileDownloadResult&& o) noexcept = default;
  constexpr AssetFileDownloadResult& operator=(AssetFileDownloadResult const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_AssetId, put=__set_AssetId))  AssetId;

constexpr void __set_AssetId(uint64_t value) ;

constexpr uint64_t __get_AssetId() const;

 ::StringW __declspec(property(get=__get_Filepath, put=__set_Filepath))  Filepath;

constexpr void __set_Filepath(::StringW value) ;

constexpr ::StringW __get_Filepath() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit AssetFileDownloadResult(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259cf34 size 0x88 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::AssetFileDownloadResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AssetFileDownloadResult, "Oculus.Platform.Models", "AssetFileDownloadResult");
