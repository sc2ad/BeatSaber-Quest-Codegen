#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class CommandLineArguments;
}
// Type: ::CommandLineArguments
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13733))
// CS Name: CommandLineArguments
class CORDL_TYPE CommandLineArguments : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CommandLineArguments() = default;

// Ctor Parameters [CppParam { name: "", ty: "CommandLineArguments", modifiers: " const&", def_value: None }]
constexpr CommandLineArguments(CommandLineArguments const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CommandLineArguments", modifiers: "&&", def_value: None }]
constexpr CommandLineArguments(CommandLineArguments&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CommandLineArguments(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CommandLineArguments& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CommandLineArguments& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CommandLineArguments& operator=(CommandLineArguments&& o) noexcept = default;
  constexpr CommandLineArguments& operator=(CommandLineArguments const& o) noexcept = default;
                


// Methods

/// @brief Method Contains addr 0x1f702b4 size 0x88 virtual false final false
static bool Contains(::StringW argument) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CommandLineArguments);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CommandLineArguments, "", "CommandLineArguments");
