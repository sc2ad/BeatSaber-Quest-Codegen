#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__BaseNumberConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class SByteConverter;
}
// Type: System.ComponentModel::SByteConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8258))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8304))
// CS Name: System.ComponentModel.SByteConverter
class CORDL_TYPE SByteConverter : public System::ComponentModel::BaseNumberConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SByteConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "SByteConverter", modifiers: " const&", def_value: None }]
constexpr SByteConverter(SByteConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SByteConverter", modifiers: "&&", def_value: None }]
constexpr SByteConverter(SByteConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SByteConverter(void* ptr) noexcept : System::ComponentModel::BaseNumberConverter(ptr) {
}


  constexpr SByteConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SByteConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SByteConverter& operator=(SByteConverter&& o) noexcept = default;
  constexpr SByteConverter& operator=(SByteConverter const& o) noexcept = default;
                


// Properties

 System::Type __declspec(property(get=get_TargetType))  TargetType;


// Methods

/// @brief Method get_TargetType addr 0x2785670 size 0x6c virtual true final false
 System::Type get_TargetType() ;

/// @brief Method FromString addr 0x27856dc size 0x94 virtual true final false
 ::bs_hook::Il2CppWrapperType FromString(::StringW value, int32_t radix) ;

/// @brief Method FromString addr 0x2785770 size 0x74 virtual true final false
 ::bs_hook::Il2CppWrapperType FromString(::StringW value, System::Globalization::NumberFormatInfo formatInfo) ;

/// @brief Method ToString addr 0x27857e4 size 0xb0 virtual true final false
 ::StringW ToString(::bs_hook::Il2CppWrapperType value, System::Globalization::NumberFormatInfo formatInfo) ;

// Ctor Parameters []
explicit SByteConverter() ;

/// @brief Method .ctor addr 0x2785894 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::SByteConverter);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::SByteConverter, "System.ComponentModel", "SByteConverter");
