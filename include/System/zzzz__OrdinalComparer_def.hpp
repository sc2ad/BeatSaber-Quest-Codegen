#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__StringComparer_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
class OrdinalComparer;
}
// Type: System::OrdinalComparer
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2473))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2475))
// CS Name: System.OrdinalComparer
class CORDL_TYPE OrdinalComparer : public ::System::StringComparer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OrdinalComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "OrdinalComparer", modifiers: " const&", def_value: None }]
constexpr OrdinalComparer(OrdinalComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OrdinalComparer", modifiers: "&&", def_value: None }]
constexpr OrdinalComparer(OrdinalComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OrdinalComparer(void* ptr) noexcept : ::System::StringComparer(ptr) {
}


  constexpr OrdinalComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OrdinalComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OrdinalComparer& operator=(OrdinalComparer&& o) noexcept = default;
  constexpr OrdinalComparer& operator=(OrdinalComparer const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__ignoreCase, put=__set__ignoreCase))  _ignoreCase;

constexpr void __set__ignoreCase(bool value) ;

constexpr bool __get__ignoreCase() const;


// Methods

// Ctor Parameters [CppParam { name: "ignoreCase", ty: "bool", modifiers: "", def_value: None }]
explicit OrdinalComparer(bool ignoreCase) ;

/// @brief Method .ctor addr 0x2457560 size 0x6c virtual false final false
 void _ctor(bool ignoreCase) ;

/// @brief Method Compare addr 0x24575cc size 0x58 virtual true final false
 int32_t Compare(::StringW x, ::StringW y) ;

/// @brief Method Equals addr 0x2457624 size 0x80 virtual true final false
 bool Equals(::StringW x, ::StringW y) ;

/// @brief Method GetHashCode addr 0x24576a4 size 0x88 virtual true final false
 int32_t GetHashCode(::StringW obj) ;

/// @brief Method Equals addr 0x245772c size 0x98 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x24577c4 size 0x64 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::OrdinalComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::OrdinalComparer, "System", "OrdinalComparer");
