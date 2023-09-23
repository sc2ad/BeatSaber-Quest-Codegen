#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Globalization {
class GlobalizationMode;
}
// Type: System.Globalization::GlobalizationMode
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3680))
// CS Name: System.Globalization.GlobalizationMode
class CORDL_TYPE GlobalizationMode : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalizationMode() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalizationMode", modifiers: " const&", def_value: None }]
constexpr GlobalizationMode(GlobalizationMode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalizationMode", modifiers: "&&", def_value: None }]
constexpr GlobalizationMode(GlobalizationMode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalizationMode(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalizationMode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalizationMode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalizationMode& operator=(GlobalizationMode&& o) noexcept = default;
  constexpr GlobalizationMode& operator=(GlobalizationMode const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get__Invariant_k__BackingField, put=__set__Invariant_k__BackingField))  _Invariant_k__BackingField;

static void __set__Invariant_k__BackingField(bool value) ;

static bool __get__Invariant_k__BackingField() ;


// Properties

static bool __declspec(property(get=get_Invariant))  Invariant;


// Methods

/// @brief Method get_Invariant addr 0x23ee4ec size 0x58 virtual false final false
static bool get_Invariant() ;

/// @brief Method GetGlobalizationInvariantMode addr 0x23ee544 size 0x8 virtual false final false
static bool GetGlobalizationInvariantMode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
NEED_NO_BOX(System::Globalization::GlobalizationMode);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::GlobalizationMode, "System.Globalization", "GlobalizationMode");
