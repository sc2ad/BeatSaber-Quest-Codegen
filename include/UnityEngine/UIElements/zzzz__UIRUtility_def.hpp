#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIRUtility;
}
// Type: UnityEngine.UIElements::UIRUtility
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7427))
// CS Name: UnityEngine.UIElements.UIRUtility
class CORDL_TYPE UIRUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UIRUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIRUtility", modifiers: " const&", def_value: None }]
constexpr UIRUtility(UIRUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIRUtility", modifiers: "&&", def_value: None }]
constexpr UIRUtility(UIRUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIRUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UIRUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIRUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIRUtility& operator=(UIRUtility&& o) noexcept = default;
  constexpr UIRUtility& operator=(UIRUtility const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_k_DefaultShaderName, put=__set_k_DefaultShaderName))  k_DefaultShaderName;

static void __set_k_DefaultShaderName(::StringW value) ;

static ::StringW __get_k_DefaultShaderName() ;

static ::StringW __declspec(property(get=__get_k_DefaultWorldSpaceShaderName, put=__set_k_DefaultWorldSpaceShaderName))  k_DefaultWorldSpaceShaderName;

static void __set_k_DefaultWorldSpaceShaderName(::StringW value) ;

static ::StringW __get_k_DefaultWorldSpaceShaderName() ;


// Methods

/// @brief Method ShapeWindingIsClockwise addr 0x2d01140 size 0x8c virtual false final false
static bool ShapeWindingIsClockwise(int32_t maskDepth, int32_t stencilRef) ;

/// @brief Method IsRoundRect addr 0x2d011cc size 0x204 virtual false final false
static bool IsRoundRect(::UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method IsVectorImageBackground addr 0x2d013d0 size 0x90 virtual false final false
static bool IsVectorImageBackground(::UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method IsElementSelfHidden addr 0x2d01460 size 0xc0 virtual false final false
static bool IsElementSelfHidden(::UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method Destroy addr 0x2d01520 size 0xa8 virtual false final false
static void Destroy(::UnityEngine::Object obj) ;

/// @brief Method GetPrevPow2 addr 0x2d015c8 size 0x34 virtual false final false
static int32_t GetPrevPow2(int32_t n) ;

/// @brief Method GetNextPow2 addr 0x2d015fc size 0x1c virtual false final false
static int32_t GetNextPow2(int32_t n) ;

/// @brief Method GetNextPow2Exp addr 0x2d01618 size 0x30 virtual false final false
static int32_t GetNextPow2Exp(int32_t n) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::UIRUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIRUtility, "UnityEngine.UIElements", "UIRUtility");
