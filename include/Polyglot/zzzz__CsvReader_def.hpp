#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Polyglot {
struct ____Polyglot__CsvReader__ParsingMode;
}
namespace Polyglot {
class CsvReader;
}
// Type: ::ParsingMode
namespace Polyglot {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15522))
// CS Name: Polyglot.CsvReader::ParsingMode
struct CORDL_TYPE ____Polyglot__CsvReader__ParsingMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____Polyglot__CsvReader__ParsingMode(int32_t value__) noexcept;


                    constexpr ____Polyglot__CsvReader__ParsingMode(____Polyglot__CsvReader__ParsingMode const&) = default;
                    constexpr ____Polyglot__CsvReader__ParsingMode(____Polyglot__CsvReader__ParsingMode&&) = default;
                    constexpr ____Polyglot__CsvReader__ParsingMode& operator=(____Polyglot__CsvReader__ParsingMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Polyglot__CsvReader__ParsingMode& operator=(____Polyglot__CsvReader__ParsingMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Polyglot__CsvReader__ParsingMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______Polyglot__CsvReader__ParsingMode_Unwrapped : int32_t {
__None = 0,
__OutQuote = 1,
__InQuote = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______Polyglot__CsvReader__ParsingMode_Unwrapped () const noexcept {
return std::bit_cast<______Polyglot__CsvReader__ParsingMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::Polyglot::____Polyglot__CsvReader__ParsingMode const None;

/// @brief Field OutQuote offset 0
static ::Polyglot::____Polyglot__CsvReader__ParsingMode const OutQuote;

/// @brief Field InQuote offset 0
static ::Polyglot::____Polyglot__CsvReader__ParsingMode const InQuote;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Polyglot
// Type: Polyglot::CsvReader
namespace Polyglot {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15523))
// CS Name: Polyglot.CsvReader
class CORDL_TYPE CsvReader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ParsingMode = ::Polyglot::____Polyglot__CsvReader__ParsingMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CsvReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "CsvReader", modifiers: " const&", def_value: None }]
constexpr CsvReader(CsvReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CsvReader", modifiers: "&&", def_value: None }]
constexpr CsvReader(CsvReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CsvReader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CsvReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CsvReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CsvReader& operator=(CsvReader&& o) noexcept = default;
  constexpr CsvReader& operator=(CsvReader const& o) noexcept = default;
                


// Methods

/// @brief Method Parse addr 0x266f56c size 0x7e8 virtual false final false
static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>> Parse(::StringW src) ;

// Ctor Parameters []
explicit CsvReader() ;

/// @brief Method .ctor addr 0x266fd54 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Polyglot
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::____Polyglot__CsvReader__ParsingMode, "Polyglot", "CsvReader/ParsingMode");
NEED_NO_BOX(::Polyglot::CsvReader);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::CsvReader, "Polyglot", "CsvReader");
