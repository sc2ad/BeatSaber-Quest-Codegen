#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class ShapeAttribute;
}
// Type: UnityEngine.ProBuilder.Shapes::ShapeAttribute
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12176))
// CS Name: UnityEngine.ProBuilder.Shapes.ShapeAttribute
class CORDL_TYPE ShapeAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ShapeAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShapeAttribute", modifiers: " const&", def_value: None }]
constexpr ShapeAttribute(ShapeAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShapeAttribute", modifiers: "&&", def_value: None }]
constexpr ShapeAttribute(ShapeAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShapeAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ShapeAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShapeAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShapeAttribute& operator=(ShapeAttribute&& o) noexcept = default;
  constexpr ShapeAttribute& operator=(ShapeAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;


// Methods

// Ctor Parameters [CppParam { name: "n", ty: "::StringW", modifiers: "", def_value: None }]
explicit ShapeAttribute(::StringW n) ;

/// @brief Method .ctor addr 0x29f82c4 size 0x28 virtual false final false
 void _ctor(::StringW n) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(UnityEngine::ProBuilder::Shapes::ShapeAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Shapes::ShapeAttribute, "UnityEngine.ProBuilder.Shapes", "ShapeAttribute");
