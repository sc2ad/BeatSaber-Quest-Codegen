#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Oculus::Platform::Models {
class AssetDetails;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadResult;
}
// Forward declare root types
namespace Oculus::Platform {
class LanguagePack;
}
// Type: Oculus.Platform::LanguagePack
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13331))
// CS Name: Oculus.Platform.LanguagePack
class CORDL_TYPE LanguagePack : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LanguagePack() = default;

// Ctor Parameters [CppParam { name: "", ty: "LanguagePack", modifiers: " const&", def_value: None }]
constexpr LanguagePack(LanguagePack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LanguagePack", modifiers: "&&", def_value: None }]
constexpr LanguagePack(LanguagePack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LanguagePack(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LanguagePack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LanguagePack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LanguagePack& operator=(LanguagePack&& o) noexcept = default;
  constexpr LanguagePack& operator=(LanguagePack const& o) noexcept = default;
                


// Methods

/// @brief Method GetCurrent addr 0x2595fe8 size 0x15c virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetDetails> GetCurrent() ;

/// @brief Method SetCurrent addr 0x2596144 size 0x164 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetFileDownloadResult> SetCurrent(::StringW tag) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::LanguagePack);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::LanguagePack, "Oculus.Platform", "LanguagePack");
