#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System {
class LocalDataStoreElement;
}
// Type: System::LocalDataStoreElement
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2541))
// CS Name: System.LocalDataStoreElement
class CORDL_TYPE LocalDataStoreElement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LocalDataStoreElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalDataStoreElement", modifiers: " const&", def_value: None }]
constexpr LocalDataStoreElement(LocalDataStoreElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalDataStoreElement", modifiers: "&&", def_value: None }]
constexpr LocalDataStoreElement(LocalDataStoreElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalDataStoreElement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LocalDataStoreElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalDataStoreElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalDataStoreElement& operator=(LocalDataStoreElement&& o) noexcept = default;
  constexpr LocalDataStoreElement& operator=(LocalDataStoreElement const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_value, put=__set_m_value))  m_value;

constexpr void __set_m_value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_value() const;

 int64_t __declspec(property(get=__get_m_cookie, put=__set_m_cookie))  m_cookie;

constexpr void __set_m_cookie(int64_t value) ;

constexpr int64_t __get_m_cookie() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Value, put=set_Value))  Value;

 int64_t __declspec(property(get=get_Cookie))  Cookie;


// Methods

static System::LocalDataStoreElement New_ctor(int64_t cookie) ;

/// @brief Method .ctor addr 0x2469804 size 0x28 virtual false final false
 void _ctor(int64_t cookie) ;

/// @brief Method get_Value addr 0x246982c size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Value() ;

/// @brief Method set_Value addr 0x2469834 size 0x8 virtual false final false
 void set_Value(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_Cookie addr 0x246983c size 0x8 virtual false final false
 int64_t get_Cookie() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::LocalDataStoreElement);
DEFINE_IL2CPP_ARG_TYPE(System::LocalDataStoreElement, "System", "LocalDataStoreElement");
