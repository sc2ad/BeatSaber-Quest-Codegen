#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__ReferenceConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class ComponentConverter;
}
// Type: System.ComponentModel::ComponentConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8300))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8321))
// CS Name: System.ComponentModel.ComponentConverter
class CORDL_TYPE ComponentConverter : public System::ComponentModel::ReferenceConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ComponentConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "ComponentConverter", modifiers: " const&", def_value: None }]
constexpr ComponentConverter(ComponentConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ComponentConverter", modifiers: "&&", def_value: None }]
constexpr ComponentConverter(ComponentConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ComponentConverter(void* ptr) noexcept : System::ComponentModel::ReferenceConverter(ptr) {
}


  constexpr ComponentConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ComponentConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ComponentConverter& operator=(ComponentConverter&& o) noexcept = default;
  constexpr ComponentConverter& operator=(ComponentConverter const& o) noexcept = default;
                


// Methods

static System::ComponentModel::ComponentConverter New_ctor(System::Type type) ;

/// @brief Method .ctor addr 0x2787ac0 size 0x6c virtual false final false
 void _ctor(System::Type type) ;

/// @brief Method GetProperties addr 0x2787b2c size 0x64 virtual true final false
 System::ComponentModel::PropertyDescriptorCollection GetProperties(System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value, ::ArrayW<System::Attribute> attributes) ;

/// @brief Method GetPropertiesSupported addr 0x2787bf8 size 0x8 virtual true final false
 bool GetPropertiesSupported(System::ComponentModel::ITypeDescriptorContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::ComponentConverter);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::ComponentConverter, "System.ComponentModel", "ComponentConverter");
