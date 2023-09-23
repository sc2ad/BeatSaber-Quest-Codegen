#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System {
class LocalDataStoreMgr;
}
namespace System {
class LocalDataStoreElement;
}
namespace System {
class LocalDataStoreSlot;
}
// Forward declare root types
namespace System {
class LocalDataStore;
}
// Type: System::LocalDataStore
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2542))
// CS Name: System.LocalDataStore
class CORDL_TYPE LocalDataStore : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LocalDataStore() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalDataStore", modifiers: " const&", def_value: None }]
constexpr LocalDataStore(LocalDataStore const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalDataStore", modifiers: "&&", def_value: None }]
constexpr LocalDataStore(LocalDataStore&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalDataStore(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LocalDataStore& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalDataStore& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalDataStore& operator=(LocalDataStore&& o) noexcept = default;
  constexpr LocalDataStore& operator=(LocalDataStore const& o) noexcept = default;
                


// Fields

 ::ArrayW<System::LocalDataStoreElement> __declspec(property(get=__get_m_DataTable, put=__set_m_DataTable))  m_DataTable;

constexpr void __set_m_DataTable(::ArrayW<System::LocalDataStoreElement> value) ;

constexpr ::ArrayW<System::LocalDataStoreElement> __get_m_DataTable() const;

 System::LocalDataStoreMgr __declspec(property(get=__get_m_Manager, put=__set_m_Manager))  m_Manager;

constexpr void __set_m_Manager(System::LocalDataStoreMgr value) ;

constexpr System::LocalDataStoreMgr __get_m_Manager() const;


// Methods

// Ctor Parameters [CppParam { name: "mgr", ty: "System::LocalDataStoreMgr", modifiers: "", def_value: None }, CppParam { name: "InitialCapacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit LocalDataStore(System::LocalDataStoreMgr mgr, int32_t InitialCapacity) ;

/// @brief Method .ctor addr 0x2469844 size 0x70 virtual false final false
 void _ctor(System::LocalDataStoreMgr mgr, int32_t InitialCapacity) ;

/// @brief Method Dispose addr 0x24697e0 size 0x1c virtual false final false
 void Dispose() ;

/// @brief Method GetData addr 0x24699b8 size 0xd8 virtual false final false
 ::bs_hook::Il2CppWrapperType GetData(System::LocalDataStoreSlot slot) ;

/// @brief Method SetData addr 0x2469b0c size 0xe4 virtual false final false
 void SetData(System::LocalDataStoreSlot slot, ::bs_hook::Il2CppWrapperType data) ;

/// @brief Method FreeData addr 0x2469e9c size 0x48 virtual false final false
 void FreeData(int32_t slot, int64_t cookie) ;

/// @brief Method PopulateElement addr 0x2469bf0 size 0x2ac virtual false final false
 System::LocalDataStoreElement PopulateElement(System::LocalDataStoreSlot slot) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::LocalDataStore);
DEFINE_IL2CPP_ARG_TYPE(System::LocalDataStore, "System", "LocalDataStore");
