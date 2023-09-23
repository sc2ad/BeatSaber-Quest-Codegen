#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Runtime::Versioning {
class BinaryCompatibility;
}
// Type: System.Runtime.Versioning::BinaryCompatibility
namespace System::Runtime::Versioning {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3188))
// CS Name: System.Runtime.Versioning.BinaryCompatibility
class CORDL_TYPE BinaryCompatibility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BinaryCompatibility() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryCompatibility", modifiers: " const&", def_value: None }]
constexpr BinaryCompatibility(BinaryCompatibility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryCompatibility", modifiers: "&&", def_value: None }]
constexpr BinaryCompatibility(BinaryCompatibility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryCompatibility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BinaryCompatibility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryCompatibility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryCompatibility& operator=(BinaryCompatibility&& o) noexcept = default;
  constexpr BinaryCompatibility& operator=(BinaryCompatibility const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_TargetsAtLeast_Desktop_V4_5, put=__set_TargetsAtLeast_Desktop_V4_5))  TargetsAtLeast_Desktop_V4_5;

static void __set_TargetsAtLeast_Desktop_V4_5(bool value) ;

static bool __get_TargetsAtLeast_Desktop_V4_5() ;

static bool __declspec(property(get=__get_TargetsAtLeast_Desktop_V4_5_1, put=__set_TargetsAtLeast_Desktop_V4_5_1))  TargetsAtLeast_Desktop_V4_5_1;

static void __set_TargetsAtLeast_Desktop_V4_5_1(bool value) ;

static bool __get_TargetsAtLeast_Desktop_V4_5_1() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Versioning
NEED_NO_BOX(System::Runtime::Versioning::BinaryCompatibility);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Versioning::BinaryCompatibility, "System.Runtime.Versioning", "BinaryCompatibility");
