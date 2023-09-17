#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class UIElementsPackageUtility;
}
// Type: UnityEngine.UIElements::UIElementsPackageUtility
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6867))
// CS Name: UnityEngine.UIElements.UIElementsPackageUtility
class CORDL_TYPE UIElementsPackageUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UIElementsPackageUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIElementsPackageUtility", modifiers: " const&", def_value: None }]
constexpr UIElementsPackageUtility(UIElementsPackageUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIElementsPackageUtility", modifiers: "&&", def_value: None }]
constexpr UIElementsPackageUtility(UIElementsPackageUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIElementsPackageUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UIElementsPackageUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIElementsPackageUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIElementsPackageUtility& operator=(UIElementsPackageUtility&& o) noexcept = default;
  constexpr UIElementsPackageUtility& operator=(UIElementsPackageUtility const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_EditorResourcesBasePath, put=__set_EditorResourcesBasePath))  EditorResourcesBasePath;

static void __set_EditorResourcesBasePath(::StringW value) ;

static ::StringW __get_EditorResourcesBasePath() ;

static bool __declspec(property(get=__get_IsUIEPackageLoaded, put=__set_IsUIEPackageLoaded))  IsUIEPackageLoaded;

static void __set_IsUIEPackageLoaded(bool value) ;

static bool __get_IsUIEPackageLoaded() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::UIElementsPackageUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIElementsPackageUtility, "UnityEngine.UIElements", "UIElementsPackageUtility");
