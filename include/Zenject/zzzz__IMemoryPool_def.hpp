#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
class IMemoryPool;
}
// Type: Zenject::IMemoryPool
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10969))
// CS Name: Zenject.IMemoryPool
class CORDL_TYPE IMemoryPool : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMemoryPool() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMemoryPool(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_NumTotal))  NumTotal;

 int32_t __declspec(property(get=get_NumActive))  NumActive;

 int32_t __declspec(property(get=get_NumInactive))  NumInactive;

 ::System::Type __declspec(property(get=get_ItemType))  ItemType;


// Methods

/// @brief Method get_NumTotal addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_NumTotal() ;

/// @brief Method get_NumActive addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_NumActive() ;

/// @brief Method get_NumInactive addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_NumInactive() ;

/// @brief Method get_ItemType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Type get_ItemType() ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Resize(int32_t desiredPoolSize) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
 void Clear() ;

/// @brief Method ExpandBy addr 0x0 size 0xffffffffffffffff virtual true final false
 void ExpandBy(int32_t numToAdd) ;

/// @brief Method ShrinkBy addr 0x0 size 0xffffffffffffffff virtual true final false
 void ShrinkBy(int32_t numToRemove) ;

/// @brief Method Despawn addr 0x0 size 0xffffffffffffffff virtual true final false
 void Despawn(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::IMemoryPool);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IMemoryPool, "Zenject", "IMemoryPool");
