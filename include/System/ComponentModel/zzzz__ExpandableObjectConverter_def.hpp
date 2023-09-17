#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System {
class Attribute;
}
// Forward declare root types
namespace System::ComponentModel {
class ExpandableObjectConverter;
}
// Type: System.ComponentModel::ExpandableObjectConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8331))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8277))
// CS Name: System.ComponentModel.ExpandableObjectConverter
class CORDL_TYPE ExpandableObjectConverter : public ::System::ComponentModel::TypeConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ExpandableObjectConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExpandableObjectConverter", modifiers: " const&", def_value: None }]
constexpr ExpandableObjectConverter(ExpandableObjectConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExpandableObjectConverter", modifiers: "&&", def_value: None }]
constexpr ExpandableObjectConverter(ExpandableObjectConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExpandableObjectConverter(void* ptr) noexcept : ::System::ComponentModel::TypeConverter(ptr) {
}


  constexpr ExpandableObjectConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExpandableObjectConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExpandableObjectConverter& operator=(ExpandableObjectConverter&& o) noexcept = default;
  constexpr ExpandableObjectConverter& operator=(ExpandableObjectConverter const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ExpandableObjectConverter() ;

/// @brief Method .ctor addr 0x277d694 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method GetProperties addr 0x277d69c size 0x68 virtual true final false
 ::System::ComponentModel::PropertyDescriptorCollection GetProperties(::System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value, ::ArrayW<::System::Attribute> attributes) ;

/// @brief Method GetPropertiesSupported addr 0x277d704 size 0x8 virtual true final false
 bool GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::ExpandableObjectConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ExpandableObjectConverter, "System.ComponentModel", "ExpandableObjectConverter");
