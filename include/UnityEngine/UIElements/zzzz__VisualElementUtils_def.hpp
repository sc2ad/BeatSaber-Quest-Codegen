#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
class Type;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementUtils;
}
// Type: UnityEngine.UIElements::VisualElementUtils
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7004))
// CS Name: UnityEngine.UIElements.VisualElementUtils
class CORDL_TYPE VisualElementUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~VisualElementUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementUtils", modifiers: " const&", def_value: None }]
constexpr VisualElementUtils(VisualElementUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementUtils", modifiers: "&&", def_value: None }]
constexpr VisualElementUtils(VisualElementUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisualElementUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VisualElementUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisualElementUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisualElementUtils& operator=(VisualElementUtils&& o) noexcept = default;
  constexpr VisualElementUtils& operator=(VisualElementUtils const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get_s_usedNames, put=__set_s_usedNames))  s_usedNames;

static void __set_s_usedNames(System::Collections::Generic::HashSet_1<::StringW> value) ;

static System::Collections::Generic::HashSet_1<::StringW> __get_s_usedNames() ;

static System::Type __declspec(property(get=__get_s_FoldoutType, put=__set_s_FoldoutType))  s_FoldoutType;

static void __set_s_FoldoutType(System::Type value) ;

static System::Type __get_s_FoldoutType() ;


// Methods

/// @brief Method GetUniqueName addr 0x2c8af30 size 0x114 virtual false final false
static ::StringW GetUniqueName(::StringW nameBase) ;

/// @brief Method GetFoldoutDepth addr 0x2c8948c size 0xe4 virtual false final false
static int32_t GetFoldoutDepth(UnityEngine::UIElements::VisualElement element) ;

/// @brief Method GetListAndFoldoutDepth addr 0x2c8b044 size 0x114 virtual false final false
static int32_t GetListAndFoldoutDepth(UnityEngine::UIElements::VisualElement element) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::VisualElementUtils);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::VisualElementUtils, "UnityEngine.UIElements", "VisualElementUtils");
