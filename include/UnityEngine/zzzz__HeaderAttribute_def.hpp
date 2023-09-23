#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine {
class HeaderAttribute;
}
// Type: UnityEngine::HeaderAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10117))
// CS Name: UnityEngine.HeaderAttribute
class CORDL_TYPE HeaderAttribute : public UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HeaderAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "HeaderAttribute", modifiers: " const&", def_value: None }]
constexpr HeaderAttribute(HeaderAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HeaderAttribute", modifiers: "&&", def_value: None }]
constexpr HeaderAttribute(HeaderAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HeaderAttribute(void* ptr) noexcept : UnityEngine::PropertyAttribute(ptr) {
}


  constexpr HeaderAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HeaderAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HeaderAttribute& operator=(HeaderAttribute&& o) noexcept = default;
  constexpr HeaderAttribute& operator=(HeaderAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_header, put=__set_header))  header;

constexpr void __set_header(::StringW value) ;

constexpr ::StringW __get_header() const;


// Methods

// Ctor Parameters [CppParam { name: "header", ty: "::StringW", modifiers: "", def_value: None }]
explicit HeaderAttribute(::StringW header) ;

/// @brief Method .ctor addr 0x2b54e7c size 0x28 virtual false final false
 void _ctor(::StringW header) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::HeaderAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HeaderAttribute, "UnityEngine", "HeaderAttribute");
