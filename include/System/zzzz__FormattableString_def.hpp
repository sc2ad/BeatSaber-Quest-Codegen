#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
class IFormattable;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace System {
class FormattableString;
}
// Type: System::FormattableString
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2383))
// CS Name: System.FormattableString
class CORDL_TYPE FormattableString : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IFormattable
constexpr operator  ::System::IFormattable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FormattableString() = default;

// Ctor Parameters [CppParam { name: "", ty: "FormattableString", modifiers: " const&", def_value: None }]
constexpr FormattableString(FormattableString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FormattableString", modifiers: "&&", def_value: None }]
constexpr FormattableString(FormattableString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FormattableString(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FormattableString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FormattableString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FormattableString& operator=(FormattableString&& o) noexcept = default;
  constexpr FormattableString& operator=(FormattableString const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_Format))  Format;

 int32_t __declspec(property(get=get_ArgumentCount))  ArgumentCount;


// Methods

/// @brief Method get_Format addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Format() ;

/// @brief Method GetArguments addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetArguments() ;

/// @brief Method get_ArgumentCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_ArgumentCount() ;

/// @brief Method GetArgument addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType GetArgument(int32_t index) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString(::System::IFormatProvider formatProvider) ;

/// @brief Method System.IFormattable.ToString addr 0x242944c size 0x14 virtual true final true
 ::StringW System_IFormattable_ToString(::StringW ignored, ::System::IFormatProvider formatProvider) ;

/// @brief Method ToString addr 0x2429460 size 0x68 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit FormattableString() ;

/// @brief Method .ctor addr 0x24294c8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::FormattableString);
DEFINE_IL2CPP_ARG_TYPE(::System::FormattableString, "System", "FormattableString");
