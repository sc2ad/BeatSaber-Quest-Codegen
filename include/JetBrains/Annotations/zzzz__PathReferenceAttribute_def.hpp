#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class PathReferenceAttribute;
}
// Type: JetBrains.Annotations::PathReferenceAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15699))
// CS Name: JetBrains.Annotations.PathReferenceAttribute
class CORDL_TYPE PathReferenceAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PathReferenceAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "PathReferenceAttribute", modifiers: " const&", def_value: None }]
constexpr PathReferenceAttribute(PathReferenceAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PathReferenceAttribute", modifiers: "&&", def_value: None }]
constexpr PathReferenceAttribute(PathReferenceAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PathReferenceAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr PathReferenceAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PathReferenceAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PathReferenceAttribute& operator=(PathReferenceAttribute&& o) noexcept = default;
  constexpr PathReferenceAttribute& operator=(PathReferenceAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__BasePath_k__BackingField, put=__set__BasePath_k__BackingField))  _BasePath_k__BackingField;

constexpr void __set__BasePath_k__BackingField(::StringW value) ;

constexpr ::StringW __get__BasePath_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_BasePath, put=set_BasePath))  BasePath;


// Methods

static JetBrains::Annotations::PathReferenceAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2d40e80 size 0x8 virtual false final false
 void _ctor() ;

static JetBrains::Annotations::PathReferenceAttribute New_ctor(::StringW basePath) ;

/// @brief Method .ctor addr 0x2d40e88 size 0x28 virtual false final false
 void _ctor(::StringW basePath) ;

/// @brief Method get_BasePath addr 0x2d40eb0 size 0x8 virtual false final false
 ::StringW get_BasePath() ;

/// @brief Method set_BasePath addr 0x2d40eb8 size 0x8 virtual false final false
 void set_BasePath(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::PathReferenceAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::PathReferenceAttribute, "JetBrains.Annotations", "PathReferenceAttribute");
