#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct MessageEnum;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class IOUtil;
}
// Type: System.Runtime.Serialization.Formatters.Binary::IOUtil
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3252))
// CS Name: System.Runtime.Serialization.Formatters.Binary.IOUtil
class CORDL_TYPE IOUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IOUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "IOUtil", modifiers: " const&", def_value: None }]
constexpr IOUtil(IOUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IOUtil", modifiers: "&&", def_value: None }]
constexpr IOUtil(IOUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IOUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IOUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IOUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IOUtil& operator=(IOUtil&& o) noexcept = default;
  constexpr IOUtil& operator=(IOUtil const& o) noexcept = default;
                


// Methods

/// @brief Method FlagTest addr 0x2354f18 size 0xc virtual false final false
static bool FlagTest(::System::Runtime::Serialization::Formatters::Binary::MessageEnum flag, ::System::Runtime::Serialization::Formatters::Binary::MessageEnum target) ;

/// @brief Method WriteStringWithCode addr 0x2354f24 size 0x74 virtual false final false
static void WriteStringWithCode(::StringW value, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter sout) ;

/// @brief Method WriteWithCode addr 0x2354f98 size 0x12c virtual false final false
static void WriteWithCode(::System::Type type, ::bs_hook::Il2CppWrapperType value, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter sout) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::IOUtil);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::IOUtil, "System.Runtime.Serialization.Formatters.Binary", "IOUtil");
