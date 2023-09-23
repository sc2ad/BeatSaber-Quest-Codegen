#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace ModestTree::Util {
class PreserveAttribute;
}
// Type: ModestTree.Util::PreserveAttribute
namespace ModestTree::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10567))
// CS Name: ModestTree.Util.PreserveAttribute
class CORDL_TYPE PreserveAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PreserveAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "PreserveAttribute", modifiers: " const&", def_value: None }]
constexpr PreserveAttribute(PreserveAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PreserveAttribute", modifiers: "&&", def_value: None }]
constexpr PreserveAttribute(PreserveAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PreserveAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr PreserveAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PreserveAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PreserveAttribute& operator=(PreserveAttribute&& o) noexcept = default;
  constexpr PreserveAttribute& operator=(PreserveAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PreserveAttribute() ;

/// @brief Method .ctor addr 0x2d45940 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree::Util
NEED_NO_BOX(ModestTree::Util::PreserveAttribute);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::PreserveAttribute, "ModestTree.Util", "PreserveAttribute");
