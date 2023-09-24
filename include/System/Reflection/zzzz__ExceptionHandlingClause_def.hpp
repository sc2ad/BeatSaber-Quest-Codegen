#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Reflection {
struct ExceptionHandlingClauseOptions;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class ExceptionHandlingClause;
}
// Type: System.Reflection::ExceptionHandlingClause
namespace System::Reflection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3507))
// CS Name: System.Reflection.ExceptionHandlingClause
class CORDL_TYPE ExceptionHandlingClause : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ExceptionHandlingClause() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionHandlingClause", modifiers: " const&", def_value: None }]
constexpr ExceptionHandlingClause(ExceptionHandlingClause const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionHandlingClause", modifiers: "&&", def_value: None }]
constexpr ExceptionHandlingClause(ExceptionHandlingClause&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExceptionHandlingClause(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ExceptionHandlingClause& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExceptionHandlingClause& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExceptionHandlingClause& operator=(ExceptionHandlingClause&& o) noexcept = default;
  constexpr ExceptionHandlingClause& operator=(ExceptionHandlingClause const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_catch_type, put=__set_catch_type))  catch_type;

constexpr void __set_catch_type(System::Type value) ;

constexpr System::Type __get_catch_type() const;

 int32_t __declspec(property(get=__get_filter_offset, put=__set_filter_offset))  filter_offset;

constexpr void __set_filter_offset(int32_t value) ;

constexpr int32_t __get_filter_offset() const;

 System::Reflection::ExceptionHandlingClauseOptions __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(System::Reflection::ExceptionHandlingClauseOptions value) ;

constexpr System::Reflection::ExceptionHandlingClauseOptions __get_flags() const;

 int32_t __declspec(property(get=__get_try_offset, put=__set_try_offset))  try_offset;

constexpr void __set_try_offset(int32_t value) ;

constexpr int32_t __get_try_offset() const;

 int32_t __declspec(property(get=__get_try_length, put=__set_try_length))  try_length;

constexpr void __set_try_length(int32_t value) ;

constexpr int32_t __get_try_length() const;

 int32_t __declspec(property(get=__get_handler_offset, put=__set_handler_offset))  handler_offset;

constexpr void __set_handler_offset(int32_t value) ;

constexpr int32_t __get_handler_offset() const;

 int32_t __declspec(property(get=__get_handler_length, put=__set_handler_length))  handler_length;

constexpr void __set_handler_length(int32_t value) ;

constexpr int32_t __get_handler_length() const;


// Methods

static System::Reflection::ExceptionHandlingClause New_ctor() ;

/// @brief Method .ctor addr 0x2384804 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method ToString addr 0x238480c size 0x2c4 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::ExceptionHandlingClause);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::ExceptionHandlingClause, "System.Reflection", "ExceptionHandlingClause");
