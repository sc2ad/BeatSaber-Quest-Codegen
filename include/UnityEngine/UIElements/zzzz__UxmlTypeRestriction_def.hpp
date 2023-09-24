#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlTypeRestriction;
}
// Type: UnityEngine.UIElements::UxmlTypeRestriction
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7069))
// CS Name: UnityEngine.UIElements.UxmlTypeRestriction
class CORDL_TYPE UxmlTypeRestriction : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::UxmlTypeRestriction>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::UxmlTypeRestriction>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UxmlTypeRestriction() = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlTypeRestriction", modifiers: " const&", def_value: None }]
constexpr UxmlTypeRestriction(UxmlTypeRestriction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlTypeRestriction", modifiers: "&&", def_value: None }]
constexpr UxmlTypeRestriction(UxmlTypeRestriction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UxmlTypeRestriction(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UxmlTypeRestriction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UxmlTypeRestriction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UxmlTypeRestriction& operator=(UxmlTypeRestriction&& o) noexcept = default;
  constexpr UxmlTypeRestriction& operator=(UxmlTypeRestriction const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x2c964b8 size 0xc virtual true final false
 bool Equals(UnityEngine::UIElements::UxmlTypeRestriction other) ;

static UnityEngine::UIElements::UxmlTypeRestriction New_ctor() ;

/// @brief Method .ctor addr 0x2c964c4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::UxmlTypeRestriction);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UxmlTypeRestriction, "UnityEngine.UIElements", "UxmlTypeRestriction");
