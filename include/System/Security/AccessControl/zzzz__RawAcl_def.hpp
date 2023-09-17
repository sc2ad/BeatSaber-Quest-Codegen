#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/AccessControl/zzzz__GenericAcl_def.hpp"
#include <cstdint>
namespace {
namespace System::Security::AccessControl {
class GenericAce;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace System::Security::AccessControl {
class RawAcl;
}
// Type: System.Security.AccessControl::RawAcl
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3032))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3043))
// CS Name: System.Security.AccessControl.RawAcl
class CORDL_TYPE RawAcl : public ::System::Security::AccessControl::GenericAcl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RawAcl() = default;

// Ctor Parameters [CppParam { name: "", ty: "RawAcl", modifiers: " const&", def_value: None }]
constexpr RawAcl(RawAcl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RawAcl", modifiers: "&&", def_value: None }]
constexpr RawAcl(RawAcl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RawAcl(void* ptr) noexcept : ::System::Security::AccessControl::GenericAcl(ptr) {
}


  constexpr RawAcl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RawAcl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RawAcl& operator=(RawAcl&& o) noexcept = default;
  constexpr RawAcl& operator=(RawAcl const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get_revision, put=__set_revision))  revision;

constexpr void __set_revision(uint8_t value) ;

constexpr uint8_t __get_revision() const;

 ::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce> __declspec(property(get=__get_list, put=__set_list))  list;

constexpr void __set_list(::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce> value) ;

constexpr ::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce> __get_list() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 ::System::Security::AccessControl::GenericAce __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

// Ctor Parameters [CppParam { name: "revision", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit RawAcl(uint8_t revision, int32_t capacity) ;

/// @brief Method .ctor addr 0x231601c size 0xbc virtual false final false
 void _ctor(uint8_t revision, int32_t capacity) ;

/// @brief Method get_Count addr 0x2319788 size 0x48 virtual true final false
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x23197d0 size 0x58 virtual true final false
 ::System::Security::AccessControl::GenericAce get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x2319828 size 0x68 virtual true final false
 void set_Item(int32_t index, ::System::Security::AccessControl::GenericAce value) ;

/// @brief Method InsertAce addr 0x23176f8 size 0xd8 virtual false final false
 void InsertAce(int32_t index, ::System::Security::AccessControl::GenericAce ace) ;

/// @brief Method RemoveAce addr 0x2317144 size 0x58 virtual false final false
 void RemoveAce(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::AccessControl
} // end anonymous namespace
NEED_NO_BOX(::System::Security::AccessControl::RawAcl);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::RawAcl, "System.Security.AccessControl", "RawAcl");
