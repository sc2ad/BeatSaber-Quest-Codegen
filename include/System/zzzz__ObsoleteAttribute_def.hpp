#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System {
class ObsoleteAttribute;
}
// Type: System::ObsoleteAttribute
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2453))
// CS Name: System.ObsoleteAttribute
class CORDL_TYPE ObsoleteAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ObsoleteAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObsoleteAttribute", modifiers: " const&", def_value: None }]
constexpr ObsoleteAttribute(ObsoleteAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObsoleteAttribute", modifiers: "&&", def_value: None }]
constexpr ObsoleteAttribute(ObsoleteAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObsoleteAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ObsoleteAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObsoleteAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObsoleteAttribute& operator=(ObsoleteAttribute&& o) noexcept = default;
  constexpr ObsoleteAttribute& operator=(ObsoleteAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__message, put=__set__message))  _message;

constexpr void __set__message(::StringW value) ;

constexpr ::StringW __get__message() const;

 bool __declspec(property(get=__get__error, put=__set__error))  _error;

constexpr void __set__error(bool value) ;

constexpr bool __get__error() const;


// Properties

 ::StringW __declspec(property(get=get_Message))  Message;


// Methods

static System::ObsoleteAttribute New_ctor() ;

/// @brief Method .ctor addr 0x244faa0 size 0x20 virtual false final false
 void _ctor() ;

static System::ObsoleteAttribute New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x244fac0 size 0x2c virtual false final false
 void _ctor(::StringW message) ;

static System::ObsoleteAttribute New_ctor(::StringW message, bool error) ;

/// @brief Method .ctor addr 0x244faec size 0x30 virtual false final false
 void _ctor(::StringW message, bool error) ;

/// @brief Method get_Message addr 0x244fb1c size 0x8 virtual false final false
 ::StringW get_Message() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::ObsoleteAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::ObsoleteAttribute, "System", "ObsoleteAttribute");
