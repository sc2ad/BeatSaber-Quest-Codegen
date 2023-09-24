#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Schema {
struct Position;
}
// Forward declare root types
namespace System::Xml::Schema {
class Positions;
}
// Type: System.Xml.Schema::Positions
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11540))
// CS Name: System.Xml.Schema.Positions
class CORDL_TYPE Positions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Positions() = default;

// Ctor Parameters [CppParam { name: "", ty: "Positions", modifiers: " const&", def_value: None }]
constexpr Positions(Positions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Positions", modifiers: "&&", def_value: None }]
constexpr Positions(Positions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Positions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Positions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Positions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Positions& operator=(Positions&& o) noexcept = default;
  constexpr Positions& operator=(Positions const& o) noexcept = default;
                


// Fields

 System::Collections::ArrayList __declspec(property(get=__get_positions, put=__set_positions))  positions;

constexpr void __set_positions(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get_positions() const;


// Properties

 System::Xml::Schema::Position __declspec(property(get=get_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

/// @brief Method Add addr 0x271a0b4 size 0x90 virtual false final false
 int32_t Add(int32_t symbol, ::bs_hook::Il2CppWrapperType particle) ;

/// @brief Method get_Item addr 0x271a144 size 0x90 virtual false final false
 System::Xml::Schema::Position get_Item(int32_t pos) ;

/// @brief Method get_Count addr 0x271a1d4 size 0x24 virtual false final false
 int32_t get_Count() ;

static System::Xml::Schema::Positions New_ctor() ;

/// @brief Method .ctor addr 0x271a1f8 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Positions);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Positions, "System.Xml.Schema", "Positions");
