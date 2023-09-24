#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class FixedBufferAttribute;
}
// Type: System.Runtime.CompilerServices::FixedBufferAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3362))
// CS Name: System.Runtime.CompilerServices.FixedBufferAttribute
class CORDL_TYPE FixedBufferAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~FixedBufferAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedBufferAttribute", modifiers: " const&", def_value: None }]
constexpr FixedBufferAttribute(FixedBufferAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedBufferAttribute", modifiers: "&&", def_value: None }]
constexpr FixedBufferAttribute(FixedBufferAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FixedBufferAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr FixedBufferAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FixedBufferAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FixedBufferAttribute& operator=(FixedBufferAttribute&& o) noexcept = default;
  constexpr FixedBufferAttribute& operator=(FixedBufferAttribute const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get__ElementType_k__BackingField, put=__set__ElementType_k__BackingField))  _ElementType_k__BackingField;

constexpr void __set__ElementType_k__BackingField(System::Type value) ;

constexpr System::Type __get__ElementType_k__BackingField() const;

 int32_t __declspec(property(get=__get__Length_k__BackingField, put=__set__Length_k__BackingField))  _Length_k__BackingField;

constexpr void __set__Length_k__BackingField(int32_t value) ;

constexpr int32_t __get__Length_k__BackingField() const;


// Properties

 System::Type __declspec(property(get=get_ElementType))  ElementType;

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

static System::Runtime::CompilerServices::FixedBufferAttribute New_ctor(System::Type elementType, int32_t length) ;

/// @brief Method .ctor addr 0x236df0c size 0x30 virtual false final false
 void _ctor(System::Type elementType, int32_t length) ;

/// @brief Method get_ElementType addr 0x236df3c size 0x8 virtual false final false
 System::Type get_ElementType() ;

/// @brief Method get_Length addr 0x236df44 size 0x8 virtual false final false
 int32_t get_Length() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::FixedBufferAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::FixedBufferAttribute, "System.Runtime.CompilerServices", "FixedBufferAttribute");
