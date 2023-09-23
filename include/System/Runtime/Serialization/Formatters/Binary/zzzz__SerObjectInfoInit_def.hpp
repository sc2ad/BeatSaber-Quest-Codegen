#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class Hashtable;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerStack;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoInit;
}
// Type: System.Runtime.Serialization.Formatters.Binary::SerObjectInfoInit
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3279))
// CS Name: System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit
class CORDL_TYPE SerObjectInfoInit : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SerObjectInfoInit() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerObjectInfoInit", modifiers: " const&", def_value: None }]
constexpr SerObjectInfoInit(SerObjectInfoInit const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerObjectInfoInit", modifiers: "&&", def_value: None }]
constexpr SerObjectInfoInit(SerObjectInfoInit&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerObjectInfoInit(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SerObjectInfoInit& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerObjectInfoInit& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerObjectInfoInit& operator=(SerObjectInfoInit&& o) noexcept = default;
  constexpr SerObjectInfoInit& operator=(SerObjectInfoInit const& o) noexcept = default;
                


// Fields

 System::Collections::Hashtable __declspec(property(get=__get_seenBeforeTable, put=__set_seenBeforeTable))  seenBeforeTable;

constexpr void __set_seenBeforeTable(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_seenBeforeTable() const;

 int32_t __declspec(property(get=__get_objectInfoIdCount, put=__set_objectInfoIdCount))  objectInfoIdCount;

constexpr void __set_objectInfoIdCount(int32_t value) ;

constexpr int32_t __get_objectInfoIdCount() const;

 System::Runtime::Serialization::Formatters::Binary::SerStack __declspec(property(get=__get_oiPool, put=__set_oiPool))  oiPool;

constexpr void __set_oiPool(System::Runtime::Serialization::Formatters::Binary::SerStack value) ;

constexpr System::Runtime::Serialization::Formatters::Binary::SerStack __get_oiPool() const;


// Methods

// Ctor Parameters []
explicit SerObjectInfoInit() ;

/// @brief Method .ctor addr 0x235ef94 size 0xb4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit, "System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit");
