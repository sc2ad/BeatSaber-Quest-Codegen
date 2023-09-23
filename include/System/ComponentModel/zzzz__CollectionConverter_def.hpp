#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Attribute;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class CollectionConverter;
}
// Type: System.ComponentModel::CollectionConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8331))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8319))
// CS Name: System.ComponentModel.CollectionConverter
class CORDL_TYPE CollectionConverter : public System::ComponentModel::TypeConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CollectionConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionConverter", modifiers: " const&", def_value: None }]
constexpr CollectionConverter(CollectionConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CollectionConverter", modifiers: "&&", def_value: None }]
constexpr CollectionConverter(CollectionConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CollectionConverter(void* ptr) noexcept : System::ComponentModel::TypeConverter(ptr) {
}


  constexpr CollectionConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CollectionConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CollectionConverter& operator=(CollectionConverter&& o) noexcept = default;
  constexpr CollectionConverter& operator=(CollectionConverter const& o) noexcept = default;
                


// Methods

/// @brief Method ConvertTo addr 0x27871f0 size 0x178 virtual true final false
 ::bs_hook::Il2CppWrapperType ConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, System::Type destinationType) ;

/// @brief Method GetProperties addr 0x2787368 size 0x8 virtual true final false
 System::ComponentModel::PropertyDescriptorCollection GetProperties(System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value, ::ArrayW<System::Attribute> attributes) ;

/// @brief Method GetPropertiesSupported addr 0x2787370 size 0x8 virtual true final false
 bool GetPropertiesSupported(System::ComponentModel::ITypeDescriptorContext context) ;

// Ctor Parameters []
explicit CollectionConverter() ;

/// @brief Method .ctor addr 0x2787378 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::CollectionConverter);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::CollectionConverter, "System.ComponentModel", "CollectionConverter");
