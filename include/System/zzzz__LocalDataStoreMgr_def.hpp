#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class LocalDataStoreHolder;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class LocalDataStore;
}
namespace System {
class LocalDataStoreSlot;
}
// Forward declare root types
namespace System {
class LocalDataStoreMgr;
}
// Type: System::LocalDataStoreMgr
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2544))
// CS Name: System.LocalDataStoreMgr
class CORDL_TYPE LocalDataStoreMgr : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~LocalDataStoreMgr() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalDataStoreMgr", modifiers: " const&", def_value: None }]
constexpr LocalDataStoreMgr(LocalDataStoreMgr const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalDataStoreMgr", modifiers: "&&", def_value: None }]
constexpr LocalDataStoreMgr(LocalDataStoreMgr&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalDataStoreMgr(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LocalDataStoreMgr& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalDataStoreMgr& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalDataStoreMgr& operator=(LocalDataStoreMgr&& o) noexcept = default;
  constexpr LocalDataStoreMgr& operator=(LocalDataStoreMgr const& o) noexcept = default;
                


// Fields

/// @brief Field InitialSlotTableSize offset 0
static constexpr int32_t  InitialSlotTableSize{64};

/// @brief Field SlotTableDoubleThreshold offset 0
static constexpr int32_t  SlotTableDoubleThreshold{512};

/// @brief Field LargeSlotTableSizeIncrease offset 0
static constexpr int32_t  LargeSlotTableSizeIncrease{128};

 ::ArrayW<bool> __declspec(property(get=__get_m_SlotInfoTable, put=__set_m_SlotInfoTable))  m_SlotInfoTable;

constexpr void __set_m_SlotInfoTable(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get_m_SlotInfoTable() const;

 int32_t __declspec(property(get=__get_m_FirstAvailableSlot, put=__set_m_FirstAvailableSlot))  m_FirstAvailableSlot;

constexpr void __set_m_FirstAvailableSlot(int32_t value) ;

constexpr int32_t __get_m_FirstAvailableSlot() const;

 ::System::Collections::Generic::List_1<::System::LocalDataStore> __declspec(property(get=__get_m_ManagedLocalDataStores, put=__set_m_ManagedLocalDataStores))  m_ManagedLocalDataStores;

constexpr void __set_m_ManagedLocalDataStores(::System::Collections::Generic::List_1<::System::LocalDataStore> value) ;

constexpr ::System::Collections::Generic::List_1<::System::LocalDataStore> __get_m_ManagedLocalDataStores() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,::System::LocalDataStoreSlot> __declspec(property(get=__get_m_KeyToSlotMap, put=__set_m_KeyToSlotMap))  m_KeyToSlotMap;

constexpr void __set_m_KeyToSlotMap(::System::Collections::Generic::Dictionary_2<::StringW,::System::LocalDataStoreSlot> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::LocalDataStoreSlot> __get_m_KeyToSlotMap() const;

 int64_t __declspec(property(get=__get_m_CookieGenerator, put=__set_m_CookieGenerator))  m_CookieGenerator;

constexpr void __set_m_CookieGenerator(int64_t value) ;

constexpr int64_t __get_m_CookieGenerator() const;


// Methods

/// @brief Method CreateLocalDataStore addr 0x246a19c size 0x1c0 virtual false final false
 ::System::LocalDataStoreHolder CreateLocalDataStore() ;

/// @brief Method DeleteLocalDataStore addr 0x24698b4 size 0x104 virtual false final false
 void DeleteLocalDataStore(::System::LocalDataStore store) ;

/// @brief Method AllocateDataSlot addr 0x246a35c size 0x250 virtual false final false
 ::System::LocalDataStoreSlot AllocateDataSlot() ;

/// @brief Method AllocateNamedDataSlot addr 0x246a5ac size 0x11c virtual false final false
 ::System::LocalDataStoreSlot AllocateNamedDataSlot(::StringW name) ;

/// @brief Method GetNamedDataSlot addr 0x246a6c8 size 0x11c virtual false final false
 ::System::LocalDataStoreSlot GetNamedDataSlot(::StringW name) ;

/// @brief Method FreeNamedDataSlot addr 0x246a7e4 size 0x104 virtual false final false
 void FreeNamedDataSlot(::StringW name) ;

/// @brief Method FreeDataSlot addr 0x246a004 size 0x198 virtual false final false
 void FreeDataSlot(int32_t slot, int64_t cookie) ;

/// @brief Method ValidateSlot addr 0x2469a90 size 0x7c virtual false final false
 void ValidateSlot(::System::LocalDataStoreSlot slot) ;

/// @brief Method GetSlotTableLength addr 0x2469ee4 size 0x1c virtual false final false
 int32_t GetSlotTableLength() ;

// Ctor Parameters []
explicit LocalDataStoreMgr() ;

/// @brief Method .ctor addr 0x246a8e8 size 0xec virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::LocalDataStoreMgr);
DEFINE_IL2CPP_ARG_TYPE(::System::LocalDataStoreMgr, "System", "LocalDataStoreMgr");
