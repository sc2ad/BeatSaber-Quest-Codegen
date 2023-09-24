#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class AssetFileDeleteResult;
}
// Type: Oculus.Platform.Models::AssetFileDeleteResult
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13390))
// CS Name: Oculus.Platform.Models.AssetFileDeleteResult
class CORDL_TYPE AssetFileDeleteResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AssetFileDeleteResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetFileDeleteResult", modifiers: " const&", def_value: None }]
constexpr AssetFileDeleteResult(AssetFileDeleteResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetFileDeleteResult", modifiers: "&&", def_value: None }]
constexpr AssetFileDeleteResult(AssetFileDeleteResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetFileDeleteResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AssetFileDeleteResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetFileDeleteResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetFileDeleteResult& operator=(AssetFileDeleteResult&& o) noexcept = default;
  constexpr AssetFileDeleteResult& operator=(AssetFileDeleteResult const& o) noexcept = default;
                


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

static Oculus::Platform::Models::AssetFileDeleteResult New_ctor(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259cddc size 0xac virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::AssetFileDeleteResult);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AssetFileDeleteResult, "Oculus.Platform.Models", "AssetFileDeleteResult");
