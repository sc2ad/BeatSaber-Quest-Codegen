#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class StandardLevelInfoSaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelLoader;
}
// Type: ::StandardLevelLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4799))
// CS Name: StandardLevelLoader
class CORDL_TYPE StandardLevelLoader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StandardLevelLoader() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelLoader", modifiers: " const&", def_value: None }]
constexpr StandardLevelLoader(StandardLevelLoader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelLoader", modifiers: "&&", def_value: None }]
constexpr StandardLevelLoader(StandardLevelLoader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandardLevelLoader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StandardLevelLoader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandardLevelLoader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandardLevelLoader& operator=(StandardLevelLoader&& o) noexcept = default;
  constexpr StandardLevelLoader& operator=(StandardLevelLoader const& o) noexcept = default;
                


// Methods

/// @brief Method LoadStandardLevelSaveData addr 0x222c8ac size 0x18 virtual false final false
static GlobalNamespace::StandardLevelInfoSaveData LoadStandardLevelSaveData(::StringW levelInfoFilenamePath) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::StandardLevelLoader);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelLoader, "", "StandardLevelLoader");
