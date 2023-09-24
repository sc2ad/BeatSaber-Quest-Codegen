#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
class Focusable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
// Type: UnityEngine.UIElements::FocusChangeDirection
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6967))
// CS Name: UnityEngine.UIElements.FocusChangeDirection
class CORDL_TYPE FocusChangeDirection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~FocusChangeDirection() = default;

// Ctor Parameters [CppParam { name: "", ty: "FocusChangeDirection", modifiers: " const&", def_value: None }]
constexpr FocusChangeDirection(FocusChangeDirection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FocusChangeDirection", modifiers: "&&", def_value: None }]
constexpr FocusChangeDirection(FocusChangeDirection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FocusChangeDirection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FocusChangeDirection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FocusChangeDirection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FocusChangeDirection& operator=(FocusChangeDirection&& o) noexcept = default;
  constexpr FocusChangeDirection& operator=(FocusChangeDirection const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::FocusChangeDirection __declspec(property(get=__get__unspecified_k__BackingField, put=__set__unspecified_k__BackingField))  _unspecified_k__BackingField;

static void __set__unspecified_k__BackingField(UnityEngine::UIElements::FocusChangeDirection value) ;

static UnityEngine::UIElements::FocusChangeDirection __get__unspecified_k__BackingField() ;

static UnityEngine::UIElements::FocusChangeDirection __declspec(property(get=__get__none_k__BackingField, put=__set__none_k__BackingField))  _none_k__BackingField;

static void __set__none_k__BackingField(UnityEngine::UIElements::FocusChangeDirection value) ;

static UnityEngine::UIElements::FocusChangeDirection __get__none_k__BackingField() ;

static UnityEngine::UIElements::FocusChangeDirection __declspec(property(get=__get__lastValue_k__BackingField, put=__set__lastValue_k__BackingField))  _lastValue_k__BackingField;

static void __set__lastValue_k__BackingField(UnityEngine::UIElements::FocusChangeDirection value) ;

static UnityEngine::UIElements::FocusChangeDirection __get__lastValue_k__BackingField() ;

 int32_t __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(int32_t value) ;

constexpr int32_t __get_m_Value() const;


// Properties

static UnityEngine::UIElements::FocusChangeDirection __declspec(property(get=get_unspecified))  unspecified;

static UnityEngine::UIElements::FocusChangeDirection __declspec(property(get=get_none))  none;

static UnityEngine::UIElements::FocusChangeDirection __declspec(property(get=get_lastValue))  lastValue;


// Methods

/// @brief Method get_unspecified addr 0x2c818b4 size 0x58 virtual false final false
static UnityEngine::UIElements::FocusChangeDirection get_unspecified() ;

/// @brief Method get_none addr 0x2c8190c size 0x58 virtual false final false
static UnityEngine::UIElements::FocusChangeDirection get_none() ;

/// @brief Method get_lastValue addr 0x2c81964 size 0x58 virtual false final false
static UnityEngine::UIElements::FocusChangeDirection get_lastValue() ;

static UnityEngine::UIElements::FocusChangeDirection New_ctor(int32_t value) ;

/// @brief Method .ctor addr 0x2c819bc size 0x28 virtual false final false
 void _ctor(int32_t value) ;

/// @brief Method op_Implicit addr 0x2c819e4 size 0xc virtual false final false
static int32_t op_Implicit_int32_t(UnityEngine::UIElements::FocusChangeDirection fcd) ;

/// @brief Method System.IDisposable.Dispose addr 0x2c819f0 size 0xc virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method Dispose addr 0x2c819fc size 0x4 virtual true final false
 void Dispose() ;

/// @brief Method ApplyTo addr 0x2c81a00 size 0x28 virtual true final false
 void ApplyTo(UnityEngine::UIElements::FocusController focusController, UnityEngine::UIElements::Focusable f) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::FocusChangeDirection);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::FocusChangeDirection, "UnityEngine.UIElements", "FocusChangeDirection");
