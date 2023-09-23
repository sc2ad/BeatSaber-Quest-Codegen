#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Runtime::Serialization {
class DataMemberAttribute;
}
// Type: System.Runtime.Serialization::DataMemberAttribute
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16063))
// CS Name: System.Runtime.Serialization.DataMemberAttribute
class CORDL_TYPE DataMemberAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DataMemberAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "DataMemberAttribute", modifiers: " const&", def_value: None }]
constexpr DataMemberAttribute(DataMemberAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DataMemberAttribute", modifiers: "&&", def_value: None }]
constexpr DataMemberAttribute(DataMemberAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DataMemberAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr DataMemberAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DataMemberAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DataMemberAttribute& operator=(DataMemberAttribute&& o) noexcept = default;
  constexpr DataMemberAttribute& operator=(DataMemberAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 int32_t __declspec(property(get=__get_order, put=__set_order))  order;

constexpr void __set_order(int32_t value) ;

constexpr int32_t __get_order() const;

 bool __declspec(property(get=__get_isRequired, put=__set_isRequired))  isRequired;

constexpr void __set_isRequired(bool value) ;

constexpr bool __get_isRequired() const;

 bool __declspec(property(get=__get_emitDefaultValue, put=__set_emitDefaultValue))  emitDefaultValue;

constexpr void __set_emitDefaultValue(bool value) ;

constexpr bool __get_emitDefaultValue() const;


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 int32_t __declspec(property(get=get_Order))  Order;

 bool __declspec(property(get=get_IsRequired))  IsRequired;

 bool __declspec(property(get=get_EmitDefaultValue))  EmitDefaultValue;


// Methods

/// @brief Method get_Name addr 0x26baca0 size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method get_Order addr 0x26baca8 size 0x8 virtual false final false
 int32_t get_Order() ;

/// @brief Method get_IsRequired addr 0x26bacb0 size 0x8 virtual false final false
 bool get_IsRequired() ;

/// @brief Method get_EmitDefaultValue addr 0x26bacb8 size 0x8 virtual false final false
 bool get_EmitDefaultValue() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::DataMemberAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::DataMemberAttribute, "System.Runtime.Serialization", "DataMemberAttribute");
