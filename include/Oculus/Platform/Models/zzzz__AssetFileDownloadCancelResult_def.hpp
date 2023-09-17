#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform::Models {
class AssetFileDownloadCancelResult;
}
// Type: Oculus.Platform.Models::AssetFileDownloadCancelResult
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13391))
// CS Name: Oculus.Platform.Models.AssetFileDownloadCancelResult
class CORDL_TYPE AssetFileDownloadCancelResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AssetFileDownloadCancelResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetFileDownloadCancelResult", modifiers: " const&", def_value: None }]
constexpr AssetFileDownloadCancelResult(AssetFileDownloadCancelResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetFileDownloadCancelResult", modifiers: "&&", def_value: None }]
constexpr AssetFileDownloadCancelResult(AssetFileDownloadCancelResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetFileDownloadCancelResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AssetFileDownloadCancelResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetFileDownloadCancelResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetFileDownloadCancelResult& operator=(AssetFileDownloadCancelResult&& o) noexcept = default;
  constexpr AssetFileDownloadCancelResult& operator=(AssetFileDownloadCancelResult const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_AssetFileId, put=__set_AssetFileId))  AssetFileId;

constexpr void __set_AssetFileId(uint64_t value) ;

constexpr uint64_t __get_AssetFileId() const;

 uint64_t __declspec(property(get=__get_AssetId, put=__set_AssetId))  AssetId;

constexpr void __set_AssetId(uint64_t value) ;

constexpr uint64_t __get_AssetId() const;

 ::StringW __declspec(property(get=__get_Filepath, put=__set_Filepath))  Filepath;

constexpr void __set_Filepath(::StringW value) ;

constexpr ::StringW __get_Filepath() const;

 bool __declspec(property(get=__get_Success, put=__set_Success))  Success;

constexpr void __set_Success(bool value) ;

constexpr bool __get_Success() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit AssetFileDownloadCancelResult(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259ce88 size 0xac virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::AssetFileDownloadCancelResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AssetFileDownloadCancelResult, "Oculus.Platform.Models", "AssetFileDownloadCancelResult");
