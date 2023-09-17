#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__BaseNumberConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class SingleConverter;
}
// Type: System.ComponentModel::SingleConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8258))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8306))
// CS Name: System.ComponentModel.SingleConverter
class CORDL_TYPE SingleConverter : public ::System::ComponentModel::BaseNumberConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SingleConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "SingleConverter", modifiers: " const&", def_value: None }]
constexpr SingleConverter(SingleConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SingleConverter", modifiers: "&&", def_value: None }]
constexpr SingleConverter(SingleConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SingleConverter(void* ptr) noexcept : ::System::ComponentModel::BaseNumberConverter(ptr) {
}


  constexpr SingleConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SingleConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SingleConverter& operator=(SingleConverter&& o) noexcept = default;
  constexpr SingleConverter& operator=(SingleConverter const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_AllowHex))  AllowHex;

 ::System::Type __declspec(property(get=get_TargetType))  TargetType;


// Methods

/// @brief Method get_AllowHex addr 0x2785a0c size 0x8 virtual true final false
 bool get_AllowHex() ;

/// @brief Method get_TargetType addr 0x2785a14 size 0x6c virtual true final false
 ::System::Type get_TargetType() ;

/// @brief Method FromString addr 0x2785a80 size 0xc0 virtual true final false
 ::bs_hook::Il2CppWrapperType FromString(::StringW value, int32_t radix) ;

/// @brief Method FromString addr 0x2785b40 size 0x70 virtual true final false
 ::bs_hook::Il2CppWrapperType FromString(::StringW value, ::System::Globalization::NumberFormatInfo formatInfo) ;

/// @brief Method ToString addr 0x2785bb0 size 0xb0 virtual true final false
 ::StringW ToString(::bs_hook::Il2CppWrapperType value, ::System::Globalization::NumberFormatInfo formatInfo) ;

// Ctor Parameters []
explicit SingleConverter() ;

/// @brief Method .ctor addr 0x2785c60 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::SingleConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::SingleConverter, "System.ComponentModel", "SingleConverter");
