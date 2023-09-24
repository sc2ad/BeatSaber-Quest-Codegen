#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace RootMotion {
class LargeHeader;
}
// Type: RootMotion::LargeHeader
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12437))
// CS Name: RootMotion.LargeHeader
class CORDL_TYPE LargeHeader : public UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LargeHeader() = default;

// Ctor Parameters [CppParam { name: "", ty: "LargeHeader", modifiers: " const&", def_value: None }]
constexpr LargeHeader(LargeHeader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LargeHeader", modifiers: "&&", def_value: None }]
constexpr LargeHeader(LargeHeader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LargeHeader(void* ptr) noexcept : UnityEngine::PropertyAttribute(ptr) {
}


  constexpr LargeHeader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LargeHeader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LargeHeader& operator=(LargeHeader&& o) noexcept = default;
  constexpr LargeHeader& operator=(LargeHeader const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(::StringW value) ;

constexpr ::StringW __get_color() const;


// Methods

static RootMotion::LargeHeader New_ctor(::StringW name) ;

/// @brief Method .ctor addr 0x11b3d4c size 0x68 virtual false final false
 void _ctor(::StringW name) ;

static RootMotion::LargeHeader New_ctor(::StringW name, ::StringW color) ;

/// @brief Method .ctor addr 0x11b3db4 size 0x68 virtual false final false
 void _ctor(::StringW name, ::StringW color) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
NEED_NO_BOX(RootMotion::LargeHeader);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::LargeHeader, "RootMotion", "LargeHeader");
