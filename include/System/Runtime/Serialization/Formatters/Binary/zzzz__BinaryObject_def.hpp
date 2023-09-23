#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObject;
}
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryObject
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3257))
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryObject
class CORDL_TYPE BinaryObject : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BinaryObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryObject", modifiers: " const&", def_value: None }]
constexpr BinaryObject(BinaryObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryObject", modifiers: "&&", def_value: None }]
constexpr BinaryObject(BinaryObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryObject(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BinaryObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryObject& operator=(BinaryObject&& o) noexcept = default;
  constexpr BinaryObject& operator=(BinaryObject const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_objectId, put=__set_objectId))  objectId;

constexpr void __set_objectId(int32_t value) ;

constexpr int32_t __get_objectId() const;

 int32_t __declspec(property(get=__get_mapId, put=__set_mapId))  mapId;

constexpr void __set_mapId(int32_t value) ;

constexpr int32_t __get_mapId() const;


// Methods

// Ctor Parameters []
explicit BinaryObject() ;

/// @brief Method .ctor addr 0x2355ca8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Set addr 0x2355cb0 size 0x8 virtual false final false
 void Set(int32_t objectId, int32_t mapId) ;

/// @brief Method Write addr 0x2355cb8 size 0x70 virtual true final true
 void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter sout) ;

/// @brief Method Read addr 0x2355d28 size 0x44 virtual true final true
 void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser input) ;

/// @brief Method Dump addr 0x2355d6c size 0x4 virtual false final false
 void Dump() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::BinaryObject);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryObject, "System.Runtime.Serialization.Formatters.Binary", "BinaryObject");
