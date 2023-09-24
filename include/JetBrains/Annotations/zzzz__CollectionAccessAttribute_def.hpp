#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace JetBrains::Annotations {
struct CollectionAccessType;
}
// Forward declare root types
namespace JetBrains::Annotations {
class CollectionAccessAttribute;
}
// Type: JetBrains.Annotations::CollectionAccessAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15725))
// CS Name: JetBrains.Annotations.CollectionAccessAttribute
class CORDL_TYPE CollectionAccessAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CollectionAccessAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionAccessAttribute", modifiers: " const&", def_value: None }]
constexpr CollectionAccessAttribute(CollectionAccessAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionAccessAttribute", modifiers: "&&", def_value: None }]
constexpr CollectionAccessAttribute(CollectionAccessAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CollectionAccessAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr CollectionAccessAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CollectionAccessAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CollectionAccessAttribute& operator=(CollectionAccessAttribute&& o) noexcept = default;
  constexpr CollectionAccessAttribute& operator=(CollectionAccessAttribute const& o) noexcept = default;
                


// Fields

 JetBrains::Annotations::CollectionAccessType __declspec(property(get=__get__CollectionAccessType_k__BackingField, put=__set__CollectionAccessType_k__BackingField))  _CollectionAccessType_k__BackingField;

constexpr void __set__CollectionAccessType_k__BackingField(JetBrains::Annotations::CollectionAccessType value) ;

constexpr JetBrains::Annotations::CollectionAccessType __get__CollectionAccessType_k__BackingField() const;


// Properties

 JetBrains::Annotations::CollectionAccessType __declspec(property(get=get_CollectionAccessType, put=set_CollectionAccessType))  CollectionAccessType;


// Methods

static JetBrains::Annotations::CollectionAccessAttribute New_ctor(JetBrains::Annotations::CollectionAccessType collectionAccessType) ;

/// @brief Method .ctor addr 0x2d411e8 size 0x28 virtual false final false
 void _ctor(JetBrains::Annotations::CollectionAccessType collectionAccessType) ;

/// @brief Method get_CollectionAccessType addr 0x2d41210 size 0x8 virtual false final false
 JetBrains::Annotations::CollectionAccessType get_CollectionAccessType() ;

/// @brief Method set_CollectionAccessType addr 0x2d41218 size 0x8 virtual false final false
 void set_CollectionAccessType(JetBrains::Annotations::CollectionAccessType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::CollectionAccessAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::CollectionAccessAttribute, "JetBrains.Annotations", "CollectionAccessAttribute");
