#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace Unity::IL2CPP::CompilerServices {
class Il2CppEagerStaticClassConstructionAttribute;
}
// Type: Unity.IL2CPP.CompilerServices::Il2CppEagerStaticClassConstructionAttribute
namespace Unity::IL2CPP::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9926))
// CS Name: Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstructionAttribute
class CORDL_TYPE Il2CppEagerStaticClassConstructionAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Il2CppEagerStaticClassConstructionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "Il2CppEagerStaticClassConstructionAttribute", modifiers: " const&", def_value: None }]
constexpr Il2CppEagerStaticClassConstructionAttribute(Il2CppEagerStaticClassConstructionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Il2CppEagerStaticClassConstructionAttribute", modifiers: "&&", def_value: None }]
constexpr Il2CppEagerStaticClassConstructionAttribute(Il2CppEagerStaticClassConstructionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Il2CppEagerStaticClassConstructionAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr Il2CppEagerStaticClassConstructionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Il2CppEagerStaticClassConstructionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Il2CppEagerStaticClassConstructionAttribute& operator=(Il2CppEagerStaticClassConstructionAttribute&& o) noexcept = default;
  constexpr Il2CppEagerStaticClassConstructionAttribute& operator=(Il2CppEagerStaticClassConstructionAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit Il2CppEagerStaticClassConstructionAttribute() ;

/// @brief Method .ctor addr 0x2b2845c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::IL2CPP::CompilerServices
} // end anonymous namespace
NEED_NO_BOX(::Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::IL2CPP::CompilerServices::Il2CppEagerStaticClassConstructionAttribute, "Unity.IL2CPP.CompilerServices", "Il2CppEagerStaticClassConstructionAttribute");
