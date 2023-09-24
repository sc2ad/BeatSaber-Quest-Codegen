#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::ProBuilder {
struct PivotLocation;
}
namespace System {
class Type;
}
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ShapeFactory;
}
// Type: UnityEngine.ProBuilder::ShapeFactory
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12138))
// CS Name: UnityEngine.ProBuilder.ShapeFactory
class CORDL_TYPE ShapeFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ShapeFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShapeFactory", modifiers: " const&", def_value: None }]
constexpr ShapeFactory(ShapeFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShapeFactory", modifiers: "&&", def_value: None }]
constexpr ShapeFactory(ShapeFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShapeFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ShapeFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShapeFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShapeFactory& operator=(ShapeFactory&& o) noexcept = default;
  constexpr ShapeFactory& operator=(ShapeFactory const& o) noexcept = default;
                


// Methods

/// @brief Method Instantiate addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static UnityEngine::ProBuilder::ProBuilderMesh Instantiate(UnityEngine::ProBuilder::PivotLocation pivotType) ;

/// @brief Method Instantiate addr 0x29d8e54 size 0x294 virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh Instantiate(System::Type shapeType, UnityEngine::ProBuilder::PivotLocation pivotType) ;

/// @brief Method Instantiate addr 0x29d90e8 size 0x258 virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh Instantiate(UnityEngine::ProBuilder::Shapes::Shape shape, UnityEngine::ProBuilder::PivotLocation pivotType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::ShapeFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ShapeFactory, "UnityEngine.ProBuilder", "ShapeFactory");
