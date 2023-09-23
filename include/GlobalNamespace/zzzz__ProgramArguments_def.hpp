#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ProgramArguments;
}
// Type: ::ProgramArguments
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6035))
// CS Name: ProgramArguments
class CORDL_TYPE ProgramArguments : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ProgramArguments() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProgramArguments", modifiers: " const&", def_value: None }]
constexpr ProgramArguments(ProgramArguments const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProgramArguments", modifiers: "&&", def_value: None }]
constexpr ProgramArguments(ProgramArguments&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProgramArguments(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ProgramArguments& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProgramArguments& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProgramArguments& operator=(ProgramArguments&& o) noexcept = default;
  constexpr ProgramArguments& operator=(ProgramArguments const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::IReadOnlyList_1<::StringW> __declspec(property(get=__get__arguments, put=__set__arguments))  _arguments;

constexpr void __set__arguments(System::Collections::Generic::IReadOnlyList_1<::StringW> value) ;

constexpr System::Collections::Generic::IReadOnlyList_1<::StringW> __get__arguments() const;


// Properties

 System::Collections::Generic::IReadOnlyList_1<::StringW> __declspec(property(get=get_arguments))  arguments;


// Methods

/// @brief Method get_arguments addr 0x21a8ec4 size 0x8 virtual false final false
 System::Collections::Generic::IReadOnlyList_1<::StringW> get_arguments() ;

// Ctor Parameters [CppParam { name: "arguments", ty: "System::Collections::Generic::IReadOnlyList_1<::StringW>", modifiers: "", def_value: None }]
explicit ProgramArguments(System::Collections::Generic::IReadOnlyList_1<::StringW> arguments) ;

/// @brief Method .ctor addr 0x21a8ecc size 0x28 virtual false final false
 void _ctor(System::Collections::Generic::IReadOnlyList_1<::StringW> arguments) ;

/// @brief Method Empty addr 0x21a8ef4 size 0xb4 virtual false final false
static GlobalNamespace::ProgramArguments Empty() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ProgramArguments);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ProgramArguments, "", "ProgramArguments");
