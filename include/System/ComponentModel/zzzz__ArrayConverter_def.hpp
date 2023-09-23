#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__CollectionConverter_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Type;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System {
class Attribute;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
// Forward declare root types
namespace System::ComponentModel {
class ArrayConverter;
}
namespace System::ComponentModel {
class System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor;
}
// Type: ::ArrayPropertyDescriptor
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8329))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8253))
// CS Name: System.ComponentModel.ArrayConverter::ArrayPropertyDescriptor
class CORDL_TYPE System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor : public System::ComponentModel::System__ComponentModel__TypeConverter__SimplePropertyDescriptor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor", modifiers: " const&", def_value: None }]
constexpr System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor(System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor", modifiers: "&&", def_value: None }]
constexpr System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor(System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor(void* ptr) noexcept : System::ComponentModel::System__ComponentModel__TypeConverter__SimplePropertyDescriptor(ptr) {
}


  constexpr System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor& operator=(System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor&& o) noexcept = default;
  constexpr System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor& operator=(System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;


// Methods

// Ctor Parameters [CppParam { name: "arrayType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "elementType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
explicit System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor(System::Type arrayType, System::Type elementType, int32_t index) ;

/// @brief Method .ctor addr 0x2772b9c size 0xb8 virtual false final false
 void _ctor(System::Type arrayType, System::Type elementType, int32_t index) ;

/// @brief Method GetValue addr 0x2772d54 size 0xb4 virtual true final false
 ::bs_hook::Il2CppWrapperType GetValue(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method SetValue addr 0x2772e08 size 0x100 virtual true final false
 void SetValue(::bs_hook::Il2CppWrapperType instance, ::bs_hook::Il2CppWrapperType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: System.ComponentModel::ArrayConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8319))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8254))
// CS Name: System.ComponentModel.ArrayConverter
class CORDL_TYPE ArrayConverter : public System::ComponentModel::CollectionConverter {
public:
// Declarations
using ArrayPropertyDescriptor = System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ArrayConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayConverter", modifiers: " const&", def_value: None }]
constexpr ArrayConverter(ArrayConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArrayConverter", modifiers: "&&", def_value: None }]
constexpr ArrayConverter(ArrayConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArrayConverter(void* ptr) noexcept : System::ComponentModel::CollectionConverter(ptr) {
}


  constexpr ArrayConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArrayConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArrayConverter& operator=(ArrayConverter&& o) noexcept = default;
  constexpr ArrayConverter& operator=(ArrayConverter const& o) noexcept = default;
                


// Methods

/// @brief Method ConvertTo addr 0x27727fc size 0x1cc virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, System::Type destinationType) ;

/// @brief Method GetProperties addr 0x27729c8 size 0x1d4 virtual true final false
 System::ComponentModel::PropertyDescriptorCollection GetProperties(System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value, ::ArrayW<System::Attribute> attributes) ;

/// @brief Method GetPropertiesSupported addr 0x2772d44 size 0x8 virtual true final false
 bool GetPropertiesSupported(System::ComponentModel::ITypeDescriptorContext context) ;

// Ctor Parameters []
explicit ArrayConverter() ;

/// @brief Method .ctor addr 0x2772d4c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::ArrayConverter);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::ArrayConverter, "System.ComponentModel", "ArrayConverter");
NEED_NO_BOX(System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor, "System.ComponentModel", "ArrayConverter/ArrayPropertyDescriptor");
