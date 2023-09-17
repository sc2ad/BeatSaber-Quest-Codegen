#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace UIToolkitUtilities {
class Defines;
}
// Type: UIToolkitUtilities::Defines
namespace UIToolkitUtilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15941))
// CS Name: UIToolkitUtilities.Defines
class CORDL_TYPE Defines : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Defines() = default;

// Ctor Parameters [CppParam { name: "", ty: "Defines", modifiers: " const&", def_value: None }]
constexpr Defines(Defines const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Defines", modifiers: "&&", def_value: None }]
constexpr Defines(Defines&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Defines(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Defines& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Defines& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Defines& operator=(Defines&& o) noexcept = default;
  constexpr Defines& operator=(Defines const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_basePath, put=__set_basePath))  basePath;

static void __set_basePath(::StringW value) ;

static ::StringW __get_basePath() ;

static ::StringW __declspec(property(get=__get_styleSheetDirectory, put=__set_styleSheetDirectory))  styleSheetDirectory;

static void __set_styleSheetDirectory(::StringW value) ;

static ::StringW __get_styleSheetDirectory() ;

static ::StringW __declspec(property(get=__get_globalStyleSheet, put=__set_globalStyleSheet))  globalStyleSheet;

static void __set_globalStyleSheet(::StringW value) ;

static ::StringW __get_globalStyleSheet() ;


// Methods

// Ctor Parameters []
explicit Defines() ;

/// @brief Method .ctor addr 0x287b934 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UIToolkitUtilities
} // end anonymous namespace
NEED_NO_BOX(::UIToolkitUtilities::Defines);
DEFINE_IL2CPP_ARG_TYPE(::UIToolkitUtilities::Defines, "UIToolkitUtilities", "Defines");
