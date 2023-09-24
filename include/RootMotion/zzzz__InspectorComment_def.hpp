#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace RootMotion {
class InspectorComment;
}
// Type: RootMotion::InspectorComment
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12434))
// CS Name: RootMotion.InspectorComment
class CORDL_TYPE InspectorComment : public UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InspectorComment() = default;

// Ctor Parameters [CppParam { name: "", ty: "InspectorComment", modifiers: " const&", def_value: None }]
constexpr InspectorComment(InspectorComment const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InspectorComment", modifiers: "&&", def_value: None }]
constexpr InspectorComment(InspectorComment&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InspectorComment(void* ptr) noexcept : UnityEngine::PropertyAttribute(ptr) {
}


  constexpr InspectorComment& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InspectorComment& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InspectorComment& operator=(InspectorComment&& o) noexcept = default;
  constexpr InspectorComment& operator=(InspectorComment const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(::StringW value) ;

constexpr ::StringW __get_color() const;


// Methods

static RootMotion::InspectorComment New_ctor(::StringW name) ;

/// @brief Method .ctor addr 0x11b3148 size 0x68 virtual false final false
 void _ctor(::StringW name) ;

static RootMotion::InspectorComment New_ctor(::StringW name, ::StringW color) ;

/// @brief Method .ctor addr 0x11b31b0 size 0x68 virtual false final false
 void _ctor(::StringW name, ::StringW color) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
NEED_NO_BOX(RootMotion::InspectorComment);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::InspectorComment, "RootMotion", "InspectorComment");
