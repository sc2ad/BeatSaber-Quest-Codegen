#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Polyglot {
class TsvReader;
}
// Type: Polyglot::TsvReader
namespace Polyglot {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15525))
// CS Name: Polyglot.TsvReader
class CORDL_TYPE TsvReader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TsvReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "TsvReader", modifiers: " const&", def_value: None }]
constexpr TsvReader(TsvReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TsvReader", modifiers: "&&", def_value: None }]
constexpr TsvReader(TsvReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TsvReader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TsvReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TsvReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TsvReader& operator=(TsvReader&& o) noexcept = default;
  constexpr TsvReader& operator=(TsvReader const& o) noexcept = default;
                


// Methods

/// @brief Method Parse addr 0x2670250 size 0x1ac virtual false final false
static System::Collections::Generic::List_1<System::Collections::Generic::List_1<::StringW>> Parse(::StringW src) ;

static Polyglot::TsvReader New_ctor() ;

/// @brief Method .ctor addr 0x26703fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Polyglot
NEED_NO_BOX(Polyglot::TsvReader);
DEFINE_IL2CPP_ARG_TYPE(Polyglot::TsvReader, "Polyglot", "TsvReader");
