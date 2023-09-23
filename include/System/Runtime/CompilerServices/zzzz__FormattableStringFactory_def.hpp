#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__FormattableString_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class FormattableString;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class FormattableStringFactory;
}
namespace System::Runtime::CompilerServices {
class System__Runtime__CompilerServices__FormattableStringFactory__ConcreteFormattableString;
}
// Type: ::ConcreteFormattableString
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2383))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3363))
// CS Name: System.Runtime.CompilerServices.FormattableStringFactory::ConcreteFormattableString
class CORDL_TYPE System__Runtime__CompilerServices__FormattableStringFactory__ConcreteFormattableString : public System::FormattableString {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Runtime__CompilerServices__FormattableStringFactory__ConcreteFormattableString() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__CompilerServices__FormattableStringFactory__ConcreteFormattableString", modifiers: " const&", def_value: None }]
constexpr System__Runtime__CompilerServices__FormattableStringFactory__ConcreteFormattableString(System__Runtime__CompilerServices__FormattableStringFactory__ConcreteFormattableString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__CompilerServices__FormattableStringFactory__ConcreteFormattableString", modifiers: "&&", def_value: None }]
constexpr System__Runtime__CompilerServices__FormattableStringFactory__ConcreteFormattableString(System__Runtime__CompilerServices__FormattableStringFactory__ConcreteFormattableString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__CompilerServices__FormattableStringFactory__ConcreteFormattableString(void* ptr) noexcept : System::FormattableString(ptr) {
}


  constexpr System__Runtime__CompilerServices__FormattableStringFactory__ConcreteFormattableString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Runtime__CompilerServices__FormattableStringFactory__ConcreteFormattableString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Runtime__CompilerServices__FormattableStringFactory__ConcreteFormattableString& operator=(System__Runtime__CompilerServices__FormattableStringFactory__ConcreteFormattableString&& o) noexcept = default;
  constexpr System__Runtime__CompilerServices__FormattableStringFactory__ConcreteFormattableString& operator=(System__Runtime__CompilerServices__FormattableStringFactory__ConcreteFormattableString const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__format, put=__set__format))  _format;

constexpr void __set__format(::StringW value) ;

constexpr ::StringW __get__format() const;

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__arguments, put=__set__arguments))  _arguments;

constexpr void __set__arguments(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get__arguments() const;


// Properties

 ::StringW __declspec(property(get=get_Format))  Format;

 int32_t __declspec(property(get=get_ArgumentCount))  ArgumentCount;


// Methods

// Ctor Parameters [CppParam { name: "format", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "arguments", ty: "::ArrayW<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit System__Runtime__CompilerServices__FormattableStringFactory__ConcreteFormattableString(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> arguments) ;

/// @brief Method .ctor addr 0x236e02c size 0x2c virtual false final false
 void _ctor(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> arguments) ;

/// @brief Method get_Format addr 0x236e058 size 0x8 virtual true final false
 ::StringW get_Format() ;

/// @brief Method GetArguments addr 0x236e060 size 0x8 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetArguments() ;

/// @brief Method get_ArgumentCount addr 0x236e068 size 0x1c virtual true final false
 int32_t get_ArgumentCount() ;

/// @brief Method GetArgument addr 0x236e084 size 0x30 virtual true final false
 ::bs_hook::Il2CppWrapperType GetArgument(int32_t index) ;

/// @brief Method ToString addr 0x236e0b4 size 0x14 virtual true final false
 ::StringW ToString(System::IFormatProvider formatProvider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
// Type: System.Runtime.CompilerServices::FormattableStringFactory
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3364))
// CS Name: System.Runtime.CompilerServices.FormattableStringFactory
class CORDL_TYPE FormattableStringFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ConcreteFormattableString = System::Runtime::CompilerServices::System__Runtime__CompilerServices__FormattableStringFactory__ConcreteFormattableString;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FormattableStringFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "FormattableStringFactory", modifiers: " const&", def_value: None }]
constexpr FormattableStringFactory(FormattableStringFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FormattableStringFactory", modifiers: "&&", def_value: None }]
constexpr FormattableStringFactory(FormattableStringFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FormattableStringFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FormattableStringFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FormattableStringFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FormattableStringFactory& operator=(FormattableStringFactory&& o) noexcept = default;
  constexpr FormattableStringFactory& operator=(FormattableStringFactory const& o) noexcept = default;
                


// Methods

/// @brief Method Create addr 0x236df4c size 0xe0 virtual false final false
static System::FormattableString Create(::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> arguments) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::FormattableStringFactory);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::FormattableStringFactory, "System.Runtime.CompilerServices", "FormattableStringFactory");
NEED_NO_BOX(System::Runtime::CompilerServices::System__Runtime__CompilerServices__FormattableStringFactory__ConcreteFormattableString);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::System__Runtime__CompilerServices__FormattableStringFactory__ConcreteFormattableString, "System.Runtime.CompilerServices", "FormattableStringFactory/ConcreteFormattableString");
