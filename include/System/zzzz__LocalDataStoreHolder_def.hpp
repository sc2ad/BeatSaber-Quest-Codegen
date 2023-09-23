#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class LocalDataStore;
}
// Forward declare root types
namespace System {
class LocalDataStoreHolder;
}
// Type: System::LocalDataStoreHolder
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2540))
// CS Name: System.LocalDataStoreHolder
class CORDL_TYPE LocalDataStoreHolder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LocalDataStoreHolder() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalDataStoreHolder", modifiers: " const&", def_value: None }]
constexpr LocalDataStoreHolder(LocalDataStoreHolder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalDataStoreHolder", modifiers: "&&", def_value: None }]
constexpr LocalDataStoreHolder(LocalDataStoreHolder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalDataStoreHolder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LocalDataStoreHolder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalDataStoreHolder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalDataStoreHolder& operator=(LocalDataStoreHolder&& o) noexcept = default;
  constexpr LocalDataStoreHolder& operator=(LocalDataStoreHolder const& o) noexcept = default;
                


// Fields

 System::LocalDataStore __declspec(property(get=__get_m_Store, put=__set_m_Store))  m_Store;

constexpr void __set_m_Store(System::LocalDataStore value) ;

constexpr System::LocalDataStore __get_m_Store() const;


// Properties

 System::LocalDataStore __declspec(property(get=get_Store))  Store;


// Methods

// Ctor Parameters [CppParam { name: "store", ty: "System::LocalDataStore", modifiers: "", def_value: None }]
explicit LocalDataStoreHolder(System::LocalDataStore store) ;

/// @brief Method .ctor addr 0x246971c size 0x28 virtual false final false
 void _ctor(System::LocalDataStore store) ;

/// @brief Method Finalize addr 0x2469744 size 0x9c virtual true final false
 void Finalize() ;

/// @brief Method get_Store addr 0x24697fc size 0x8 virtual false final false
 System::LocalDataStore get_Store() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::LocalDataStoreHolder);
DEFINE_IL2CPP_ARG_TYPE(System::LocalDataStoreHolder, "System", "LocalDataStoreHolder");
