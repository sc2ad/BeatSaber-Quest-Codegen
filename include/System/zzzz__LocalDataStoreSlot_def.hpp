#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
class LocalDataStoreMgr;
}
// Forward declare root types
namespace System {
class LocalDataStoreSlot;
}
// Type: System::LocalDataStoreSlot
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2543))
// CS Name: System.LocalDataStoreSlot
class CORDL_TYPE LocalDataStoreSlot : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~LocalDataStoreSlot() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalDataStoreSlot", modifiers: " const&", def_value: None }]
constexpr LocalDataStoreSlot(LocalDataStoreSlot const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalDataStoreSlot", modifiers: "&&", def_value: None }]
constexpr LocalDataStoreSlot(LocalDataStoreSlot&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalDataStoreSlot(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LocalDataStoreSlot& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalDataStoreSlot& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalDataStoreSlot& operator=(LocalDataStoreSlot&& o) noexcept = default;
  constexpr LocalDataStoreSlot& operator=(LocalDataStoreSlot const& o) noexcept = default;
                


// Fields

 ::System::LocalDataStoreMgr __declspec(property(get=__get_m_mgr, put=__set_m_mgr))  m_mgr;

constexpr void __set_m_mgr(::System::LocalDataStoreMgr value) ;

constexpr ::System::LocalDataStoreMgr __get_m_mgr() const;

 int32_t __declspec(property(get=__get_m_slot, put=__set_m_slot))  m_slot;

constexpr void __set_m_slot(int32_t value) ;

constexpr int32_t __get_m_slot() const;

 int64_t __declspec(property(get=__get_m_cookie, put=__set_m_cookie))  m_cookie;

constexpr void __set_m_cookie(int64_t value) ;

constexpr int64_t __get_m_cookie() const;


// Properties

 ::System::LocalDataStoreMgr __declspec(property(get=get_Manager))  Manager;

 int32_t __declspec(property(get=get_Slot))  Slot;

 int64_t __declspec(property(get=get_Cookie))  Cookie;


// Methods

// Ctor Parameters [CppParam { name: "mgr", ty: "::System::LocalDataStoreMgr", modifiers: "", def_value: None }, CppParam { name: "slot", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cookie", ty: "int64_t", modifiers: "", def_value: None }]
explicit LocalDataStoreSlot(::System::LocalDataStoreMgr mgr, int32_t slot, int64_t cookie) ;

/// @brief Method .ctor addr 0x2469f00 size 0x40 virtual false final false
 void _ctor(::System::LocalDataStoreMgr mgr, int32_t slot, int64_t cookie) ;

/// @brief Method get_Manager addr 0x2469f40 size 0x8 virtual false final false
 ::System::LocalDataStoreMgr get_Manager() ;

/// @brief Method get_Slot addr 0x2469f48 size 0x8 virtual false final false
 int32_t get_Slot() ;

/// @brief Method get_Cookie addr 0x2469f50 size 0x8 virtual false final false
 int64_t get_Cookie() ;

/// @brief Method Finalize addr 0x2469f58 size 0xac virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::LocalDataStoreSlot);
DEFINE_IL2CPP_ARG_TYPE(::System::LocalDataStoreSlot, "System", "LocalDataStoreSlot");
