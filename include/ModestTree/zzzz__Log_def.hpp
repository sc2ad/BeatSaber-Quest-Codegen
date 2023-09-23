#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace ModestTree {
class Log;
}
// Type: ModestTree::Log
namespace ModestTree {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10556))
// CS Name: ModestTree.Log
class CORDL_TYPE Log : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Log() = default;

// Ctor Parameters [CppParam { name: "", ty: "Log", modifiers: " const&", def_value: None }]
constexpr Log(Log const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Log", modifiers: "&&", def_value: None }]
constexpr Log(Log&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Log(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Log& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Log& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Log& operator=(Log&& o) noexcept = default;
  constexpr Log& operator=(Log const& o) noexcept = default;
                


// Methods

/// @brief Method Debug addr 0x2d42cdc size 0x4 virtual false final false
static void Debug(::StringW message, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Info addr 0x2d42ce0 size 0x78 virtual false final false
static void Info(::StringW message, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Warn addr 0x2d426d4 size 0x78 virtual false final false
static void Warn(::StringW message, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Trace addr 0x2d42d58 size 0x78 virtual false final false
static void Trace(::StringW message, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method ErrorException addr 0x2d42dd0 size 0x58 virtual false final false
static void ErrorException(System::Exception e) ;

/// @brief Method ErrorException addr 0x2d42e28 size 0x70 virtual false final false
static void ErrorException(::StringW message, System::Exception e) ;

/// @brief Method Error addr 0x2d42e98 size 0x78 virtual false final false
static void Error(::StringW message, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
NEED_NO_BOX(ModestTree::Log);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Log, "ModestTree", "Log");
