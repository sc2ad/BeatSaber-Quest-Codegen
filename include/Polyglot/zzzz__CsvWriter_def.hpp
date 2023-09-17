#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Polyglot {
class CsvWriter;
}
// Type: Polyglot::CsvWriter
namespace Polyglot {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15524))
// CS Name: Polyglot.CsvWriter
class CORDL_TYPE CsvWriter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CsvWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "CsvWriter", modifiers: " const&", def_value: None }]
constexpr CsvWriter(CsvWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CsvWriter", modifiers: "&&", def_value: None }]
constexpr CsvWriter(CsvWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CsvWriter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CsvWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CsvWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CsvWriter& operator=(CsvWriter&& o) noexcept = default;
  constexpr CsvWriter& operator=(CsvWriter const& o) noexcept = default;
                


// Methods

/// @brief Method AppendRow addr 0x266fd5c size 0x3b4 virtual false final false
static void AppendRow(::StringW filePath, ::System::Collections::Generic::List_1<::StringW> row) ;

/// @brief Method AppendElement addr 0x26701c4 size 0x84 virtual false final false
static void AppendElement(::System::Text::StringBuilder buffer, ::StringW element) ;

/// @brief Method HasEscapeChars addr 0x2670110 size 0xb4 virtual false final false
static bool HasEscapeChars(::StringW element) ;

// Ctor Parameters []
explicit CsvWriter() ;

/// @brief Method .ctor addr 0x2670248 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Polyglot
} // end anonymous namespace
NEED_NO_BOX(::Polyglot::CsvWriter);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::CsvWriter, "Polyglot", "CsvWriter");
