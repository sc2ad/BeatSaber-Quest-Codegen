#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::Xml {
class BinaryCompatibility;
}
// Type: System.Xml::BinaryCompatibility
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11519))
// CS Name: System.Xml.BinaryCompatibility
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
                


// Properties

static bool __declspec(property(get=get_TargetsAtLeast_Desktop_V4_5_2))  TargetsAtLeast_Desktop_V4_5_2;


// Methods

/// @brief Method get_TargetsAtLeast_Desktop_V4_5_2 addr 0x2716404 size 0x8 virtual false final false
static bool get_TargetsAtLeast_Desktop_V4_5_2() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::BinaryCompatibility);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::BinaryCompatibility, "System.Xml", "BinaryCompatibility");
