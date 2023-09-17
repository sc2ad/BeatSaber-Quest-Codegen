#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform::Models {
class AssetFileDownloadUpdate;
}
// Type: Oculus.Platform.Models::AssetFileDownloadUpdate
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13393))
// CS Name: Oculus.Platform.Models.AssetFileDownloadUpdate
class CORDL_TYPE AssetFileDownloadUpdate : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~AssetFileDownloadUpdate() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetFileDownloadUpdate", modifiers: " const&", def_value: None }]
constexpr AssetFileDownloadUpdate(AssetFileDownloadUpdate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetFileDownloadUpdate", modifiers: "&&", def_value: None }]
constexpr AssetFileDownloadUpdate(AssetFileDownloadUpdate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetFileDownloadUpdate(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AssetFileDownloadUpdate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetFileDownloadUpdate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetFileDownloadUpdate& operator=(AssetFileDownloadUpdate&& o) noexcept = default;
  constexpr AssetFileDownloadUpdate& operator=(AssetFileDownloadUpdate const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_AssetFileId, put=__set_AssetFileId))  AssetFileId;

constexpr void __set_AssetFileId(uint64_t value) ;

constexpr uint64_t __get_AssetFileId() const;

 uint64_t __declspec(property(get=__get_AssetId, put=__set_AssetId))  AssetId;

constexpr void __set_AssetId(uint64_t value) ;

constexpr uint64_t __get_AssetId() const;

 uint64_t __declspec(property(get=__get_BytesTotal, put=__set_BytesTotal))  BytesTotal;

constexpr void __set_BytesTotal(uint64_t value) ;

constexpr uint64_t __get_BytesTotal() const;

 int64_t __declspec(property(get=__get_BytesTransferred, put=__set_BytesTransferred))  BytesTransferred;

constexpr void __set_BytesTransferred(int64_t value) ;

constexpr int64_t __get_BytesTransferred() const;

 bool __declspec(property(get=__get_Completed, put=__set_Completed))  Completed;

constexpr void __set_Completed(bool value) ;

constexpr bool __get_Completed() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit AssetFileDownloadUpdate(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259cfbc size 0xbc virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::Models::AssetFileDownloadUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AssetFileDownloadUpdate, "Oculus.Platform.Models", "AssetFileDownloadUpdate");
