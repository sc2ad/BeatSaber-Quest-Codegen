#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class WriteObjectInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryTypeEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryAssemblyInfo;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectReader;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryConverter;
}
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryConverter
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3251))
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryConverter
class CORDL_TYPE BinaryConverter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BinaryConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryConverter", modifiers: " const&", def_value: None }]
constexpr BinaryConverter(BinaryConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryConverter", modifiers: "&&", def_value: None }]
constexpr BinaryConverter(BinaryConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryConverter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BinaryConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryConverter& operator=(BinaryConverter&& o) noexcept = default;
  constexpr BinaryConverter& operator=(BinaryConverter const& o) noexcept = default;
                


// Methods

/// @brief Method GetBinaryTypeInfo addr 0x2353cd8 size 0x2f0 virtual false final false
static System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum GetBinaryTypeInfo(System::Type type, System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo objectInfo, ::StringW typeName, System::Runtime::Serialization::Formatters::Binary::ObjectWriter objectWriter, ByRef<::bs_hook::Il2CppWrapperType> typeInformation, ByRef<int32_t> assemId) ;

/// @brief Method GetParserBinaryTypeInfo addr 0x23542a8 size 0x1d0 virtual false final false
static System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum GetParserBinaryTypeInfo(System::Type type, ByRef<::bs_hook::Il2CppWrapperType> typeInformation) ;

/// @brief Method WriteTypeInfo addr 0x235459c size 0x228 virtual false final false
static void WriteTypeInfo(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::bs_hook::Il2CppWrapperType typeInformation, int32_t assemId, System::Runtime::Serialization::Formatters::Binary::__BinaryWriter sout) ;

/// @brief Method ReadTypeInfo addr 0x235482c size 0x1a8 virtual false final false
static ::bs_hook::Il2CppWrapperType ReadTypeInfo(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, System::Runtime::Serialization::Formatters::Binary::__BinaryParser input, ByRef<int32_t> assemId) ;

/// @brief Method TypeFromInfo addr 0x23549d4 size 0x31c virtual false final false
static void TypeFromInfo(System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::bs_hook::Il2CppWrapperType typeInformation, System::Runtime::Serialization::Formatters::Binary::ObjectReader objectReader, System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo assemblyInfo, ByRef<System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE> primitiveTypeEnum, ByRef<::StringW> typeString, ByRef<System::Type> type, ByRef<bool> isVariant) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::BinaryConverter);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryConverter, "System.Runtime.Serialization.Formatters.Binary", "BinaryConverter");
