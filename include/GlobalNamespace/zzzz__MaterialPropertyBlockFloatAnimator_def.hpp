#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_def.hpp"
#include <cmath>
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockFloatAnimator;
}
// Type: ::MaterialPropertyBlockFloatAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14723))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14727))
// CS Name: MaterialPropertyBlockFloatAnimator
class CORDL_TYPE MaterialPropertyBlockFloatAnimator : public GlobalNamespace::MaterialPropertyBlockAnimator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MaterialPropertyBlockFloatAnimator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockFloatAnimator", modifiers: " const&", def_value: None }]
constexpr MaterialPropertyBlockFloatAnimator(MaterialPropertyBlockFloatAnimator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockFloatAnimator", modifiers: "&&", def_value: None }]
constexpr MaterialPropertyBlockFloatAnimator(MaterialPropertyBlockFloatAnimator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MaterialPropertyBlockFloatAnimator(void* ptr) noexcept : GlobalNamespace::MaterialPropertyBlockAnimator(ptr) {
}


  constexpr MaterialPropertyBlockFloatAnimator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MaterialPropertyBlockFloatAnimator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MaterialPropertyBlockFloatAnimator& operator=(MaterialPropertyBlockFloatAnimator&& o) noexcept = default;
  constexpr MaterialPropertyBlockFloatAnimator& operator=(MaterialPropertyBlockFloatAnimator const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(float_t value) ;

constexpr float_t __get__value() const;


// Methods

/// @brief Method SetProperty addr 0x1fa2600 size 0x30 virtual true final false
 void SetProperty() ;

// Ctor Parameters []
explicit MaterialPropertyBlockFloatAnimator() ;

/// @brief Method .ctor addr 0x1fa2630 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MaterialPropertyBlockFloatAnimator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyBlockFloatAnimator, "", "MaterialPropertyBlockFloatAnimator");
