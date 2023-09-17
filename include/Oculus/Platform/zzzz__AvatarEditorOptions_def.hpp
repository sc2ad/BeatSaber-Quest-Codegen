#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Oculus::Platform {
class AvatarEditorOptions;
}
// Type: Oculus.Platform::AvatarEditorOptions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13165))
// CS Name: Oculus.Platform.AvatarEditorOptions
class CORDL_TYPE AvatarEditorOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AvatarEditorOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarEditorOptions", modifiers: " const&", def_value: None }]
constexpr AvatarEditorOptions(AvatarEditorOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarEditorOptions", modifiers: "&&", def_value: None }]
constexpr AvatarEditorOptions(AvatarEditorOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarEditorOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AvatarEditorOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarEditorOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarEditorOptions& operator=(AvatarEditorOptions&& o) noexcept = default;
  constexpr AvatarEditorOptions& operator=(AvatarEditorOptions const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_Handle, put=__set_Handle))  Handle;

constexpr void __set_Handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_Handle() const;


// Methods

// Ctor Parameters []
explicit AvatarEditorOptions() ;

/// @brief Method .ctor addr 0x25537e8 size 0x64 virtual false final false
 void _ctor() ;

/// @brief Method SetSourceOverride addr 0x25538b4 size 0x68 virtual false final false
 void SetSourceOverride(::StringW value) ;

/// @brief Method op_Explicit addr 0x25539bc size 0x58 virtual false final false
static ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(::Oculus::Platform::AvatarEditorOptions options) ;

/// @brief Method Finalize addr 0x2553a14 size 0xd4 virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
NEED_NO_BOX(::Oculus::Platform::AvatarEditorOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AvatarEditorOptions, "Oculus.Platform", "AvatarEditorOptions");
